#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DngStep__Fv
// Address: 0x1d06c0 - 0x1d1358
void DngStep__Fv_0x1d06c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DngStep__Fv_0x1d06c0");
#endif

    switch (ctx->pc) {
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        case 0x1d0890u: goto label_1d0890;
        case 0x1d0894u: goto label_1d0894;
        case 0x1d0898u: goto label_1d0898;
        case 0x1d089cu: goto label_1d089c;
        case 0x1d08a0u: goto label_1d08a0;
        case 0x1d08a4u: goto label_1d08a4;
        case 0x1d08a8u: goto label_1d08a8;
        case 0x1d08acu: goto label_1d08ac;
        case 0x1d08b0u: goto label_1d08b0;
        case 0x1d08b4u: goto label_1d08b4;
        case 0x1d08b8u: goto label_1d08b8;
        case 0x1d08bcu: goto label_1d08bc;
        case 0x1d08c0u: goto label_1d08c0;
        case 0x1d08c4u: goto label_1d08c4;
        case 0x1d08c8u: goto label_1d08c8;
        case 0x1d08ccu: goto label_1d08cc;
        case 0x1d08d0u: goto label_1d08d0;
        case 0x1d08d4u: goto label_1d08d4;
        case 0x1d08d8u: goto label_1d08d8;
        case 0x1d08dcu: goto label_1d08dc;
        case 0x1d08e0u: goto label_1d08e0;
        case 0x1d08e4u: goto label_1d08e4;
        case 0x1d08e8u: goto label_1d08e8;
        case 0x1d08ecu: goto label_1d08ec;
        case 0x1d08f0u: goto label_1d08f0;
        case 0x1d08f4u: goto label_1d08f4;
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d08fcu: goto label_1d08fc;
        case 0x1d0900u: goto label_1d0900;
        case 0x1d0904u: goto label_1d0904;
        case 0x1d0908u: goto label_1d0908;
        case 0x1d090cu: goto label_1d090c;
        case 0x1d0910u: goto label_1d0910;
        case 0x1d0914u: goto label_1d0914;
        case 0x1d0918u: goto label_1d0918;
        case 0x1d091cu: goto label_1d091c;
        case 0x1d0920u: goto label_1d0920;
        case 0x1d0924u: goto label_1d0924;
        case 0x1d0928u: goto label_1d0928;
        case 0x1d092cu: goto label_1d092c;
        case 0x1d0930u: goto label_1d0930;
        case 0x1d0934u: goto label_1d0934;
        case 0x1d0938u: goto label_1d0938;
        case 0x1d093cu: goto label_1d093c;
        case 0x1d0940u: goto label_1d0940;
        case 0x1d0944u: goto label_1d0944;
        case 0x1d0948u: goto label_1d0948;
        case 0x1d094cu: goto label_1d094c;
        case 0x1d0950u: goto label_1d0950;
        case 0x1d0954u: goto label_1d0954;
        case 0x1d0958u: goto label_1d0958;
        case 0x1d095cu: goto label_1d095c;
        case 0x1d0960u: goto label_1d0960;
        case 0x1d0964u: goto label_1d0964;
        case 0x1d0968u: goto label_1d0968;
        case 0x1d096cu: goto label_1d096c;
        case 0x1d0970u: goto label_1d0970;
        case 0x1d0974u: goto label_1d0974;
        case 0x1d0978u: goto label_1d0978;
        case 0x1d097cu: goto label_1d097c;
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0984u: goto label_1d0984;
        case 0x1d0988u: goto label_1d0988;
        case 0x1d098cu: goto label_1d098c;
        case 0x1d0990u: goto label_1d0990;
        case 0x1d0994u: goto label_1d0994;
        case 0x1d0998u: goto label_1d0998;
        case 0x1d099cu: goto label_1d099c;
        case 0x1d09a0u: goto label_1d09a0;
        case 0x1d09a4u: goto label_1d09a4;
        case 0x1d09a8u: goto label_1d09a8;
        case 0x1d09acu: goto label_1d09ac;
        case 0x1d09b0u: goto label_1d09b0;
        case 0x1d09b4u: goto label_1d09b4;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09bcu: goto label_1d09bc;
        case 0x1d09c0u: goto label_1d09c0;
        case 0x1d09c4u: goto label_1d09c4;
        case 0x1d09c8u: goto label_1d09c8;
        case 0x1d09ccu: goto label_1d09cc;
        case 0x1d09d0u: goto label_1d09d0;
        case 0x1d09d4u: goto label_1d09d4;
        case 0x1d09d8u: goto label_1d09d8;
        case 0x1d09dcu: goto label_1d09dc;
        case 0x1d09e0u: goto label_1d09e0;
        case 0x1d09e4u: goto label_1d09e4;
        case 0x1d09e8u: goto label_1d09e8;
        case 0x1d09ecu: goto label_1d09ec;
        case 0x1d09f0u: goto label_1d09f0;
        case 0x1d09f4u: goto label_1d09f4;
        case 0x1d09f8u: goto label_1d09f8;
        case 0x1d09fcu: goto label_1d09fc;
        case 0x1d0a00u: goto label_1d0a00;
        case 0x1d0a04u: goto label_1d0a04;
        case 0x1d0a08u: goto label_1d0a08;
        case 0x1d0a0cu: goto label_1d0a0c;
        case 0x1d0a10u: goto label_1d0a10;
        case 0x1d0a14u: goto label_1d0a14;
        case 0x1d0a18u: goto label_1d0a18;
        case 0x1d0a1cu: goto label_1d0a1c;
        case 0x1d0a20u: goto label_1d0a20;
        case 0x1d0a24u: goto label_1d0a24;
        case 0x1d0a28u: goto label_1d0a28;
        case 0x1d0a2cu: goto label_1d0a2c;
        case 0x1d0a30u: goto label_1d0a30;
        case 0x1d0a34u: goto label_1d0a34;
        case 0x1d0a38u: goto label_1d0a38;
        case 0x1d0a3cu: goto label_1d0a3c;
        case 0x1d0a40u: goto label_1d0a40;
        case 0x1d0a44u: goto label_1d0a44;
        case 0x1d0a48u: goto label_1d0a48;
        case 0x1d0a4cu: goto label_1d0a4c;
        case 0x1d0a50u: goto label_1d0a50;
        case 0x1d0a54u: goto label_1d0a54;
        case 0x1d0a58u: goto label_1d0a58;
        case 0x1d0a5cu: goto label_1d0a5c;
        case 0x1d0a60u: goto label_1d0a60;
        case 0x1d0a64u: goto label_1d0a64;
        case 0x1d0a68u: goto label_1d0a68;
        case 0x1d0a6cu: goto label_1d0a6c;
        case 0x1d0a70u: goto label_1d0a70;
        case 0x1d0a74u: goto label_1d0a74;
        case 0x1d0a78u: goto label_1d0a78;
        case 0x1d0a7cu: goto label_1d0a7c;
        case 0x1d0a80u: goto label_1d0a80;
        case 0x1d0a84u: goto label_1d0a84;
        case 0x1d0a88u: goto label_1d0a88;
        case 0x1d0a8cu: goto label_1d0a8c;
        case 0x1d0a90u: goto label_1d0a90;
        case 0x1d0a94u: goto label_1d0a94;
        case 0x1d0a98u: goto label_1d0a98;
        case 0x1d0a9cu: goto label_1d0a9c;
        case 0x1d0aa0u: goto label_1d0aa0;
        case 0x1d0aa4u: goto label_1d0aa4;
        case 0x1d0aa8u: goto label_1d0aa8;
        case 0x1d0aacu: goto label_1d0aac;
        case 0x1d0ab0u: goto label_1d0ab0;
        case 0x1d0ab4u: goto label_1d0ab4;
        case 0x1d0ab8u: goto label_1d0ab8;
        case 0x1d0abcu: goto label_1d0abc;
        case 0x1d0ac0u: goto label_1d0ac0;
        case 0x1d0ac4u: goto label_1d0ac4;
        case 0x1d0ac8u: goto label_1d0ac8;
        case 0x1d0accu: goto label_1d0acc;
        case 0x1d0ad0u: goto label_1d0ad0;
        case 0x1d0ad4u: goto label_1d0ad4;
        case 0x1d0ad8u: goto label_1d0ad8;
        case 0x1d0adcu: goto label_1d0adc;
        case 0x1d0ae0u: goto label_1d0ae0;
        case 0x1d0ae4u: goto label_1d0ae4;
        case 0x1d0ae8u: goto label_1d0ae8;
        case 0x1d0aecu: goto label_1d0aec;
        case 0x1d0af0u: goto label_1d0af0;
        case 0x1d0af4u: goto label_1d0af4;
        case 0x1d0af8u: goto label_1d0af8;
        case 0x1d0afcu: goto label_1d0afc;
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b04u: goto label_1d0b04;
        case 0x1d0b08u: goto label_1d0b08;
        case 0x1d0b0cu: goto label_1d0b0c;
        case 0x1d0b10u: goto label_1d0b10;
        case 0x1d0b14u: goto label_1d0b14;
        case 0x1d0b18u: goto label_1d0b18;
        case 0x1d0b1cu: goto label_1d0b1c;
        case 0x1d0b20u: goto label_1d0b20;
        case 0x1d0b24u: goto label_1d0b24;
        case 0x1d0b28u: goto label_1d0b28;
        case 0x1d0b2cu: goto label_1d0b2c;
        case 0x1d0b30u: goto label_1d0b30;
        case 0x1d0b34u: goto label_1d0b34;
        case 0x1d0b38u: goto label_1d0b38;
        case 0x1d0b3cu: goto label_1d0b3c;
        case 0x1d0b40u: goto label_1d0b40;
        case 0x1d0b44u: goto label_1d0b44;
        case 0x1d0b48u: goto label_1d0b48;
        case 0x1d0b4cu: goto label_1d0b4c;
        case 0x1d0b50u: goto label_1d0b50;
        case 0x1d0b54u: goto label_1d0b54;
        case 0x1d0b58u: goto label_1d0b58;
        case 0x1d0b5cu: goto label_1d0b5c;
        case 0x1d0b60u: goto label_1d0b60;
        case 0x1d0b64u: goto label_1d0b64;
        case 0x1d0b68u: goto label_1d0b68;
        case 0x1d0b6cu: goto label_1d0b6c;
        case 0x1d0b70u: goto label_1d0b70;
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b78u: goto label_1d0b78;
        case 0x1d0b7cu: goto label_1d0b7c;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b84u: goto label_1d0b84;
        case 0x1d0b88u: goto label_1d0b88;
        case 0x1d0b8cu: goto label_1d0b8c;
        case 0x1d0b90u: goto label_1d0b90;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0b98u: goto label_1d0b98;
        case 0x1d0b9cu: goto label_1d0b9c;
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0ba4u: goto label_1d0ba4;
        case 0x1d0ba8u: goto label_1d0ba8;
        case 0x1d0bacu: goto label_1d0bac;
        case 0x1d0bb0u: goto label_1d0bb0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bbcu: goto label_1d0bbc;
        case 0x1d0bc0u: goto label_1d0bc0;
        case 0x1d0bc4u: goto label_1d0bc4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bccu: goto label_1d0bcc;
        case 0x1d0bd0u: goto label_1d0bd0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bd8u: goto label_1d0bd8;
        case 0x1d0bdcu: goto label_1d0bdc;
        case 0x1d0be0u: goto label_1d0be0;
        case 0x1d0be4u: goto label_1d0be4;
        case 0x1d0be8u: goto label_1d0be8;
        case 0x1d0becu: goto label_1d0bec;
        case 0x1d0bf0u: goto label_1d0bf0;
        case 0x1d0bf4u: goto label_1d0bf4;
        case 0x1d0bf8u: goto label_1d0bf8;
        case 0x1d0bfcu: goto label_1d0bfc;
        case 0x1d0c00u: goto label_1d0c00;
        case 0x1d0c04u: goto label_1d0c04;
        case 0x1d0c08u: goto label_1d0c08;
        case 0x1d0c0cu: goto label_1d0c0c;
        case 0x1d0c10u: goto label_1d0c10;
        case 0x1d0c14u: goto label_1d0c14;
        case 0x1d0c18u: goto label_1d0c18;
        case 0x1d0c1cu: goto label_1d0c1c;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c28u: goto label_1d0c28;
        case 0x1d0c2cu: goto label_1d0c2c;
        case 0x1d0c30u: goto label_1d0c30;
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c38u: goto label_1d0c38;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c40u: goto label_1d0c40;
        case 0x1d0c44u: goto label_1d0c44;
        case 0x1d0c48u: goto label_1d0c48;
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c50u: goto label_1d0c50;
        case 0x1d0c54u: goto label_1d0c54;
        case 0x1d0c58u: goto label_1d0c58;
        case 0x1d0c5cu: goto label_1d0c5c;
        case 0x1d0c60u: goto label_1d0c60;
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c68u: goto label_1d0c68;
        case 0x1d0c6cu: goto label_1d0c6c;
        case 0x1d0c70u: goto label_1d0c70;
        case 0x1d0c74u: goto label_1d0c74;
        case 0x1d0c78u: goto label_1d0c78;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c80u: goto label_1d0c80;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0c88u: goto label_1d0c88;
        case 0x1d0c8cu: goto label_1d0c8c;
        case 0x1d0c90u: goto label_1d0c90;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0c98u: goto label_1d0c98;
        case 0x1d0c9cu: goto label_1d0c9c;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cacu: goto label_1d0cac;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cb4u: goto label_1d0cb4;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc0u: goto label_1d0cc0;
        case 0x1d0cc4u: goto label_1d0cc4;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0cd0u: goto label_1d0cd0;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce0u: goto label_1d0ce0;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0cf4u: goto label_1d0cf4;
        case 0x1d0cf8u: goto label_1d0cf8;
        case 0x1d0cfcu: goto label_1d0cfc;
        case 0x1d0d00u: goto label_1d0d00;
        case 0x1d0d04u: goto label_1d0d04;
        case 0x1d0d08u: goto label_1d0d08;
        case 0x1d0d0cu: goto label_1d0d0c;
        case 0x1d0d10u: goto label_1d0d10;
        case 0x1d0d14u: goto label_1d0d14;
        case 0x1d0d18u: goto label_1d0d18;
        case 0x1d0d1cu: goto label_1d0d1c;
        case 0x1d0d20u: goto label_1d0d20;
        case 0x1d0d24u: goto label_1d0d24;
        case 0x1d0d28u: goto label_1d0d28;
        case 0x1d0d2cu: goto label_1d0d2c;
        case 0x1d0d30u: goto label_1d0d30;
        case 0x1d0d34u: goto label_1d0d34;
        case 0x1d0d38u: goto label_1d0d38;
        case 0x1d0d3cu: goto label_1d0d3c;
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d44u: goto label_1d0d44;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d4cu: goto label_1d0d4c;
        case 0x1d0d50u: goto label_1d0d50;
        case 0x1d0d54u: goto label_1d0d54;
        case 0x1d0d58u: goto label_1d0d58;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d60u: goto label_1d0d60;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d68u: goto label_1d0d68;
        case 0x1d0d6cu: goto label_1d0d6c;
        case 0x1d0d70u: goto label_1d0d70;
        case 0x1d0d74u: goto label_1d0d74;
        case 0x1d0d78u: goto label_1d0d78;
        case 0x1d0d7cu: goto label_1d0d7c;
        case 0x1d0d80u: goto label_1d0d80;
        case 0x1d0d84u: goto label_1d0d84;
        case 0x1d0d88u: goto label_1d0d88;
        case 0x1d0d8cu: goto label_1d0d8c;
        case 0x1d0d90u: goto label_1d0d90;
        case 0x1d0d94u: goto label_1d0d94;
        case 0x1d0d98u: goto label_1d0d98;
        case 0x1d0d9cu: goto label_1d0d9c;
        case 0x1d0da0u: goto label_1d0da0;
        case 0x1d0da4u: goto label_1d0da4;
        case 0x1d0da8u: goto label_1d0da8;
        case 0x1d0dacu: goto label_1d0dac;
        case 0x1d0db0u: goto label_1d0db0;
        case 0x1d0db4u: goto label_1d0db4;
        case 0x1d0db8u: goto label_1d0db8;
        case 0x1d0dbcu: goto label_1d0dbc;
        case 0x1d0dc0u: goto label_1d0dc0;
        case 0x1d0dc4u: goto label_1d0dc4;
        case 0x1d0dc8u: goto label_1d0dc8;
        case 0x1d0dccu: goto label_1d0dcc;
        case 0x1d0dd0u: goto label_1d0dd0;
        case 0x1d0dd4u: goto label_1d0dd4;
        case 0x1d0dd8u: goto label_1d0dd8;
        case 0x1d0ddcu: goto label_1d0ddc;
        case 0x1d0de0u: goto label_1d0de0;
        case 0x1d0de4u: goto label_1d0de4;
        case 0x1d0de8u: goto label_1d0de8;
        case 0x1d0decu: goto label_1d0dec;
        case 0x1d0df0u: goto label_1d0df0;
        case 0x1d0df4u: goto label_1d0df4;
        case 0x1d0df8u: goto label_1d0df8;
        case 0x1d0dfcu: goto label_1d0dfc;
        case 0x1d0e00u: goto label_1d0e00;
        case 0x1d0e04u: goto label_1d0e04;
        case 0x1d0e08u: goto label_1d0e08;
        case 0x1d0e0cu: goto label_1d0e0c;
        case 0x1d0e10u: goto label_1d0e10;
        case 0x1d0e14u: goto label_1d0e14;
        case 0x1d0e18u: goto label_1d0e18;
        case 0x1d0e1cu: goto label_1d0e1c;
        case 0x1d0e20u: goto label_1d0e20;
        case 0x1d0e24u: goto label_1d0e24;
        case 0x1d0e28u: goto label_1d0e28;
        case 0x1d0e2cu: goto label_1d0e2c;
        case 0x1d0e30u: goto label_1d0e30;
        case 0x1d0e34u: goto label_1d0e34;
        case 0x1d0e38u: goto label_1d0e38;
        case 0x1d0e3cu: goto label_1d0e3c;
        case 0x1d0e40u: goto label_1d0e40;
        case 0x1d0e44u: goto label_1d0e44;
        case 0x1d0e48u: goto label_1d0e48;
        case 0x1d0e4cu: goto label_1d0e4c;
        case 0x1d0e50u: goto label_1d0e50;
        case 0x1d0e54u: goto label_1d0e54;
        case 0x1d0e58u: goto label_1d0e58;
        case 0x1d0e5cu: goto label_1d0e5c;
        case 0x1d0e60u: goto label_1d0e60;
        case 0x1d0e64u: goto label_1d0e64;
        case 0x1d0e68u: goto label_1d0e68;
        case 0x1d0e6cu: goto label_1d0e6c;
        case 0x1d0e70u: goto label_1d0e70;
        case 0x1d0e74u: goto label_1d0e74;
        case 0x1d0e78u: goto label_1d0e78;
        case 0x1d0e7cu: goto label_1d0e7c;
        case 0x1d0e80u: goto label_1d0e80;
        case 0x1d0e84u: goto label_1d0e84;
        case 0x1d0e88u: goto label_1d0e88;
        case 0x1d0e8cu: goto label_1d0e8c;
        case 0x1d0e90u: goto label_1d0e90;
        case 0x1d0e94u: goto label_1d0e94;
        case 0x1d0e98u: goto label_1d0e98;
        case 0x1d0e9cu: goto label_1d0e9c;
        case 0x1d0ea0u: goto label_1d0ea0;
        case 0x1d0ea4u: goto label_1d0ea4;
        case 0x1d0ea8u: goto label_1d0ea8;
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0eb0u: goto label_1d0eb0;
        case 0x1d0eb4u: goto label_1d0eb4;
        case 0x1d0eb8u: goto label_1d0eb8;
        case 0x1d0ebcu: goto label_1d0ebc;
        case 0x1d0ec0u: goto label_1d0ec0;
        case 0x1d0ec4u: goto label_1d0ec4;
        case 0x1d0ec8u: goto label_1d0ec8;
        case 0x1d0eccu: goto label_1d0ecc;
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0ed4u: goto label_1d0ed4;
        case 0x1d0ed8u: goto label_1d0ed8;
        case 0x1d0edcu: goto label_1d0edc;
        case 0x1d0ee0u: goto label_1d0ee0;
        case 0x1d0ee4u: goto label_1d0ee4;
        case 0x1d0ee8u: goto label_1d0ee8;
        case 0x1d0eecu: goto label_1d0eec;
        case 0x1d0ef0u: goto label_1d0ef0;
        case 0x1d0ef4u: goto label_1d0ef4;
        case 0x1d0ef8u: goto label_1d0ef8;
        case 0x1d0efcu: goto label_1d0efc;
        case 0x1d0f00u: goto label_1d0f00;
        case 0x1d0f04u: goto label_1d0f04;
        case 0x1d0f08u: goto label_1d0f08;
        case 0x1d0f0cu: goto label_1d0f0c;
        case 0x1d0f10u: goto label_1d0f10;
        case 0x1d0f14u: goto label_1d0f14;
        case 0x1d0f18u: goto label_1d0f18;
        case 0x1d0f1cu: goto label_1d0f1c;
        case 0x1d0f20u: goto label_1d0f20;
        case 0x1d0f24u: goto label_1d0f24;
        case 0x1d0f28u: goto label_1d0f28;
        case 0x1d0f2cu: goto label_1d0f2c;
        case 0x1d0f30u: goto label_1d0f30;
        case 0x1d0f34u: goto label_1d0f34;
        case 0x1d0f38u: goto label_1d0f38;
        case 0x1d0f3cu: goto label_1d0f3c;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f44u: goto label_1d0f44;
        case 0x1d0f48u: goto label_1d0f48;
        case 0x1d0f4cu: goto label_1d0f4c;
        case 0x1d0f50u: goto label_1d0f50;
        case 0x1d0f54u: goto label_1d0f54;
        case 0x1d0f58u: goto label_1d0f58;
        case 0x1d0f5cu: goto label_1d0f5c;
        case 0x1d0f60u: goto label_1d0f60;
        case 0x1d0f64u: goto label_1d0f64;
        case 0x1d0f68u: goto label_1d0f68;
        case 0x1d0f6cu: goto label_1d0f6c;
        case 0x1d0f70u: goto label_1d0f70;
        case 0x1d0f74u: goto label_1d0f74;
        case 0x1d0f78u: goto label_1d0f78;
        case 0x1d0f7cu: goto label_1d0f7c;
        case 0x1d0f80u: goto label_1d0f80;
        case 0x1d0f84u: goto label_1d0f84;
        case 0x1d0f88u: goto label_1d0f88;
        case 0x1d0f8cu: goto label_1d0f8c;
        case 0x1d0f90u: goto label_1d0f90;
        case 0x1d0f94u: goto label_1d0f94;
        case 0x1d0f98u: goto label_1d0f98;
        case 0x1d0f9cu: goto label_1d0f9c;
        case 0x1d0fa0u: goto label_1d0fa0;
        case 0x1d0fa4u: goto label_1d0fa4;
        case 0x1d0fa8u: goto label_1d0fa8;
        case 0x1d0facu: goto label_1d0fac;
        case 0x1d0fb0u: goto label_1d0fb0;
        case 0x1d0fb4u: goto label_1d0fb4;
        case 0x1d0fb8u: goto label_1d0fb8;
        case 0x1d0fbcu: goto label_1d0fbc;
        case 0x1d0fc0u: goto label_1d0fc0;
        case 0x1d0fc4u: goto label_1d0fc4;
        case 0x1d0fc8u: goto label_1d0fc8;
        case 0x1d0fccu: goto label_1d0fcc;
        case 0x1d0fd0u: goto label_1d0fd0;
        case 0x1d0fd4u: goto label_1d0fd4;
        case 0x1d0fd8u: goto label_1d0fd8;
        case 0x1d0fdcu: goto label_1d0fdc;
        case 0x1d0fe0u: goto label_1d0fe0;
        case 0x1d0fe4u: goto label_1d0fe4;
        case 0x1d0fe8u: goto label_1d0fe8;
        case 0x1d0fecu: goto label_1d0fec;
        case 0x1d0ff0u: goto label_1d0ff0;
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d0ff8u: goto label_1d0ff8;
        case 0x1d0ffcu: goto label_1d0ffc;
        case 0x1d1000u: goto label_1d1000;
        case 0x1d1004u: goto label_1d1004;
        case 0x1d1008u: goto label_1d1008;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d1010u: goto label_1d1010;
        case 0x1d1014u: goto label_1d1014;
        case 0x1d1018u: goto label_1d1018;
        case 0x1d101cu: goto label_1d101c;
        case 0x1d1020u: goto label_1d1020;
        case 0x1d1024u: goto label_1d1024;
        case 0x1d1028u: goto label_1d1028;
        case 0x1d102cu: goto label_1d102c;
        case 0x1d1030u: goto label_1d1030;
        case 0x1d1034u: goto label_1d1034;
        case 0x1d1038u: goto label_1d1038;
        case 0x1d103cu: goto label_1d103c;
        case 0x1d1040u: goto label_1d1040;
        case 0x1d1044u: goto label_1d1044;
        case 0x1d1048u: goto label_1d1048;
        case 0x1d104cu: goto label_1d104c;
        case 0x1d1050u: goto label_1d1050;
        case 0x1d1054u: goto label_1d1054;
        case 0x1d1058u: goto label_1d1058;
        case 0x1d105cu: goto label_1d105c;
        case 0x1d1060u: goto label_1d1060;
        case 0x1d1064u: goto label_1d1064;
        case 0x1d1068u: goto label_1d1068;
        case 0x1d106cu: goto label_1d106c;
        case 0x1d1070u: goto label_1d1070;
        case 0x1d1074u: goto label_1d1074;
        case 0x1d1078u: goto label_1d1078;
        case 0x1d107cu: goto label_1d107c;
        case 0x1d1080u: goto label_1d1080;
        case 0x1d1084u: goto label_1d1084;
        case 0x1d1088u: goto label_1d1088;
        case 0x1d108cu: goto label_1d108c;
        case 0x1d1090u: goto label_1d1090;
        case 0x1d1094u: goto label_1d1094;
        case 0x1d1098u: goto label_1d1098;
        case 0x1d109cu: goto label_1d109c;
        case 0x1d10a0u: goto label_1d10a0;
        case 0x1d10a4u: goto label_1d10a4;
        case 0x1d10a8u: goto label_1d10a8;
        case 0x1d10acu: goto label_1d10ac;
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d10b4u: goto label_1d10b4;
        case 0x1d10b8u: goto label_1d10b8;
        case 0x1d10bcu: goto label_1d10bc;
        case 0x1d10c0u: goto label_1d10c0;
        case 0x1d10c4u: goto label_1d10c4;
        case 0x1d10c8u: goto label_1d10c8;
        case 0x1d10ccu: goto label_1d10cc;
        case 0x1d10d0u: goto label_1d10d0;
        case 0x1d10d4u: goto label_1d10d4;
        case 0x1d10d8u: goto label_1d10d8;
        case 0x1d10dcu: goto label_1d10dc;
        case 0x1d10e0u: goto label_1d10e0;
        case 0x1d10e4u: goto label_1d10e4;
        case 0x1d10e8u: goto label_1d10e8;
        case 0x1d10ecu: goto label_1d10ec;
        case 0x1d10f0u: goto label_1d10f0;
        case 0x1d10f4u: goto label_1d10f4;
        case 0x1d10f8u: goto label_1d10f8;
        case 0x1d10fcu: goto label_1d10fc;
        case 0x1d1100u: goto label_1d1100;
        case 0x1d1104u: goto label_1d1104;
        case 0x1d1108u: goto label_1d1108;
        case 0x1d110cu: goto label_1d110c;
        case 0x1d1110u: goto label_1d1110;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1118u: goto label_1d1118;
        case 0x1d111cu: goto label_1d111c;
        case 0x1d1120u: goto label_1d1120;
        case 0x1d1124u: goto label_1d1124;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d112cu: goto label_1d112c;
        case 0x1d1130u: goto label_1d1130;
        case 0x1d1134u: goto label_1d1134;
        case 0x1d1138u: goto label_1d1138;
        case 0x1d113cu: goto label_1d113c;
        case 0x1d1140u: goto label_1d1140;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1148u: goto label_1d1148;
        case 0x1d114cu: goto label_1d114c;
        case 0x1d1150u: goto label_1d1150;
        case 0x1d1154u: goto label_1d1154;
        case 0x1d1158u: goto label_1d1158;
        case 0x1d115cu: goto label_1d115c;
        case 0x1d1160u: goto label_1d1160;
        case 0x1d1164u: goto label_1d1164;
        case 0x1d1168u: goto label_1d1168;
        case 0x1d116cu: goto label_1d116c;
        case 0x1d1170u: goto label_1d1170;
        case 0x1d1174u: goto label_1d1174;
        case 0x1d1178u: goto label_1d1178;
        case 0x1d117cu: goto label_1d117c;
        case 0x1d1180u: goto label_1d1180;
        case 0x1d1184u: goto label_1d1184;
        case 0x1d1188u: goto label_1d1188;
        case 0x1d118cu: goto label_1d118c;
        case 0x1d1190u: goto label_1d1190;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d1198u: goto label_1d1198;
        case 0x1d119cu: goto label_1d119c;
        case 0x1d11a0u: goto label_1d11a0;
        case 0x1d11a4u: goto label_1d11a4;
        case 0x1d11a8u: goto label_1d11a8;
        case 0x1d11acu: goto label_1d11ac;
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11b4u: goto label_1d11b4;
        case 0x1d11b8u: goto label_1d11b8;
        case 0x1d11bcu: goto label_1d11bc;
        case 0x1d11c0u: goto label_1d11c0;
        case 0x1d11c4u: goto label_1d11c4;
        case 0x1d11c8u: goto label_1d11c8;
        case 0x1d11ccu: goto label_1d11cc;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d4u: goto label_1d11d4;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d11dcu: goto label_1d11dc;
        case 0x1d11e0u: goto label_1d11e0;
        case 0x1d11e4u: goto label_1d11e4;
        case 0x1d11e8u: goto label_1d11e8;
        case 0x1d11ecu: goto label_1d11ec;
        case 0x1d11f0u: goto label_1d11f0;
        case 0x1d11f4u: goto label_1d11f4;
        case 0x1d11f8u: goto label_1d11f8;
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1200u: goto label_1d1200;
        case 0x1d1204u: goto label_1d1204;
        case 0x1d1208u: goto label_1d1208;
        case 0x1d120cu: goto label_1d120c;
        case 0x1d1210u: goto label_1d1210;
        case 0x1d1214u: goto label_1d1214;
        case 0x1d1218u: goto label_1d1218;
        case 0x1d121cu: goto label_1d121c;
        case 0x1d1220u: goto label_1d1220;
        case 0x1d1224u: goto label_1d1224;
        case 0x1d1228u: goto label_1d1228;
        case 0x1d122cu: goto label_1d122c;
        case 0x1d1230u: goto label_1d1230;
        case 0x1d1234u: goto label_1d1234;
        case 0x1d1238u: goto label_1d1238;
        case 0x1d123cu: goto label_1d123c;
        case 0x1d1240u: goto label_1d1240;
        case 0x1d1244u: goto label_1d1244;
        case 0x1d1248u: goto label_1d1248;
        case 0x1d124cu: goto label_1d124c;
        case 0x1d1250u: goto label_1d1250;
        case 0x1d1254u: goto label_1d1254;
        case 0x1d1258u: goto label_1d1258;
        case 0x1d125cu: goto label_1d125c;
        case 0x1d1260u: goto label_1d1260;
        case 0x1d1264u: goto label_1d1264;
        case 0x1d1268u: goto label_1d1268;
        case 0x1d126cu: goto label_1d126c;
        case 0x1d1270u: goto label_1d1270;
        case 0x1d1274u: goto label_1d1274;
        case 0x1d1278u: goto label_1d1278;
        case 0x1d127cu: goto label_1d127c;
        case 0x1d1280u: goto label_1d1280;
        case 0x1d1284u: goto label_1d1284;
        case 0x1d1288u: goto label_1d1288;
        case 0x1d128cu: goto label_1d128c;
        case 0x1d1290u: goto label_1d1290;
        case 0x1d1294u: goto label_1d1294;
        case 0x1d1298u: goto label_1d1298;
        case 0x1d129cu: goto label_1d129c;
        case 0x1d12a0u: goto label_1d12a0;
        case 0x1d12a4u: goto label_1d12a4;
        case 0x1d12a8u: goto label_1d12a8;
        case 0x1d12acu: goto label_1d12ac;
        case 0x1d12b0u: goto label_1d12b0;
        case 0x1d12b4u: goto label_1d12b4;
        case 0x1d12b8u: goto label_1d12b8;
        case 0x1d12bcu: goto label_1d12bc;
        case 0x1d12c0u: goto label_1d12c0;
        case 0x1d12c4u: goto label_1d12c4;
        case 0x1d12c8u: goto label_1d12c8;
        case 0x1d12ccu: goto label_1d12cc;
        case 0x1d12d0u: goto label_1d12d0;
        case 0x1d12d4u: goto label_1d12d4;
        case 0x1d12d8u: goto label_1d12d8;
        case 0x1d12dcu: goto label_1d12dc;
        case 0x1d12e0u: goto label_1d12e0;
        case 0x1d12e4u: goto label_1d12e4;
        case 0x1d12e8u: goto label_1d12e8;
        case 0x1d12ecu: goto label_1d12ec;
        case 0x1d12f0u: goto label_1d12f0;
        case 0x1d12f4u: goto label_1d12f4;
        case 0x1d12f8u: goto label_1d12f8;
        case 0x1d12fcu: goto label_1d12fc;
        case 0x1d1300u: goto label_1d1300;
        case 0x1d1304u: goto label_1d1304;
        case 0x1d1308u: goto label_1d1308;
        case 0x1d130cu: goto label_1d130c;
        case 0x1d1310u: goto label_1d1310;
        case 0x1d1314u: goto label_1d1314;
        case 0x1d1318u: goto label_1d1318;
        case 0x1d131cu: goto label_1d131c;
        case 0x1d1320u: goto label_1d1320;
        case 0x1d1324u: goto label_1d1324;
        case 0x1d1328u: goto label_1d1328;
        case 0x1d132cu: goto label_1d132c;
        case 0x1d1330u: goto label_1d1330;
        case 0x1d1334u: goto label_1d1334;
        case 0x1d1338u: goto label_1d1338;
        case 0x1d133cu: goto label_1d133c;
        case 0x1d1340u: goto label_1d1340;
        case 0x1d1344u: goto label_1d1344;
        case 0x1d1348u: goto label_1d1348;
        case 0x1d134cu: goto label_1d134c;
        case 0x1d1350u: goto label_1d1350;
        case 0x1d1354u: goto label_1d1354;
        default: break;
    }

    ctx->pc = 0x1d06c0u;

label_1d06c0:
    // 0x1d06c0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_1d06c4:
    // 0x1d06c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d06c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d06c8:
    // 0x1d06c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d06c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1d06cc:
    // 0x1d06cc: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1d06ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1d06d0:
    // 0x1d06d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d06d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d06d4:
    // 0x1d06d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d06d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d06d8:
    // 0x1d06d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d06d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d06dc:
    // 0x1d06dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d06dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d06e0:
    // 0x1d06e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d06e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d06e4:
    // 0x1d06e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d06e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d06e8:
    // 0x1d06e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d06e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d06ec:
    // 0x1d06ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d06ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d06f0:
    // 0x1d06f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d06f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d06f4:
    // 0x1d06f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d06f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d06f8:
    // 0x1d06f8: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d06fc:
    // 0x1d06fc: 0x8f838d98  lw          $v1, -0x7268($gp)
    ctx->pc = 0x1d06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938008)));
label_1d0700:
    // 0x1d0700: 0x14600308  bnez        $v1, . + 4 + (0x308 << 2)
label_1d0704:
    if (ctx->pc == 0x1D0704u) {
        ctx->pc = 0x1D0704u;
            // 0x1d0704: 0x81b021  addu        $s6, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->pc = 0x1D0708u;
        goto label_1d0708;
    }
    ctx->pc = 0x1D0700u;
    {
        const bool branch_taken_0x1d0700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0700u;
            // 0x1d0704: 0x81b021  addu        $s6, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0700) {
            ctx->pc = 0x1D1324u;
            goto label_1d1324;
        }
    }
    ctx->pc = 0x1D0708u;
label_1d0708:
    // 0x1d0708: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d0708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d070c:
    // 0x1d070c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1d0710:
    // 0x1d0710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0714:
    // 0x1d0714: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1d0714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1d0718:
    // 0x1d0718: 0x84620078  lh          $v0, 0x78($v1)
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1d071c:
    // 0x1d071c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d0720:
    if (ctx->pc == 0x1D0720u) {
        ctx->pc = 0x1D0724u;
        goto label_1d0724;
    }
    ctx->pc = 0x1D071Cu;
    {
        const bool branch_taken_0x1d071c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d071c) {
            ctx->pc = 0x1D0740u;
            goto label_1d0740;
        }
    }
    ctx->pc = 0x1D0724u;
label_1d0724:
    // 0x1d0724: 0xc4610074  lwc1        $f1, 0x74($v1)
    ctx->pc = 0x1d0724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0728:
    // 0x1d0728: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1d0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d072c:
    // 0x1d072c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d072cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d0730:
    // 0x1d0730: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1d0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_1d0734:
    // 0x1d0734: 0x84620078  lh          $v0, 0x78($v1)
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1d0738:
    // 0x1d0738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d073c:
    // 0x1d073c: 0xa4620078  sh          $v0, 0x78($v1)
    ctx->pc = 0x1d073cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 2));
label_1d0740:
    // 0x1d0740: 0x80620048  lb          $v0, 0x48($v1)
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
label_1d0744:
    // 0x1d0744: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1d0748:
    if (ctx->pc == 0x1D0748u) {
        ctx->pc = 0x1D074Cu;
        goto label_1d074c;
    }
    ctx->pc = 0x1D0744u;
    {
        const bool branch_taken_0x1d0744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0744) {
            ctx->pc = 0x1D07A0u;
            goto label_1d07a0;
        }
    }
    ctx->pc = 0x1D074Cu;
label_1d074c:
    // 0x1d074c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1d074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0750:
    // 0x1d0750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0754:
    // 0x1d0754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0758:
    // 0x1d0758: 0x0  nop
    ctx->pc = 0x1d0758u;
    // NOP
label_1d075c:
    // 0x1d075c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d075cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0760:
    // 0x1d0760: 0x0  nop
    ctx->pc = 0x1d0760u;
    // NOP
label_1d0764:
    // 0x1d0764: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d0768:
    if (ctx->pc == 0x1D0768u) {
        ctx->pc = 0x1D076Cu;
        goto label_1d076c;
    }
    ctx->pc = 0x1D0764u;
    {
        const bool branch_taken_0x1d0764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0764) {
            ctx->pc = 0x1D0778u;
            goto label_1d0778;
        }
    }
    ctx->pc = 0x1D076Cu;
label_1d076c:
    // 0x1d076c: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1d076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0770:
    // 0x1d0770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0774:
    // 0x1d0774: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1d0774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_1d0778:
    // 0x1d0778: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1d0778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d077c:
    // 0x1d077c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0780:
    // 0x1d0780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0784:
    // 0x1d0784: 0x0  nop
    ctx->pc = 0x1d0784u;
    // NOP
label_1d0788:
    // 0x1d0788: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d078c:
    // 0x1d078c: 0x0  nop
    ctx->pc = 0x1d078cu;
    // NOP
label_1d0790:
    // 0x1d0790: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_1d0794:
    if (ctx->pc == 0x1D0794u) {
        ctx->pc = 0x1D0798u;
        goto label_1d0798;
    }
    ctx->pc = 0x1D0790u;
    {
        const bool branch_taken_0x1d0790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0790) {
            ctx->pc = 0x1D07E8u;
            goto label_1d07e8;
        }
    }
    ctx->pc = 0x1D0798u;
label_1d0798:
    // 0x1d0798: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d079c:
    if (ctx->pc == 0x1D079Cu) {
        ctx->pc = 0x1D079Cu;
            // 0x1d079c: 0xe460004c  swc1        $f0, 0x4C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
        ctx->pc = 0x1D07A0u;
        goto label_1d07a0;
    }
    ctx->pc = 0x1D0798u;
    {
        const bool branch_taken_0x1d0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0798u;
            // 0x1d079c: 0xe460004c  swc1        $f0, 0x4C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0798) {
            ctx->pc = 0x1D07E8u;
            goto label_1d07e8;
        }
    }
    ctx->pc = 0x1D07A0u;
label_1d07a0:
    // 0x1d07a0: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1d07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d07a4:
    // 0x1d07a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d07a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d07a8:
    // 0x1d07a8: 0x0  nop
    ctx->pc = 0x1d07a8u;
    // NOP
label_1d07ac:
    // 0x1d07ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d07acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d07b0:
    // 0x1d07b0: 0x0  nop
    ctx->pc = 0x1d07b0u;
    // NOP
label_1d07b4:
    // 0x1d07b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d07b8:
    if (ctx->pc == 0x1D07B8u) {
        ctx->pc = 0x1D07BCu;
        goto label_1d07bc;
    }
    ctx->pc = 0x1D07B4u;
    {
        const bool branch_taken_0x1d07b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d07b4) {
            ctx->pc = 0x1D07C8u;
            goto label_1d07c8;
        }
    }
    ctx->pc = 0x1D07BCu;
label_1d07bc:
    // 0x1d07bc: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1d07bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d07c0:
    // 0x1d07c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d07c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d07c4:
    // 0x1d07c4: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1d07c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_1d07c8:
    // 0x1d07c8: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1d07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d07cc:
    // 0x1d07cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d07ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d07d0:
    // 0x1d07d0: 0x0  nop
    ctx->pc = 0x1d07d0u;
    // NOP
label_1d07d4:
    // 0x1d07d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d07d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d07d8:
    // 0x1d07d8: 0x0  nop
    ctx->pc = 0x1d07d8u;
    // NOP
label_1d07dc:
    // 0x1d07dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d07e0:
    if (ctx->pc == 0x1D07E0u) {
        ctx->pc = 0x1D07E4u;
        goto label_1d07e4;
    }
    ctx->pc = 0x1D07DCu;
    {
        const bool branch_taken_0x1d07dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d07dc) {
            ctx->pc = 0x1D07E8u;
            goto label_1d07e8;
        }
    }
    ctx->pc = 0x1D07E4u;
label_1d07e4:
    // 0x1d07e4: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1d07e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_1d07e8:
    // 0x1d07e8: 0xc0a9d80  jal         func_2A7600
label_1d07ec:
    if (ctx->pc == 0x1D07ECu) {
        ctx->pc = 0x1D07ECu;
            // 0x1d07ec: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D07F0u;
        goto label_1d07f0;
    }
    ctx->pc = 0x1D07E8u;
    SET_GPR_U32(ctx, 31, 0x1D07F0u);
    ctx->pc = 0x1D07ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07E8u;
            // 0x1d07ec: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7600u;
    if (runtime->hasFunction(0x2A7600u)) {
        auto targetFn = runtime->lookupFunction(0x2A7600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07F0u; }
        if (ctx->pc != 0x1D07F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrePlaySeSrc__6CSceneFv_0x2a7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07F0u; }
        if (ctx->pc != 0x1D07F0u) { return; }
    }
    ctx->pc = 0x1D07F0u;
label_1d07f0:
    // 0x1d07f0: 0xc0a9fec  jal         func_2A7FB0
label_1d07f4:
    if (ctx->pc == 0x1D07F4u) {
        ctx->pc = 0x1D07F4u;
            // 0x1d07f4: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D07F8u;
        goto label_1d07f8;
    }
    ctx->pc = 0x1D07F0u;
    SET_GPR_U32(ctx, 31, 0x1D07F8u);
    ctx->pc = 0x1D07F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D07F0u;
            // 0x1d07f4: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7FB0u;
    if (runtime->hasFunction(0x2A7FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A7FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07F8u; }
        if (ctx->pc != 0x1D07F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayMapSeSrc__6CSceneFv_0x2a7fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D07F8u; }
        if (ctx->pc != 0x1D07F8u) { return; }
    }
    ctx->pc = 0x1D07F8u;
label_1d07f8:
    // 0x1d07f8: 0xc0a3308  jal         func_28CC20
label_1d07fc:
    if (ctx->pc == 0x1D07FCu) {
        ctx->pc = 0x1D0800u;
        goto label_1d0800;
    }
    ctx->pc = 0x1D07F8u;
    SET_GPR_U32(ctx, 31, 0x1D0800u);
    ctx->pc = 0x28CC20u;
    if (runtime->hasFunction(0x28CC20u)) {
        auto targetFn = runtime->lookupFunction(0x28CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0800u; }
        if (ctx->pc != 0x1D0800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Lamb2WolfManager__Fv_0x28cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0800u; }
        if (ctx->pc != 0x1D0800u) { return; }
    }
    ctx->pc = 0x1D0800u;
label_1d0800:
    // 0x1d0800: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d0800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0804:
    // 0x1d0804: 0xc0a12d4  jal         func_284B50
label_1d0808:
    if (ctx->pc == 0x1D0808u) {
        ctx->pc = 0x1D0808u;
            // 0x1d0808: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D080Cu;
        goto label_1d080c;
    }
    ctx->pc = 0x1D0804u;
    SET_GPR_U32(ctx, 31, 0x1D080Cu);
    ctx->pc = 0x1D0808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0804u;
            // 0x1d0808: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B50u;
    if (runtime->hasFunction(0x284B50u)) {
        auto targetFn = runtime->lookupFunction(0x284B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D080Cu; }
        if (ctx->pc != 0x1D080Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWind__6CSceneFPf_0x284b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D080Cu; }
        if (ctx->pc != 0x1D080Cu) { return; }
    }
    ctx->pc = 0x1D080Cu;
label_1d080c:
    // 0x1d080c: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0810:
    // 0x1d0810: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d0814:
    // 0x1d0814: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d0814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1d0818:
    // 0x1d0818: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
label_1d081c:
    if (ctx->pc == 0x1D081Cu) {
        ctx->pc = 0x1D081Cu;
            // 0x1d081c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1D0820u;
        goto label_1d0820;
    }
    ctx->pc = 0x1D0818u;
    {
        const bool branch_taken_0x1d0818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0818u;
            // 0x1d081c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0818) {
            ctx->pc = 0x1D0A88u;
            goto label_1d0a88;
        }
    }
    ctx->pc = 0x1D0820u;
label_1d0820:
    // 0x1d0820: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d0820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0824:
    // 0x1d0824: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d0824u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d0828:
    // 0x1d0828: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d082c:
    // 0x1d082c: 0x8f3900dc  lw          $t9, 0xDC($t9)
    ctx->pc = 0x1d082cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 220)));
label_1d0830:
    // 0x1d0830: 0x320f809  jalr        $t9
label_1d0834:
    if (ctx->pc == 0x1D0834u) {
        ctx->pc = 0x1D0834u;
            // 0x1d0834: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D0838u;
        goto label_1d0838;
    }
    ctx->pc = 0x1D0830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0838u);
        ctx->pc = 0x1D0834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0830u;
            // 0x1d0834: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0838u; }
            if (ctx->pc != 0x1D0838u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0838u;
label_1d0838:
    // 0x1d0838: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d0838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d083c:
    // 0x1d083c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0840:
    // 0x1d0840: 0xc05d3d4  jal         func_174F50
label_1d0844:
    if (ctx->pc == 0x1D0844u) {
        ctx->pc = 0x1D0844u;
            // 0x1d0844: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D0848u;
        goto label_1d0848;
    }
    ctx->pc = 0x1D0840u;
    SET_GPR_U32(ctx, 31, 0x1D0848u);
    ctx->pc = 0x1D0844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0840u;
            // 0x1d0844: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0848u; }
        if (ctx->pc != 0x1D0848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0848u; }
        if (ctx->pc != 0x1D0848u) { return; }
    }
    ctx->pc = 0x1D0848u;
label_1d0848:
    // 0x1d0848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d084c:
    if (ctx->pc == 0x1D084Cu) {
        ctx->pc = 0x1D0850u;
        goto label_1d0850;
    }
    ctx->pc = 0x1D0848u;
    {
        const bool branch_taken_0x1d0848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0848) {
            ctx->pc = 0x1D0864u;
            goto label_1d0864;
        }
    }
    ctx->pc = 0x1D0850u;
label_1d0850:
    // 0x1d0850: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d0850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0854:
    // 0x1d0854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0858:
    // 0x1d0858: 0x8f3900e4  lw          $t9, 0xE4($t9)
    ctx->pc = 0x1d0858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 228)));
label_1d085c:
    // 0x1d085c: 0x320f809  jalr        $t9
label_1d0860:
    if (ctx->pc == 0x1D0860u) {
        ctx->pc = 0x1D0860u;
            // 0x1d0860: 0xc7ac00a4  lwc1        $f12, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D0864u;
        goto label_1d0864;
    }
    ctx->pc = 0x1D085Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0864u);
        ctx->pc = 0x1D0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D085Cu;
            // 0x1d0860: 0xc7ac00a4  lwc1        $f12, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0864u; }
            if (ctx->pc != 0x1D0864u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0864u;
label_1d0864:
    // 0x1d0864: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0868:
    // 0x1d0868: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d086c:
    // 0x1d086c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1d0870:
    // 0x1d0870: 0x320f809  jalr        $t9
label_1d0874:
    if (ctx->pc == 0x1D0874u) {
        ctx->pc = 0x1D0878u;
        goto label_1d0878;
    }
    ctx->pc = 0x1D0870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0878u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0878u; }
            if (ctx->pc != 0x1D0878u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0878u;
label_1d0878:
    // 0x1d0878: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d087c:
    // 0x1d087c: 0x8c6209e4  lw          $v0, 0x9E4($v1)
    ctx->pc = 0x1d087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2532)));
label_1d0880:
    // 0x1d0880: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1d0884:
    if (ctx->pc == 0x1D0884u) {
        ctx->pc = 0x1D0888u;
        goto label_1d0888;
    }
    ctx->pc = 0x1D0880u;
    {
        const bool branch_taken_0x1d0880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0880) {
            ctx->pc = 0x1D092Cu;
            goto label_1d092c;
        }
    }
    ctx->pc = 0x1D0888u;
label_1d0888:
    // 0x1d0888: 0x83828e04  lb          $v0, -0x71FC($gp)
    ctx->pc = 0x1d0888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938116)));
label_1d088c:
    // 0x1d088c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d0890:
    if (ctx->pc == 0x1D0890u) {
        ctx->pc = 0x1D0890u;
            // 0x1d0890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D0894u;
        goto label_1d0894;
    }
    ctx->pc = 0x1D088Cu;
    {
        const bool branch_taken_0x1d088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D088Cu;
            // 0x1d0890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d088c) {
            ctx->pc = 0x1D089Cu;
            goto label_1d089c;
        }
    }
    ctx->pc = 0x1D0894u;
label_1d0894:
    // 0x1d0894: 0xaf808e00  sw          $zero, -0x7200($gp)
    ctx->pc = 0x1d0894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938112), GPR_U32(ctx, 0));
label_1d0898:
    // 0x1d0898: 0xa3828e04  sb          $v0, -0x71FC($gp)
    ctx->pc = 0x1d0898u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938116), (uint8_t)GPR_U32(ctx, 2));
label_1d089c:
    // 0x1d089c: 0x8f828e00  lw          $v0, -0x7200($gp)
    ctx->pc = 0x1d089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938112)));
label_1d08a0:
    // 0x1d08a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d08a4:
    // 0x1d08a4: 0xaf828e00  sw          $v0, -0x7200($gp)
    ctx->pc = 0x1d08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938112), GPR_U32(ctx, 2));
label_1d08a8:
    // 0x1d08a8: 0x8f828e00  lw          $v0, -0x7200($gp)
    ctx->pc = 0x1d08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938112)));
label_1d08ac:
    // 0x1d08ac: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1d08acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_1d08b0:
    // 0x1d08b0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1d08b4:
    if (ctx->pc == 0x1D08B4u) {
        ctx->pc = 0x1D08B4u;
            // 0x1d08b4: 0x246509f0  addiu       $a1, $v1, 0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2544));
        ctx->pc = 0x1D08B8u;
        goto label_1d08b8;
    }
    ctx->pc = 0x1D08B0u;
    {
        const bool branch_taken_0x1d08b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D08B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08B0u;
            // 0x1d08b4: 0x246509f0  addiu       $a1, $v1, 0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08b0) {
            ctx->pc = 0x1D092Cu;
            goto label_1d092c;
        }
    }
    ctx->pc = 0x1D08B8u;
label_1d08b8:
    // 0x1d08b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d08bc:
    // 0x1d08bc: 0xc041c5c  jal         func_107170
label_1d08c0:
    if (ctx->pc == 0x1D08C0u) {
        ctx->pc = 0x1D08C0u;
            // 0x1d08c0: 0xaf808e00  sw          $zero, -0x7200($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938112), GPR_U32(ctx, 0));
        ctx->pc = 0x1D08C4u;
        goto label_1d08c4;
    }
    ctx->pc = 0x1D08BCu;
    SET_GPR_U32(ctx, 31, 0x1D08C4u);
    ctx->pc = 0x1D08C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08BCu;
            // 0x1d08c0: 0xaf808e00  sw          $zero, -0x7200($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08C4u; }
        if (ctx->pc != 0x1D08C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08C4u; }
        if (ctx->pc != 0x1D08C4u) { return; }
    }
    ctx->pc = 0x1D08C4u;
label_1d08c4:
    // 0x1d08c4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1d08c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08c8:
    // 0x1d08c8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1d08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1d08cc:
    // 0x1d08cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d08ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1d08d0:
    // 0x1d08d0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d08d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d08d4:
    // 0x1d08d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d08d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08d8:
    // 0x1d08d8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d08dc:
    // 0x1d08dc: 0x24a56f90  addiu       $a1, $a1, 0x6F90
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28560));
label_1d08e0:
    // 0x1d08e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d08e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d08e4:
    // 0x1d08e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d08e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d08e8:
    // 0x1d08e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d08e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d08ec:
    // 0x1d08ec: 0xc0b8498  jal         func_2E1260
label_1d08f0:
    if (ctx->pc == 0x1D08F0u) {
        ctx->pc = 0x1D08F0u;
            // 0x1d08f0: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x1D08F4u;
        goto label_1d08f4;
    }
    ctx->pc = 0x1D08ECu;
    SET_GPR_U32(ctx, 31, 0x1D08F4u);
    ctx->pc = 0x1D08F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08ECu;
            // 0x1d08f0: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08F4u; }
        if (ctx->pc != 0x1D08F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08F4u; }
        if (ctx->pc != 0x1D08F4u) { return; }
    }
    ctx->pc = 0x1D08F4u;
label_1d08f4:
    // 0x1d08f4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d08f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d08f8:
    // 0x1d08f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d08f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d08fc:
    // 0x1d08fc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1d08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d0900:
    // 0x1d0900: 0xc0b8894  jal         func_2E2250
label_1d0904:
    if (ctx->pc == 0x1D0904u) {
        ctx->pc = 0x1D0904u;
            // 0x1d0904: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0908u;
        goto label_1d0908;
    }
    ctx->pc = 0x1D0900u;
    SET_GPR_U32(ctx, 31, 0x1D0908u);
    ctx->pc = 0x1D0904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0900u;
            // 0x1d0904: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0908u; }
        if (ctx->pc != 0x1D0908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0908u; }
        if (ctx->pc != 0x1D0908u) { return; }
    }
    ctx->pc = 0x1D0908u;
label_1d0908:
    // 0x1d0908: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d090c:
    // 0x1d090c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0910:
    // 0x1d0910: 0x24428f40  addiu       $v0, $v0, -0x70C0
    ctx->pc = 0x1d0910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
label_1d0914:
    // 0x1d0914: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1d0914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d0918:
    // 0x1d0918: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d0918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d091c:
    // 0x1d091c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d091cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1d0920:
    // 0x1d0920: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0924:
    // 0x1d0924: 0xc0b88d8  jal         func_2E2360
label_1d0928:
    if (ctx->pc == 0x1D0928u) {
        ctx->pc = 0x1D0928u;
            // 0x1d0928: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D092Cu;
        goto label_1d092c;
    }
    ctx->pc = 0x1D0924u;
    SET_GPR_U32(ctx, 31, 0x1D092Cu);
    ctx->pc = 0x1D0928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0924u;
            // 0x1d0928: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D092Cu; }
        if (ctx->pc != 0x1D092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D092Cu; }
        if (ctx->pc != 0x1D092Cu) { return; }
    }
    ctx->pc = 0x1D092Cu;
label_1d092c:
    // 0x1d092c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0930:
    // 0x1d0930: 0x8c820918  lw          $v0, 0x918($a0)
    ctx->pc = 0x1d0930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2328)));
label_1d0934:
    // 0x1d0934: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_1d0938:
    if (ctx->pc == 0x1D0938u) {
        ctx->pc = 0x1D093Cu;
        goto label_1d093c;
    }
    ctx->pc = 0x1D0934u;
    {
        const bool branch_taken_0x1d0934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0934) {
            ctx->pc = 0x1D0A88u;
            goto label_1d0a88;
        }
    }
    ctx->pc = 0x1D093Cu;
label_1d093c:
    // 0x1d093c: 0xc05cef0  jal         func_173BC0
label_1d0940:
    if (ctx->pc == 0x1D0940u) {
        ctx->pc = 0x1D0944u;
        goto label_1d0944;
    }
    ctx->pc = 0x1D093Cu;
    SET_GPR_U32(ctx, 31, 0x1D0944u);
    ctx->pc = 0x173BC0u;
    if (runtime->hasFunction(0x173BC0u)) {
        auto targetFn = runtime->lookupFunction(0x173BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0944u; }
        if (ctx->pc != 0x1D0944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFootEffect__11CCharacter2Fv_0x173bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0944u; }
        if (ctx->pc != 0x1D0944u) { return; }
    }
    ctx->pc = 0x1D0944u;
label_1d0944:
    // 0x1d0944: 0x4400050  bltz        $v0, . + 4 + (0x50 << 2)
label_1d0948:
    if (ctx->pc == 0x1D0948u) {
        ctx->pc = 0x1D094Cu;
        goto label_1d094c;
    }
    ctx->pc = 0x1D0944u;
    {
        const bool branch_taken_0x1d0944 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d0944) {
            ctx->pc = 0x1D0A88u;
            goto label_1d0a88;
        }
    }
    ctx->pc = 0x1D094Cu;
label_1d094c:
    // 0x1d094c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0950:
    // 0x1d0950: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0954:
    // 0x1d0954: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d0954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d0958:
    // 0x1d0958: 0x320f809  jalr        $t9
label_1d095c:
    if (ctx->pc == 0x1D095Cu) {
        ctx->pc = 0x1D095Cu;
            // 0x1d095c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1D0960u;
        goto label_1d0960;
    }
    ctx->pc = 0x1D0958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0960u);
        ctx->pc = 0x1D095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0958u;
            // 0x1d095c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0960u; }
            if (ctx->pc != 0x1D0960u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0960u;
label_1d0960:
    // 0x1d0960: 0xc05cef0  jal         func_173BC0
label_1d0964:
    if (ctx->pc == 0x1D0964u) {
        ctx->pc = 0x1D0964u;
            // 0x1d0964: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D0968u;
        goto label_1d0968;
    }
    ctx->pc = 0x1D0960u;
    SET_GPR_U32(ctx, 31, 0x1D0968u);
    ctx->pc = 0x1D0964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0960u;
            // 0x1d0964: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173BC0u;
    if (runtime->hasFunction(0x173BC0u)) {
        auto targetFn = runtime->lookupFunction(0x173BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0968u; }
        if (ctx->pc != 0x1D0968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFootEffect__11CCharacter2Fv_0x173bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0968u; }
        if (ctx->pc != 0x1D0968u) { return; }
    }
    ctx->pc = 0x1D0968u;
label_1d0968:
    // 0x1d0968: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d0968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1d096c:
    // 0x1d096c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d0970:
    // 0x1d0970: 0x24e78f50  addiu       $a3, $a3, -0x70B0
    ctx->pc = 0x1d0970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938448));
label_1d0974:
    // 0x1d0974: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d0974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0978:
    // 0x1d0978: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x1d0978u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1d097c:
    // 0x1d097c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1d0980:
    // 0x1d0980: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1d0980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_1d0984:
    // 0x1d0984: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1d0984u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_1d0988:
    // 0x1d0988: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1d0988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1d098c:
    // 0x1d098c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1d098cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_1d0990:
    // 0x1d0990: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1d0994:
    if (ctx->pc == 0x1D0994u) {
        ctx->pc = 0x1D0994u;
            // 0x1d0994: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x1D0998u;
        goto label_1d0998;
    }
    ctx->pc = 0x1D0990u;
    {
        const bool branch_taken_0x1d0990 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1D0994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0990u;
            // 0x1d0994: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0990) {
            ctx->pc = 0x1D0978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0978;
        }
    }
    ctx->pc = 0x1D0998u;
label_1d0998:
    // 0x1d0998: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1d0998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1d099c:
    // 0x1d099c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1d099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d09a0:
    // 0x1d09a0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1d09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_1d09a4:
    // 0x1d09a4: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
label_1d09a8:
    if (ctx->pc == 0x1D09A8u) {
        ctx->pc = 0x1D09A8u;
            // 0x1d09a8: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = 0x1D09ACu;
        goto label_1d09ac;
    }
    ctx->pc = 0x1D09A4u;
    {
        const bool branch_taken_0x1d09a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D09A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09A4u;
            // 0x1d09a8: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09a4) {
            ctx->pc = 0x1D0A88u;
            goto label_1d0a88;
        }
    }
    ctx->pc = 0x1D09ACu;
label_1d09ac:
    // 0x1d09ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d09acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d09b0:
    // 0x1d09b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d09b4:
    // 0x1d09b4: 0x8c5000e0  lw          $s0, 0xE0($v0)
    ctx->pc = 0x1d09b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_1d09b8:
    // 0x1d09b8: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_1d09bc:
    if (ctx->pc == 0x1D09BCu) {
        ctx->pc = 0x1D09BCu;
            // 0x1d09bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D09C0u;
        goto label_1d09c0;
    }
    ctx->pc = 0x1D09B8u;
    {
        const bool branch_taken_0x1d09b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D09BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09B8u;
            // 0x1d09bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09b8) {
            ctx->pc = 0x1D09F0u;
            goto label_1d09f0;
        }
    }
    ctx->pc = 0x1D09C0u;
label_1d09c0:
    // 0x1d09c0: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d09c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d09c4:
    // 0x1d09c4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d09c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d09c8:
    // 0x1d09c8: 0x24a56f88  addiu       $a1, $a1, 0x6F88
    ctx->pc = 0x1d09c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28552));
label_1d09cc:
    // 0x1d09cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d09ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d09d0:
    // 0x1d09d0: 0xc0b8498  jal         func_2E1260
label_1d09d4:
    if (ctx->pc == 0x1D09D4u) {
        ctx->pc = 0x1D09D4u;
            // 0x1d09d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D09D8u;
        goto label_1d09d8;
    }
    ctx->pc = 0x1D09D0u;
    SET_GPR_U32(ctx, 31, 0x1D09D8u);
    ctx->pc = 0x1D09D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09D0u;
            // 0x1d09d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09D8u; }
        if (ctx->pc != 0x1D09D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09D8u; }
        if (ctx->pc != 0x1D09D8u) { return; }
    }
    ctx->pc = 0x1D09D8u;
label_1d09d8:
    // 0x1d09d8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d09dc:
    // 0x1d09dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d09dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d09e0:
    // 0x1d09e0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d09e4:
    // 0x1d09e4: 0xc0b8894  jal         func_2E2250
label_1d09e8:
    if (ctx->pc == 0x1D09E8u) {
        ctx->pc = 0x1D09E8u;
            // 0x1d09e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D09ECu;
        goto label_1d09ec;
    }
    ctx->pc = 0x1D09E4u;
    SET_GPR_U32(ctx, 31, 0x1D09ECu);
    ctx->pc = 0x1D09E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09E4u;
            // 0x1d09e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09ECu; }
        if (ctx->pc != 0x1D09ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09ECu; }
        if (ctx->pc != 0x1D09ECu) { return; }
    }
    ctx->pc = 0x1D09ECu;
label_1d09ec:
    // 0x1d09ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d09f0:
    // 0x1d09f0: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
label_1d09f4:
    if (ctx->pc == 0x1D09F4u) {
        ctx->pc = 0x1D09F4u;
            // 0x1d09f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D09F8u;
        goto label_1d09f8;
    }
    ctx->pc = 0x1D09F0u;
    {
        const bool branch_taken_0x1d09f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D09F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09F0u;
            // 0x1d09f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09f0) {
            ctx->pc = 0x1D0A54u;
            goto label_1d0a54;
        }
    }
    ctx->pc = 0x1D09F8u;
label_1d09f8:
    // 0x1d09f8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d09fc:
    // 0x1d09fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d0a00:
    // 0x1d0a00: 0x24a56f88  addiu       $a1, $a1, 0x6F88
    ctx->pc = 0x1d0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28552));
label_1d0a04:
    // 0x1d0a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a08:
    // 0x1d0a08: 0xc0b8498  jal         func_2E1260
label_1d0a0c:
    if (ctx->pc == 0x1D0A0Cu) {
        ctx->pc = 0x1D0A0Cu;
            // 0x1d0a0c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0A10u;
        goto label_1d0a10;
    }
    ctx->pc = 0x1D0A08u;
    SET_GPR_U32(ctx, 31, 0x1D0A10u);
    ctx->pc = 0x1D0A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A08u;
            // 0x1d0a0c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A10u; }
        if (ctx->pc != 0x1D0A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A10u; }
        if (ctx->pc != 0x1D0A10u) { return; }
    }
    ctx->pc = 0x1D0A10u;
label_1d0a10:
    // 0x1d0a10: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0a14:
    // 0x1d0a14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0a18:
    // 0x1d0a18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d0a1c:
    // 0x1d0a1c: 0xc0b8894  jal         func_2E2250
label_1d0a20:
    if (ctx->pc == 0x1D0A20u) {
        ctx->pc = 0x1D0A20u;
            // 0x1d0a20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A24u;
        goto label_1d0a24;
    }
    ctx->pc = 0x1D0A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0A24u);
    ctx->pc = 0x1D0A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A1Cu;
            // 0x1d0a20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A24u; }
        if (ctx->pc != 0x1D0A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A24u; }
        if (ctx->pc != 0x1D0A24u) { return; }
    }
    ctx->pc = 0x1D0A24u;
label_1d0a24:
    // 0x1d0a24: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0a28:
    // 0x1d0a28: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d0a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d0a2c:
    // 0x1d0a2c: 0x24a56fa8  addiu       $a1, $a1, 0x6FA8
    ctx->pc = 0x1d0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28584));
label_1d0a30:
    // 0x1d0a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a34:
    // 0x1d0a34: 0xc0b8498  jal         func_2E1260
label_1d0a38:
    if (ctx->pc == 0x1D0A38u) {
        ctx->pc = 0x1D0A38u;
            // 0x1d0a38: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0A3Cu;
        goto label_1d0a3c;
    }
    ctx->pc = 0x1D0A34u;
    SET_GPR_U32(ctx, 31, 0x1D0A3Cu);
    ctx->pc = 0x1D0A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A34u;
            // 0x1d0a38: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A3Cu; }
        if (ctx->pc != 0x1D0A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A3Cu; }
        if (ctx->pc != 0x1D0A3Cu) { return; }
    }
    ctx->pc = 0x1D0A3Cu;
label_1d0a3c:
    // 0x1d0a3c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0a40:
    // 0x1d0a40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0a44:
    // 0x1d0a44: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d0a48:
    // 0x1d0a48: 0xc0b8894  jal         func_2E2250
label_1d0a4c:
    if (ctx->pc == 0x1D0A4Cu) {
        ctx->pc = 0x1D0A4Cu;
            // 0x1d0a4c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A50u;
        goto label_1d0a50;
    }
    ctx->pc = 0x1D0A48u;
    SET_GPR_U32(ctx, 31, 0x1D0A50u);
    ctx->pc = 0x1D0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A48u;
            // 0x1d0a4c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A50u; }
        if (ctx->pc != 0x1D0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A50u; }
        if (ctx->pc != 0x1D0A50u) { return; }
    }
    ctx->pc = 0x1D0A50u;
label_1d0a50:
    // 0x1d0a50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0a54:
    // 0x1d0a54: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_1d0a58:
    if (ctx->pc == 0x1D0A58u) {
        ctx->pc = 0x1D0A5Cu;
        goto label_1d0a5c;
    }
    ctx->pc = 0x1D0A54u;
    {
        const bool branch_taken_0x1d0a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0a54) {
            ctx->pc = 0x1D0A88u;
            goto label_1d0a88;
        }
    }
    ctx->pc = 0x1D0A5Cu;
label_1d0a5c:
    // 0x1d0a5c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0a60:
    // 0x1d0a60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d0a64:
    // 0x1d0a64: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x1d0a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
label_1d0a68:
    // 0x1d0a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a6c:
    // 0x1d0a6c: 0xc0b8498  jal         func_2E1260
label_1d0a70:
    if (ctx->pc == 0x1D0A70u) {
        ctx->pc = 0x1D0A70u;
            // 0x1d0a70: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0A74u;
        goto label_1d0a74;
    }
    ctx->pc = 0x1D0A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0A74u);
    ctx->pc = 0x1D0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A6Cu;
            // 0x1d0a70: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A74u; }
        if (ctx->pc != 0x1D0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A74u; }
        if (ctx->pc != 0x1D0A74u) { return; }
    }
    ctx->pc = 0x1D0A74u;
label_1d0a74:
    // 0x1d0a74: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0a78:
    // 0x1d0a78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0a7c:
    // 0x1d0a7c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d0a80:
    // 0x1d0a80: 0xc0b8894  jal         func_2E2250
label_1d0a84:
    if (ctx->pc == 0x1D0A84u) {
        ctx->pc = 0x1D0A84u;
            // 0x1d0a84: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A88u;
        goto label_1d0a88;
    }
    ctx->pc = 0x1D0A80u;
    SET_GPR_U32(ctx, 31, 0x1D0A88u);
    ctx->pc = 0x1D0A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A80u;
            // 0x1d0a84: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A88u; }
        if (ctx->pc != 0x1D0A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A88u; }
        if (ctx->pc != 0x1D0A88u) { return; }
    }
    ctx->pc = 0x1D0A88u;
label_1d0a88:
    // 0x1d0a88: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0a8c:
    // 0x1d0a8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0a90:
    // 0x1d0a90: 0x8f390114  lw          $t9, 0x114($t9)
    ctx->pc = 0x1d0a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 276)));
label_1d0a94:
    // 0x1d0a94: 0x320f809  jalr        $t9
label_1d0a98:
    if (ctx->pc == 0x1D0A98u) {
        ctx->pc = 0x1D0A9Cu;
        goto label_1d0a9c;
    }
    ctx->pc = 0x1D0A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0A9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A9Cu; }
            if (ctx->pc != 0x1D0A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D0A9Cu;
label_1d0a9c:
    // 0x1d0a9c: 0x8f838da0  lw          $v1, -0x7260($gp)
    ctx->pc = 0x1d0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1d0aa0:
    // 0x1d0aa0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1d0aa4:
    // 0x1d0aa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0aa8:
    // 0x1d0aa8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1d0aac:
    // 0x1d0aac: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1d0ab0:
    // 0x1d0ab0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d0ab4:
    if (ctx->pc == 0x1D0AB4u) {
        ctx->pc = 0x1D0AB4u;
            // 0x1d0ab4: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1D0AB8u;
        goto label_1d0ab8;
    }
    ctx->pc = 0x1D0AB0u;
    {
        const bool branch_taken_0x1d0ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AB0u;
            // 0x1d0ab4: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ab0) {
            ctx->pc = 0x1D0AC0u;
            goto label_1d0ac0;
        }
    }
    ctx->pc = 0x1D0AB8u;
label_1d0ab8:
    // 0x1d0ab8: 0xc06e5e0  jal         func_1B9780
label_1d0abc:
    if (ctx->pc == 0x1D0ABCu) {
        ctx->pc = 0x1D0ABCu;
            // 0x1d0abc: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->pc = 0x1D0AC0u;
        goto label_1d0ac0;
    }
    ctx->pc = 0x1D0AB8u;
    SET_GPR_U32(ctx, 31, 0x1D0AC0u);
    ctx->pc = 0x1D0ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AB8u;
            // 0x1d0abc: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9780u;
    if (runtime->hasFunction(0x1B9780u)) {
        auto targetFn = runtime->lookupFunction(0x1B9780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AC0u; }
        if (ctx->pc != 0x1D0AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CRoboVoiceSystemFv_0x1b9780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AC0u; }
        if (ctx->pc != 0x1D0AC0u) { return; }
    }
    ctx->pc = 0x1D0AC0u;
label_1d0ac0:
    // 0x1d0ac0: 0xc0c1074  jal         func_3041D0
label_1d0ac4:
    if (ctx->pc == 0x1D0AC4u) {
        ctx->pc = 0x1D0AC8u;
        goto label_1d0ac8;
    }
    ctx->pc = 0x1D0AC0u;
    SET_GPR_U32(ctx, 31, 0x1D0AC8u);
    ctx->pc = 0x3041D0u;
    if (runtime->hasFunction(0x3041D0u)) {
        auto targetFn = runtime->lookupFunction(0x3041D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AC8u; }
        if (ctx->pc != 0x1D0AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopSubGame2__Fv_0x3041d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AC8u; }
        if (ctx->pc != 0x1D0AC8u) { return; }
    }
    ctx->pc = 0x1D0AC8u;
label_1d0ac8:
    // 0x1d0ac8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d0acc:
    // 0x1d0acc: 0xc0b339c  jal         func_2CCE70
label_1d0ad0:
    if (ctx->pc == 0x1D0AD0u) {
        ctx->pc = 0x1D0AD0u;
            // 0x1d0ad0: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1D0AD4u;
        goto label_1d0ad4;
    }
    ctx->pc = 0x1D0ACCu;
    SET_GPR_U32(ctx, 31, 0x1D0AD4u);
    ctx->pc = 0x1D0AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0ACCu;
            // 0x1d0ad0: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE70u;
    if (runtime->hasFunction(0x2CCE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CCE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AD4u; }
        if (ctx->pc != 0x1D0AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__4CPotFv_0x2cce70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AD4u; }
        if (ctx->pc != 0x1D0AD4u) { return; }
    }
    ctx->pc = 0x1D0AD4u;
label_1d0ad4:
    // 0x1d0ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0ad8:
    // 0x1d0ad8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1d0adc:
    if (ctx->pc == 0x1D0ADCu) {
        ctx->pc = 0x1D0ADCu;
            // 0x1d0adc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D0AE0u;
        goto label_1d0ae0;
    }
    ctx->pc = 0x1D0AD8u;
    {
        const bool branch_taken_0x1d0ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AD8u;
            // 0x1d0adc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ad8) {
            ctx->pc = 0x1D0AE8u;
            goto label_1d0ae8;
        }
    }
    ctx->pc = 0x1D0AE0u;
label_1d0ae0:
    // 0x1d0ae0: 0x14430072  bne         $v0, $v1, . + 4 + (0x72 << 2)
label_1d0ae4:
    if (ctx->pc == 0x1D0AE4u) {
        ctx->pc = 0x1D0AE8u;
        goto label_1d0ae8;
    }
    ctx->pc = 0x1D0AE0u;
    {
        const bool branch_taken_0x1d0ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0ae0) {
            ctx->pc = 0x1D0CACu;
            goto label_1d0cac;
        }
    }
    ctx->pc = 0x1D0AE8u;
label_1d0ae8:
    // 0x1d0ae8: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1d0aec:
    // 0x1d0aec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d0af0:
    if (ctx->pc == 0x1D0AF0u) {
        ctx->pc = 0x1D0AF0u;
            // 0x1d0af0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0AF4u;
        goto label_1d0af4;
    }
    ctx->pc = 0x1D0AECu;
    {
        const bool branch_taken_0x1d0aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0AECu;
            // 0x1d0af0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0aec) {
            ctx->pc = 0x1D0B00u;
            goto label_1d0b00;
        }
    }
    ctx->pc = 0x1D0AF4u;
label_1d0af4:
    // 0x1d0af4: 0xc06e9a0  jal         func_1BA680
label_1d0af8:
    if (ctx->pc == 0x1D0AF8u) {
        ctx->pc = 0x1D0AFCu;
        goto label_1d0afc;
    }
    ctx->pc = 0x1D0AF4u;
    SET_GPR_U32(ctx, 31, 0x1D0AFCu);
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AFCu; }
        if (ctx->pc != 0x1D0AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0AFCu; }
        if (ctx->pc != 0x1D0AFCu) { return; }
    }
    ctx->pc = 0x1D0AFCu;
label_1d0afc:
    // 0x1d0afc: 0xaf808de0  sw          $zero, -0x7220($gp)
    ctx->pc = 0x1d0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
label_1d0b00:
    // 0x1d0b00: 0xc0724a4  jal         func_1C9290
label_1d0b04:
    if (ctx->pc == 0x1D0B04u) {
        ctx->pc = 0x1D0B04u;
            // 0x1d0b04: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0B08u;
        goto label_1d0b08;
    }
    ctx->pc = 0x1D0B00u;
    SET_GPR_U32(ctx, 31, 0x1D0B08u);
    ctx->pc = 0x1D0B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B00u;
            // 0x1d0b04: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B08u; }
        if (ctx->pc != 0x1D0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B08u; }
        if (ctx->pc != 0x1D0B08u) { return; }
    }
    ctx->pc = 0x1D0B08u;
label_1d0b08:
    // 0x1d0b08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d0b0c:
    // 0x1d0b0c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d0b0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d0b10:
    // 0x1d0b10: 0x0  nop
    ctx->pc = 0x1d0b10u;
    // NOP
label_1d0b14:
    // 0x1d0b14: 0x0  nop
    ctx->pc = 0x1d0b14u;
    // NOP
label_1d0b18:
    // 0x1d0b18: 0x1010  mfhi        $v0
    ctx->pc = 0x1d0b18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d0b1c:
    // 0x1d0b1c: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_1d0b20:
    if (ctx->pc == 0x1D0B20u) {
        ctx->pc = 0x1D0B20u;
            // 0x1d0b20: 0x3c0501eb  lui         $a1, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1D0B24u;
        goto label_1d0b24;
    }
    ctx->pc = 0x1D0B1Cu;
    {
        const bool branch_taken_0x1d0b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B1Cu;
            // 0x1d0b20: 0x3c0501eb  lui         $a1, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b1c) {
            ctx->pc = 0x1D0CACu;
            goto label_1d0cac;
        }
    }
    ctx->pc = 0x1D0B24u;
label_1d0b24:
    // 0x1d0b24: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d0b28:
    // 0x1d0b28: 0xc041c5c  jal         func_107170
label_1d0b2c:
    if (ctx->pc == 0x1D0B2Cu) {
        ctx->pc = 0x1D0B2Cu;
            // 0x1d0b2c: 0x24a5f410  addiu       $a1, $a1, -0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964240));
        ctx->pc = 0x1D0B30u;
        goto label_1d0b30;
    }
    ctx->pc = 0x1D0B28u;
    SET_GPR_U32(ctx, 31, 0x1D0B30u);
    ctx->pc = 0x1D0B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B28u;
            // 0x1d0b2c: 0x24a5f410  addiu       $a1, $a1, -0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B30u; }
        if (ctx->pc != 0x1D0B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B30u; }
        if (ctx->pc != 0x1D0B30u) { return; }
    }
    ctx->pc = 0x1D0B30u;
label_1d0b30:
    // 0x1d0b30: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x1d0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0b34:
    // 0x1d0b34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d0b38:
    // 0x1d0b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0b3c:
    // 0x1d0b3c: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1d0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d0b40:
    // 0x1d0b40: 0x27848de8  addiu       $a0, $gp, -0x7218
    ctx->pc = 0x1d0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
label_1d0b44:
    // 0x1d0b44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0b48:
    // 0x1d0b48: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d0b4c:
    // 0x1d0b4c: 0x24428fe0  addiu       $v0, $v0, -0x7020
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938592));
label_1d0b50:
    // 0x1d0b50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0b54:
    // 0x1d0b54: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1d0b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_1d0b58:
    // 0x1d0b58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d0b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0b5c:
    // 0x1d0b5c: 0xc06e574  jal         func_1B95D0
label_1d0b60:
    if (ctx->pc == 0x1D0B60u) {
        ctx->pc = 0x1D0B60u;
            // 0x1d0b60: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1D0B64u;
        goto label_1d0b64;
    }
    ctx->pc = 0x1D0B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B64u);
    ctx->pc = 0x1D0B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B5Cu;
            // 0x1d0b60: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B64u; }
        if (ctx->pc != 0x1D0B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B64u; }
        if (ctx->pc != 0x1D0B64u) { return; }
    }
    ctx->pc = 0x1D0B64u;
label_1d0b64:
    // 0x1d0b64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b68:
    // 0x1d0b68: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
label_1d0b6c:
    if (ctx->pc == 0x1D0B6Cu) {
        ctx->pc = 0x1D0B6Cu;
            // 0x1d0b6c: 0x3c0501eb  lui         $a1, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1D0B70u;
        goto label_1d0b70;
    }
    ctx->pc = 0x1D0B68u;
    {
        const bool branch_taken_0x1d0b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B68u;
            // 0x1d0b6c: 0x3c0501eb  lui         $a1, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b68) {
            ctx->pc = 0x1D0CACu;
            goto label_1d0cac;
        }
    }
    ctx->pc = 0x1D0B70u;
label_1d0b70:
    // 0x1d0b70: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d0b74:
    // 0x1d0b74: 0xc041c5c  jal         func_107170
label_1d0b78:
    if (ctx->pc == 0x1D0B78u) {
        ctx->pc = 0x1D0B78u;
            // 0x1d0b78: 0x24a5f3d0  addiu       $a1, $a1, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
        ctx->pc = 0x1D0B7Cu;
        goto label_1d0b7c;
    }
    ctx->pc = 0x1D0B74u;
    SET_GPR_U32(ctx, 31, 0x1D0B7Cu);
    ctx->pc = 0x1D0B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B74u;
            // 0x1d0b78: 0x24a5f3d0  addiu       $a1, $a1, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B7Cu; }
        if (ctx->pc != 0x1D0B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B7Cu; }
        if (ctx->pc != 0x1D0B7Cu) { return; }
    }
    ctx->pc = 0x1D0B7Cu;
label_1d0b7c:
    // 0x1d0b7c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d0b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d0b80:
    // 0x1d0b80: 0xc041be0  jal         func_106F80
label_1d0b84:
    if (ctx->pc == 0x1D0B84u) {
        ctx->pc = 0x1D0B84u;
            // 0x1d0b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B88u;
        goto label_1d0b88;
    }
    ctx->pc = 0x1D0B80u;
    SET_GPR_U32(ctx, 31, 0x1D0B88u);
    ctx->pc = 0x1D0B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B80u;
            // 0x1d0b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B88u; }
        if (ctx->pc != 0x1D0B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B88u; }
        if (ctx->pc != 0x1D0B88u) { return; }
    }
    ctx->pc = 0x1D0B88u;
label_1d0b88:
    // 0x1d0b88: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1d0b8c:
    // 0x1d0b8c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d0b90:
    // 0x1d0b90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0b94:
    // 0x1d0b94: 0xc041c4a  jal         func_107128
label_1d0b98:
    if (ctx->pc == 0x1D0B98u) {
        ctx->pc = 0x1D0B98u;
            // 0x1d0b98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B9Cu;
        goto label_1d0b9c;
    }
    ctx->pc = 0x1D0B94u;
    SET_GPR_U32(ctx, 31, 0x1D0B9Cu);
    ctx->pc = 0x1D0B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B94u;
            // 0x1d0b98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B9Cu; }
        if (ctx->pc != 0x1D0B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B9Cu; }
        if (ctx->pc != 0x1D0B9Cu) { return; }
    }
    ctx->pc = 0x1D0B9Cu;
label_1d0b9c:
    // 0x1d0b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ba0:
    // 0x1d0ba0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d0ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d0ba4:
    // 0x1d0ba4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1d0ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d0ba8:
    // 0x1d0ba8: 0xc06e46c  jal         func_1B91B0
label_1d0bac:
    if (ctx->pc == 0x1D0BACu) {
        ctx->pc = 0x1D0BACu;
            // 0x1d0bac: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1D0BB0u;
        goto label_1d0bb0;
    }
    ctx->pc = 0x1D0BA8u;
    SET_GPR_U32(ctx, 31, 0x1D0BB0u);
    ctx->pc = 0x1D0BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BA8u;
            // 0x1d0bac: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BB0u; }
        if (ctx->pc != 0x1D0BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BB0u; }
        if (ctx->pc != 0x1D0BB0u) { return; }
    }
    ctx->pc = 0x1D0BB0u;
label_1d0bb0:
    // 0x1d0bb0: 0xc0724a4  jal         func_1C9290
label_1d0bb4:
    if (ctx->pc == 0x1D0BB4u) {
        ctx->pc = 0x1D0BB4u;
            // 0x1d0bb4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0BB8u;
        goto label_1d0bb8;
    }
    ctx->pc = 0x1D0BB0u;
    SET_GPR_U32(ctx, 31, 0x1D0BB8u);
    ctx->pc = 0x1D0BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BB0u;
            // 0x1d0bb4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BB8u; }
        if (ctx->pc != 0x1D0BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BB8u; }
        if (ctx->pc != 0x1D0BB8u) { return; }
    }
    ctx->pc = 0x1D0BB8u;
label_1d0bb8:
    // 0x1d0bb8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d0bbc:
    // 0x1d0bbc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1d0bbcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d0bc0:
    // 0x1d0bc0: 0x0  nop
    ctx->pc = 0x1d0bc0u;
    // NOP
label_1d0bc4:
    // 0x1d0bc4: 0x0  nop
    ctx->pc = 0x1d0bc4u;
    // NOP
label_1d0bc8:
    // 0x1d0bc8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d0bcc:
    // 0x1d0bcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d0bd0:
    if (ctx->pc == 0x1D0BD0u) {
        ctx->pc = 0x1D0BD4u;
        goto label_1d0bd4;
    }
    ctx->pc = 0x1D0BCCu;
    {
        const bool branch_taken_0x1d0bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0bcc) {
            ctx->pc = 0x1D0BE4u;
            goto label_1d0be4;
        }
    }
    ctx->pc = 0x1D0BD4u;
label_1d0bd4:
    // 0x1d0bd4: 0xc0724a4  jal         func_1C9290
label_1d0bd8:
    if (ctx->pc == 0x1D0BD8u) {
        ctx->pc = 0x1D0BDCu;
        goto label_1d0bdc;
    }
    ctx->pc = 0x1D0BD4u;
    SET_GPR_U32(ctx, 31, 0x1D0BDCu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BDCu; }
        if (ctx->pc != 0x1D0BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BDCu; }
        if (ctx->pc != 0x1D0BDCu) { return; }
    }
    ctx->pc = 0x1D0BDCu;
label_1d0bdc:
    // 0x1d0bdc: 0x10000032  b           . + 4 + (0x32 << 2)
label_1d0be0:
    if (ctx->pc == 0x1D0BE0u) {
        ctx->pc = 0x1D0BE0u;
            // 0x1d0be0: 0x245100af  addiu       $s1, $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 175));
        ctx->pc = 0x1D0BE4u;
        goto label_1d0be4;
    }
    ctx->pc = 0x1D0BDCu;
    {
        const bool branch_taken_0x1d0bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BDCu;
            // 0x1d0be0: 0x245100af  addiu       $s1, $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bdc) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0BE4u;
label_1d0be4:
    // 0x1d0be4: 0xc0724a4  jal         func_1C9290
label_1d0be8:
    if (ctx->pc == 0x1D0BE8u) {
        ctx->pc = 0x1D0BE8u;
            // 0x1d0be8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0BECu;
        goto label_1d0bec;
    }
    ctx->pc = 0x1D0BE4u;
    SET_GPR_U32(ctx, 31, 0x1D0BECu);
    ctx->pc = 0x1D0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BE4u;
            // 0x1d0be8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BECu; }
        if (ctx->pc != 0x1D0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BECu; }
        if (ctx->pc != 0x1D0BECu) { return; }
    }
    ctx->pc = 0x1D0BECu;
label_1d0bec:
    // 0x1d0bec: 0x28410050  slti        $at, $v0, 0x50
    ctx->pc = 0x1d0becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)80) ? 1 : 0);
label_1d0bf0:
    // 0x1d0bf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d0bf4:
    if (ctx->pc == 0x1D0BF4u) {
        ctx->pc = 0x1D0BF4u;
            // 0x1d0bf4: 0x24110113  addiu       $s1, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->pc = 0x1D0BF8u;
        goto label_1d0bf8;
    }
    ctx->pc = 0x1D0BF0u;
    {
        const bool branch_taken_0x1d0bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BF0u;
            // 0x1d0bf4: 0x24110113  addiu       $s1, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bf0) {
            ctx->pc = 0x1D0BFCu;
            goto label_1d0bfc;
        }
    }
    ctx->pc = 0x1D0BF8u;
label_1d0bf8:
    // 0x1d0bf8: 0x2411010c  addiu       $s1, $zero, 0x10C
    ctx->pc = 0x1d0bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
label_1d0bfc:
    // 0x1d0bfc: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x1d0bfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_1d0c00:
    // 0x1d0c00: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1d0c04:
    if (ctx->pc == 0x1D0C04u) {
        ctx->pc = 0x1D0C04u;
            // 0x1d0c04: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0C08u;
        goto label_1d0c08;
    }
    ctx->pc = 0x1D0C00u;
    {
        const bool branch_taken_0x1d0c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C00u;
            // 0x1d0c04: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c00) {
            ctx->pc = 0x1D0C4Cu;
            goto label_1d0c4c;
        }
    }
    ctx->pc = 0x1D0C08u;
label_1d0c08:
    // 0x1d0c08: 0xc0724a4  jal         func_1C9290
label_1d0c0c:
    if (ctx->pc == 0x1D0C0Cu) {
        ctx->pc = 0x1D0C0Cu;
            // 0x1d0c0c: 0x24110126  addiu       $s1, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->pc = 0x1D0C10u;
        goto label_1d0c10;
    }
    ctx->pc = 0x1D0C08u;
    SET_GPR_U32(ctx, 31, 0x1D0C10u);
    ctx->pc = 0x1D0C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C08u;
            // 0x1d0c0c: 0x24110126  addiu       $s1, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C10u; }
        if (ctx->pc != 0x1D0C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C10u; }
        if (ctx->pc != 0x1D0C10u) { return; }
    }
    ctx->pc = 0x1D0C10u;
label_1d0c10:
    // 0x1d0c10: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x1d0c10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_1d0c14:
    // 0x1d0c14: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1d0c18:
    if (ctx->pc == 0x1D0C18u) {
        ctx->pc = 0x1D0C1Cu;
        goto label_1d0c1c;
    }
    ctx->pc = 0x1D0C14u;
    {
        const bool branch_taken_0x1d0c14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c14) {
            ctx->pc = 0x1D0C4Cu;
            goto label_1d0c4c;
        }
    }
    ctx->pc = 0x1D0C1Cu;
label_1d0c1c:
    // 0x1d0c1c: 0x8f828da8  lw          $v0, -0x7258($gp)
    ctx->pc = 0x1d0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_1d0c20:
    // 0x1d0c20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0c24:
    // 0x1d0c24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d0c28:
    if (ctx->pc == 0x1D0C28u) {
        ctx->pc = 0x1D0C28u;
            // 0x1d0c28: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0C2Cu;
        goto label_1d0c2c;
    }
    ctx->pc = 0x1D0C24u;
    {
        const bool branch_taken_0x1d0c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C24u;
            // 0x1d0c28: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c24) {
            ctx->pc = 0x1D0C34u;
            goto label_1d0c34;
        }
    }
    ctx->pc = 0x1D0C2Cu;
label_1d0c2c:
    // 0x1d0c2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d0c30:
    if (ctx->pc == 0x1D0C30u) {
        ctx->pc = 0x1D0C30u;
            // 0x1d0c30: 0x2411012a  addiu       $s1, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->pc = 0x1D0C34u;
        goto label_1d0c34;
    }
    ctx->pc = 0x1D0C2Cu;
    {
        const bool branch_taken_0x1d0c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C2Cu;
            // 0x1d0c30: 0x2411012a  addiu       $s1, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c2c) {
            ctx->pc = 0x1D0C4Cu;
            goto label_1d0c4c;
        }
    }
    ctx->pc = 0x1D0C34u;
label_1d0c34:
    // 0x1d0c34: 0xc0724a4  jal         func_1C9290
label_1d0c38:
    if (ctx->pc == 0x1D0C38u) {
        ctx->pc = 0x1D0C3Cu;
        goto label_1d0c3c;
    }
    ctx->pc = 0x1D0C34u;
    SET_GPR_U32(ctx, 31, 0x1D0C3Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C3Cu; }
        if (ctx->pc != 0x1D0C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C3Cu; }
        if (ctx->pc != 0x1D0C3Cu) { return; }
    }
    ctx->pc = 0x1D0C3Cu;
label_1d0c3c:
    // 0x1d0c3c: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1d0c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_1d0c40:
    // 0x1d0c40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d0c44:
    if (ctx->pc == 0x1D0C44u) {
        ctx->pc = 0x1D0C44u;
            // 0x1d0c44: 0x24110160  addiu       $s1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->pc = 0x1D0C48u;
        goto label_1d0c48;
    }
    ctx->pc = 0x1D0C40u;
    {
        const bool branch_taken_0x1d0c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C40u;
            // 0x1d0c44: 0x24110160  addiu       $s1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c40) {
            ctx->pc = 0x1D0C4Cu;
            goto label_1d0c4c;
        }
    }
    ctx->pc = 0x1D0C48u;
label_1d0c48:
    // 0x1d0c48: 0x2411012a  addiu       $s1, $zero, 0x12A
    ctx->pc = 0x1d0c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
label_1d0c4c:
    // 0x1d0c4c: 0x8f838da8  lw          $v1, -0x7258($gp)
    ctx->pc = 0x1d0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_1d0c50:
    // 0x1d0c50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d0c54:
    // 0x1d0c54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1d0c58:
    if (ctx->pc == 0x1D0C58u) {
        ctx->pc = 0x1D0C58u;
            // 0x1d0c58: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0C5Cu;
        goto label_1d0c5c;
    }
    ctx->pc = 0x1D0C54u;
    {
        const bool branch_taken_0x1d0c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C54u;
            // 0x1d0c58: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c54) {
            ctx->pc = 0x1D0C90u;
            goto label_1d0c90;
        }
    }
    ctx->pc = 0x1D0C5Cu;
label_1d0c5c:
    // 0x1d0c5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0c60:
    // 0x1d0c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0c64:
    // 0x1d0c64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d0c68:
    // 0x1d0c68: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1d0c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1d0c6c:
    // 0x1d0c6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1d0c70:
    if (ctx->pc == 0x1D0C70u) {
        ctx->pc = 0x1D0C70u;
            // 0x1d0c70: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1D0C74u;
        goto label_1d0c74;
    }
    ctx->pc = 0x1D0C6Cu;
    {
        const bool branch_taken_0x1d0c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C6Cu;
            // 0x1d0c70: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c6c) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0C74u;
label_1d0c74:
    // 0x1d0c74: 0xc0724a4  jal         func_1C9290
label_1d0c78:
    if (ctx->pc == 0x1D0C78u) {
        ctx->pc = 0x1D0C7Cu;
        goto label_1d0c7c;
    }
    ctx->pc = 0x1D0C74u;
    SET_GPR_U32(ctx, 31, 0x1D0C7Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C7Cu; }
        if (ctx->pc != 0x1D0C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C7Cu; }
        if (ctx->pc != 0x1D0C7Cu) { return; }
    }
    ctx->pc = 0x1D0C7Cu;
label_1d0c7c:
    // 0x1d0c7c: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x1d0c7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_1d0c80:
    // 0x1d0c80: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d0c84:
    if (ctx->pc == 0x1D0C84u) {
        ctx->pc = 0x1D0C88u;
        goto label_1d0c88;
    }
    ctx->pc = 0x1D0C80u;
    {
        const bool branch_taken_0x1d0c80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c80) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0C88u;
label_1d0c88:
    // 0x1d0c88: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d0c8c:
    if (ctx->pc == 0x1D0C8Cu) {
        ctx->pc = 0x1D0C8Cu;
            // 0x1d0c8c: 0x2411017d  addiu       $s1, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->pc = 0x1D0C90u;
        goto label_1d0c90;
    }
    ctx->pc = 0x1D0C88u;
    {
        const bool branch_taken_0x1d0c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C88u;
            // 0x1d0c8c: 0x2411017d  addiu       $s1, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c88) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0C90u;
label_1d0c90:
    // 0x1d0c90: 0xc0724a4  jal         func_1C9290
label_1d0c94:
    if (ctx->pc == 0x1D0C94u) {
        ctx->pc = 0x1D0C98u;
        goto label_1d0c98;
    }
    ctx->pc = 0x1D0C90u;
    SET_GPR_U32(ctx, 31, 0x1D0C98u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C98u; }
        if (ctx->pc != 0x1D0C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C98u; }
        if (ctx->pc != 0x1D0C98u) { return; }
    }
    ctx->pc = 0x1D0C98u;
label_1d0c98:
    // 0x1d0c98: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x1d0c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_1d0c9c:
    // 0x1d0c9c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d0ca0:
    if (ctx->pc == 0x1D0CA0u) {
        ctx->pc = 0x1D0CA4u;
        goto label_1d0ca4;
    }
    ctx->pc = 0x1D0C9Cu;
    {
        const bool branch_taken_0x1d0c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c9c) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0CA4u;
label_1d0ca4:
    // 0x1d0ca4: 0x2411017d  addiu       $s1, $zero, 0x17D
    ctx->pc = 0x1d0ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
label_1d0ca8:
    // 0x1d0ca8: 0xa611006c  sh          $s1, 0x6C($s0)
    ctx->pc = 0x1d0ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 17));
label_1d0cac:
    // 0x1d0cac: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1d0cb0:
    // 0x1d0cb0: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_1d0cb4:
    if (ctx->pc == 0x1D0CB4u) {
        ctx->pc = 0x1D0CB4u;
            // 0x1d0cb4: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x1D0CB8u;
        goto label_1d0cb8;
    }
    ctx->pc = 0x1D0CB0u;
    {
        const bool branch_taken_0x1d0cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CB0u;
            // 0x1d0cb4: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cb0) {
            ctx->pc = 0x1D0D34u;
            goto label_1d0d34;
        }
    }
    ctx->pc = 0x1D0CB8u;
label_1d0cb8:
    // 0x1d0cb8: 0x3c0501eb  lui         $a1, 0x1EB
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)491 << 16));
label_1d0cbc:
    // 0x1d0cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0cc0:
    // 0x1d0cc0: 0xc06e760  jal         func_1B9D80
label_1d0cc4:
    if (ctx->pc == 0x1D0CC4u) {
        ctx->pc = 0x1D0CC4u;
            // 0x1d0cc4: 0x24a5f3c0  addiu       $a1, $a1, -0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964160));
        ctx->pc = 0x1D0CC8u;
        goto label_1d0cc8;
    }
    ctx->pc = 0x1D0CC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CC8u);
    ctx->pc = 0x1D0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CC0u;
            // 0x1d0cc4: 0x24a5f3c0  addiu       $a1, $a1, -0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CC8u; }
        if (ctx->pc != 0x1D0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CC8u; }
        if (ctx->pc != 0x1D0CC8u) { return; }
    }
    ctx->pc = 0x1D0CC8u;
label_1d0cc8:
    // 0x1d0cc8: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1d0ccc:
    // 0x1d0ccc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1d0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1d0cd0:
    // 0x1d0cd0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d0cd4:
    if (ctx->pc == 0x1D0CD4u) {
        ctx->pc = 0x1D0CD8u;
        goto label_1d0cd8;
    }
    ctx->pc = 0x1D0CD0u;
    {
        const bool branch_taken_0x1d0cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0cd0) {
            ctx->pc = 0x1D0D34u;
            goto label_1d0d34;
        }
    }
    ctx->pc = 0x1D0CD8u;
label_1d0cd8:
    // 0x1d0cd8: 0xc48300f0  lwc1        $f3, 0xF0($a0)
    ctx->pc = 0x1d0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d0cdc:
    // 0x1d0cdc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d0cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1d0ce0:
    // 0x1d0ce0: 0xc48200f4  lwc1        $f2, 0xF4($a0)
    ctx->pc = 0x1d0ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0ce4:
    // 0x1d0ce4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1d0ce8:
    // 0x1d0ce8: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x1d0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0cec:
    // 0x1d0cec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0cf0:
    // 0x1d0cf0: 0xc48000fc  lwc1        $f0, 0xFC($a0)
    ctx->pc = 0x1d0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cf4:
    // 0x1d0cf4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1d0cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1d0cf8:
    // 0x1d0cf8: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x1d0cf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1d0cfc:
    // 0x1d0cfc: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d0d00:
    // 0x1d0d00: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x1d0d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1d0d04:
    // 0x1d0d04: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x1d0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
label_1d0d08:
    // 0x1d0d08: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1d0d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1d0d0c:
    // 0x1d0d0c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1d0d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1d0d10:
    // 0x1d0d10: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x1d0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
label_1d0d14:
    // 0x1d0d14: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x1d0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_1d0d18:
    // 0x1d0d18: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x1d0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_1d0d1c:
    // 0x1d0d1c: 0xc0b3368  jal         func_2CCDA0
label_1d0d20:
    if (ctx->pc == 0x1D0D20u) {
        ctx->pc = 0x1D0D20u;
            // 0x1d0d20: 0xafa001a8  sw          $zero, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
        ctx->pc = 0x1D0D24u;
        goto label_1d0d24;
    }
    ctx->pc = 0x1D0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D24u);
    ctx->pc = 0x1D0D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D1Cu;
            // 0x1d0d20: 0xafa001a8  sw          $zero, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCDA0u;
    if (runtime->hasFunction(0x2CCDA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CCDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D24u; }
        if (ctx->pc != 0x1D0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bakuhatsu__4CPotFPfPf_0x2ccda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D24u; }
        if (ctx->pc != 0x1D0D24u) { return; }
    }
    ctx->pc = 0x1D0D24u;
label_1d0d24:
    // 0x1d0d24: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1d0d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1d0d28:
    // 0x1d0d28: 0xc06e9a0  jal         func_1BA680
label_1d0d2c:
    if (ctx->pc == 0x1D0D2Cu) {
        ctx->pc = 0x1D0D2Cu;
            // 0x1d0d2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0D30u;
        goto label_1d0d30;
    }
    ctx->pc = 0x1D0D28u;
    SET_GPR_U32(ctx, 31, 0x1D0D30u);
    ctx->pc = 0x1D0D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D28u;
            // 0x1d0d2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D30u; }
        if (ctx->pc != 0x1D0D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D30u; }
        if (ctx->pc != 0x1D0D30u) { return; }
    }
    ctx->pc = 0x1D0D30u;
label_1d0d30:
    // 0x1d0d30: 0xaf808de0  sw          $zero, -0x7220($gp)
    ctx->pc = 0x1d0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
label_1d0d34:
    // 0x1d0d34: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d0d38:
    // 0x1d0d38: 0xc0b30fc  jal         func_2CC3F0
label_1d0d3c:
    if (ctx->pc == 0x1D0D3Cu) {
        ctx->pc = 0x1D0D3Cu;
            // 0x1d0d3c: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->pc = 0x1D0D40u;
        goto label_1d0d40;
    }
    ctx->pc = 0x1D0D38u;
    SET_GPR_U32(ctx, 31, 0x1D0D40u);
    ctx->pc = 0x1D0D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D38u;
            // 0x1d0d3c: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3F0u;
    if (runtime->hasFunction(0x2CC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D40u; }
        if (ctx->pc != 0x1D0D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__5CBPotFv_0x2cc3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D40u; }
        if (ctx->pc != 0x1D0D40u) { return; }
    }
    ctx->pc = 0x1D0D40u;
label_1d0d40:
    // 0x1d0d40: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d0d44:
    // 0x1d0d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0d48:
    // 0x1d0d48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d0d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d0d4c:
    // 0x1d0d4c: 0x320f809  jalr        $t9
label_1d0d50:
    if (ctx->pc == 0x1D0D50u) {
        ctx->pc = 0x1D0D50u;
            // 0x1d0d50: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1D0D54u;
        goto label_1d0d54;
    }
    ctx->pc = 0x1D0D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0D54u);
        ctx->pc = 0x1D0D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D4Cu;
            // 0x1d0d50: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D54u; }
            if (ctx->pc != 0x1D0D54u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0D54u;
label_1d0d54:
    // 0x1d0d54: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d0d58:
    // 0x1d0d58: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1d0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1d0d5c:
    // 0x1d0d5c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1d0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_1d0d60:
    // 0x1d0d60: 0xc076604  jal         func_1D9810
label_1d0d64:
    if (ctx->pc == 0x1D0D64u) {
        ctx->pc = 0x1D0D64u;
            // 0x1d0d64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1D0D68u;
        goto label_1d0d68;
    }
    ctx->pc = 0x1D0D60u;
    SET_GPR_U32(ctx, 31, 0x1D0D68u);
    ctx->pc = 0x1D0D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D60u;
            // 0x1d0d64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9810u;
    if (runtime->hasFunction(0x1D9810u)) {
        auto targetFn = runtime->lookupFunction(0x1D9810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D68u; }
        if (ctx->pc != 0x1D0D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateNaviMap__11CAutoMapGenFPfi_0x1d9810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D68u; }
        if (ctx->pc != 0x1D0D68u) { return; }
    }
    ctx->pc = 0x1D0D68u;
label_1d0d68:
    // 0x1d0d68: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0d6c:
    // 0x1d0d6c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d0d70:
    // 0x1d0d70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d0d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1d0d74:
    // 0x1d0d74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1d0d78:
    if (ctx->pc == 0x1D0D78u) {
        ctx->pc = 0x1D0D7Cu;
        goto label_1d0d7c;
    }
    ctx->pc = 0x1D0D74u;
    {
        const bool branch_taken_0x1d0d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d74) {
            ctx->pc = 0x1D0D84u;
            goto label_1d0d84;
        }
    }
    ctx->pc = 0x1D0D7Cu;
label_1d0d7c:
    // 0x1d0d7c: 0xc077ec0  jal         func_1DFB00
label_1d0d80:
    if (ctx->pc == 0x1D0D80u) {
        ctx->pc = 0x1D0D80u;
            // 0x1d0d80: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1D0D84u;
        goto label_1d0d84;
    }
    ctx->pc = 0x1D0D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D84u);
    ctx->pc = 0x1D0D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D7Cu;
            // 0x1d0d80: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFB00u;
    if (runtime->hasFunction(0x1DFB00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D84u; }
        if (ctx->pc != 0x1D0D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ThinkHost__11CMonsterManFv_0x1dfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D84u; }
        if (ctx->pc != 0x1D0D84u) { return; }
    }
    ctx->pc = 0x1D0D84u;
label_1d0d84:
    // 0x1d0d84: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0d88:
    // 0x1d0d88: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d0d8c:
    // 0x1d0d8c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d0d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1d0d90:
    // 0x1d0d90: 0x14600164  bnez        $v1, . + 4 + (0x164 << 2)
label_1d0d94:
    if (ctx->pc == 0x1D0D94u) {
        ctx->pc = 0x1D0D98u;
        goto label_1d0d98;
    }
    ctx->pc = 0x1D0D90u;
    {
        const bool branch_taken_0x1d0d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d90) {
            ctx->pc = 0x1D1324u;
            goto label_1d1324;
        }
    }
    ctx->pc = 0x1D0D98u;
label_1d0d98:
    // 0x1d0d98: 0x83828e0c  lb          $v0, -0x71F4($gp)
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938124)));
label_1d0d9c:
    // 0x1d0d9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d0da0:
    if (ctx->pc == 0x1D0DA0u) {
        ctx->pc = 0x1D0DA0u;
            // 0x1d0da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D0DA4u;
        goto label_1d0da4;
    }
    ctx->pc = 0x1D0D9Cu;
    {
        const bool branch_taken_0x1d0d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D9Cu;
            // 0x1d0da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d9c) {
            ctx->pc = 0x1D0DACu;
            goto label_1d0dac;
        }
    }
    ctx->pc = 0x1D0DA4u;
label_1d0da4:
    // 0x1d0da4: 0xaf808e08  sw          $zero, -0x71F8($gp)
    ctx->pc = 0x1d0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 0));
label_1d0da8:
    // 0x1d0da8: 0xa3828e0c  sb          $v0, -0x71F4($gp)
    ctx->pc = 0x1d0da8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938124), (uint8_t)GPR_U32(ctx, 2));
label_1d0dac:
    // 0x1d0dac: 0x8f828e08  lw          $v0, -0x71F8($gp)
    ctx->pc = 0x1d0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
label_1d0db0:
    // 0x1d0db0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0db4:
    // 0x1d0db4: 0xaf828e08  sw          $v0, -0x71F8($gp)
    ctx->pc = 0x1d0db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 2));
label_1d0db8:
    // 0x1d0db8: 0x8f828e08  lw          $v0, -0x71F8($gp)
    ctx->pc = 0x1d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
label_1d0dbc:
    // 0x1d0dbc: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1d0dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_1d0dc0:
    // 0x1d0dc0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_1d0dc4:
    if (ctx->pc == 0x1D0DC4u) {
        ctx->pc = 0x1D0DC8u;
        goto label_1d0dc8;
    }
    ctx->pc = 0x1D0DC0u;
    {
        const bool branch_taken_0x1d0dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0dc0) {
            ctx->pc = 0x1D0EF8u;
            goto label_1d0ef8;
        }
    }
    ctx->pc = 0x1D0DC8u;
label_1d0dc8:
    // 0x1d0dc8: 0xaf808e08  sw          $zero, -0x71F8($gp)
    ctx->pc = 0x1d0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 0));
label_1d0dcc:
    // 0x1d0dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0dd0:
    // 0x1d0dd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0dd4:
    // 0x1d0dd4: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1d0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d0dd8:
    // 0x1d0dd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d0ddc:
    // 0x1d0ddc: 0x8c510484  lw          $s1, 0x484($v0)
    ctx->pc = 0x1d0ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1d0de0:
    // 0x1d0de0: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_1d0de4:
    if (ctx->pc == 0x1D0DE4u) {
        ctx->pc = 0x1D0DE8u;
        goto label_1d0de8;
    }
    ctx->pc = 0x1D0DE0u;
    {
        const bool branch_taken_0x1d0de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0de0) {
            ctx->pc = 0x1D0EE8u;
            goto label_1d0ee8;
        }
    }
    ctx->pc = 0x1D0DE8u;
label_1d0de8:
    // 0x1d0de8: 0x8e221330  lw          $v0, 0x1330($s1)
    ctx->pc = 0x1d0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4912)));
label_1d0dec:
    // 0x1d0dec: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1d0df0:
    if (ctx->pc == 0x1D0DF0u) {
        ctx->pc = 0x1D0DF4u;
        goto label_1d0df4;
    }
    ctx->pc = 0x1D0DECu;
    {
        const bool branch_taken_0x1d0dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0dec) {
            ctx->pc = 0x1D0EE8u;
            goto label_1d0ee8;
        }
    }
    ctx->pc = 0x1D0DF4u;
label_1d0df4:
    // 0x1d0df4: 0xc62112f4  lwc1        $f1, 0x12F4($s1)
    ctx->pc = 0x1d0df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0df8:
    // 0x1d0df8: 0xc62012fc  lwc1        $f0, 0x12FC($s1)
    ctx->pc = 0x1d0df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0dfc:
    // 0x1d0dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0e00:
    // 0x1d0e00: 0x0  nop
    ctx->pc = 0x1d0e00u;
    // NOP
label_1d0e04:
    // 0x1d0e04: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_1d0e08:
    if (ctx->pc == 0x1D0E08u) {
        ctx->pc = 0x1D0E0Cu;
        goto label_1d0e0c;
    }
    ctx->pc = 0x1D0E04u;
    {
        const bool branch_taken_0x1d0e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0e04) {
            ctx->pc = 0x1D0EE8u;
            goto label_1d0ee8;
        }
    }
    ctx->pc = 0x1D0E0Cu;
label_1d0e0c:
    // 0x1d0e0c: 0x8e221434  lw          $v0, 0x1434($s1)
    ctx->pc = 0x1d0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5172)));
label_1d0e10:
    // 0x1d0e10: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1d0e14:
    if (ctx->pc == 0x1D0E14u) {
        ctx->pc = 0x1D0E14u;
            // 0x1d0e14: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x1D0E18u;
        goto label_1d0e18;
    }
    ctx->pc = 0x1D0E10u;
    {
        const bool branch_taken_0x1d0e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E10u;
            // 0x1d0e14: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e10) {
            ctx->pc = 0x1D0EE8u;
            goto label_1d0ee8;
        }
    }
    ctx->pc = 0x1D0E18u;
label_1d0e18:
    // 0x1d0e18: 0xc041c5c  jal         func_107170
label_1d0e1c:
    if (ctx->pc == 0x1D0E1Cu) {
        ctx->pc = 0x1D0E1Cu;
            // 0x1d0e1c: 0x26251440  addiu       $a1, $s1, 0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5184));
        ctx->pc = 0x1D0E20u;
        goto label_1d0e20;
    }
    ctx->pc = 0x1D0E18u;
    SET_GPR_U32(ctx, 31, 0x1D0E20u);
    ctx->pc = 0x1D0E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E18u;
            // 0x1d0e1c: 0x26251440  addiu       $a1, $s1, 0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E20u; }
        if (ctx->pc != 0x1D0E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E20u; }
        if (ctx->pc != 0x1D0E20u) { return; }
    }
    ctx->pc = 0x1D0E20u;
label_1d0e20:
    // 0x1d0e20: 0x27b301c4  addiu       $s3, $sp, 0x1C4
    ctx->pc = 0x1d0e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_1d0e24:
    // 0x1d0e24: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1d0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1d0e28:
    // 0x1d0e28: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1d0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0e2c:
    // 0x1d0e2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d0e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1d0e30:
    // 0x1d0e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0e34:
    // 0x1d0e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e38:
    // 0x1d0e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e3c:
    // 0x1d0e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e40:
    // 0x1d0e40: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1d0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1d0e44:
    // 0x1d0e44: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x1d0e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1d0e48:
    // 0x1d0e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0e4c:
    // 0x1d0e4c: 0x0  nop
    ctx->pc = 0x1d0e4cu;
    // NOP
label_1d0e50:
    // 0x1d0e50: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1d0e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d0e54:
    // 0x1d0e54: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1d0e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d0e58:
    // 0x1d0e58: 0xc621010c  lwc1        $f1, 0x10C($s1)
    ctx->pc = 0x1d0e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0e5c:
    // 0x1d0e5c: 0xc6360110  lwc1        $f22, 0x110($s1)
    ctx->pc = 0x1d0e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d0e60:
    // 0x1d0e60: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d0e60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d0e64:
    // 0x1d0e64: 0x0  nop
    ctx->pc = 0x1d0e64u;
    // NOP
label_1d0e68:
    // 0x1d0e68: 0x0  nop
    ctx->pc = 0x1d0e68u;
    // NOP
label_1d0e6c:
    // 0x1d0e6c: 0xc05d420  jal         func_175080
label_1d0e70:
    if (ctx->pc == 0x1D0E70u) {
        ctx->pc = 0x1D0E74u;
        goto label_1d0e74;
    }
    ctx->pc = 0x1D0E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E74u);
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E74u; }
        if (ctx->pc != 0x1D0E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0E74u; }
        if (ctx->pc != 0x1D0E74u) { return; }
    }
    ctx->pc = 0x1D0E74u;
label_1d0e74:
    // 0x1d0e74: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x1d0e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0e78:
    // 0x1d0e78: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d0e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0e7c:
    // 0x1d0e7c: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x1d0e7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1d0e80:
    // 0x1d0e80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0e84:
    // 0x1d0e84: 0x0  nop
    ctx->pc = 0x1d0e84u;
    // NOP
label_1d0e88:
    // 0x1d0e88: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1d0e8c:
    if (ctx->pc == 0x1D0E8Cu) {
        ctx->pc = 0x1D0E90u;
        goto label_1d0e90;
    }
    ctx->pc = 0x1D0E88u;
    {
        const bool branch_taken_0x1d0e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0e88) {
            ctx->pc = 0x1D0EE8u;
            goto label_1d0ee8;
        }
    }
    ctx->pc = 0x1D0E90u;
label_1d0e90:
    // 0x1d0e90: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0e94:
    // 0x1d0e94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d0e98:
    // 0x1d0e98: 0x24a56f90  addiu       $a1, $a1, 0x6F90
    ctx->pc = 0x1d0e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28560));
label_1d0e9c:
    // 0x1d0e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ea0:
    // 0x1d0ea0: 0xc0b8498  jal         func_2E1260
label_1d0ea4:
    if (ctx->pc == 0x1D0EA4u) {
        ctx->pc = 0x1D0EA4u;
            // 0x1d0ea4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0EA8u;
        goto label_1d0ea8;
    }
    ctx->pc = 0x1D0EA0u;
    SET_GPR_U32(ctx, 31, 0x1D0EA8u);
    ctx->pc = 0x1D0EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EA0u;
            // 0x1d0ea4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EA8u; }
        if (ctx->pc != 0x1D0EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EA8u; }
        if (ctx->pc != 0x1D0EA8u) { return; }
    }
    ctx->pc = 0x1D0EA8u;
label_1d0ea8:
    // 0x1d0ea8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0eac:
    // 0x1d0eac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0eb0:
    // 0x1d0eb0: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1d0eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1d0eb4:
    // 0x1d0eb4: 0xc0b8894  jal         func_2E2250
label_1d0eb8:
    if (ctx->pc == 0x1D0EB8u) {
        ctx->pc = 0x1D0EB8u;
            // 0x1d0eb8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EBCu;
        goto label_1d0ebc;
    }
    ctx->pc = 0x1D0EB4u;
    SET_GPR_U32(ctx, 31, 0x1D0EBCu);
    ctx->pc = 0x1D0EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EB4u;
            // 0x1d0eb8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EBCu; }
        if (ctx->pc != 0x1D0EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EBCu; }
        if (ctx->pc != 0x1D0EBCu) { return; }
    }
    ctx->pc = 0x1D0EBCu;
label_1d0ebc:
    // 0x1d0ebc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d0ec0:
    // 0x1d0ec0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0ec4:
    // 0x1d0ec4: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
label_1d0ec8:
    // 0x1d0ec8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1d0ecc:
    // 0x1d0ecc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d0eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0ed0:
    // 0x1d0ed0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d0ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ed4:
    // 0x1d0ed4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d0ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1d0ed8:
    // 0x1d0ed8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0edc:
    // 0x1d0edc: 0xe7b501e0  swc1        $f21, 0x1E0($sp)
    ctx->pc = 0x1d0edcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_1d0ee0:
    // 0x1d0ee0: 0xc0b88d8  jal         func_2E2360
label_1d0ee4:
    if (ctx->pc == 0x1D0EE4u) {
        ctx->pc = 0x1D0EE4u;
            // 0x1d0ee4: 0xe7b501e8  swc1        $f21, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->pc = 0x1D0EE8u;
        goto label_1d0ee8;
    }
    ctx->pc = 0x1D0EE0u;
    SET_GPR_U32(ctx, 31, 0x1D0EE8u);
    ctx->pc = 0x1D0EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EE0u;
            // 0x1d0ee4: 0xe7b501e8  swc1        $f21, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EE8u; }
        if (ctx->pc != 0x1D0EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0EE8u; }
        if (ctx->pc != 0x1D0EE8u) { return; }
    }
    ctx->pc = 0x1D0EE8u;
label_1d0ee8:
    // 0x1d0ee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0eec:
    // 0x1d0eec: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1d0eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1d0ef0:
    // 0x1d0ef0: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_1d0ef4:
    if (ctx->pc == 0x1D0EF4u) {
        ctx->pc = 0x1D0EF4u;
            // 0x1d0ef4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1D0EF8u;
        goto label_1d0ef8;
    }
    ctx->pc = 0x1D0EF0u;
    {
        const bool branch_taken_0x1d0ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EF0u;
            // 0x1d0ef4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ef0) {
            ctx->pc = 0x1D0DD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0dd4;
        }
    }
    ctx->pc = 0x1D0EF8u;
label_1d0ef8:
    // 0x1d0ef8: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0efc:
    // 0x1d0efc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d0f00:
    // 0x1d0f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d0f04:
    // 0x1d0f04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d0f08:
    if (ctx->pc == 0x1D0F08u) {
        ctx->pc = 0x1D0F0Cu;
        goto label_1d0f0c;
    }
    ctx->pc = 0x1D0F04u;
    {
        const bool branch_taken_0x1d0f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f04) {
            ctx->pc = 0x1D0F14u;
            goto label_1d0f14;
        }
    }
    ctx->pc = 0x1D0F0Cu;
label_1d0f0c:
    // 0x1d0f0c: 0xc076c68  jal         func_1DB1A0
label_1d0f10:
    if (ctx->pc == 0x1D0F10u) {
        ctx->pc = 0x1D0F10u;
            // 0x1d0f10: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1D0F14u;
        goto label_1d0f14;
    }
    ctx->pc = 0x1D0F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F14u);
    ctx->pc = 0x1D0F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F0Cu;
            // 0x1d0f10: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1A0u;
    if (runtime->hasFunction(0x1DB1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F14u; }
        if (ctx->pc != 0x1D0F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepEffectScript__11CMonsterManFv_0x1db1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F14u; }
        if (ctx->pc != 0x1D0F14u) { return; }
    }
    ctx->pc = 0x1D0F14u;
label_1d0f14:
    // 0x1d0f14: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0f18:
    // 0x1d0f18: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d0f1c:
    // 0x1d0f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d0f20:
    // 0x1d0f20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d0f24:
    if (ctx->pc == 0x1D0F24u) {
        ctx->pc = 0x1D0F28u;
        goto label_1d0f28;
    }
    ctx->pc = 0x1D0F20u;
    {
        const bool branch_taken_0x1d0f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f20) {
            ctx->pc = 0x1D0F38u;
            goto label_1d0f38;
        }
    }
    ctx->pc = 0x1D0F28u;
label_1d0f28:
    // 0x1d0f28: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0f2c:
    // 0x1d0f2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d0f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d0f30:
    // 0x1d0f30: 0xc0b8884  jal         func_2E2210
label_1d0f34:
    if (ctx->pc == 0x1D0F34u) {
        ctx->pc = 0x1D0F34u;
            // 0x1d0f34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F38u;
        goto label_1d0f38;
    }
    ctx->pc = 0x1D0F30u;
    SET_GPR_U32(ctx, 31, 0x1D0F38u);
    ctx->pc = 0x1D0F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F30u;
            // 0x1d0f34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F38u; }
        if (ctx->pc != 0x1D0F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F38u; }
        if (ctx->pc != 0x1D0F38u) { return; }
    }
    ctx->pc = 0x1D0F38u;
label_1d0f38:
    // 0x1d0f38: 0xc0b8580  jal         func_2E1600
label_1d0f3c:
    if (ctx->pc == 0x1D0F3Cu) {
        ctx->pc = 0x1D0F3Cu;
            // 0x1d0f3c: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->pc = 0x1D0F40u;
        goto label_1d0f40;
    }
    ctx->pc = 0x1D0F38u;
    SET_GPR_U32(ctx, 31, 0x1D0F40u);
    ctx->pc = 0x1D0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F38u;
            // 0x1d0f3c: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F40u; }
        if (ctx->pc != 0x1D0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffectScriptManFv_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F40u; }
        if (ctx->pc != 0x1D0F40u) { return; }
    }
    ctx->pc = 0x1D0F40u;
label_1d0f40:
    // 0x1d0f40: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d0f44:
    // 0x1d0f44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d0f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d0f48:
    // 0x1d0f48: 0xc0b8884  jal         func_2E2210
label_1d0f4c:
    if (ctx->pc == 0x1D0F4Cu) {
        ctx->pc = 0x1D0F4Cu;
            // 0x1d0f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F50u;
        goto label_1d0f50;
    }
    ctx->pc = 0x1D0F48u;
    SET_GPR_U32(ctx, 31, 0x1D0F50u);
    ctx->pc = 0x1D0F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F48u;
            // 0x1d0f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F50u; }
        if (ctx->pc != 0x1D0F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F50u; }
        if (ctx->pc != 0x1D0F50u) { return; }
    }
    ctx->pc = 0x1D0F50u;
label_1d0f50:
    // 0x1d0f50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f54:
    // 0x1d0f54: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0f58:
    // 0x1d0f58: 0xc0b22dc  jal         func_2C8B70
label_1d0f5c:
    if (ctx->pc == 0x1D0F5Cu) {
        ctx->pc = 0x1D0F5Cu;
            // 0x1d0f5c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1D0F60u;
        goto label_1d0f60;
    }
    ctx->pc = 0x1D0F58u;
    SET_GPR_U32(ctx, 31, 0x1D0F60u);
    ctx->pc = 0x1D0F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F58u;
            // 0x1d0f5c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F60u; }
        if (ctx->pc != 0x1D0F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F60u; }
        if (ctx->pc != 0x1D0F60u) { return; }
    }
    ctx->pc = 0x1D0F60u;
label_1d0f60:
    // 0x1d0f60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d0f64:
    if (ctx->pc == 0x1D0F64u) {
        ctx->pc = 0x1D0F68u;
        goto label_1d0f68;
    }
    ctx->pc = 0x1D0F60u;
    {
        const bool branch_taken_0x1d0f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f60) {
            ctx->pc = 0x1D0F7Cu;
            goto label_1d0f7c;
        }
    }
    ctx->pc = 0x1D0F68u;
label_1d0f68:
    // 0x1d0f68: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d0f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0f6c:
    // 0x1d0f6c: 0xc0b22fc  jal         func_2C8BF0
label_1d0f70:
    if (ctx->pc == 0x1D0F70u) {
        ctx->pc = 0x1D0F70u;
            // 0x1d0f70: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1D0F74u;
        goto label_1d0f74;
    }
    ctx->pc = 0x1D0F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F74u);
    ctx->pc = 0x1D0F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F6Cu;
            // 0x1d0f70: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BF0u;
    if (runtime->hasFunction(0x2C8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F74u; }
        if (ctx->pc != 0x1D0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawCharaShadow__6CSceneFi_0x2c8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F74u; }
        if (ctx->pc != 0x1D0F74u) { return; }
    }
    ctx->pc = 0x1D0F74u;
label_1d0f74:
    // 0x1d0f74: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1d0f78:
    if (ctx->pc == 0x1D0F78u) {
        ctx->pc = 0x1D0F7Cu;
        goto label_1d0f7c;
    }
    ctx->pc = 0x1D0F74u;
    {
        const bool branch_taken_0x1d0f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f74) {
            ctx->pc = 0x1D0FF8u;
            goto label_1d0ff8;
        }
    }
    ctx->pc = 0x1D0F7Cu;
label_1d0f7c:
    // 0x1d0f7c: 0x0  nop
    ctx->pc = 0x1d0f7cu;
    // NOP
label_1d0f80:
    // 0x1d0f80: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d0f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0f84:
    // 0x1d0f84: 0xc0a0ed8  jal         func_283B60
label_1d0f88:
    if (ctx->pc == 0x1D0F88u) {
        ctx->pc = 0x1D0F88u;
            // 0x1d0f88: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1D0F8Cu;
        goto label_1d0f8c;
    }
    ctx->pc = 0x1D0F84u;
    SET_GPR_U32(ctx, 31, 0x1D0F8Cu);
    ctx->pc = 0x1D0F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F84u;
            // 0x1d0f88: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F8Cu; }
        if (ctx->pc != 0x1D0F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F8Cu; }
        if (ctx->pc != 0x1D0F8Cu) { return; }
    }
    ctx->pc = 0x1D0F8Cu;
label_1d0f8c:
    // 0x1d0f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f90:
    // 0x1d0f90: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1d0f94:
    if (ctx->pc == 0x1D0F94u) {
        ctx->pc = 0x1D0F98u;
        goto label_1d0f98;
    }
    ctx->pc = 0x1D0F90u;
    {
        const bool branch_taken_0x1d0f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f90) {
            ctx->pc = 0x1D0FF8u;
            goto label_1d0ff8;
        }
    }
    ctx->pc = 0x1D0F98u;
label_1d0f98:
    // 0x1d0f98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0f9c:
    // 0x1d0f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0fa0:
    // 0x1d0fa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d0fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d0fa4:
    // 0x1d0fa4: 0x8f3900dc  lw          $t9, 0xDC($t9)
    ctx->pc = 0x1d0fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 220)));
label_1d0fa8:
    // 0x1d0fa8: 0x320f809  jalr        $t9
label_1d0fac:
    if (ctx->pc == 0x1D0FACu) {
        ctx->pc = 0x1D0FACu;
            // 0x1d0fac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D0FB0u;
        goto label_1d0fb0;
    }
    ctx->pc = 0x1D0FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0FB0u);
        ctx->pc = 0x1D0FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FA8u;
            // 0x1d0fac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0FB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FB0u; }
            if (ctx->pc != 0x1D0FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0FB0u;
label_1d0fb0:
    // 0x1d0fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0fb4:
    // 0x1d0fb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0fb8:
    // 0x1d0fb8: 0xc05d3d4  jal         func_174F50
label_1d0fbc:
    if (ctx->pc == 0x1D0FBCu) {
        ctx->pc = 0x1D0FBCu;
            // 0x1d0fbc: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1D0FC0u;
        goto label_1d0fc0;
    }
    ctx->pc = 0x1D0FB8u;
    SET_GPR_U32(ctx, 31, 0x1D0FC0u);
    ctx->pc = 0x1D0FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FB8u;
            // 0x1d0fbc: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FC0u; }
        if (ctx->pc != 0x1D0FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FC0u; }
        if (ctx->pc != 0x1D0FC0u) { return; }
    }
    ctx->pc = 0x1D0FC0u;
label_1d0fc0:
    // 0x1d0fc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d0fc4:
    if (ctx->pc == 0x1D0FC4u) {
        ctx->pc = 0x1D0FC8u;
        goto label_1d0fc8;
    }
    ctx->pc = 0x1D0FC0u;
    {
        const bool branch_taken_0x1d0fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0fc0) {
            ctx->pc = 0x1D0FDCu;
            goto label_1d0fdc;
        }
    }
    ctx->pc = 0x1D0FC8u;
label_1d0fc8:
    // 0x1d0fc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d0fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0fcc:
    // 0x1d0fcc: 0xc7ac01f4  lwc1        $f12, 0x1F4($sp)
    ctx->pc = 0x1d0fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0fd0:
    // 0x1d0fd0: 0x8f3900e4  lw          $t9, 0xE4($t9)
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 228)));
label_1d0fd4:
    // 0x1d0fd4: 0x320f809  jalr        $t9
label_1d0fd8:
    if (ctx->pc == 0x1D0FD8u) {
        ctx->pc = 0x1D0FD8u;
            // 0x1d0fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FDCu;
        goto label_1d0fdc;
    }
    ctx->pc = 0x1D0FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0FDCu);
        ctx->pc = 0x1D0FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FD4u;
            // 0x1d0fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FDCu; }
            if (ctx->pc != 0x1D0FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D0FDCu;
label_1d0fdc:
    // 0x1d0fdc: 0x0  nop
    ctx->pc = 0x1d0fdcu;
    // NOP
label_1d0fe0:
    // 0x1d0fe0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0fe4:
    // 0x1d0fe4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1d0fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1d0fe8:
    // 0x1d0fe8: 0x320f809  jalr        $t9
label_1d0fec:
    if (ctx->pc == 0x1D0FECu) {
        ctx->pc = 0x1D0FECu;
            // 0x1d0fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FF0u;
        goto label_1d0ff0;
    }
    ctx->pc = 0x1D0FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0FF0u);
        ctx->pc = 0x1D0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FE8u;
            // 0x1d0fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FF0u; }
            if (ctx->pc != 0x1D0FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0FF0u;
label_1d0ff0:
    // 0x1d0ff0: 0xc05df00  jal         func_177C00
label_1d0ff4:
    if (ctx->pc == 0x1D0FF4u) {
        ctx->pc = 0x1D0FF4u;
            // 0x1d0ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FF8u;
        goto label_1d0ff8;
    }
    ctx->pc = 0x1D0FF0u;
    SET_GPR_U32(ctx, 31, 0x1D0FF8u);
    ctx->pc = 0x1D0FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FF0u;
            // 0x1d0ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177C00u;
    if (runtime->hasFunction(0x177C00u)) {
        auto targetFn = runtime->lookupFunction(0x177C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FF8u; }
        if (ctx->pc != 0x1D0FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepEffect__11CCharacter2Fv_0x177c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FF8u; }
        if (ctx->pc != 0x1D0FF8u) { return; }
    }
    ctx->pc = 0x1D0FF8u;
label_1d0ff8:
    // 0x1d0ff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0ffc:
    // 0x1d0ffc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1d0ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d1000:
    // 0x1d1000: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1d1004:
    if (ctx->pc == 0x1D1004u) {
        ctx->pc = 0x1D1004u;
            // 0x1d1004: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D1008u;
        goto label_1d1008;
    }
    ctx->pc = 0x1D1000u;
    {
        const bool branch_taken_0x1d1000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1000u;
            // 0x1d1004: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1000) {
            ctx->pc = 0x1D0F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0f54;
        }
    }
    ctx->pc = 0x1D1008u;
label_1d1008:
    // 0x1d1008: 0xc06ea58  jal         func_1BA960
label_1d100c:
    if (ctx->pc == 0x1D100Cu) {
        ctx->pc = 0x1D100Cu;
            // 0x1d100c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1D1010u;
        goto label_1d1010;
    }
    ctx->pc = 0x1D1008u;
    SET_GPR_U32(ctx, 31, 0x1D1010u);
    ctx->pc = 0x1D100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1008u;
            // 0x1d100c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA960u;
    if (runtime->hasFunction(0x1BA960u)) {
        auto targetFn = runtime->lookupFunction(0x1BA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1010u; }
        if (ctx->pc != 0x1D1010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CColPrimManFv_0x1ba960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1010u; }
        if (ctx->pc != 0x1D1010u) { return; }
    }
    ctx->pc = 0x1D1010u;
label_1d1010:
    // 0x1d1010: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1014:
    // 0x1d1014: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d1018:
    // 0x1d1018: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d1018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1d101c:
    // 0x1d101c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d1020:
    if (ctx->pc == 0x1D1020u) {
        ctx->pc = 0x1D1024u;
        goto label_1d1024;
    }
    ctx->pc = 0x1D101Cu;
    {
        const bool branch_taken_0x1d101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d101c) {
            ctx->pc = 0x1D1044u;
            goto label_1d1044;
        }
    }
    ctx->pc = 0x1D1024u;
label_1d1024:
    // 0x1d1024: 0xc074ec4  jal         func_1D3B10
label_1d1028:
    if (ctx->pc == 0x1D1028u) {
        ctx->pc = 0x1D102Cu;
        goto label_1d102c;
    }
    ctx->pc = 0x1D1024u;
    SET_GPR_U32(ctx, 31, 0x1D102Cu);
    ctx->pc = 0x1D3B10u;
    if (runtime->hasFunction(0x1D3B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D102Cu; }
        if (ctx->pc != 0x1D102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStatusError__Fv_0x1d3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D102Cu; }
        if (ctx->pc != 0x1D102Cu) { return; }
    }
    ctx->pc = 0x1D102Cu;
label_1d102c:
    // 0x1d102c: 0xc05c1cc  jal         func_170730
label_1d1030:
    if (ctx->pc == 0x1D1030u) {
        ctx->pc = 0x1D1030u;
            // 0x1d1030: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1034u;
        goto label_1d1034;
    }
    ctx->pc = 0x1D102Cu;
    SET_GPR_U32(ctx, 31, 0x1D1034u);
    ctx->pc = 0x1D1030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D102Cu;
            // 0x1d1030: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170730u;
    if (runtime->hasFunction(0x170730u)) {
        auto targetFn = runtime->lookupFunction(0x170730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1034u; }
        if (ctx->pc != 0x1D1034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDamage__12CActionCharaFv_0x170730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1034u; }
        if (ctx->pc != 0x1D1034u) { return; }
    }
    ctx->pc = 0x1D1034u;
label_1d1034:
    // 0x1d1034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d1038:
    if (ctx->pc == 0x1D1038u) {
        ctx->pc = 0x1D103Cu;
        goto label_1d103c;
    }
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D1044u;
            goto label_1d1044;
        }
    }
    ctx->pc = 0x1D103Cu;
label_1d103c:
    // 0x1d103c: 0xc074fb0  jal         func_1D3EC0
label_1d1040:
    if (ctx->pc == 0x1D1040u) {
        ctx->pc = 0x1D1040u;
            // 0x1d1040: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D1044u;
        goto label_1d1044;
    }
    ctx->pc = 0x1D103Cu;
    SET_GPR_U32(ctx, 31, 0x1D1044u);
    ctx->pc = 0x1D1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D103Cu;
            // 0x1d1040: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EC0u;
    if (runtime->hasFunction(0x1D3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1044u; }
        if (ctx->pc != 0x1D1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEyeView__FP12CActionChara_0x1d3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1044u; }
        if (ctx->pc != 0x1D1044u) { return; }
    }
    ctx->pc = 0x1D1044u;
label_1d1044:
    // 0x1d1044: 0xc07784c  jal         func_1DE130
label_1d1048:
    if (ctx->pc == 0x1D1048u) {
        ctx->pc = 0x1D1048u;
            // 0x1d1048: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1D104Cu;
        goto label_1d104c;
    }
    ctx->pc = 0x1D1044u;
    SET_GPR_U32(ctx, 31, 0x1D104Cu);
    ctx->pc = 0x1D1048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1044u;
            // 0x1d1048: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE130u;
    if (runtime->hasFunction(0x1DE130u)) {
        auto targetFn = runtime->lookupFunction(0x1DE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D104Cu; }
        if (ctx->pc != 0x1D104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDamage__11CMonsterManFv_0x1de130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D104Cu; }
        if (ctx->pc != 0x1D104Cu) { return; }
    }
    ctx->pc = 0x1D104Cu;
label_1d104c:
    // 0x1d104c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d104cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1050:
    // 0x1d1050: 0xc070718  jal         func_1C1C60
label_1d1054:
    if (ctx->pc == 0x1D1054u) {
        ctx->pc = 0x1D1054u;
            // 0x1d1054: 0x24847960  addiu       $a0, $a0, 0x7960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
        ctx->pc = 0x1D1058u;
        goto label_1d1058;
    }
    ctx->pc = 0x1D1050u;
    SET_GPR_U32(ctx, 31, 0x1D1058u);
    ctx->pc = 0x1D1054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1050u;
            // 0x1d1054: 0x24847960  addiu       $a0, $a0, 0x7960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C60u;
    if (runtime->hasFunction(0x1C1C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C1C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1058u; }
        if (ctx->pc != 0x1D1058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CSwordLuminousFv_0x1c1c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1058u; }
        if (ctx->pc != 0x1D1058u) { return; }
    }
    ctx->pc = 0x1D1058u;
label_1d1058:
    // 0x1d1058: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d105c:
    // 0x1d105c: 0xc0725d0  jal         func_1C9740
label_1d1060:
    if (ctx->pc == 0x1D1060u) {
        ctx->pc = 0x1D1060u;
            // 0x1d1060: 0x24840370  addiu       $a0, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->pc = 0x1D1064u;
        goto label_1d1064;
    }
    ctx->pc = 0x1D105Cu;
    SET_GPR_U32(ctx, 31, 0x1D1064u);
    ctx->pc = 0x1D1060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D105Cu;
            // 0x1d1060: 0x24840370  addiu       $a0, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9740u;
    if (runtime->hasFunction(0x1C9740u)) {
        auto targetFn = runtime->lookupFunction(0x1C9740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1064u; }
        if (ctx->pc != 0x1D1064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CLevelupInfoFv_0x1c9740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1064u; }
        if (ctx->pc != 0x1D1064u) { return; }
    }
    ctx->pc = 0x1D1064u;
label_1d1064:
    // 0x1d1064: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1068:
    // 0x1d1068: 0xc072e18  jal         func_1CB860
label_1d106c:
    if (ctx->pc == 0x1D106Cu) {
        ctx->pc = 0x1D106Cu;
            // 0x1d106c: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->pc = 0x1D1070u;
        goto label_1d1070;
    }
    ctx->pc = 0x1D1068u;
    SET_GPR_U32(ctx, 31, 0x1D1070u);
    ctx->pc = 0x1D106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1068u;
            // 0x1d106c: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB860u;
    if (runtime->hasFunction(0x1CB860u)) {
        auto targetFn = runtime->lookupFunction(0x1CB860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1070u; }
        if (ctx->pc != 0x1D1070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CLockOnModelFv_0x1cb860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1070u; }
        if (ctx->pc != 0x1D1070u) { return; }
    }
    ctx->pc = 0x1D1070u;
label_1d1070:
    // 0x1d1070: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1d1070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d1074:
    // 0x1d1074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d1074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1078:
    // 0x1d1078: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1d1078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1d107c:
    // 0x1d107c: 0x320f809  jalr        $t9
label_1d1080:
    if (ctx->pc == 0x1D1080u) {
        ctx->pc = 0x1D1084u;
        goto label_1d1084;
    }
    ctx->pc = 0x1D107Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1084u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1084u; }
            if (ctx->pc != 0x1D1084u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1084u;
label_1d1084:
    // 0x1d1084: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1088:
    // 0x1d1088: 0xc06da3c  jal         func_1B68F0
label_1d108c:
    if (ctx->pc == 0x1D108Cu) {
        ctx->pc = 0x1D108Cu;
            // 0x1d108c: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->pc = 0x1D1090u;
        goto label_1d1090;
    }
    ctx->pc = 0x1D1088u;
    SET_GPR_U32(ctx, 31, 0x1D1090u);
    ctx->pc = 0x1D108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1088u;
            // 0x1d108c: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B68F0u;
    if (runtime->hasFunction(0x1B68F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1090u; }
        if (ctx->pc != 0x1D1090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CRocketLauncherManFv_0x1b68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1090u; }
        if (ctx->pc != 0x1D1090u) { return; }
    }
    ctx->pc = 0x1D1090u;
label_1d1090:
    // 0x1d1090: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d1090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d1094:
    // 0x1d1094: 0xc06dad8  jal         func_1B6B60
label_1d1098:
    if (ctx->pc == 0x1D1098u) {
        ctx->pc = 0x1D1098u;
            // 0x1d1098: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
        ctx->pc = 0x1D109Cu;
        goto label_1d109c;
    }
    ctx->pc = 0x1D1094u;
    SET_GPR_U32(ctx, 31, 0x1D109Cu);
    ctx->pc = 0x1D1098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1094u;
            // 0x1d1098: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B60u;
    if (runtime->hasFunction(0x1B6B60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D109Cu; }
        if (ctx->pc != 0x1D109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CMachineGunFv_0x1b6b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D109Cu; }
        if (ctx->pc != 0x1D109Cu) { return; }
    }
    ctx->pc = 0x1D109Cu;
label_1d109c:
    // 0x1d109c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d109cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d10a0:
    // 0x1d10a0: 0xc06df84  jal         func_1B7E10
label_1d10a4:
    if (ctx->pc == 0x1D10A4u) {
        ctx->pc = 0x1D10A4u;
            // 0x1d10a4: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->pc = 0x1D10A8u;
        goto label_1d10a8;
    }
    ctx->pc = 0x1D10A0u;
    SET_GPR_U32(ctx, 31, 0x1D10A8u);
    ctx->pc = 0x1D10A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10A0u;
            // 0x1d10a4: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E10u;
    if (runtime->hasFunction(0x1B7E10u)) {
        auto targetFn = runtime->lookupFunction(0x1B7E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10A8u; }
        if (ctx->pc != 0x1D10A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CLaserGunManFv_0x1b7e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10A8u; }
        if (ctx->pc != 0x1D10A8u) { return; }
    }
    ctx->pc = 0x1D10A8u;
label_1d10a8:
    // 0x1d10a8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d10ac:
    // 0x1d10ac: 0xc072b84  jal         func_1CAE10
label_1d10b0:
    if (ctx->pc == 0x1D10B0u) {
        ctx->pc = 0x1D10B0u;
            // 0x1d10b0: 0x2484fa50  addiu       $a0, $a0, -0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
        ctx->pc = 0x1D10B4u;
        goto label_1d10b4;
    }
    ctx->pc = 0x1D10ACu;
    SET_GPR_U32(ctx, 31, 0x1D10B4u);
    ctx->pc = 0x1D10B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10ACu;
            // 0x1d10b0: 0x2484fa50  addiu       $a0, $a0, -0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE10u;
    if (runtime->hasFunction(0x1CAE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CAE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10B4u; }
        if (ctx->pc != 0x1D10B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CDamageScoreFv_0x1cae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10B4u; }
        if (ctx->pc != 0x1D10B4u) { return; }
    }
    ctx->pc = 0x1D10B4u;
label_1d10b4:
    // 0x1d10b4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d10b8:
    // 0x1d10b8: 0xc072c94  jal         func_1CB250
label_1d10bc:
    if (ctx->pc == 0x1D10BCu) {
        ctx->pc = 0x1D10BCu;
            // 0x1d10bc: 0x2484ff60  addiu       $a0, $a0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
        ctx->pc = 0x1D10C0u;
        goto label_1d10c0;
    }
    ctx->pc = 0x1D10B8u;
    SET_GPR_U32(ctx, 31, 0x1D10C0u);
    ctx->pc = 0x1D10BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10B8u;
            // 0x1d10bc: 0x2484ff60  addiu       $a0, $a0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB250u;
    if (runtime->hasFunction(0x1CB250u)) {
        auto targetFn = runtime->lookupFunction(0x1CB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10C0u; }
        if (ctx->pc != 0x1D10C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CDamageScore2Fv_0x1cb250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10C0u; }
        if (ctx->pc != 0x1D10C0u) { return; }
    }
    ctx->pc = 0x1D10C0u;
label_1d10c0:
    // 0x1d10c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d10c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d10c4:
    // 0x1d10c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d10c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d10c8:
    // 0x1d10c8: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1d10cc:
    // 0x1d10cc: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x1d10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
label_1d10d0:
    // 0x1d10d0: 0xc072b84  jal         func_1CAE10
label_1d10d4:
    if (ctx->pc == 0x1D10D4u) {
        ctx->pc = 0x1D10D4u;
            // 0x1d10d4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1D10D8u;
        goto label_1d10d8;
    }
    ctx->pc = 0x1D10D0u;
    SET_GPR_U32(ctx, 31, 0x1D10D8u);
    ctx->pc = 0x1D10D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10D0u;
            // 0x1d10d4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE10u;
    if (runtime->hasFunction(0x1CAE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CAE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10D8u; }
        if (ctx->pc != 0x1D10D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CDamageScoreFv_0x1cae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10D8u; }
        if (ctx->pc != 0x1D10D8u) { return; }
    }
    ctx->pc = 0x1D10D8u;
label_1d10d8:
    // 0x1d10d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d10d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d10dc:
    // 0x1d10dc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1d10dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d10e0:
    // 0x1d10e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d10e4:
    if (ctx->pc == 0x1D10E4u) {
        ctx->pc = 0x1D10E4u;
            // 0x1d10e4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->pc = 0x1D10E8u;
        goto label_1d10e8;
    }
    ctx->pc = 0x1D10E0u;
    {
        const bool branch_taken_0x1d10e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D10E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10E0u;
            // 0x1d10e4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10e0) {
            ctx->pc = 0x1D10C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d10c8;
        }
    }
    ctx->pc = 0x1D10E8u;
label_1d10e8:
    // 0x1d10e8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d10e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1d10ec:
    // 0x1d10ec: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d10ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d10f0:
    // 0x1d10f0: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x1d10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_1d10f4:
    // 0x1d10f4: 0xc071234  jal         func_1C48D0
label_1d10f8:
    if (ctx->pc == 0x1D10F8u) {
        ctx->pc = 0x1D10F8u;
            // 0x1d10f8: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
        ctx->pc = 0x1D10FCu;
        goto label_1d10fc;
    }
    ctx->pc = 0x1D10F4u;
    SET_GPR_U32(ctx, 31, 0x1D10FCu);
    ctx->pc = 0x1D10F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10F4u;
            // 0x1d10f8: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D0u;
    if (runtime->hasFunction(0x1C48D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10FCu; }
        if (ctx->pc != 0x1D10FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMapEffectsManegerFP9mgCCamera_0x1c48d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10FCu; }
        if (ctx->pc != 0x1D10FCu) { return; }
    }
    ctx->pc = 0x1D10FCu;
label_1d10fc:
    // 0x1d10fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1100:
    // 0x1d1100: 0xc071674  jal         func_1C59D0
label_1d1104:
    if (ctx->pc == 0x1D1104u) {
        ctx->pc = 0x1D1104u;
            // 0x1d1104: 0x24840320  addiu       $a0, $a0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
        ctx->pc = 0x1D1108u;
        goto label_1d1108;
    }
    ctx->pc = 0x1D1100u;
    SET_GPR_U32(ctx, 31, 0x1D1108u);
    ctx->pc = 0x1D1104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1100u;
            // 0x1d1104: 0x24840320  addiu       $a0, $a0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C59D0u;
    if (runtime->hasFunction(0x1C59D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C59D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1108u; }
        if (ctx->pc != 0x1D1108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15BattleEffectManFv_0x1c59d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1108u; }
        if (ctx->pc != 0x1D1108u) { return; }
    }
    ctx->pc = 0x1D1108u;
label_1d1108:
    // 0x1d1108: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d1108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d110c:
    // 0x1d110c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d110cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1110:
    // 0x1d1110: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1114:
    // 0x1d1114: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1118:
    // 0x1d1118: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d1118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d111c:
    // 0x1d111c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d111cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1120:
    // 0x1d1120: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1d1120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1d1124:
    // 0x1d1124: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x1d1124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
label_1d1128:
    // 0x1d1128: 0xc07033c  jal         func_1C0CF0
label_1d112c:
    if (ctx->pc == 0x1D112Cu) {
        ctx->pc = 0x1D112Cu;
            // 0x1d112c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1D1130u;
        goto label_1d1130;
    }
    ctx->pc = 0x1D1128u;
    SET_GPR_U32(ctx, 31, 0x1D1130u);
    ctx->pc = 0x1D112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1128u;
            // 0x1d112c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CF0u;
    if (runtime->hasFunction(0x1C0CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1130u; }
        if (ctx->pc != 0x1D1130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CSparcEffectFv_0x1c0cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1130u; }
        if (ctx->pc != 0x1D1130u) { return; }
    }
    ctx->pc = 0x1D1130u;
label_1d1130:
    // 0x1d1130: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1d1134:
    // 0x1d1134: 0x2442bba0  addiu       $v0, $v0, -0x4460
    ctx->pc = 0x1d1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949792));
label_1d1138:
    // 0x1d1138: 0xc070250  jal         func_1C0940
label_1d113c:
    if (ctx->pc == 0x1D113Cu) {
        ctx->pc = 0x1D113Cu;
            // 0x1d113c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1D1140u;
        goto label_1d1140;
    }
    ctx->pc = 0x1D1138u;
    SET_GPR_U32(ctx, 31, 0x1D1140u);
    ctx->pc = 0x1D113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1138u;
            // 0x1d113c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0940u;
    if (runtime->hasFunction(0x1C0940u)) {
        auto targetFn = runtime->lookupFunction(0x1C0940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1140u; }
        if (ctx->pc != 0x1D1140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__8CThunderFv_0x1c0940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1140u; }
        if (ctx->pc != 0x1D1140u) { return; }
    }
    ctx->pc = 0x1D1140u;
label_1d1140:
    // 0x1d1140: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1d1144:
    // 0x1d1144: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x1d1144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
label_1d1148:
    // 0x1d1148: 0xc070088  jal         func_1C0220
label_1d114c:
    if (ctx->pc == 0x1D114Cu) {
        ctx->pc = 0x1D114Cu;
            // 0x1d114c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x1D1150u;
        goto label_1d1150;
    }
    ctx->pc = 0x1D1148u;
    SET_GPR_U32(ctx, 31, 0x1D1150u);
    ctx->pc = 0x1D114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1148u;
            // 0x1d114c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0220u;
    if (runtime->hasFunction(0x1C0220u)) {
        auto targetFn = runtime->lookupFunction(0x1C0220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1150u; }
        if (ctx->pc != 0x1D1150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__8CTornadoFv_0x1c0220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1150u; }
        if (ctx->pc != 0x1D1150u) { return; }
    }
    ctx->pc = 0x1D1150u;
label_1d1150:
    // 0x1d1150: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1d1154:
    // 0x1d1154: 0x24422320  addiu       $v0, $v0, 0x2320
    ctx->pc = 0x1d1154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8992));
label_1d1158:
    // 0x1d1158: 0xc06faac  jal         func_1BEAB0
label_1d115c:
    if (ctx->pc == 0x1D115Cu) {
        ctx->pc = 0x1D115Cu;
            // 0x1d115c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1D1160u;
        goto label_1d1160;
    }
    ctx->pc = 0x1D1158u;
    SET_GPR_U32(ctx, 31, 0x1D1160u);
    ctx->pc = 0x1D115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1158u;
            // 0x1d115c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAB0u;
    if (runtime->hasFunction(0x1BEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1160u; }
        if (ctx->pc != 0x1D1160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CChillAfterHitFv_0x1beab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1160u; }
        if (ctx->pc != 0x1D1160u) { return; }
    }
    ctx->pc = 0x1D1160u;
label_1d1160:
    // 0x1d1160: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1d1164:
    // 0x1d1164: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x1d1164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
label_1d1168:
    // 0x1d1168: 0xc06fde4  jal         func_1BF790
label_1d116c:
    if (ctx->pc == 0x1D116Cu) {
        ctx->pc = 0x1D116Cu;
            // 0x1d116c: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->pc = 0x1D1170u;
        goto label_1d1170;
    }
    ctx->pc = 0x1D1168u;
    SET_GPR_U32(ctx, 31, 0x1D1170u);
    ctx->pc = 0x1D116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1168u;
            // 0x1d116c: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF790u;
    if (runtime->hasFunction(0x1BF790u)) {
        auto targetFn = runtime->lookupFunction(0x1BF790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1170u; }
        if (ctx->pc != 0x1D1170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CFireAfterHitFv_0x1bf790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1170u; }
        if (ctx->pc != 0x1D1170u) { return; }
    }
    ctx->pc = 0x1D1170u;
label_1d1170:
    // 0x1d1170: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d1170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1d1174:
    // 0x1d1174: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d1174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1d1178:
    // 0x1d1178: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x1d1178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d117c:
    // 0x1d117c: 0x26310dc0  addiu       $s1, $s1, 0xDC0
    ctx->pc = 0x1d117cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3520));
label_1d1180:
    // 0x1d1180: 0x26520380  addiu       $s2, $s2, 0x380
    ctx->pc = 0x1d1180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
label_1d1184:
    // 0x1d1184: 0x267307a0  addiu       $s3, $s3, 0x7A0
    ctx->pc = 0x1d1184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1952));
label_1d1188:
    // 0x1d1188: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1d118c:
    if (ctx->pc == 0x1D118Cu) {
        ctx->pc = 0x1D118Cu;
            // 0x1d118c: 0x26940940  addiu       $s4, $s4, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
        ctx->pc = 0x1D1190u;
        goto label_1d1190;
    }
    ctx->pc = 0x1D1188u;
    {
        const bool branch_taken_0x1d1188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1188u;
            // 0x1d118c: 0x26940940  addiu       $s4, $s4, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1188) {
            ctx->pc = 0x1D1120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1120;
        }
    }
    ctx->pc = 0x1D1190u;
label_1d1190:
    // 0x1d1190: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1194:
    // 0x1d1194: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d1198:
    // 0x1d1198: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1d119c:
    // 0x1d119c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1d11a0:
    if (ctx->pc == 0x1D11A0u) {
        ctx->pc = 0x1D11A0u;
            // 0x1d11a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D11A4u;
        goto label_1d11a4;
    }
    ctx->pc = 0x1D119Cu;
    {
        const bool branch_taken_0x1d119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D119Cu;
            // 0x1d11a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d119c) {
            ctx->pc = 0x1D1200u;
            goto label_1d1200;
        }
    }
    ctx->pc = 0x1D11A4u;
label_1d11a4:
    // 0x1d11a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11a8:
    // 0x1d11a8: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1d11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1d11ac:
    // 0x1d11ac: 0x244242f0  addiu       $v0, $v0, 0x42F0
    ctx->pc = 0x1d11acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17136));
label_1d11b0:
    // 0x1d11b0: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d11b4:
    // 0x1d11b4: 0xc06e09c  jal         func_1B8270
label_1d11b8:
    if (ctx->pc == 0x1D11B8u) {
        ctx->pc = 0x1D11B8u;
            // 0x1d11b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D11BCu;
        goto label_1d11bc;
    }
    ctx->pc = 0x1D11B4u;
    SET_GPR_U32(ctx, 31, 0x1D11BCu);
    ctx->pc = 0x1D11B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11B4u;
            // 0x1d11b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    if (runtime->hasFunction(0x1B8270u)) {
        auto targetFn = runtime->lookupFunction(0x1B8270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11BCu; }
        if (ctx->pc != 0x1D11BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CPullItemFv_0x1b8270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11BCu; }
        if (ctx->pc != 0x1D11BCu) { return; }
    }
    ctx->pc = 0x1D11BCu;
label_1d11bc:
    // 0x1d11bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d11bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d11c0:
    // 0x1d11c0: 0xc06e434  jal         func_1B90D0
label_1d11c4:
    if (ctx->pc == 0x1D11C4u) {
        ctx->pc = 0x1D11C4u;
            // 0x1d11c4: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1D11C8u;
        goto label_1d11c8;
    }
    ctx->pc = 0x1D11C0u;
    SET_GPR_U32(ctx, 31, 0x1D11C8u);
    ctx->pc = 0x1D11C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11C0u;
            // 0x1d11c4: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B90D0u;
    if (runtime->hasFunction(0x1B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11C8u; }
        if (ctx->pc != 0x1D11C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGet__9CPullItemFPf_0x1b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11C8u; }
        if (ctx->pc != 0x1D11C8u) { return; }
    }
    ctx->pc = 0x1D11C8u;
label_1d11c8:
    // 0x1d11c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d11c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d11cc:
    // 0x1d11cc: 0x2a020048  slti        $v0, $s0, 0x48
    ctx->pc = 0x1d11ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)72) ? 1 : 0);
label_1d11d0:
    // 0x1d11d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1d11d4:
    if (ctx->pc == 0x1D11D4u) {
        ctx->pc = 0x1D11D4u;
            // 0x1d11d4: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x1D11D8u;
        goto label_1d11d8;
    }
    ctx->pc = 0x1D11D0u;
    {
        const bool branch_taken_0x1d11d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11D0u;
            // 0x1d11d4: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11d0) {
            ctx->pc = 0x1D11A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d11a8;
        }
    }
    ctx->pc = 0x1D11D8u;
label_1d11d8:
    // 0x1d11d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d11d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11dc:
    // 0x1d11dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d11dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11e0:
    // 0x1d11e0: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1d11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1d11e4:
    // 0x1d11e4: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_1d11e8:
    // 0x1d11e8: 0xc070984  jal         func_1C2610
label_1d11ec:
    if (ctx->pc == 0x1D11ECu) {
        ctx->pc = 0x1D11ECu;
            // 0x1d11ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1D11F0u;
        goto label_1d11f0;
    }
    ctx->pc = 0x1D11E8u;
    SET_GPR_U32(ctx, 31, 0x1D11F0u);
    ctx->pc = 0x1D11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11E8u;
            // 0x1d11ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2610u;
    if (runtime->hasFunction(0x1C2610u)) {
        auto targetFn = runtime->lookupFunction(0x1C2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F0u; }
        if (ctx->pc != 0x1D11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepWire__10CAfterWireFv_0x1c2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F0u; }
        if (ctx->pc != 0x1D11F0u) { return; }
    }
    ctx->pc = 0x1D11F0u;
label_1d11f0:
    // 0x1d11f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d11f4:
    // 0x1d11f4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1d11f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d11f8:
    // 0x1d11f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d11fc:
    if (ctx->pc == 0x1D11FCu) {
        ctx->pc = 0x1D11FCu;
            // 0x1d11fc: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->pc = 0x1D1200u;
        goto label_1d1200;
    }
    ctx->pc = 0x1D11F8u;
    {
        const bool branch_taken_0x1d11f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11F8u;
            // 0x1d11fc: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11f8) {
            ctx->pc = 0x1D11E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d11e0;
        }
    }
    ctx->pc = 0x1D1200u;
label_1d1200:
    // 0x1d1200: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d1200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d1204:
    // 0x1d1204: 0x80420048  lb          $v0, 0x48($v0)
    ctx->pc = 0x1d1204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
label_1d1208:
    // 0x1d1208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d120c:
    if (ctx->pc == 0x1D120Cu) {
        ctx->pc = 0x1D1210u;
        goto label_1d1210;
    }
    ctx->pc = 0x1D1208u;
    {
        const bool branch_taken_0x1d1208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1208) {
            ctx->pc = 0x1D1228u;
            goto label_1d1228;
        }
    }
    ctx->pc = 0x1D1210u;
label_1d1210:
    // 0x1d1210: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d1214:
    // 0x1d1214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d1218:
    if (ctx->pc == 0x1D1218u) {
        ctx->pc = 0x1D121Cu;
        goto label_1d121c;
    }
    ctx->pc = 0x1D1214u;
    {
        const bool branch_taken_0x1d1214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1214) {
            ctx->pc = 0x1D1228u;
            goto label_1d1228;
        }
    }
    ctx->pc = 0x1D121Cu;
label_1d121c:
    // 0x1d121c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d121cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1220:
    // 0x1d1220: 0xc072e30  jal         func_1CB8C0
label_1d1224:
    if (ctx->pc == 0x1D1224u) {
        ctx->pc = 0x1D1224u;
            // 0x1d1224: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
        ctx->pc = 0x1D1228u;
        goto label_1d1228;
    }
    ctx->pc = 0x1D1220u;
    SET_GPR_U32(ctx, 31, 0x1D1228u);
    ctx->pc = 0x1D1224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1220u;
            // 0x1d1224: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB8C0u;
    if (runtime->hasFunction(0x1CB8C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1228u; }
        if (ctx->pc != 0x1D1228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CWarningGage2Fv_0x1cb8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1228u; }
        if (ctx->pc != 0x1D1228u) { return; }
    }
    ctx->pc = 0x1D1228u;
label_1d1228:
    // 0x1d1228: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d122c:
    // 0x1d122c: 0xc070454  jal         func_1C1150
label_1d1230:
    if (ctx->pc == 0x1D1230u) {
        ctx->pc = 0x1D1230u;
            // 0x1d1230: 0x24845f40  addiu       $a0, $a0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
        ctx->pc = 0x1D1234u;
        goto label_1d1234;
    }
    ctx->pc = 0x1D122Cu;
    SET_GPR_U32(ctx, 31, 0x1D1234u);
    ctx->pc = 0x1D1230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D122Cu;
            // 0x1d1230: 0x24845f40  addiu       $a0, $a0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1150u;
    if (runtime->hasFunction(0x1C1150u)) {
        auto targetFn = runtime->lookupFunction(0x1C1150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1234u; }
        if (ctx->pc != 0x1D1234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15CMiniEffPrimManFv_0x1c1150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1234u; }
        if (ctx->pc != 0x1D1234u) { return; }
    }
    ctx->pc = 0x1D1234u;
label_1d1234:
    // 0x1d1234: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1d1238:
    // 0x1d1238: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1d123c:
    if (ctx->pc == 0x1D123Cu) {
        ctx->pc = 0x1D1240u;
        goto label_1d1240;
    }
    ctx->pc = 0x1D1238u;
    {
        const bool branch_taken_0x1d1238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1238) {
            ctx->pc = 0x1D12A4u;
            goto label_1d12a4;
        }
    }
    ctx->pc = 0x1D1240u;
label_1d1240:
    // 0x1d1240: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d1244:
    // 0x1d1244: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1d1248:
    // 0x1d1248: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x1d1248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_1d124c:
    // 0x1d124c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d124cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1d1250:
    // 0x1d1250: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d1254:
    // 0x1d1254: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1d1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1d1258:
    // 0x1d1258: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x1d1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d125c:
    // 0x1d125c: 0xc057f68  jal         func_15FDA0
label_1d1260:
    if (ctx->pc == 0x1D1260u) {
        ctx->pc = 0x1D1260u;
            // 0x1d1260: 0xe7a00210  swc1        $f0, 0x210($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
        ctx->pc = 0x1D1264u;
        goto label_1d1264;
    }
    ctx->pc = 0x1D125Cu;
    SET_GPR_U32(ctx, 31, 0x1D1264u);
    ctx->pc = 0x1D1260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D125Cu;
            // 0x1d1260: 0xe7a00210  swc1        $f0, 0x210($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FDA0u;
    if (runtime->hasFunction(0x15FDA0u)) {
        auto targetFn = runtime->lookupFunction(0x15FDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1264u; }
        if (ctx->pc != 0x1D1264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStep__4CMapFv_0x15fda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1264u; }
        if (ctx->pc != 0x1D1264u) { return; }
    }
    ctx->pc = 0x1D1264u;
label_1d1264:
    // 0x1d1264: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1d1264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1d1268:
    // 0x1d1268: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1d1268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1d126c:
    // 0x1d126c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1d126cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1d1270:
    // 0x1d1270: 0x320f809  jalr        $t9
label_1d1274:
    if (ctx->pc == 0x1D1274u) {
        ctx->pc = 0x1D1274u;
            // 0x1d1274: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1D1278u;
        goto label_1d1278;
    }
    ctx->pc = 0x1D1270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1278u);
        ctx->pc = 0x1D1274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1270u;
            // 0x1d1274: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1278u; }
            if (ctx->pc != 0x1D1278u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1278u;
label_1d1278:
    // 0x1d1278: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1d1278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1d127c:
    // 0x1d127c: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1d1280:
    // 0x1d1280: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1d1280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1d1284:
    // 0x1d1284: 0x320f809  jalr        $t9
label_1d1288:
    if (ctx->pc == 0x1D1288u) {
        ctx->pc = 0x1D128Cu;
        goto label_1d128c;
    }
    ctx->pc = 0x1D1284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D128Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D128Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D128Cu; }
            if (ctx->pc != 0x1D128Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D128Cu;
label_1d128c:
    // 0x1d128c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d128cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d1290:
    // 0x1d1290: 0xc0705e8  jal         func_1C17A0
label_1d1294:
    if (ctx->pc == 0x1D1294u) {
        ctx->pc = 0x1D1294u;
            // 0x1d1294: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->pc = 0x1D1298u;
        goto label_1d1298;
    }
    ctx->pc = 0x1D1290u;
    SET_GPR_U32(ctx, 31, 0x1D1298u);
    ctx->pc = 0x1D1294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1290u;
            // 0x1d1294: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (runtime->hasFunction(0x1C17A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1298u; }
        if (ctx->pc != 0x1D1298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__17CHealingEffectManFv_0x1c17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1298u; }
        if (ctx->pc != 0x1D1298u) { return; }
    }
    ctx->pc = 0x1D1298u;
label_1d1298:
    // 0x1d1298: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d129c:
    // 0x1d129c: 0xc076548  jal         func_1D9520
label_1d12a0:
    if (ctx->pc == 0x1D12A0u) {
        ctx->pc = 0x1D12A0u;
            // 0x1d12a0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->pc = 0x1D12A4u;
        goto label_1d12a4;
    }
    ctx->pc = 0x1D129Cu;
    SET_GPR_U32(ctx, 31, 0x1D12A4u);
    ctx->pc = 0x1D12A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D129Cu;
            // 0x1d12a0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9520u;
    if (runtime->hasFunction(0x1D9520u)) {
        auto targetFn = runtime->lookupFunction(0x1D9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12A4u; }
        if (ctx->pc != 0x1D12A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CAutoMapGenFv_0x1d9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12A4u; }
        if (ctx->pc != 0x1D12A4u) { return; }
    }
    ctx->pc = 0x1D12A4u;
label_1d12a4:
    // 0x1d12a4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d12a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d12a8:
    // 0x1d12a8: 0xc0a2f90  jal         func_28BE40
label_1d12ac:
    if (ctx->pc == 0x1D12ACu) {
        ctx->pc = 0x1D12ACu;
            // 0x1d12ac: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->pc = 0x1D12B0u;
        goto label_1d12b0;
    }
    ctx->pc = 0x1D12A8u;
    SET_GPR_U32(ctx, 31, 0x1D12B0u);
    ctx->pc = 0x1D12ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12A8u;
            // 0x1d12ac: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BE40u;
    if (runtime->hasFunction(0x28BE40u)) {
        auto targetFn = runtime->lookupFunction(0x28BE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12B0u; }
        if (ctx->pc != 0x1D12B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CRandomCircleFv_0x28be40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12B0u; }
        if (ctx->pc != 0x1D12B0u) { return; }
    }
    ctx->pc = 0x1D12B0u;
label_1d12b0:
    // 0x1d12b0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d12b4:
    // 0x1d12b4: 0xc0a2f08  jal         func_28BC20
label_1d12b8:
    if (ctx->pc == 0x1D12B8u) {
        ctx->pc = 0x1D12B8u;
            // 0x1d12b8: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->pc = 0x1D12BCu;
        goto label_1d12bc;
    }
    ctx->pc = 0x1D12B4u;
    SET_GPR_U32(ctx, 31, 0x1D12BCu);
    ctx->pc = 0x1D12B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12B4u;
            // 0x1d12b8: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC20u;
    if (runtime->hasFunction(0x28BC20u)) {
        auto targetFn = runtime->lookupFunction(0x28BC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12BCu; }
        if (ctx->pc != 0x1D12BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GeoStep__9CGeoStoneFv_0x28bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12BCu; }
        if (ctx->pc != 0x1D12BCu) { return; }
    }
    ctx->pc = 0x1D12BCu;
label_1d12bc:
    // 0x1d12bc: 0xc0c64f4  jal         func_3193D0
label_1d12c0:
    if (ctx->pc == 0x1D12C0u) {
        ctx->pc = 0x1D12C4u;
        goto label_1d12c4;
    }
    ctx->pc = 0x1D12BCu;
    SET_GPR_U32(ctx, 31, 0x1D12C4u);
    ctx->pc = 0x3193D0u;
    if (runtime->hasFunction(0x3193D0u)) {
        auto targetFn = runtime->lookupFunction(0x3193D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12C4u; }
        if (ctx->pc != 0x1D12C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepHelpMes__Fv_0x3193d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12C4u; }
        if (ctx->pc != 0x1D12C4u) { return; }
    }
    ctx->pc = 0x1D12C4u;
label_1d12c4:
    // 0x1d12c4: 0xc0a3374  jal         func_28CDD0
label_1d12c8:
    if (ctx->pc == 0x1D12C8u) {
        ctx->pc = 0x1D12CCu;
        goto label_1d12cc;
    }
    ctx->pc = 0x1D12C4u;
    SET_GPR_U32(ctx, 31, 0x1D12CCu);
    ctx->pc = 0x28CDD0u;
    if (runtime->hasFunction(0x28CDD0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12CCu; }
        if (ctx->pc != 0x1D12CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BattleSoundManager__Fv_0x28cdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12CCu; }
        if (ctx->pc != 0x1D12CCu) { return; }
    }
    ctx->pc = 0x1D12CCu;
label_1d12cc:
    // 0x1d12cc: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d12d0:
    // 0x1d12d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d12d4:
    // 0x1d12d4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d12d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1d12d8:
    // 0x1d12d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d12dc:
    if (ctx->pc == 0x1D12DCu) {
        ctx->pc = 0x1D12E0u;
        goto label_1d12e0;
    }
    ctx->pc = 0x1D12D8u;
    {
        const bool branch_taken_0x1d12d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d12d8) {
            ctx->pc = 0x1D12F0u;
            goto label_1d12f0;
        }
    }
    ctx->pc = 0x1D12E0u;
label_1d12e0:
    // 0x1d12e0: 0xc0683a8  jal         func_1A0EA0
label_1d12e4:
    if (ctx->pc == 0x1D12E4u) {
        ctx->pc = 0x1D12E8u;
        goto label_1d12e8;
    }
    ctx->pc = 0x1D12E0u;
    SET_GPR_U32(ctx, 31, 0x1D12E8u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12E8u; }
        if (ctx->pc != 0x1D12E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12E8u; }
        if (ctx->pc != 0x1D12E8u) { return; }
    }
    ctx->pc = 0x1D12E8u;
label_1d12e8:
    // 0x1d12e8: 0xc068318  jal         func_1A0C60
label_1d12ec:
    if (ctx->pc == 0x1D12ECu) {
        ctx->pc = 0x1D12ECu;
            // 0x1d12ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D12F0u;
        goto label_1d12f0;
    }
    ctx->pc = 0x1D12E8u;
    SET_GPR_U32(ctx, 31, 0x1D12F0u);
    ctx->pc = 0x1D12ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D12E8u;
            // 0x1d12ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C60u;
    if (runtime->hasFunction(0x1A0C60u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12F0u; }
        if (ctx->pc != 0x1D12F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CBattleCharaInfoFv_0x1a0c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D12F0u; }
        if (ctx->pc != 0x1D12F0u) { return; }
    }
    ctx->pc = 0x1D12F0u;
label_1d12f0:
    // 0x1d12f0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1d12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1d12f4:
    // 0x1d12f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d12f8:
    if (ctx->pc == 0x1D12F8u) {
        ctx->pc = 0x1D12FCu;
        goto label_1d12fc;
    }
    ctx->pc = 0x1D12F4u;
    {
        const bool branch_taken_0x1d12f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d12f4) {
            ctx->pc = 0x1D1314u;
            goto label_1d1314;
        }
    }
    ctx->pc = 0x1D12FCu;
label_1d12fc:
    // 0x1d12fc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d1300:
    // 0x1d1300: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d1300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d1304:
    // 0x1d1304: 0xc0a129c  jal         func_284A70
label_1d1308:
    if (ctx->pc == 0x1D1308u) {
        ctx->pc = 0x1D1308u;
            // 0x1d1308: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D130Cu;
        goto label_1d130c;
    }
    ctx->pc = 0x1D1304u;
    SET_GPR_U32(ctx, 31, 0x1D130Cu);
    ctx->pc = 0x1D1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1304u;
            // 0x1d1308: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A70u;
    if (runtime->hasFunction(0x284A70u)) {
        auto targetFn = runtime->lookupFunction(0x284A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D130Cu; }
        if (ctx->pc != 0x1D130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeStep__6CSceneFf_0x284a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D130Cu; }
        if (ctx->pc != 0x1D130Cu) { return; }
    }
    ctx->pc = 0x1D130Cu;
label_1d130c:
    // 0x1d130c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d1310:
    if (ctx->pc == 0x1D1310u) {
        ctx->pc = 0x1D1310u;
            // 0x1d1310: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1D1314u;
        goto label_1d1314;
    }
    ctx->pc = 0x1D130Cu;
    {
        const bool branch_taken_0x1d130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D130Cu;
            // 0x1d1310: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d130c) {
            ctx->pc = 0x1D1328u;
            goto label_1d1328;
        }
    }
    ctx->pc = 0x1D1314u;
label_1d1314:
    // 0x1d1314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d1318:
    // 0x1d1318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d1318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d131c:
    // 0x1d131c: 0xc0a129c  jal         func_284A70
label_1d1320:
    if (ctx->pc == 0x1D1320u) {
        ctx->pc = 0x1D1320u;
            // 0x1d1320: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D1324u;
        goto label_1d1324;
    }
    ctx->pc = 0x1D131Cu;
    SET_GPR_U32(ctx, 31, 0x1D1324u);
    ctx->pc = 0x1D1320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D131Cu;
            // 0x1d1320: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A70u;
    if (runtime->hasFunction(0x284A70u)) {
        auto targetFn = runtime->lookupFunction(0x284A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1324u; }
        if (ctx->pc != 0x1D1324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeStep__6CSceneFf_0x284a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1324u; }
        if (ctx->pc != 0x1D1324u) { return; }
    }
    ctx->pc = 0x1D1324u;
label_1d1324:
    // 0x1d1324: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d1324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1328:
    // 0x1d1328: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d132c:
    // 0x1d132c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d132cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1330:
    // 0x1d1330: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d1330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d1334:
    // 0x1d1334: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d1334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1338:
    // 0x1d1338: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d1338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d133c:
    // 0x1d133c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d133cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1340:
    // 0x1d1340: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d1340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1344:
    // 0x1d1344: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d1344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1348:
    // 0x1d1348: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d1348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d134c:
    // 0x1d134c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d134cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1350:
    // 0x1d1350: 0x3e00008  jr          $ra
label_1d1354:
    if (ctx->pc == 0x1D1354u) {
        ctx->pc = 0x1D1354u;
            // 0x1d1354: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x1D1358u;
        goto label_fallthrough_0x1d1350;
    }
    ctx->pc = 0x1D1350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1350u;
            // 0x1d1354: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d1350:
    ctx->pc = 0x1D1358u;
}
