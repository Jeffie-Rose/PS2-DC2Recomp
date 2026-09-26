#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharaControl__FP6CSceneP11CPadControl
// Address: 0x1a57b0 - 0x1a5fb0
void CharaControl__FP6CSceneP11CPadControl_0x1a57b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharaControl__FP6CSceneP11CPadControl_0x1a57b0");
#endif

    switch (ctx->pc) {
        case 0x1a57b0u: goto label_1a57b0;
        case 0x1a57b4u: goto label_1a57b4;
        case 0x1a57b8u: goto label_1a57b8;
        case 0x1a57bcu: goto label_1a57bc;
        case 0x1a57c0u: goto label_1a57c0;
        case 0x1a57c4u: goto label_1a57c4;
        case 0x1a57c8u: goto label_1a57c8;
        case 0x1a57ccu: goto label_1a57cc;
        case 0x1a57d0u: goto label_1a57d0;
        case 0x1a57d4u: goto label_1a57d4;
        case 0x1a57d8u: goto label_1a57d8;
        case 0x1a57dcu: goto label_1a57dc;
        case 0x1a57e0u: goto label_1a57e0;
        case 0x1a57e4u: goto label_1a57e4;
        case 0x1a57e8u: goto label_1a57e8;
        case 0x1a57ecu: goto label_1a57ec;
        case 0x1a57f0u: goto label_1a57f0;
        case 0x1a57f4u: goto label_1a57f4;
        case 0x1a57f8u: goto label_1a57f8;
        case 0x1a57fcu: goto label_1a57fc;
        case 0x1a5800u: goto label_1a5800;
        case 0x1a5804u: goto label_1a5804;
        case 0x1a5808u: goto label_1a5808;
        case 0x1a580cu: goto label_1a580c;
        case 0x1a5810u: goto label_1a5810;
        case 0x1a5814u: goto label_1a5814;
        case 0x1a5818u: goto label_1a5818;
        case 0x1a581cu: goto label_1a581c;
        case 0x1a5820u: goto label_1a5820;
        case 0x1a5824u: goto label_1a5824;
        case 0x1a5828u: goto label_1a5828;
        case 0x1a582cu: goto label_1a582c;
        case 0x1a5830u: goto label_1a5830;
        case 0x1a5834u: goto label_1a5834;
        case 0x1a5838u: goto label_1a5838;
        case 0x1a583cu: goto label_1a583c;
        case 0x1a5840u: goto label_1a5840;
        case 0x1a5844u: goto label_1a5844;
        case 0x1a5848u: goto label_1a5848;
        case 0x1a584cu: goto label_1a584c;
        case 0x1a5850u: goto label_1a5850;
        case 0x1a5854u: goto label_1a5854;
        case 0x1a5858u: goto label_1a5858;
        case 0x1a585cu: goto label_1a585c;
        case 0x1a5860u: goto label_1a5860;
        case 0x1a5864u: goto label_1a5864;
        case 0x1a5868u: goto label_1a5868;
        case 0x1a586cu: goto label_1a586c;
        case 0x1a5870u: goto label_1a5870;
        case 0x1a5874u: goto label_1a5874;
        case 0x1a5878u: goto label_1a5878;
        case 0x1a587cu: goto label_1a587c;
        case 0x1a5880u: goto label_1a5880;
        case 0x1a5884u: goto label_1a5884;
        case 0x1a5888u: goto label_1a5888;
        case 0x1a588cu: goto label_1a588c;
        case 0x1a5890u: goto label_1a5890;
        case 0x1a5894u: goto label_1a5894;
        case 0x1a5898u: goto label_1a5898;
        case 0x1a589cu: goto label_1a589c;
        case 0x1a58a0u: goto label_1a58a0;
        case 0x1a58a4u: goto label_1a58a4;
        case 0x1a58a8u: goto label_1a58a8;
        case 0x1a58acu: goto label_1a58ac;
        case 0x1a58b0u: goto label_1a58b0;
        case 0x1a58b4u: goto label_1a58b4;
        case 0x1a58b8u: goto label_1a58b8;
        case 0x1a58bcu: goto label_1a58bc;
        case 0x1a58c0u: goto label_1a58c0;
        case 0x1a58c4u: goto label_1a58c4;
        case 0x1a58c8u: goto label_1a58c8;
        case 0x1a58ccu: goto label_1a58cc;
        case 0x1a58d0u: goto label_1a58d0;
        case 0x1a58d4u: goto label_1a58d4;
        case 0x1a58d8u: goto label_1a58d8;
        case 0x1a58dcu: goto label_1a58dc;
        case 0x1a58e0u: goto label_1a58e0;
        case 0x1a58e4u: goto label_1a58e4;
        case 0x1a58e8u: goto label_1a58e8;
        case 0x1a58ecu: goto label_1a58ec;
        case 0x1a58f0u: goto label_1a58f0;
        case 0x1a58f4u: goto label_1a58f4;
        case 0x1a58f8u: goto label_1a58f8;
        case 0x1a58fcu: goto label_1a58fc;
        case 0x1a5900u: goto label_1a5900;
        case 0x1a5904u: goto label_1a5904;
        case 0x1a5908u: goto label_1a5908;
        case 0x1a590cu: goto label_1a590c;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a5914u: goto label_1a5914;
        case 0x1a5918u: goto label_1a5918;
        case 0x1a591cu: goto label_1a591c;
        case 0x1a5920u: goto label_1a5920;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5928u: goto label_1a5928;
        case 0x1a592cu: goto label_1a592c;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a5934u: goto label_1a5934;
        case 0x1a5938u: goto label_1a5938;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5940u: goto label_1a5940;
        case 0x1a5944u: goto label_1a5944;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5950u: goto label_1a5950;
        case 0x1a5954u: goto label_1a5954;
        case 0x1a5958u: goto label_1a5958;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a5968u: goto label_1a5968;
        case 0x1a596cu: goto label_1a596c;
        case 0x1a5970u: goto label_1a5970;
        case 0x1a5974u: goto label_1a5974;
        case 0x1a5978u: goto label_1a5978;
        case 0x1a597cu: goto label_1a597c;
        case 0x1a5980u: goto label_1a5980;
        case 0x1a5984u: goto label_1a5984;
        case 0x1a5988u: goto label_1a5988;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5990u: goto label_1a5990;
        case 0x1a5994u: goto label_1a5994;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a599cu: goto label_1a599c;
        case 0x1a59a0u: goto label_1a59a0;
        case 0x1a59a4u: goto label_1a59a4;
        case 0x1a59a8u: goto label_1a59a8;
        case 0x1a59acu: goto label_1a59ac;
        case 0x1a59b0u: goto label_1a59b0;
        case 0x1a59b4u: goto label_1a59b4;
        case 0x1a59b8u: goto label_1a59b8;
        case 0x1a59bcu: goto label_1a59bc;
        case 0x1a59c0u: goto label_1a59c0;
        case 0x1a59c4u: goto label_1a59c4;
        case 0x1a59c8u: goto label_1a59c8;
        case 0x1a59ccu: goto label_1a59cc;
        case 0x1a59d0u: goto label_1a59d0;
        case 0x1a59d4u: goto label_1a59d4;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59dcu: goto label_1a59dc;
        case 0x1a59e0u: goto label_1a59e0;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59e8u: goto label_1a59e8;
        case 0x1a59ecu: goto label_1a59ec;
        case 0x1a59f0u: goto label_1a59f0;
        case 0x1a59f4u: goto label_1a59f4;
        case 0x1a59f8u: goto label_1a59f8;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a00u: goto label_1a5a00;
        case 0x1a5a04u: goto label_1a5a04;
        case 0x1a5a08u: goto label_1a5a08;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a10u: goto label_1a5a10;
        case 0x1a5a14u: goto label_1a5a14;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a20u: goto label_1a5a20;
        case 0x1a5a24u: goto label_1a5a24;
        case 0x1a5a28u: goto label_1a5a28;
        case 0x1a5a2cu: goto label_1a5a2c;
        case 0x1a5a30u: goto label_1a5a30;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a3cu: goto label_1a5a3c;
        case 0x1a5a40u: goto label_1a5a40;
        case 0x1a5a44u: goto label_1a5a44;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a50u: goto label_1a5a50;
        case 0x1a5a54u: goto label_1a5a54;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a5cu: goto label_1a5a5c;
        case 0x1a5a60u: goto label_1a5a60;
        case 0x1a5a64u: goto label_1a5a64;
        case 0x1a5a68u: goto label_1a5a68;
        case 0x1a5a6cu: goto label_1a5a6c;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a74u: goto label_1a5a74;
        case 0x1a5a78u: goto label_1a5a78;
        case 0x1a5a7cu: goto label_1a5a7c;
        case 0x1a5a80u: goto label_1a5a80;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5a88u: goto label_1a5a88;
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5a90u: goto label_1a5a90;
        case 0x1a5a94u: goto label_1a5a94;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5a9cu: goto label_1a5a9c;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5aa4u: goto label_1a5aa4;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5aacu: goto label_1a5aac;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ab8u: goto label_1a5ab8;
        case 0x1a5abcu: goto label_1a5abc;
        case 0x1a5ac0u: goto label_1a5ac0;
        case 0x1a5ac4u: goto label_1a5ac4;
        case 0x1a5ac8u: goto label_1a5ac8;
        case 0x1a5accu: goto label_1a5acc;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5ad4u: goto label_1a5ad4;
        case 0x1a5ad8u: goto label_1a5ad8;
        case 0x1a5adcu: goto label_1a5adc;
        case 0x1a5ae0u: goto label_1a5ae0;
        case 0x1a5ae4u: goto label_1a5ae4;
        case 0x1a5ae8u: goto label_1a5ae8;
        case 0x1a5aecu: goto label_1a5aec;
        case 0x1a5af0u: goto label_1a5af0;
        case 0x1a5af4u: goto label_1a5af4;
        case 0x1a5af8u: goto label_1a5af8;
        case 0x1a5afcu: goto label_1a5afc;
        case 0x1a5b00u: goto label_1a5b00;
        case 0x1a5b04u: goto label_1a5b04;
        case 0x1a5b08u: goto label_1a5b08;
        case 0x1a5b0cu: goto label_1a5b0c;
        case 0x1a5b10u: goto label_1a5b10;
        case 0x1a5b14u: goto label_1a5b14;
        case 0x1a5b18u: goto label_1a5b18;
        case 0x1a5b1cu: goto label_1a5b1c;
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b24u: goto label_1a5b24;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bb0u: goto label_1a5bb0;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        case 0x1a5c80u: goto label_1a5c80;
        case 0x1a5c84u: goto label_1a5c84;
        case 0x1a5c88u: goto label_1a5c88;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5c90u: goto label_1a5c90;
        case 0x1a5c94u: goto label_1a5c94;
        case 0x1a5c98u: goto label_1a5c98;
        case 0x1a5c9cu: goto label_1a5c9c;
        case 0x1a5ca0u: goto label_1a5ca0;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5ca8u: goto label_1a5ca8;
        case 0x1a5cacu: goto label_1a5cac;
        case 0x1a5cb0u: goto label_1a5cb0;
        case 0x1a5cb4u: goto label_1a5cb4;
        case 0x1a5cb8u: goto label_1a5cb8;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cc0u: goto label_1a5cc0;
        case 0x1a5cc4u: goto label_1a5cc4;
        case 0x1a5cc8u: goto label_1a5cc8;
        case 0x1a5cccu: goto label_1a5ccc;
        case 0x1a5cd0u: goto label_1a5cd0;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5cdcu: goto label_1a5cdc;
        case 0x1a5ce0u: goto label_1a5ce0;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5ce8u: goto label_1a5ce8;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5cf4u: goto label_1a5cf4;
        case 0x1a5cf8u: goto label_1a5cf8;
        case 0x1a5cfcu: goto label_1a5cfc;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d08u: goto label_1a5d08;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d10u: goto label_1a5d10;
        case 0x1a5d14u: goto label_1a5d14;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d20u: goto label_1a5d20;
        case 0x1a5d24u: goto label_1a5d24;
        case 0x1a5d28u: goto label_1a5d28;
        case 0x1a5d2cu: goto label_1a5d2c;
        case 0x1a5d30u: goto label_1a5d30;
        case 0x1a5d34u: goto label_1a5d34;
        case 0x1a5d38u: goto label_1a5d38;
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d40u: goto label_1a5d40;
        case 0x1a5d44u: goto label_1a5d44;
        case 0x1a5d48u: goto label_1a5d48;
        case 0x1a5d4cu: goto label_1a5d4c;
        case 0x1a5d50u: goto label_1a5d50;
        case 0x1a5d54u: goto label_1a5d54;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d5cu: goto label_1a5d5c;
        case 0x1a5d60u: goto label_1a5d60;
        case 0x1a5d64u: goto label_1a5d64;
        case 0x1a5d68u: goto label_1a5d68;
        case 0x1a5d6cu: goto label_1a5d6c;
        case 0x1a5d70u: goto label_1a5d70;
        case 0x1a5d74u: goto label_1a5d74;
        case 0x1a5d78u: goto label_1a5d78;
        case 0x1a5d7cu: goto label_1a5d7c;
        case 0x1a5d80u: goto label_1a5d80;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5d88u: goto label_1a5d88;
        case 0x1a5d8cu: goto label_1a5d8c;
        case 0x1a5d90u: goto label_1a5d90;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5d9cu: goto label_1a5d9c;
        case 0x1a5da0u: goto label_1a5da0;
        case 0x1a5da4u: goto label_1a5da4;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5dacu: goto label_1a5dac;
        case 0x1a5db0u: goto label_1a5db0;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dbcu: goto label_1a5dbc;
        case 0x1a5dc0u: goto label_1a5dc0;
        case 0x1a5dc4u: goto label_1a5dc4;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dccu: goto label_1a5dcc;
        case 0x1a5dd0u: goto label_1a5dd0;
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5ddcu: goto label_1a5ddc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5de4u: goto label_1a5de4;
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5decu: goto label_1a5dec;
        case 0x1a5df0u: goto label_1a5df0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5df8u: goto label_1a5df8;
        case 0x1a5dfcu: goto label_1a5dfc;
        case 0x1a5e00u: goto label_1a5e00;
        case 0x1a5e04u: goto label_1a5e04;
        case 0x1a5e08u: goto label_1a5e08;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5e14u: goto label_1a5e14;
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e1cu: goto label_1a5e1c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e2cu: goto label_1a5e2c;
        case 0x1a5e30u: goto label_1a5e30;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e38u: goto label_1a5e38;
        case 0x1a5e3cu: goto label_1a5e3c;
        case 0x1a5e40u: goto label_1a5e40;
        case 0x1a5e44u: goto label_1a5e44;
        case 0x1a5e48u: goto label_1a5e48;
        case 0x1a5e4cu: goto label_1a5e4c;
        case 0x1a5e50u: goto label_1a5e50;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e58u: goto label_1a5e58;
        case 0x1a5e5cu: goto label_1a5e5c;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e68u: goto label_1a5e68;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e70u: goto label_1a5e70;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e78u: goto label_1a5e78;
        case 0x1a5e7cu: goto label_1a5e7c;
        case 0x1a5e80u: goto label_1a5e80;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e88u: goto label_1a5e88;
        case 0x1a5e8cu: goto label_1a5e8c;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5e98u: goto label_1a5e98;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5ea0u: goto label_1a5ea0;
        case 0x1a5ea4u: goto label_1a5ea4;
        case 0x1a5ea8u: goto label_1a5ea8;
        case 0x1a5eacu: goto label_1a5eac;
        case 0x1a5eb0u: goto label_1a5eb0;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eb8u: goto label_1a5eb8;
        case 0x1a5ebcu: goto label_1a5ebc;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5ec4u: goto label_1a5ec4;
        case 0x1a5ec8u: goto label_1a5ec8;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ed0u: goto label_1a5ed0;
        case 0x1a5ed4u: goto label_1a5ed4;
        case 0x1a5ed8u: goto label_1a5ed8;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5ee0u: goto label_1a5ee0;
        case 0x1a5ee4u: goto label_1a5ee4;
        case 0x1a5ee8u: goto label_1a5ee8;
        case 0x1a5eecu: goto label_1a5eec;
        case 0x1a5ef0u: goto label_1a5ef0;
        case 0x1a5ef4u: goto label_1a5ef4;
        case 0x1a5ef8u: goto label_1a5ef8;
        case 0x1a5efcu: goto label_1a5efc;
        case 0x1a5f00u: goto label_1a5f00;
        case 0x1a5f04u: goto label_1a5f04;
        case 0x1a5f08u: goto label_1a5f08;
        case 0x1a5f0cu: goto label_1a5f0c;
        case 0x1a5f10u: goto label_1a5f10;
        case 0x1a5f14u: goto label_1a5f14;
        case 0x1a5f18u: goto label_1a5f18;
        case 0x1a5f1cu: goto label_1a5f1c;
        case 0x1a5f20u: goto label_1a5f20;
        case 0x1a5f24u: goto label_1a5f24;
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f2cu: goto label_1a5f2c;
        case 0x1a5f30u: goto label_1a5f30;
        case 0x1a5f34u: goto label_1a5f34;
        case 0x1a5f38u: goto label_1a5f38;
        case 0x1a5f3cu: goto label_1a5f3c;
        case 0x1a5f40u: goto label_1a5f40;
        case 0x1a5f44u: goto label_1a5f44;
        case 0x1a5f48u: goto label_1a5f48;
        case 0x1a5f4cu: goto label_1a5f4c;
        case 0x1a5f50u: goto label_1a5f50;
        case 0x1a5f54u: goto label_1a5f54;
        case 0x1a5f58u: goto label_1a5f58;
        case 0x1a5f5cu: goto label_1a5f5c;
        case 0x1a5f60u: goto label_1a5f60;
        case 0x1a5f64u: goto label_1a5f64;
        case 0x1a5f68u: goto label_1a5f68;
        case 0x1a5f6cu: goto label_1a5f6c;
        case 0x1a5f70u: goto label_1a5f70;
        case 0x1a5f74u: goto label_1a5f74;
        case 0x1a5f78u: goto label_1a5f78;
        case 0x1a5f7cu: goto label_1a5f7c;
        case 0x1a5f80u: goto label_1a5f80;
        case 0x1a5f84u: goto label_1a5f84;
        case 0x1a5f88u: goto label_1a5f88;
        case 0x1a5f8cu: goto label_1a5f8c;
        case 0x1a5f90u: goto label_1a5f90;
        case 0x1a5f94u: goto label_1a5f94;
        case 0x1a5f98u: goto label_1a5f98;
        case 0x1a5f9cu: goto label_1a5f9c;
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a5fa4u: goto label_1a5fa4;
        case 0x1a5fa8u: goto label_1a5fa8;
        case 0x1a5facu: goto label_1a5fac;
        default: break;
    }

    ctx->pc = 0x1a57b0u;

label_1a57b0:
    // 0x1a57b0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_1a57b4:
    // 0x1a57b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a57b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a57b8:
    // 0x1a57b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a57b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1a57bc:
    // 0x1a57bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a57bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1a57c0:
    // 0x1a57c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1a57c4:
    // 0x1a57c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a57c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a57c8:
    // 0x1a57c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a57c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a57cc:
    // 0x1a57cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a57ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a57d0:
    // 0x1a57d0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1a57d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a57d4:
    // 0x1a57d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a57d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a57d8:
    // 0x1a57d8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1a57d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a57dc:
    // 0x1a57dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1a57dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a57e0:
    // 0x1a57e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a57e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a57e4:
    // 0x1a57e4: 0x120001e5  beqz        $s0, . + 4 + (0x1E5 << 2)
label_1a57e8:
    if (ctx->pc == 0x1A57E8u) {
        ctx->pc = 0x1A57E8u;
            // 0x1a57e8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1A57ECu;
        goto label_1a57ec;
    }
    ctx->pc = 0x1A57E4u;
    {
        const bool branch_taken_0x1a57e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A57E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57E4u;
            // 0x1a57e8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57e4) {
            ctx->pc = 0x1A5F7Cu;
            goto label_1a5f7c;
        }
    }
    ctx->pc = 0x1A57ECu;
label_1a57ec:
    // 0x1a57ec: 0xc0a0ed8  jal         func_283B60
label_1a57f0:
    if (ctx->pc == 0x1A57F0u) {
        ctx->pc = 0x1A57F0u;
            // 0x1a57f0: 0x8e252e50  lw          $a1, 0x2E50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
        ctx->pc = 0x1A57F4u;
        goto label_1a57f4;
    }
    ctx->pc = 0x1A57ECu;
    SET_GPR_U32(ctx, 31, 0x1A57F4u);
    ctx->pc = 0x1A57F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57ECu;
            // 0x1a57f0: 0x8e252e50  lw          $a1, 0x2E50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57F4u; }
        if (ctx->pc != 0x1A57F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57F4u; }
        if (ctx->pc != 0x1A57F4u) { return; }
    }
    ctx->pc = 0x1A57F4u;
label_1a57f4:
    // 0x1a57f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a57f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a57f8:
    // 0x1a57f8: 0x126001e0  beqz        $s3, . + 4 + (0x1E0 << 2)
label_1a57fc:
    if (ctx->pc == 0x1A57FCu) {
        ctx->pc = 0x1A5800u;
        goto label_1a5800;
    }
    ctx->pc = 0x1A57F8u;
    {
        const bool branch_taken_0x1a57f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a57f8) {
            ctx->pc = 0x1A5F7Cu;
            goto label_1a5f7c;
        }
    }
    ctx->pc = 0x1A5800u;
label_1a5800:
    // 0x1a5800: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x1a5800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_1a5804:
    // 0x1a5804: 0xc0a0e30  jal         func_2838C0
label_1a5808:
    if (ctx->pc == 0x1A5808u) {
        ctx->pc = 0x1A5808u;
            // 0x1a5808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A580Cu;
        goto label_1a580c;
    }
    ctx->pc = 0x1A5804u;
    SET_GPR_U32(ctx, 31, 0x1A580Cu);
    ctx->pc = 0x1A5808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5804u;
            // 0x1a5808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A580Cu; }
        if (ctx->pc != 0x1A580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A580Cu; }
        if (ctx->pc != 0x1A580Cu) { return; }
    }
    ctx->pc = 0x1A580Cu;
label_1a580c:
    // 0x1a580c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a580cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5810:
    // 0x1a5810: 0x124001da  beqz        $s2, . + 4 + (0x1DA << 2)
label_1a5814:
    if (ctx->pc == 0x1A5814u) {
        ctx->pc = 0x1A5818u;
        goto label_1a5818;
    }
    ctx->pc = 0x1A5810u;
    {
        const bool branch_taken_0x1a5810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5810) {
            ctx->pc = 0x1A5F7Cu;
            goto label_1a5f7c;
        }
    }
    ctx->pc = 0x1A5818u;
label_1a5818:
    // 0x1a5818: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x1a5818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1a581c:
    // 0x1a581c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a581cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a5820:
    // 0x1a5820: 0x320f809  jalr        $t9
label_1a5824:
    if (ctx->pc == 0x1A5824u) {
        ctx->pc = 0x1A5824u;
            // 0x1a5824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5828u;
        goto label_1a5828;
    }
    ctx->pc = 0x1A5820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5828u);
        ctx->pc = 0x1A5824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5820u;
            // 0x1a5824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5828u; }
            if (ctx->pc != 0x1A5828u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5828u;
label_1a5828:
    // 0x1a5828: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1a5828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1a582c:
    // 0x1a582c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a5830:
    if (ctx->pc == 0x1A5830u) {
        ctx->pc = 0x1A5834u;
        goto label_1a5834;
    }
    ctx->pc = 0x1A582Cu;
    {
        const bool branch_taken_0x1a582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a582c) {
            ctx->pc = 0x1A583Cu;
            goto label_1a583c;
        }
    }
    ctx->pc = 0x1A5834u;
label_1a5834:
    // 0x1a5834: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_1a5838:
    if (ctx->pc == 0x1A5838u) {
        ctx->pc = 0x1A5838u;
            // 0x1a5838: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1A583Cu;
        goto label_1a583c;
    }
    ctx->pc = 0x1A5834u;
    {
        const bool branch_taken_0x1a5834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5834u;
            // 0x1a5838: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5834) {
            ctx->pc = 0x1A5F80u;
            goto label_1a5f80;
        }
    }
    ctx->pc = 0x1A583Cu;
label_1a583c:
    // 0x1a583c: 0xc050874  jal         func_1421D0
label_1a5840:
    if (ctx->pc == 0x1A5840u) {
        ctx->pc = 0x1A5844u;
        goto label_1a5844;
    }
    ctx->pc = 0x1A583Cu;
    SET_GPR_U32(ctx, 31, 0x1A5844u);
    ctx->pc = 0x1421D0u;
    if (runtime->hasFunction(0x1421D0u)) {
        auto targetFn = runtime->lookupFunction(0x1421D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5844u; }
        if (ctx->pc != 0x1A5844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetNowFrameRate__Fv_0x1421d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5844u; }
        if (ctx->pc != 0x1A5844u) { return; }
    }
    ctx->pc = 0x1A5844u;
label_1a5844:
    // 0x1a5844: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a5848:
    // 0x1a5848: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a584c:
    // 0x1a584c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a584cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5850:
    // 0x1a5850: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5854:
    // 0x1a5854: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a5858:
    // 0x1a5858: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1a5858u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a585c:
    // 0x1a585c: 0x0  nop
    ctx->pc = 0x1a585cu;
    // NOP
label_1a5860:
    // 0x1a5860: 0x0  nop
    ctx->pc = 0x1a5860u;
    // NOP
label_1a5864:
    // 0x1a5864: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a5868:
    // 0x1a5868: 0x320f809  jalr        $t9
label_1a586c:
    if (ctx->pc == 0x1A586Cu) {
        ctx->pc = 0x1A5870u;
        goto label_1a5870;
    }
    ctx->pc = 0x1A5868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5870u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5870u; }
            if (ctx->pc != 0x1A5870u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5870u;
label_1a5870:
    // 0x1a5870: 0x7a630080  lq          $v1, 0x80($s3)
    ctx->pc = 0x1a5870u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 128)));
label_1a5874:
    // 0x1a5874: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a5878:
    // 0x1a5878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a587c:
    // 0x1a587c: 0xc04c678  jal         func_1319E0
label_1a5880:
    if (ctx->pc == 0x1A5880u) {
        ctx->pc = 0x1A5880u;
            // 0x1a5880: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x1A5884u;
        goto label_1a5884;
    }
    ctx->pc = 0x1A587Cu;
    SET_GPR_U32(ctx, 31, 0x1A5884u);
    ctx->pc = 0x1A5880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A587Cu;
            // 0x1a5880: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5884u; }
        if (ctx->pc != 0x1A5884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5884u; }
        if (ctx->pc != 0x1A5884u) { return; }
    }
    ctx->pc = 0x1A5884u;
label_1a5884:
    // 0x1a5884: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1a5884u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_1a5888:
    // 0x1a5888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a588c:
    // 0x1a588c: 0xc0bb548  jal         func_2ED520
label_1a5890:
    if (ctx->pc == 0x1A5890u) {
        ctx->pc = 0x1A5890u;
            // 0x1a5890: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1A5894u;
        goto label_1a5894;
    }
    ctx->pc = 0x1A588Cu;
    SET_GPR_U32(ctx, 31, 0x1A5894u);
    ctx->pc = 0x1A5890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A588Cu;
            // 0x1a5890: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5894u; }
        if (ctx->pc != 0x1A5894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5894u; }
        if (ctx->pc != 0x1A5894u) { return; }
    }
    ctx->pc = 0x1A5894u;
label_1a5894:
    // 0x1a5894: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1a5894u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1a5898:
    // 0x1a5898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a589c:
    // 0x1a589c: 0xc0bb548  jal         func_2ED520
label_1a58a0:
    if (ctx->pc == 0x1A58A0u) {
        ctx->pc = 0x1A58A0u;
            // 0x1a58a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A58A4u;
        goto label_1a58a4;
    }
    ctx->pc = 0x1A589Cu;
    SET_GPR_U32(ctx, 31, 0x1A58A4u);
    ctx->pc = 0x1A58A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A589Cu;
            // 0x1a58a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58A4u; }
        if (ctx->pc != 0x1A58A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58A4u; }
        if (ctx->pc != 0x1A58A4u) { return; }
    }
    ctx->pc = 0x1A58A4u;
label_1a58a4:
    // 0x1a58a4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1a58a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1a58a8:
    // 0x1a58a8: 0xc047964  jal         func_11E590
label_1a58ac:
    if (ctx->pc == 0x1A58ACu) {
        ctx->pc = 0x1A58ACu;
            // 0x1a58ac: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x1A58B0u;
        goto label_1a58b0;
    }
    ctx->pc = 0x1A58A8u;
    SET_GPR_U32(ctx, 31, 0x1A58B0u);
    ctx->pc = 0x1A58ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58A8u;
            // 0x1a58ac: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58B0u; }
        if (ctx->pc != 0x1A58B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58B0u; }
        if (ctx->pc != 0x1A58B0u) { return; }
    }
    ctx->pc = 0x1A58B0u;
label_1a58b0:
    // 0x1a58b0: 0x4600adc2  mul.s       $f23, $f21, $f0
    ctx->pc = 0x1a58b0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1a58b4:
    // 0x1a58b4: 0xc047a42  jal         func_11E908
label_1a58b8:
    if (ctx->pc == 0x1A58B8u) {
        ctx->pc = 0x1A58B8u;
            // 0x1a58b8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x1A58BCu;
        goto label_1a58bc;
    }
    ctx->pc = 0x1A58B4u;
    SET_GPR_U32(ctx, 31, 0x1A58BCu);
    ctx->pc = 0x1A58B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58B4u;
            // 0x1a58b8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58BCu; }
        if (ctx->pc != 0x1A58BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58BCu; }
        if (ctx->pc != 0x1A58BCu) { return; }
    }
    ctx->pc = 0x1A58BCu;
label_1a58bc:
    // 0x1a58bc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1a58bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_1a58c0:
    // 0x1a58c0: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x1a58c0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_1a58c4:
    // 0x1a58c4: 0xc047a42  jal         func_11E908
label_1a58c8:
    if (ctx->pc == 0x1A58C8u) {
        ctx->pc = 0x1A58C8u;
            // 0x1a58c8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x1A58CCu;
        goto label_1a58cc;
    }
    ctx->pc = 0x1A58C4u;
    SET_GPR_U32(ctx, 31, 0x1A58CCu);
    ctx->pc = 0x1A58C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58C4u;
            // 0x1a58c8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58CCu; }
        if (ctx->pc != 0x1A58CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58CCu; }
        if (ctx->pc != 0x1A58CCu) { return; }
    }
    ctx->pc = 0x1A58CCu;
label_1a58cc:
    // 0x1a58cc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1a58ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_1a58d0:
    // 0x1a58d0: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x1a58d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_1a58d4:
    // 0x1a58d4: 0xc047964  jal         func_11E590
label_1a58d8:
    if (ctx->pc == 0x1A58D8u) {
        ctx->pc = 0x1A58D8u;
            // 0x1a58d8: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1A58DCu;
        goto label_1a58dc;
    }
    ctx->pc = 0x1A58D4u;
    SET_GPR_U32(ctx, 31, 0x1A58DCu);
    ctx->pc = 0x1A58D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58D4u;
            // 0x1a58d8: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58DCu; }
        if (ctx->pc != 0x1A58DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58DCu; }
        if (ctx->pc != 0x1A58DCu) { return; }
    }
    ctx->pc = 0x1A58DCu;
label_1a58dc:
    // 0x1a58dc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1a58dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_1a58e0:
    // 0x1a58e0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1a58e4:
    // 0x1a58e4: 0x8e252e5c  lw          $a1, 0x2E5C($s1)
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11868)));
label_1a58e8:
    // 0x1a58e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a58e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a58ec:
    // 0x1a58ec: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x1a58ecu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_1a58f0:
    // 0x1a58f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a58f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a58f4:
    // 0x1a58f4: 0x0  nop
    ctx->pc = 0x1a58f4u;
    // NOP
label_1a58f8:
    // 0x1a58f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a58f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a58fc:
    // 0x1a58fc: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x1a58fcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_1a5900:
    // 0x1a5900: 0xc0a0f58  jal         func_283D60
label_1a5904:
    if (ctx->pc == 0x1A5904u) {
        ctx->pc = 0x1A5904u;
            // 0x1a5904: 0x4600c602  mul.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->pc = 0x1A5908u;
        goto label_1a5908;
    }
    ctx->pc = 0x1A5900u;
    SET_GPR_U32(ctx, 31, 0x1A5908u);
    ctx->pc = 0x1A5904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5900u;
            // 0x1a5904: 0x4600c602  mul.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5908u; }
        if (ctx->pc != 0x1A5908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5908u; }
        if (ctx->pc != 0x1A5908u) { return; }
    }
    ctx->pc = 0x1A5908u;
label_1a5908:
    // 0x1a5908: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a590c:
    if (ctx->pc == 0x1A590Cu) {
        ctx->pc = 0x1A5910u;
        goto label_1a5910;
    }
    ctx->pc = 0x1A5908u;
    {
        const bool branch_taken_0x1a5908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5908) {
            ctx->pc = 0x1A598Cu;
            goto label_1a598c;
        }
    }
    ctx->pc = 0x1A5910u;
label_1a5910:
    // 0x1a5910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5914:
    // 0x1a5914: 0xc0575dc  jal         func_15D770
label_1a5918:
    if (ctx->pc == 0x1A5918u) {
        ctx->pc = 0x1A5918u;
            // 0x1a5918: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1A591Cu;
        goto label_1a591c;
    }
    ctx->pc = 0x1A5914u;
    SET_GPR_U32(ctx, 31, 0x1A591Cu);
    ctx->pc = 0x1A5918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5914u;
            // 0x1a5918: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D770u;
    if (runtime->hasFunction(0x15D770u)) {
        auto targetFn = runtime->lookupFunction(0x15D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A591Cu; }
        if (ctx->pc != 0x1A591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBBox__4CMapFP9mgVu0FBOX_0x15d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A591Cu; }
        if (ctx->pc != 0x1A591Cu) { return; }
    }
    ctx->pc = 0x1A591Cu;
label_1a591c:
    // 0x1a591c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1a5920:
    if (ctx->pc == 0x1A5920u) {
        ctx->pc = 0x1A5924u;
        goto label_1a5924;
    }
    ctx->pc = 0x1A591Cu;
    {
        const bool branch_taken_0x1a591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a591c) {
            ctx->pc = 0x1A598Cu;
            goto label_1a598c;
        }
    }
    ctx->pc = 0x1A5924u;
label_1a5924:
    // 0x1a5924: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a5928:
    // 0x1a5928: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a5928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1a592c:
    // 0x1a592c: 0xc041c3e  jal         func_1070F8
label_1a5930:
    if (ctx->pc == 0x1A5930u) {
        ctx->pc = 0x1A5930u;
            // 0x1a5930: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1A5934u;
        goto label_1a5934;
    }
    ctx->pc = 0x1A592Cu;
    SET_GPR_U32(ctx, 31, 0x1A5934u);
    ctx->pc = 0x1A5930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A592Cu;
            // 0x1a5930: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5934u; }
        if (ctx->pc != 0x1A5934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5934u; }
        if (ctx->pc != 0x1A5934u) { return; }
    }
    ctx->pc = 0x1A5934u;
label_1a5934:
    // 0x1a5934: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a5934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5938:
    // 0x1a5938: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a5938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a593c:
    // 0x1a593c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a593cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5940:
    // 0x1a5940: 0x0  nop
    ctx->pc = 0x1a5940u;
    // NOP
label_1a5944:
    // 0x1a5944: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1a5948:
    if (ctx->pc == 0x1A5948u) {
        ctx->pc = 0x1A594Cu;
        goto label_1a594c;
    }
    ctx->pc = 0x1A5944u;
    {
        const bool branch_taken_0x1a5944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5944) {
            ctx->pc = 0x1A5954u;
            goto label_1a5954;
        }
    }
    ctx->pc = 0x1A594Cu;
label_1a594c:
    // 0x1a594c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5950:
    if (ctx->pc == 0x1A5950u) {
        ctx->pc = 0x1A5950u;
            // 0x1a5950: 0x3c024448  lui         $v0, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
        ctx->pc = 0x1A5954u;
        goto label_1a5954;
    }
    ctx->pc = 0x1A594Cu;
    {
        const bool branch_taken_0x1a594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A594Cu;
            // 0x1a5950: 0x3c024448  lui         $v0, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a594c) {
            ctx->pc = 0x1A595Cu;
            goto label_1a595c;
        }
    }
    ctx->pc = 0x1A5954u;
label_1a5954:
    // 0x1a5954: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a5954u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a5958:
    // 0x1a5958: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_1a595c:
    // 0x1a595c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5960:
    // 0x1a5960: 0x0  nop
    ctx->pc = 0x1a5960u;
    // NOP
label_1a5964:
    // 0x1a5964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5968:
    // 0x1a5968: 0x0  nop
    ctx->pc = 0x1a5968u;
    // NOP
label_1a596c:
    // 0x1a596c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a5970:
    if (ctx->pc == 0x1A5970u) {
        ctx->pc = 0x1A5974u;
        goto label_1a5974;
    }
    ctx->pc = 0x1A596Cu;
    {
        const bool branch_taken_0x1a596c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a596c) {
            ctx->pc = 0x1A598Cu;
            goto label_1a598c;
        }
    }
    ctx->pc = 0x1A5974u;
label_1a5974:
    // 0x1a5974: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_1a5978:
    // 0x1a5978: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a5978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1a597c:
    // 0x1a597c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a597cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5980:
    // 0x1a5980: 0x0  nop
    ctx->pc = 0x1a5980u;
    // NOP
label_1a5984:
    // 0x1a5984: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x1a5984u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_1a5988:
    // 0x1a5988: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x1a5988u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_1a598c:
    // 0x1a598c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a5990:
    // 0x1a5990: 0x8c22b294  lw          $v0, -0x4D6C($at)
    ctx->pc = 0x1a5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947476)));
label_1a5994:
    // 0x1a5994: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1a5998:
    if (ctx->pc == 0x1A5998u) {
        ctx->pc = 0x1A5998u;
            // 0x1a5998: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A599Cu;
        goto label_1a599c;
    }
    ctx->pc = 0x1A5994u;
    {
        const bool branch_taken_0x1a5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5994u;
            // 0x1a5998: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5994) {
            ctx->pc = 0x1A59E0u;
            goto label_1a59e0;
        }
    }
    ctx->pc = 0x1A599Cu;
label_1a599c:
    // 0x1a599c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a59a0:
    // 0x1a59a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1a59a4:
    // 0x1a59a4: 0xc422b2a4  lwc1        $f2, -0x4D5C($at)
    ctx->pc = 0x1a59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a59a8:
    // 0x1a59a8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a59ac:
    // 0x1a59ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a59acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a59b0:
    // 0x1a59b0: 0x0  nop
    ctx->pc = 0x1a59b0u;
    // NOP
label_1a59b4:
    // 0x1a59b4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a59b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a59b8:
    // 0x1a59b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a59b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a59bc:
    // 0x1a59bc: 0x0  nop
    ctx->pc = 0x1a59bcu;
    // NOP
label_1a59c0:
    // 0x1a59c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a59c4:
    if (ctx->pc == 0x1A59C4u) {
        ctx->pc = 0x1A59C8u;
        goto label_1a59c8;
    }
    ctx->pc = 0x1A59C0u;
    {
        const bool branch_taken_0x1a59c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a59c0) {
            ctx->pc = 0x1A59E0u;
            goto label_1a59e0;
        }
    }
    ctx->pc = 0x1A59C8u;
label_1a59c8:
    // 0x1a59c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a59cc:
    // 0x1a59cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a59ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a59d0:
    // 0x1a59d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a59d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a59d4:
    // 0x1a59d4: 0x0  nop
    ctx->pc = 0x1a59d4u;
    // NOP
label_1a59d8:
    // 0x1a59d8: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x1a59d8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_1a59dc:
    // 0x1a59dc: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x1a59dcu;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_1a59e0:
    // 0x1a59e0: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a59e4:
    // 0x1a59e4: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x1a59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_1a59e8:
    // 0x1a59e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1a59ec:
    if (ctx->pc == 0x1A59ECu) {
        ctx->pc = 0x1A59F0u;
        goto label_1a59f0;
    }
    ctx->pc = 0x1A59E8u;
    {
        const bool branch_taken_0x1a59e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a59e8) {
            ctx->pc = 0x1A5A58u;
            goto label_1a5a58;
        }
    }
    ctx->pc = 0x1A59F0u;
label_1a59f0:
    // 0x1a59f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a59f4:
    // 0x1a59f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a59f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a59f8:
    // 0x1a59f8: 0xc052cf0  jal         func_14B3C0
label_1a59fc:
    if (ctx->pc == 0x1A59FCu) {
        ctx->pc = 0x1A59FCu;
            // 0x1a59fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A5A00u;
        goto label_1a5a00;
    }
    ctx->pc = 0x1A59F8u;
    SET_GPR_U32(ctx, 31, 0x1A5A00u);
    ctx->pc = 0x1A59FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59F8u;
            // 0x1a59fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A00u; }
        if (ctx->pc != 0x1A5A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A00u; }
        if (ctx->pc != 0x1A5A00u) { return; }
    }
    ctx->pc = 0x1A5A00u;
label_1a5a00:
    // 0x1a5a00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a5a04:
    if (ctx->pc == 0x1A5A04u) {
        ctx->pc = 0x1A5A08u;
        goto label_1a5a08;
    }
    ctx->pc = 0x1A5A00u;
    {
        const bool branch_taken_0x1a5a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a00) {
            ctx->pc = 0x1A5A1Cu;
            goto label_1a5a1c;
        }
    }
    ctx->pc = 0x1A5A08u;
label_1a5a08:
    // 0x1a5a08: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a5a0c:
    // 0x1a5a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5a10:
    // 0x1a5a10: 0x0  nop
    ctx->pc = 0x1a5a10u;
    // NOP
label_1a5a14:
    // 0x1a5a14: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x1a5a14u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_1a5a18:
    // 0x1a5a18: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x1a5a18u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_1a5a1c:
    // 0x1a5a1c: 0x8f828bc0  lw          $v0, -0x7440($gp)
    ctx->pc = 0x1a5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
label_1a5a20:
    // 0x1a5a20: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1a5a24:
    if (ctx->pc == 0x1A5A24u) {
        ctx->pc = 0x1A5A24u;
            // 0x1a5a24: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->pc = 0x1A5A28u;
        goto label_1a5a28;
    }
    ctx->pc = 0x1A5A20u;
    {
        const bool branch_taken_0x1a5a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A20u;
            // 0x1a5a24: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a20) {
            ctx->pc = 0x1A5A74u;
            goto label_1a5a74;
        }
    }
    ctx->pc = 0x1A5A28u;
label_1a5a28:
    // 0x1a5a28: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a5a2c:
    // 0x1a5a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5a30:
    // 0x1a5a30: 0xc0bb538  jal         func_2ED4E0
label_1a5a34:
    if (ctx->pc == 0x1A5A34u) {
        ctx->pc = 0x1A5A34u;
            // 0x1a5a34: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1A5A38u;
        goto label_1a5a38;
    }
    ctx->pc = 0x1A5A30u;
    SET_GPR_U32(ctx, 31, 0x1A5A38u);
    ctx->pc = 0x1A5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A30u;
            // 0x1a5a34: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A38u; }
        if (ctx->pc != 0x1A5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A38u; }
        if (ctx->pc != 0x1A5A38u) { return; }
    }
    ctx->pc = 0x1A5A38u;
label_1a5a38:
    // 0x1a5a38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a5a3c:
    if (ctx->pc == 0x1A5A3Cu) {
        ctx->pc = 0x1A5A40u;
        goto label_1a5a40;
    }
    ctx->pc = 0x1A5A38u;
    {
        const bool branch_taken_0x1a5a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a38) {
            ctx->pc = 0x1A5A70u;
            goto label_1a5a70;
        }
    }
    ctx->pc = 0x1A5A40u;
label_1a5a40:
    // 0x1a5a40: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1a5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1a5a44:
    // 0x1a5a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5a48:
    // 0x1a5a48: 0x0  nop
    ctx->pc = 0x1a5a48u;
    // NOP
label_1a5a4c:
    // 0x1a5a4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a5a50:
    // 0x1a5a50: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a5a54:
    if (ctx->pc == 0x1A5A54u) {
        ctx->pc = 0x1A5A54u;
            // 0x1a5a54: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x1A5A58u;
        goto label_1a5a58;
    }
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A50u;
            // 0x1a5a54: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5A70u;
            goto label_1a5a70;
        }
    }
    ctx->pc = 0x1A5A58u;
label_1a5a58:
    // 0x1a5a58: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1a5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1a5a5c:
    // 0x1a5a5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5a60:
    if (ctx->pc == 0x1A5A60u) {
        ctx->pc = 0x1A5A64u;
        goto label_1a5a64;
    }
    ctx->pc = 0x1A5A5Cu;
    {
        const bool branch_taken_0x1a5a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a5c) {
            ctx->pc = 0x1A5A70u;
            goto label_1a5a70;
        }
    }
    ctx->pc = 0x1A5A64u;
label_1a5a64:
    // 0x1a5a64: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1a5a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1a5a68:
    // 0x1a5a68: 0x0  nop
    ctx->pc = 0x1a5a68u;
    // NOP
label_1a5a6c:
    // 0x1a5a6c: 0x4600c5c6  mov.s       $f23, $f24
    ctx->pc = 0x1a5a6cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[24]);
label_1a5a70:
    // 0x1a5a70: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1a5a74:
    // 0x1a5a74: 0x27b40098  addiu       $s4, $sp, 0x98
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1a5a78:
    // 0x1a5a78: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x1a5a78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1a5a7c:
    // 0x1a5a7c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a5a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1a5a80:
    // 0x1a5a80: 0xe6980000  swc1        $f24, 0x0($s4)
    ctx->pc = 0x1a5a80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1a5a84:
    // 0x1a5a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5a88:
    // 0x1a5a88: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5a8c:
    // 0x1a5a8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a5a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a5a90:
    // 0x1a5a90: 0x8f828bc0  lw          $v0, -0x7440($gp)
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
label_1a5a94:
    // 0x1a5a94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a5a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a5a98:
    // 0x1a5a98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a5a9c:
    if (ctx->pc == 0x1A5A9Cu) {
        ctx->pc = 0x1A5A9Cu;
            // 0x1a5a9c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x1A5AA0u;
        goto label_1a5aa0;
    }
    ctx->pc = 0x1A5A98u;
    {
        const bool branch_taken_0x1a5a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A98u;
            // 0x1a5a9c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a98) {
            ctx->pc = 0x1A5AF0u;
            goto label_1a5af0;
        }
    }
    ctx->pc = 0x1A5AA0u;
label_1a5aa0:
    // 0x1a5aa0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1a5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_1a5aa4:
    // 0x1a5aa4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5aa8:
    // 0x1a5aa8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1a5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1a5aac:
    // 0x1a5aac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ab0:
    // 0x1a5ab0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5ab4:
    // 0x1a5ab4: 0x24a55af8  addiu       $a1, $a1, 0x5AF8
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23288));
label_1a5ab8:
    // 0x1a5ab8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5abc:
    // 0x1a5abc: 0x320f809  jalr        $t9
label_1a5ac0:
    if (ctx->pc == 0x1A5AC0u) {
        ctx->pc = 0x1A5AC0u;
            // 0x1a5ac0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1A5AC4u;
        goto label_1a5ac4;
    }
    ctx->pc = 0x1A5ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5AC4u);
        ctx->pc = 0x1A5AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5ABCu;
            // 0x1a5ac0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AC4u; }
            if (ctx->pc != 0x1A5AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5AC4u;
label_1a5ac4:
    // 0x1a5ac4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5ac8:
    // 0x1a5ac8: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x1a5ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_1a5acc:
    // 0x1a5acc: 0x320f809  jalr        $t9
label_1a5ad0:
    if (ctx->pc == 0x1A5AD0u) {
        ctx->pc = 0x1A5AD0u;
            // 0x1a5ad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AD4u;
        goto label_1a5ad4;
    }
    ctx->pc = 0x1A5ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5AD4u);
        ctx->pc = 0x1A5AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5ACCu;
            // 0x1a5ad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5AD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AD4u; }
            if (ctx->pc != 0x1A5AD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5AD4u;
label_1a5ad4:
    // 0x1a5ad4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5ad8:
    // 0x1a5ad8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a5ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a5adc:
    // 0x1a5adc: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a5adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a5ae0:
    // 0x1a5ae0: 0x320f809  jalr        $t9
label_1a5ae4:
    if (ctx->pc == 0x1A5AE4u) {
        ctx->pc = 0x1A5AE4u;
            // 0x1a5ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AE8u;
        goto label_1a5ae8;
    }
    ctx->pc = 0x1A5AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5AE8u);
        ctx->pc = 0x1A5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AE0u;
            // 0x1a5ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AE8u; }
            if (ctx->pc != 0x1A5AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5AE8u;
label_1a5ae8:
    // 0x1a5ae8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1a5aec:
    if (ctx->pc == 0x1A5AECu) {
        ctx->pc = 0x1A5AECu;
            // 0x1a5aec: 0xaf808ba0  sw          $zero, -0x7460($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 0));
        ctx->pc = 0x1A5AF0u;
        goto label_1a5af0;
    }
    ctx->pc = 0x1A5AE8u;
    {
        const bool branch_taken_0x1a5ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AE8u;
            // 0x1a5aec: 0xaf808ba0  sw          $zero, -0x7460($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ae8) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5AF0u;
label_1a5af0:
    // 0x1a5af0: 0x8f838ba0  lw          $v1, -0x7460($gp)
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937504)));
label_1a5af4:
    // 0x1a5af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5af8:
    // 0x1a5af8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1a5afc:
    if (ctx->pc == 0x1A5AFCu) {
        ctx->pc = 0x1A5B00u;
        goto label_1a5b00;
    }
    ctx->pc = 0x1A5AF8u;
    {
        const bool branch_taken_0x1a5af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5af8) {
            ctx->pc = 0x1A5B40u;
            goto label_1a5b40;
        }
    }
    ctx->pc = 0x1A5B00u;
label_1a5b00:
    // 0x1a5b00: 0x8f828ba4  lw          $v0, -0x745C($gp)
    ctx->pc = 0x1a5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937508)));
label_1a5b04:
    // 0x1a5b04: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1a5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_1a5b08:
    // 0x1a5b08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5b0c:
    // 0x1a5b0c: 0xaf828ba4  sw          $v0, -0x745C($gp)
    ctx->pc = 0x1a5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937508), GPR_U32(ctx, 2));
label_1a5b10:
    // 0x1a5b10: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1a5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1a5b14:
    // 0x1a5b14: 0x8f828ba4  lw          $v0, -0x745C($gp)
    ctx->pc = 0x1a5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937508)));
label_1a5b18:
    // 0x1a5b18: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1a5b1c:
    if (ctx->pc == 0x1A5B1Cu) {
        ctx->pc = 0x1A5B20u;
        goto label_1a5b20;
    }
    ctx->pc = 0x1A5B18u;
    {
        const bool branch_taken_0x1a5b18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a5b18) {
            ctx->pc = 0x1A5B38u;
            goto label_1a5b38;
        }
    }
    ctx->pc = 0x1A5B20u;
label_1a5b20:
    // 0x1a5b20: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5b24:
    // 0x1a5b24: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a5b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a5b28:
    // 0x1a5b28: 0x320f809  jalr        $t9
label_1a5b2c:
    if (ctx->pc == 0x1A5B2Cu) {
        ctx->pc = 0x1A5B2Cu;
            // 0x1a5b2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B30u;
        goto label_1a5b30;
    }
    ctx->pc = 0x1A5B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5B30u);
        ctx->pc = 0x1A5B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B28u;
            // 0x1a5b2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B30u; }
            if (ctx->pc != 0x1A5B30u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5B30u;
label_1a5b30:
    // 0x1a5b30: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_1a5b34:
    if (ctx->pc == 0x1A5B34u) {
        ctx->pc = 0x1A5B34u;
            // 0x1a5b34: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1A5B38u;
        goto label_1a5b38;
    }
    ctx->pc = 0x1A5B30u;
    {
        const bool branch_taken_0x1a5b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B30u;
            // 0x1a5b34: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b30) {
            ctx->pc = 0x1A5D7Cu;
            goto label_1a5d7c;
        }
    }
    ctx->pc = 0x1A5B38u;
label_1a5b38:
    // 0x1a5b38: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1a5b3c:
    if (ctx->pc == 0x1A5B3Cu) {
        ctx->pc = 0x1A5B3Cu;
            // 0x1a5b3c: 0xaf808ba0  sw          $zero, -0x7460($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B40u;
        goto label_1a5b40;
    }
    ctx->pc = 0x1A5B38u;
    {
        const bool branch_taken_0x1a5b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B38u;
            // 0x1a5b3c: 0xaf808ba0  sw          $zero, -0x7460($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b38) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5B40u;
label_1a5b40:
    // 0x1a5b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5b44:
    // 0x1a5b44: 0x0  nop
    ctx->pc = 0x1a5b44u;
    // NOP
label_1a5b48:
    // 0x1a5b48: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x1a5b48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5b4c:
    // 0x1a5b4c: 0x0  nop
    ctx->pc = 0x1a5b4cu;
    // NOP
label_1a5b50:
    // 0x1a5b50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1a5b54:
    if (ctx->pc == 0x1A5B54u) {
        ctx->pc = 0x1A5B58u;
        goto label_1a5b58;
    }
    ctx->pc = 0x1A5B50u;
    {
        const bool branch_taken_0x1a5b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5b50) {
            ctx->pc = 0x1A5B68u;
            goto label_1a5b68;
        }
    }
    ctx->pc = 0x1A5B58u;
label_1a5b58:
    // 0x1a5b58: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x1a5b58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5b5c:
    // 0x1a5b5c: 0x0  nop
    ctx->pc = 0x1a5b5cu;
    // NOP
label_1a5b60:
    // 0x1a5b60: 0x45010075  bc1t        . + 4 + (0x75 << 2)
label_1a5b64:
    if (ctx->pc == 0x1A5B64u) {
        ctx->pc = 0x1A5B68u;
        goto label_1a5b68;
    }
    ctx->pc = 0x1A5B60u;
    {
        const bool branch_taken_0x1a5b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5b60) {
            ctx->pc = 0x1A5D38u;
            goto label_1a5d38;
        }
    }
    ctx->pc = 0x1A5B68u;
label_1a5b68:
    // 0x1a5b68: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5b6c:
    // 0x1a5b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b70:
    // 0x1a5b70: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a5b74:
    // 0x1a5b74: 0x320f809  jalr        $t9
label_1a5b78:
    if (ctx->pc == 0x1A5B78u) {
        ctx->pc = 0x1A5B78u;
            // 0x1a5b78: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1A5B7Cu;
        goto label_1a5b7c;
    }
    ctx->pc = 0x1A5B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5B7Cu);
        ctx->pc = 0x1A5B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B74u;
            // 0x1a5b78: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B7Cu; }
            if (ctx->pc != 0x1A5B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5B7Cu;
label_1a5b7c:
    // 0x1a5b7c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1a5b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1a5b80:
    // 0x1a5b80: 0xc047c76  jal         func_11F1D8
label_1a5b84:
    if (ctx->pc == 0x1A5B84u) {
        ctx->pc = 0x1A5B84u;
            // 0x1a5b84: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x1A5B88u;
        goto label_1a5b88;
    }
    ctx->pc = 0x1A5B80u;
    SET_GPR_U32(ctx, 31, 0x1A5B88u);
    ctx->pc = 0x1A5B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B80u;
            // 0x1a5b84: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B88u; }
        if (ctx->pc != 0x1A5B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B88u; }
        if (ctx->pc != 0x1A5B88u) { return; }
    }
    ctx->pc = 0x1A5B88u;
label_1a5b88:
    // 0x1a5b88: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x1a5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5b8c:
    // 0x1a5b8c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1a5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1a5b90:
    // 0x1a5b90: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1a5b94:
    // 0x1a5b94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b98:
    // 0x1a5b98: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1a5b98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_1a5b9c:
    // 0x1a5b9c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1a5b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a5ba0:
    // 0x1a5ba0: 0xc04c2d8  jal         func_130B60
label_1a5ba4:
    if (ctx->pc == 0x1A5BA4u) {
        ctx->pc = 0x1A5BA4u;
            // 0x1a5ba4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x1A5BA8u;
        goto label_1a5ba8;
    }
    ctx->pc = 0x1A5BA0u;
    SET_GPR_U32(ctx, 31, 0x1A5BA8u);
    ctx->pc = 0x1A5BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BA0u;
            // 0x1a5ba4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BA8u; }
        if (ctx->pc != 0x1A5BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BA8u; }
        if (ctx->pc != 0x1A5BA8u) { return; }
    }
    ctx->pc = 0x1A5BA8u;
label_1a5ba8:
    // 0x1a5ba8: 0x4600bb01  sub.s       $f12, $f23, $f0
    ctx->pc = 0x1a5ba8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_1a5bac:
    // 0x1a5bac: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1a5bacu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_1a5bb0:
    // 0x1a5bb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5bb4:
    // 0x1a5bb4: 0x0  nop
    ctx->pc = 0x1a5bb4u;
    // NOP
label_1a5bb8:
    // 0x1a5bb8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1a5bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5bbc:
    // 0x1a5bbc: 0x0  nop
    ctx->pc = 0x1a5bbcu;
    // NOP
label_1a5bc0:
    // 0x1a5bc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a5bc4:
    if (ctx->pc == 0x1A5BC4u) {
        ctx->pc = 0x1A5BC8u;
        goto label_1a5bc8;
    }
    ctx->pc = 0x1A5BC0u;
    {
        const bool branch_taken_0x1a5bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5bc0) {
            ctx->pc = 0x1A5BCCu;
            goto label_1a5bcc;
        }
    }
    ctx->pc = 0x1A5BC8u;
label_1a5bc8:
    // 0x1a5bc8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1a5bc8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1a5bcc:
    // 0x1a5bcc: 0xc0a248c  jal         func_289230
label_1a5bd0:
    if (ctx->pc == 0x1A5BD0u) {
        ctx->pc = 0x1A5BD4u;
        goto label_1a5bd4;
    }
    ctx->pc = 0x1A5BCCu;
    SET_GPR_U32(ctx, 31, 0x1A5BD4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BD4u; }
        if (ctx->pc != 0x1A5BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BD4u; }
        if (ctx->pc != 0x1A5BD4u) { return; }
    }
    ctx->pc = 0x1A5BD4u;
label_1a5bd4:
    // 0x1a5bd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5bd8:
    // 0x1a5bd8: 0x0  nop
    ctx->pc = 0x1a5bd8u;
    // NOP
label_1a5bdc:
    // 0x1a5bdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a5bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a5be0:
    // 0x1a5be0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a5be4:
    // 0x1a5be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5be8:
    // 0x1a5be8: 0x0  nop
    ctx->pc = 0x1a5be8u;
    // NOP
label_1a5bec:
    // 0x1a5bec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5bf0:
    // 0x1a5bf0: 0x0  nop
    ctx->pc = 0x1a5bf0u;
    // NOP
label_1a5bf4:
    // 0x1a5bf4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1a5bf8:
    if (ctx->pc == 0x1A5BF8u) {
        ctx->pc = 0x1A5BFCu;
        goto label_1a5bfc;
    }
    ctx->pc = 0x1A5BF4u;
    {
        const bool branch_taken_0x1a5bf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5bf4) {
            ctx->pc = 0x1A5C20u;
            goto label_1a5c20;
        }
    }
    ctx->pc = 0x1A5BFCu;
label_1a5bfc:
    // 0x1a5bfc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1a5bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c00:
    // 0x1a5c00: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a5c04:
    // 0x1a5c04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5c08:
    // 0x1a5c08: 0x0  nop
    ctx->pc = 0x1a5c08u;
    // NOP
label_1a5c0c:
    // 0x1a5c0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a5c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a5c10:
    // 0x1a5c10: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1a5c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1a5c14:
    // 0x1a5c14: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1a5c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c18:
    // 0x1a5c18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a5c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a5c1c:
    // 0x1a5c1c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1a5c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1a5c20:
    // 0x1a5c20: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5c24:
    // 0x1a5c24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a5c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5c28:
    // 0x1a5c28: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a5c28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a5c2c:
    // 0x1a5c2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c30:
    // 0x1a5c30: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a5c34:
    // 0x1a5c34: 0x320f809  jalr        $t9
label_1a5c38:
    if (ctx->pc == 0x1A5C38u) {
        ctx->pc = 0x1A5C38u;
            // 0x1a5c38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A5C3Cu;
        goto label_1a5c3c;
    }
    ctx->pc = 0x1A5C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5C3Cu);
        ctx->pc = 0x1A5C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C34u;
            // 0x1a5c38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C3Cu; }
            if (ctx->pc != 0x1A5C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5C3Cu;
label_1a5c3c:
    // 0x1a5c3c: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x1a5c3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_1a5c40:
    // 0x1a5c40: 0xc047cc0  jal         func_11F300
label_1a5c44:
    if (ctx->pc == 0x1A5C44u) {
        ctx->pc = 0x1A5C44u;
            // 0x1a5c44: 0x4616b31c  madd.s      $f12, $f22, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
        ctx->pc = 0x1A5C48u;
        goto label_1a5c48;
    }
    ctx->pc = 0x1A5C40u;
    SET_GPR_U32(ctx, 31, 0x1A5C48u);
    ctx->pc = 0x1A5C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C40u;
            // 0x1a5c44: 0x4616b31c  madd.s      $f12, $f22, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C48u; }
        if (ctx->pc != 0x1A5C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C48u; }
        if (ctx->pc != 0x1A5C48u) { return; }
    }
    ctx->pc = 0x1A5C48u;
label_1a5c48:
    // 0x1a5c48: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1a5c4c:
    // 0x1a5c4c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1a5c4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1a5c50:
    // 0x1a5c50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a5c54:
    // 0x1a5c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5c58:
    // 0x1a5c58: 0x0  nop
    ctx->pc = 0x1a5c58u;
    // NOP
label_1a5c5c:
    // 0x1a5c5c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a5c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5c60:
    // 0x1a5c60: 0x0  nop
    ctx->pc = 0x1a5c60u;
    // NOP
label_1a5c64:
    // 0x1a5c64: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1a5c68:
    if (ctx->pc == 0x1A5C68u) {
        ctx->pc = 0x1A5C6Cu;
        goto label_1a5c6c;
    }
    ctx->pc = 0x1A5C64u;
    {
        const bool branch_taken_0x1a5c64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5c64) {
            ctx->pc = 0x1A5CC4u;
            goto label_1a5cc4;
        }
    }
    ctx->pc = 0x1A5C6Cu;
label_1a5c6c:
    // 0x1a5c6c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5c70:
    // 0x1a5c70: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5c74:
    // 0x1a5c74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c78:
    // 0x1a5c78: 0x24a55b58  addiu       $a1, $a1, 0x5B58
    ctx->pc = 0x1a5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
label_1a5c7c:
    // 0x1a5c7c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5c80:
    // 0x1a5c80: 0x320f809  jalr        $t9
label_1a5c84:
    if (ctx->pc == 0x1A5C84u) {
        ctx->pc = 0x1A5C84u;
            // 0x1a5c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C88u;
        goto label_1a5c88;
    }
    ctx->pc = 0x1A5C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5C88u);
        ctx->pc = 0x1A5C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C80u;
            // 0x1a5c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C88u; }
            if (ctx->pc != 0x1A5C88u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5C88u;
label_1a5c88:
    // 0x1a5c88: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1a5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_1a5c8c:
    // 0x1a5c8c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a5c90:
    // 0x1a5c90: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a5c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1a5c94:
    // 0x1a5c94: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a5c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a5c98:
    // 0x1a5c98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a5c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5c9c:
    // 0x1a5c9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5ca0:
    // 0x1a5ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5ca4:
    // 0x1a5ca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ca8:
    // 0x1a5ca8: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x1a5ca8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
label_1a5cac:
    // 0x1a5cac: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a5cb0:
    // 0x1a5cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a5cb4:
    // 0x1a5cb4: 0x320f809  jalr        $t9
label_1a5cb8:
    if (ctx->pc == 0x1A5CB8u) {
        ctx->pc = 0x1A5CB8u;
            // 0x1a5cb8: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x1A5CBCu;
        goto label_1a5cbc;
    }
    ctx->pc = 0x1A5CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5CBCu);
        ctx->pc = 0x1A5CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CB4u;
            // 0x1a5cb8: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5CBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CBCu; }
            if (ctx->pc != 0x1A5CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5CBCu;
label_1a5cbc:
    // 0x1a5cbc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1a5cc0:
    if (ctx->pc == 0x1A5CC0u) {
        ctx->pc = 0x1A5CC4u;
        goto label_1a5cc4;
    }
    ctx->pc = 0x1A5CBCu;
    {
        const bool branch_taken_0x1a5cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cbc) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5CC4u;
label_1a5cc4:
    // 0x1a5cc4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_1a5cc8:
    if (ctx->pc == 0x1A5CC8u) {
        ctx->pc = 0x1A5CCCu;
        goto label_1a5ccc;
    }
    ctx->pc = 0x1A5CC4u;
    {
        const bool branch_taken_0x1a5cc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cc4) {
            ctx->pc = 0x1A5CF0u;
            goto label_1a5cf0;
        }
    }
    ctx->pc = 0x1A5CCCu;
label_1a5ccc:
    // 0x1a5ccc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5cd0:
    // 0x1a5cd0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5cd4:
    // 0x1a5cd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cd8:
    // 0x1a5cd8: 0x24a55b60  addiu       $a1, $a1, 0x5B60
    ctx->pc = 0x1a5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23392));
label_1a5cdc:
    // 0x1a5cdc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5ce0:
    // 0x1a5ce0: 0x320f809  jalr        $t9
label_1a5ce4:
    if (ctx->pc == 0x1A5CE4u) {
        ctx->pc = 0x1A5CE4u;
            // 0x1a5ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CE8u;
        goto label_1a5ce8;
    }
    ctx->pc = 0x1A5CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5CE8u);
        ctx->pc = 0x1A5CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CE0u;
            // 0x1a5ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CE8u; }
            if (ctx->pc != 0x1A5CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5CE8u;
label_1a5ce8:
    // 0x1a5ce8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a5cec:
    if (ctx->pc == 0x1A5CECu) {
        ctx->pc = 0x1A5CECu;
            // 0x1a5cec: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1A5CF0u;
        goto label_1a5cf0;
    }
    ctx->pc = 0x1A5CE8u;
    {
        const bool branch_taken_0x1a5ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CE8u;
            // 0x1a5cec: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ce8) {
            ctx->pc = 0x1A5D10u;
            goto label_1a5d10;
        }
    }
    ctx->pc = 0x1A5CF0u;
label_1a5cf0:
    // 0x1a5cf0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5cf4:
    // 0x1a5cf4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5cf8:
    // 0x1a5cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cfc:
    // 0x1a5cfc: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x1a5cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
label_1a5d00:
    // 0x1a5d00: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5d04:
    // 0x1a5d04: 0x320f809  jalr        $t9
label_1a5d08:
    if (ctx->pc == 0x1A5D08u) {
        ctx->pc = 0x1A5D08u;
            // 0x1a5d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D0Cu;
        goto label_1a5d0c;
    }
    ctx->pc = 0x1A5D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5D0Cu);
        ctx->pc = 0x1A5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D04u;
            // 0x1a5d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D0Cu; }
            if (ctx->pc != 0x1A5D0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D0Cu;
label_1a5d0c:
    // 0x1a5d0c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5d10:
    // 0x1a5d10: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x1a5d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_1a5d14:
    // 0x1a5d14: 0x320f809  jalr        $t9
label_1a5d18:
    if (ctx->pc == 0x1A5D18u) {
        ctx->pc = 0x1A5D18u;
            // 0x1a5d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D1Cu;
        goto label_1a5d1c;
    }
    ctx->pc = 0x1A5D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5D1Cu);
        ctx->pc = 0x1A5D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D14u;
            // 0x1a5d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D1Cu; }
            if (ctx->pc != 0x1A5D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D1Cu;
label_1a5d1c:
    // 0x1a5d1c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5d20:
    // 0x1a5d20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a5d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a5d24:
    // 0x1a5d24: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a5d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a5d28:
    // 0x1a5d28: 0x320f809  jalr        $t9
label_1a5d2c:
    if (ctx->pc == 0x1A5D2Cu) {
        ctx->pc = 0x1A5D2Cu;
            // 0x1a5d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D30u;
        goto label_1a5d30;
    }
    ctx->pc = 0x1A5D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5D30u);
        ctx->pc = 0x1A5D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D28u;
            // 0x1a5d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D30u; }
            if (ctx->pc != 0x1A5D30u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D30u;
label_1a5d30:
    // 0x1a5d30: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a5d34:
    if (ctx->pc == 0x1A5D34u) {
        ctx->pc = 0x1A5D38u;
        goto label_1a5d38;
    }
    ctx->pc = 0x1A5D30u;
    {
        const bool branch_taken_0x1a5d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d30) {
            ctx->pc = 0x1A5D78u;
            goto label_1a5d78;
        }
    }
    ctx->pc = 0x1A5D38u;
label_1a5d38:
    // 0x1a5d38: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5d3c:
    // 0x1a5d3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5d40:
    // 0x1a5d40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d44:
    // 0x1a5d44: 0x24a55af8  addiu       $a1, $a1, 0x5AF8
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23288));
label_1a5d48:
    // 0x1a5d48: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5d4c:
    // 0x1a5d4c: 0x320f809  jalr        $t9
label_1a5d50:
    if (ctx->pc == 0x1A5D50u) {
        ctx->pc = 0x1A5D50u;
            // 0x1a5d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D54u;
        goto label_1a5d54;
    }
    ctx->pc = 0x1A5D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5D54u);
        ctx->pc = 0x1A5D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D4Cu;
            // 0x1a5d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D54u; }
            if (ctx->pc != 0x1A5D54u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D54u;
label_1a5d54:
    // 0x1a5d54: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5d58:
    // 0x1a5d58: 0x8f3900c0  lw          $t9, 0xC0($t9)
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 192)));
label_1a5d5c:
    // 0x1a5d5c: 0x320f809  jalr        $t9
label_1a5d60:
    if (ctx->pc == 0x1A5D60u) {
        ctx->pc = 0x1A5D60u;
            // 0x1a5d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D64u;
        goto label_1a5d64;
    }
    ctx->pc = 0x1A5D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5D64u);
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D5Cu;
            // 0x1a5d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D64u; }
            if (ctx->pc != 0x1A5D64u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D64u;
label_1a5d64:
    // 0x1a5d64: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5d68:
    // 0x1a5d68: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a5d68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a5d6c:
    // 0x1a5d6c: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1a5d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1a5d70:
    // 0x1a5d70: 0x320f809  jalr        $t9
label_1a5d74:
    if (ctx->pc == 0x1A5D74u) {
        ctx->pc = 0x1A5D74u;
            // 0x1a5d74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D78u;
        goto label_1a5d78;
    }
    ctx->pc = 0x1A5D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5D78u);
        ctx->pc = 0x1A5D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D70u;
            // 0x1a5d74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D78u; }
            if (ctx->pc != 0x1A5D78u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5D78u;
label_1a5d78:
    // 0x1a5d78: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1a5d7c:
    // 0x1a5d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d80:
    // 0x1a5d80: 0xc049c86  jal         func_127218
label_1a5d84:
    if (ctx->pc == 0x1A5D84u) {
        ctx->pc = 0x1A5D84u;
            // 0x1a5d84: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1A5D88u;
        goto label_1a5d88;
    }
    ctx->pc = 0x1A5D80u;
    SET_GPR_U32(ctx, 31, 0x1A5D88u);
    ctx->pc = 0x1A5D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D80u;
            // 0x1a5d84: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D88u; }
        if (ctx->pc != 0x1A5D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D88u; }
        if (ctx->pc != 0x1A5D88u) { return; }
    }
    ctx->pc = 0x1A5D88u;
label_1a5d88:
    // 0x1a5d88: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1a5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1a5d8c:
    // 0x1a5d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d90:
    // 0x1a5d90: 0xc049c86  jal         func_127218
label_1a5d94:
    if (ctx->pc == 0x1A5D94u) {
        ctx->pc = 0x1A5D94u;
            // 0x1a5d94: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x1A5D98u;
        goto label_1a5d98;
    }
    ctx->pc = 0x1A5D90u;
    SET_GPR_U32(ctx, 31, 0x1A5D98u);
    ctx->pc = 0x1A5D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D90u;
            // 0x1a5d94: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D98u; }
        if (ctx->pc != 0x1A5D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D98u; }
        if (ctx->pc != 0x1A5D98u) { return; }
    }
    ctx->pc = 0x1A5D98u;
label_1a5d98:
    // 0x1a5d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d9c:
    // 0x1a5d9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a5da0:
    // 0x1a5da0: 0xc0690dc  jal         func_1A4370
label_1a5da4:
    if (ctx->pc == 0x1A5DA4u) {
        ctx->pc = 0x1A5DA4u;
            // 0x1a5da4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1A5DA8u;
        goto label_1a5da8;
    }
    ctx->pc = 0x1A5DA0u;
    SET_GPR_U32(ctx, 31, 0x1A5DA8u);
    ctx->pc = 0x1A5DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DA0u;
            // 0x1a5da4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4370u;
    if (runtime->hasFunction(0x1A4370u)) {
        auto targetFn = runtime->lookupFunction(0x1A4370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DA8u; }
        if (ctx->pc != 0x1A5DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMoveChara__FP6CScenePfP17EditMoveCharaInfo_0x1a4370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DA8u; }
        if (ctx->pc != 0x1A5DA8u) { return; }
    }
    ctx->pc = 0x1A5DA8u;
label_1a5da8:
    // 0x1a5da8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1a5dac:
    // 0x1a5dac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1a5db0:
    if (ctx->pc == 0x1A5DB0u) {
        ctx->pc = 0x1A5DB4u;
        goto label_1a5db4;
    }
    ctx->pc = 0x1A5DACu;
    {
        const bool branch_taken_0x1a5dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5dac) {
            ctx->pc = 0x1A5DF8u;
            goto label_1a5df8;
        }
    }
    ctx->pc = 0x1A5DB4u;
label_1a5db4:
    // 0x1a5db4: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1a5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1a5db8:
    // 0x1a5db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5dbc:
    // 0x1a5dbc: 0xaf828ba8  sw          $v0, -0x7458($gp)
    ctx->pc = 0x1a5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U32(ctx, 2));
label_1a5dc0:
    // 0x1a5dc0: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1a5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1a5dc4:
    // 0x1a5dc4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1a5dc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a5dc8:
    // 0x1a5dc8: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_1a5dcc:
    if (ctx->pc == 0x1A5DCCu) {
        ctx->pc = 0x1A5DD0u;
        goto label_1a5dd0;
    }
    ctx->pc = 0x1A5DC8u;
    {
        const bool branch_taken_0x1a5dc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5dc8) {
            ctx->pc = 0x1A5DFCu;
            goto label_1a5dfc;
        }
    }
    ctx->pc = 0x1A5DD0u;
label_1a5dd0:
    // 0x1a5dd0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5dd4:
    // 0x1a5dd4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5dd8:
    // 0x1a5dd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ddc:
    // 0x1a5ddc: 0x24a55b70  addiu       $a1, $a1, 0x5B70
    ctx->pc = 0x1a5ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23408));
label_1a5de0:
    // 0x1a5de0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5de4:
    // 0x1a5de4: 0x320f809  jalr        $t9
label_1a5de8:
    if (ctx->pc == 0x1A5DE8u) {
        ctx->pc = 0x1A5DE8u;
            // 0x1a5de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DECu;
        goto label_1a5dec;
    }
    ctx->pc = 0x1A5DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5DECu);
        ctx->pc = 0x1A5DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DE4u;
            // 0x1a5de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5DECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DECu; }
            if (ctx->pc != 0x1A5DECu) { return; }
        }
        }
    }
    ctx->pc = 0x1A5DECu;
label_1a5dec:
    // 0x1a5dec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5df0:
    // 0x1a5df0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5df4:
    if (ctx->pc == 0x1A5DF4u) {
        ctx->pc = 0x1A5DF4u;
            // 0x1a5df4: 0xaf828ba8  sw          $v0, -0x7458($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U32(ctx, 2));
        ctx->pc = 0x1A5DF8u;
        goto label_1a5df8;
    }
    ctx->pc = 0x1A5DF0u;
    {
        const bool branch_taken_0x1a5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DF0u;
            // 0x1a5df4: 0xaf828ba8  sw          $v0, -0x7458($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5df0) {
            ctx->pc = 0x1A5DFCu;
            goto label_1a5dfc;
        }
    }
    ctx->pc = 0x1A5DF8u;
label_1a5df8:
    // 0x1a5df8: 0xaf808ba8  sw          $zero, -0x7458($gp)
    ctx->pc = 0x1a5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U32(ctx, 0));
label_1a5dfc:
    // 0x1a5dfc: 0x8f828ba0  lw          $v0, -0x7460($gp)
    ctx->pc = 0x1a5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937504)));
label_1a5e00:
    // 0x1a5e00: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1a5e04:
    if (ctx->pc == 0x1A5E04u) {
        ctx->pc = 0x1A5E08u;
        goto label_1a5e08;
    }
    ctx->pc = 0x1A5E00u;
    {
        const bool branch_taken_0x1a5e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e00) {
            ctx->pc = 0x1A5E40u;
            goto label_1a5e40;
        }
    }
    ctx->pc = 0x1A5E08u;
label_1a5e08:
    // 0x1a5e08: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x1a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_1a5e0c:
    // 0x1a5e0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a5e10:
    if (ctx->pc == 0x1A5E10u) {
        ctx->pc = 0x1A5E14u;
        goto label_1a5e14;
    }
    ctx->pc = 0x1A5E0Cu;
    {
        const bool branch_taken_0x1a5e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e0c) {
            ctx->pc = 0x1A5E40u;
            goto label_1a5e40;
        }
    }
    ctx->pc = 0x1A5E14u;
label_1a5e14:
    // 0x1a5e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5e18:
    // 0x1a5e18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a5e1c:
    // 0x1a5e1c: 0xaf838ba0  sw          $v1, -0x7460($gp)
    ctx->pc = 0x1a5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 3));
label_1a5e20:
    // 0x1a5e20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5e24:
    // 0x1a5e24: 0xaf828ba4  sw          $v0, -0x745C($gp)
    ctx->pc = 0x1a5e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937508), GPR_U32(ctx, 2));
label_1a5e28:
    // 0x1a5e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e2c:
    // 0x1a5e2c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5e30:
    // 0x1a5e30: 0x24a55b78  addiu       $a1, $a1, 0x5B78
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
label_1a5e34:
    // 0x1a5e34: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1a5e38:
    // 0x1a5e38: 0x320f809  jalr        $t9
label_1a5e3c:
    if (ctx->pc == 0x1A5E3Cu) {
        ctx->pc = 0x1A5E3Cu;
            // 0x1a5e3c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A5E40u;
        goto label_1a5e40;
    }
    ctx->pc = 0x1A5E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5E40u);
        ctx->pc = 0x1A5E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E38u;
            // 0x1a5e3c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E40u; }
            if (ctx->pc != 0x1A5E40u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5E40u;
label_1a5e40:
    // 0x1a5e40: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5e44:
    // 0x1a5e44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e48:
    // 0x1a5e48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a5e4c:
    // 0x1a5e4c: 0x320f809  jalr        $t9
label_1a5e50:
    if (ctx->pc == 0x1A5E50u) {
        ctx->pc = 0x1A5E50u;
            // 0x1a5e50: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1A5E54u;
        goto label_1a5e54;
    }
    ctx->pc = 0x1A5E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5E54u);
        ctx->pc = 0x1A5E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E4Cu;
            // 0x1a5e50: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E54u; }
            if (ctx->pc != 0x1A5E54u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5E54u;
label_1a5e54:
    // 0x1a5e54: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5e58:
    // 0x1a5e58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e5c:
    // 0x1a5e5c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a5e60:
    // 0x1a5e60: 0x320f809  jalr        $t9
label_1a5e64:
    if (ctx->pc == 0x1A5E64u) {
        ctx->pc = 0x1A5E64u;
            // 0x1a5e64: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x1A5E68u;
        goto label_1a5e68;
    }
    ctx->pc = 0x1A5E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5E68u);
        ctx->pc = 0x1A5E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E60u;
            // 0x1a5e64: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E68u; }
            if (ctx->pc != 0x1A5E68u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5E68u;
label_1a5e68:
    // 0x1a5e68: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1a5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1a5e6c:
    // 0x1a5e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e70:
    // 0x1a5e70: 0xc049c86  jal         func_127218
label_1a5e74:
    if (ctx->pc == 0x1A5E74u) {
        ctx->pc = 0x1A5E74u;
            // 0x1a5e74: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1A5E78u;
        goto label_1a5e78;
    }
    ctx->pc = 0x1A5E70u;
    SET_GPR_U32(ctx, 31, 0x1A5E78u);
    ctx->pc = 0x1A5E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E70u;
            // 0x1a5e74: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E78u; }
        if (ctx->pc != 0x1A5E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E78u; }
        if (ctx->pc != 0x1A5E78u) { return; }
    }
    ctx->pc = 0x1A5E78u;
label_1a5e78:
    // 0x1a5e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e7c:
    // 0x1a5e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e80:
    // 0x1a5e80: 0xc0bb538  jal         func_2ED4E0
label_1a5e84:
    if (ctx->pc == 0x1A5E84u) {
        ctx->pc = 0x1A5E84u;
            // 0x1a5e84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E88u;
        goto label_1a5e88;
    }
    ctx->pc = 0x1A5E80u;
    SET_GPR_U32(ctx, 31, 0x1A5E88u);
    ctx->pc = 0x1A5E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E80u;
            // 0x1a5e84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E88u; }
        if (ctx->pc != 0x1A5E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E88u; }
        if (ctx->pc != 0x1A5E88u) { return; }
    }
    ctx->pc = 0x1A5E88u;
label_1a5e88:
    // 0x1a5e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a5e8c:
    if (ctx->pc == 0x1A5E8Cu) {
        ctx->pc = 0x1A5E8Cu;
            // 0x1a5e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E90u;
        goto label_1a5e90;
    }
    ctx->pc = 0x1A5E88u;
    {
        const bool branch_taken_0x1a5e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E88u;
            // 0x1a5e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e88) {
            ctx->pc = 0x1A5E98u;
            goto label_1a5e98;
        }
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5e94:
    // 0x1a5e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e98:
    // 0x1a5e98: 0xc0bb538  jal         func_2ED4E0
label_1a5e9c:
    if (ctx->pc == 0x1A5E9Cu) {
        ctx->pc = 0x1A5E9Cu;
            // 0x1a5e9c: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->pc = 0x1A5EA0u;
        goto label_1a5ea0;
    }
    ctx->pc = 0x1A5E98u;
    SET_GPR_U32(ctx, 31, 0x1A5EA0u);
    ctx->pc = 0x1A5E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E98u;
            // 0x1a5e9c: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EA0u; }
        if (ctx->pc != 0x1A5EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EA0u; }
        if (ctx->pc != 0x1A5EA0u) { return; }
    }
    ctx->pc = 0x1A5EA0u;
label_1a5ea0:
    // 0x1a5ea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a5ea4:
    if (ctx->pc == 0x1A5EA4u) {
        ctx->pc = 0x1A5EA4u;
            // 0x1a5ea4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EA8u;
        goto label_1a5ea8;
    }
    ctx->pc = 0x1A5EA0u;
    {
        const bool branch_taken_0x1a5ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EA0u;
            // 0x1a5ea4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ea0) {
            ctx->pc = 0x1A5EB0u;
            goto label_1a5eb0;
        }
    }
    ctx->pc = 0x1A5EA8u;
label_1a5ea8:
    // 0x1a5ea8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1a5ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5eac:
    // 0x1a5eac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a5eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5eb0:
    // 0x1a5eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5eb4:
    // 0x1a5eb4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1a5eb8:
    // 0x1a5eb8: 0xc0b1f98  jal         func_2C7E60
label_1a5ebc:
    if (ctx->pc == 0x1A5EBCu) {
        ctx->pc = 0x1A5EBCu;
            // 0x1a5ebc: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1A5EC0u;
        goto label_1a5ec0;
    }
    ctx->pc = 0x1A5EB8u;
    SET_GPR_U32(ctx, 31, 0x1A5EC0u);
    ctx->pc = 0x1A5EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EB8u;
            // 0x1a5ebc: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7E60u;
    if (runtime->hasFunction(0x2C7E60u)) {
        auto targetFn = runtime->lookupFunction(0x2C7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EC0u; }
        if (ctx->pc != 0x1A5EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapEvent__6CSceneFPfiP15CSceneEventData_0x2c7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EC0u; }
        if (ctx->pc != 0x1A5EC0u) { return; }
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1a5ec4:
    if (ctx->pc == 0x1A5EC4u) {
        ctx->pc = 0x1A5EC8u;
        goto label_1a5ec8;
    }
    ctx->pc = 0x1A5EC0u;
    {
        const bool branch_taken_0x1a5ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ec0) {
            ctx->pc = 0x1A5F7Cu;
            goto label_1a5f7c;
        }
    }
    ctx->pc = 0x1A5EC8u;
label_1a5ec8:
    // 0x1a5ec8: 0x8fb00238  lw          $s0, 0x238($sp)
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_1a5ecc:
    // 0x1a5ecc: 0xc0698d8  jal         func_1A6360
label_1a5ed0:
    if (ctx->pc == 0x1A5ED0u) {
        ctx->pc = 0x1A5ED0u;
            // 0x1a5ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5ED4u;
        goto label_1a5ed4;
    }
    ctx->pc = 0x1A5ECCu;
    SET_GPR_U32(ctx, 31, 0x1A5ED4u);
    ctx->pc = 0x1A5ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5ECCu;
            // 0x1a5ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6360u;
    if (runtime->hasFunction(0x1A6360u)) {
        auto targetFn = runtime->lookupFunction(0x1A6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5ED4u; }
        if (ctx->pc != 0x1A5ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetViewMode__FP6CScene_0x1a6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5ED4u; }
        if (ctx->pc != 0x1A5ED4u) { return; }
    }
    ctx->pc = 0x1A5ED4u;
label_1a5ed4:
    // 0x1a5ed4: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_1a5ed8:
    // 0x1a5ed8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1a5edc:
    // 0x1a5edc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a5ee0:
    if (ctx->pc == 0x1A5EE0u) {
        ctx->pc = 0x1A5EE4u;
        goto label_1a5ee4;
    }
    ctx->pc = 0x1A5EDCu;
    {
        const bool branch_taken_0x1a5edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5edc) {
            ctx->pc = 0x1A5EF8u;
            goto label_1a5ef8;
        }
    }
    ctx->pc = 0x1A5EE4u;
label_1a5ee4:
    // 0x1a5ee4: 0xc7ad02c8  lwc1        $f13, 0x2C8($sp)
    ctx->pc = 0x1a5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a5ee8:
    // 0x1a5ee8: 0xc047c76  jal         func_11F1D8
label_1a5eec:
    if (ctx->pc == 0x1A5EECu) {
        ctx->pc = 0x1A5EECu;
            // 0x1a5eec: 0xc7ac02c0  lwc1        $f12, 0x2C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A5EF0u;
        goto label_1a5ef0;
    }
    ctx->pc = 0x1A5EE8u;
    SET_GPR_U32(ctx, 31, 0x1A5EF0u);
    ctx->pc = 0x1A5EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EE8u;
            // 0x1a5eec: 0xc7ac02c0  lwc1        $f12, 0x2C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EF0u; }
        if (ctx->pc != 0x1A5EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EF0u; }
        if (ctx->pc != 0x1A5EF0u) { return; }
    }
    ctx->pc = 0x1A5EF0u;
label_1a5ef0:
    // 0x1a5ef0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a5ef4:
    // 0x1a5ef4: 0x3450869f  ori         $s0, $v0, 0x869F
    ctx->pc = 0x1a5ef4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_1a5ef8:
    // 0x1a5ef8: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_1a5efc:
    // 0x1a5efc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1a5efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1a5f00:
    // 0x1a5f00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a5f04:
    if (ctx->pc == 0x1A5F04u) {
        ctx->pc = 0x1A5F04u;
            // 0x1a5f04: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x1A5F08u;
        goto label_1a5f08;
    }
    ctx->pc = 0x1A5F00u;
    {
        const bool branch_taken_0x1a5f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F00u;
            // 0x1a5f04: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f00) {
            ctx->pc = 0x1A5F24u;
            goto label_1a5f24;
        }
    }
    ctx->pc = 0x1A5F08u;
label_1a5f08:
    // 0x1a5f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5f0c:
    // 0x1a5f0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5f10:
    // 0x1a5f10: 0xc0699bc  jal         func_1A66F0
label_1a5f14:
    if (ctx->pc == 0x1A5F14u) {
        ctx->pc = 0x1A5F14u;
            // 0x1a5f14: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1A5F18u;
        goto label_1a5f18;
    }
    ctx->pc = 0x1A5F10u;
    SET_GPR_U32(ctx, 31, 0x1A5F18u);
    ctx->pc = 0x1A5F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F10u;
            // 0x1a5f14: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A66F0u;
    if (runtime->hasFunction(0x1A66F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A66F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F18u; }
        if (ctx->pc != 0x1A5F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLadder__FiP6CSceneP15CSceneEventData_0x1a66f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F18u; }
        if (ctx->pc != 0x1A5F18u) { return; }
    }
    ctx->pc = 0x1A5F18u;
label_1a5f18:
    // 0x1a5f18: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a5f1c:
    if (ctx->pc == 0x1A5F1Cu) {
        ctx->pc = 0x1A5F20u;
        goto label_1a5f20;
    }
    ctx->pc = 0x1A5F18u;
    {
        const bool branch_taken_0x1a5f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f18) {
            ctx->pc = 0x1A5F7Cu;
            goto label_1a5f7c;
        }
    }
    ctx->pc = 0x1A5F20u;
label_1a5f20:
    // 0x1a5f20: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1a5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1a5f24:
    // 0x1a5f24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a5f28:
    if (ctx->pc == 0x1A5F28u) {
        ctx->pc = 0x1A5F28u;
            // 0x1a5f28: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x1A5F2Cu;
        goto label_1a5f2c;
    }
    ctx->pc = 0x1A5F24u;
    {
        const bool branch_taken_0x1a5f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F24u;
            // 0x1a5f28: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f24) {
            ctx->pc = 0x1A5F48u;
            goto label_1a5f48;
        }
    }
    ctx->pc = 0x1A5F2Cu;
label_1a5f2c:
    // 0x1a5f2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5f30:
    // 0x1a5f30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5f34:
    // 0x1a5f34: 0xc0699bc  jal         func_1A66F0
label_1a5f38:
    if (ctx->pc == 0x1A5F38u) {
        ctx->pc = 0x1A5F38u;
            // 0x1a5f38: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1A5F3Cu;
        goto label_1a5f3c;
    }
    ctx->pc = 0x1A5F34u;
    SET_GPR_U32(ctx, 31, 0x1A5F3Cu);
    ctx->pc = 0x1A5F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F34u;
            // 0x1a5f38: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A66F0u;
    if (runtime->hasFunction(0x1A66F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A66F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F3Cu; }
        if (ctx->pc != 0x1A5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLadder__FiP6CSceneP15CSceneEventData_0x1a66f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F3Cu; }
        if (ctx->pc != 0x1A5F3Cu) { return; }
    }
    ctx->pc = 0x1A5F3Cu;
label_1a5f3c:
    // 0x1a5f3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a5f40:
    if (ctx->pc == 0x1A5F40u) {
        ctx->pc = 0x1A5F44u;
        goto label_1a5f44;
    }
    ctx->pc = 0x1A5F3Cu;
    {
        const bool branch_taken_0x1a5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f3c) {
            ctx->pc = 0x1A5F7Cu;
            goto label_1a5f7c;
        }
    }
    ctx->pc = 0x1A5F44u;
label_1a5f44:
    // 0x1a5f44: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1a5f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1a5f48:
    // 0x1a5f48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5f4c:
    if (ctx->pc == 0x1A5F4Cu) {
        ctx->pc = 0x1A5F4Cu;
            // 0x1a5f4c: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x1A5F50u;
        goto label_1a5f50;
    }
    ctx->pc = 0x1A5F48u;
    {
        const bool branch_taken_0x1a5f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F48u;
            // 0x1a5f4c: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f48) {
            ctx->pc = 0x1A5F5Cu;
            goto label_1a5f5c;
        }
    }
    ctx->pc = 0x1A5F50u;
label_1a5f50:
    // 0x1a5f50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a5f54:
    // 0x1a5f54: 0x3450869f  ori         $s0, $v0, 0x869F
    ctx->pc = 0x1a5f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_1a5f58:
    // 0x1a5f58: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1a5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1a5f5c:
    // 0x1a5f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5f60:
    if (ctx->pc == 0x1A5F60u) {
        ctx->pc = 0x1A5F60u;
            // 0x1a5f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F64u;
        goto label_1a5f64;
    }
    ctx->pc = 0x1A5F5Cu;
    {
        const bool branch_taken_0x1a5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F5Cu;
            // 0x1a5f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f5c) {
            ctx->pc = 0x1A5F70u;
            goto label_1a5f70;
        }
    }
    ctx->pc = 0x1A5F64u;
label_1a5f64:
    // 0x1a5f64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a5f68:
    // 0x1a5f68: 0x3450869f  ori         $s0, $v0, 0x869F
    ctx->pc = 0x1a5f68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_1a5f6c:
    // 0x1a5f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5f70:
    // 0x1a5f70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5f74:
    // 0x1a5f74: 0xc0b1f3c  jal         func_2C7CF0
label_1a5f78:
    if (ctx->pc == 0x1A5F78u) {
        ctx->pc = 0x1A5F78u;
            // 0x1a5f78: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1A5F7Cu;
        goto label_1a5f7c;
    }
    ctx->pc = 0x1A5F74u;
    SET_GPR_U32(ctx, 31, 0x1A5F7Cu);
    ctx->pc = 0x1A5F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F74u;
            // 0x1a5f78: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F7Cu; }
        if (ctx->pc != 0x1A5F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F7Cu; }
        if (ctx->pc != 0x1A5F7Cu) { return; }
    }
    ctx->pc = 0x1A5F7Cu;
label_1a5f7c:
    // 0x1a5f7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a5f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5f80:
    // 0x1a5f80: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1a5f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1a5f84:
    // 0x1a5f84: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a5f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5f88:
    // 0x1a5f88: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1a5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1a5f8c:
    // 0x1a5f8c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a5f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5f90:
    // 0x1a5f90: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1a5f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a5f94:
    // 0x1a5f94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a5f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5f98:
    // 0x1a5f98: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a5f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a5f9c:
    // 0x1a5f9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5fa0:
    // 0x1a5fa0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a5fa4:
    // 0x1a5fa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a5fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5fa8:
    // 0x1a5fa8: 0x3e00008  jr          $ra
label_1a5fac:
    if (ctx->pc == 0x1A5FACu) {
        ctx->pc = 0x1A5FACu;
            // 0x1a5fac: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x1A5FB0u;
        goto label_fallthrough_0x1a5fa8;
    }
    ctx->pc = 0x1A5FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FA8u;
            // 0x1a5fac: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a5fa8:
    ctx->pc = 0x1A5FB0u;
}
