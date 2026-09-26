#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawWater__4CMapFP9mgCCameraP10mgCTextureP10mgCTexture
// Address: 0x15e800 - 0x15ef64
void DrawWater__4CMapFP9mgCCameraP10mgCTextureP10mgCTexture_0x15e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawWater__4CMapFP9mgCCameraP10mgCTextureP10mgCTexture_0x15e800");
#endif

    switch (ctx->pc) {
        case 0x15e800u: goto label_15e800;
        case 0x15e804u: goto label_15e804;
        case 0x15e808u: goto label_15e808;
        case 0x15e80cu: goto label_15e80c;
        case 0x15e810u: goto label_15e810;
        case 0x15e814u: goto label_15e814;
        case 0x15e818u: goto label_15e818;
        case 0x15e81cu: goto label_15e81c;
        case 0x15e820u: goto label_15e820;
        case 0x15e824u: goto label_15e824;
        case 0x15e828u: goto label_15e828;
        case 0x15e82cu: goto label_15e82c;
        case 0x15e830u: goto label_15e830;
        case 0x15e834u: goto label_15e834;
        case 0x15e838u: goto label_15e838;
        case 0x15e83cu: goto label_15e83c;
        case 0x15e840u: goto label_15e840;
        case 0x15e844u: goto label_15e844;
        case 0x15e848u: goto label_15e848;
        case 0x15e84cu: goto label_15e84c;
        case 0x15e850u: goto label_15e850;
        case 0x15e854u: goto label_15e854;
        case 0x15e858u: goto label_15e858;
        case 0x15e85cu: goto label_15e85c;
        case 0x15e860u: goto label_15e860;
        case 0x15e864u: goto label_15e864;
        case 0x15e868u: goto label_15e868;
        case 0x15e86cu: goto label_15e86c;
        case 0x15e870u: goto label_15e870;
        case 0x15e874u: goto label_15e874;
        case 0x15e878u: goto label_15e878;
        case 0x15e87cu: goto label_15e87c;
        case 0x15e880u: goto label_15e880;
        case 0x15e884u: goto label_15e884;
        case 0x15e888u: goto label_15e888;
        case 0x15e88cu: goto label_15e88c;
        case 0x15e890u: goto label_15e890;
        case 0x15e894u: goto label_15e894;
        case 0x15e898u: goto label_15e898;
        case 0x15e89cu: goto label_15e89c;
        case 0x15e8a0u: goto label_15e8a0;
        case 0x15e8a4u: goto label_15e8a4;
        case 0x15e8a8u: goto label_15e8a8;
        case 0x15e8acu: goto label_15e8ac;
        case 0x15e8b0u: goto label_15e8b0;
        case 0x15e8b4u: goto label_15e8b4;
        case 0x15e8b8u: goto label_15e8b8;
        case 0x15e8bcu: goto label_15e8bc;
        case 0x15e8c0u: goto label_15e8c0;
        case 0x15e8c4u: goto label_15e8c4;
        case 0x15e8c8u: goto label_15e8c8;
        case 0x15e8ccu: goto label_15e8cc;
        case 0x15e8d0u: goto label_15e8d0;
        case 0x15e8d4u: goto label_15e8d4;
        case 0x15e8d8u: goto label_15e8d8;
        case 0x15e8dcu: goto label_15e8dc;
        case 0x15e8e0u: goto label_15e8e0;
        case 0x15e8e4u: goto label_15e8e4;
        case 0x15e8e8u: goto label_15e8e8;
        case 0x15e8ecu: goto label_15e8ec;
        case 0x15e8f0u: goto label_15e8f0;
        case 0x15e8f4u: goto label_15e8f4;
        case 0x15e8f8u: goto label_15e8f8;
        case 0x15e8fcu: goto label_15e8fc;
        case 0x15e900u: goto label_15e900;
        case 0x15e904u: goto label_15e904;
        case 0x15e908u: goto label_15e908;
        case 0x15e90cu: goto label_15e90c;
        case 0x15e910u: goto label_15e910;
        case 0x15e914u: goto label_15e914;
        case 0x15e918u: goto label_15e918;
        case 0x15e91cu: goto label_15e91c;
        case 0x15e920u: goto label_15e920;
        case 0x15e924u: goto label_15e924;
        case 0x15e928u: goto label_15e928;
        case 0x15e92cu: goto label_15e92c;
        case 0x15e930u: goto label_15e930;
        case 0x15e934u: goto label_15e934;
        case 0x15e938u: goto label_15e938;
        case 0x15e93cu: goto label_15e93c;
        case 0x15e940u: goto label_15e940;
        case 0x15e944u: goto label_15e944;
        case 0x15e948u: goto label_15e948;
        case 0x15e94cu: goto label_15e94c;
        case 0x15e950u: goto label_15e950;
        case 0x15e954u: goto label_15e954;
        case 0x15e958u: goto label_15e958;
        case 0x15e95cu: goto label_15e95c;
        case 0x15e960u: goto label_15e960;
        case 0x15e964u: goto label_15e964;
        case 0x15e968u: goto label_15e968;
        case 0x15e96cu: goto label_15e96c;
        case 0x15e970u: goto label_15e970;
        case 0x15e974u: goto label_15e974;
        case 0x15e978u: goto label_15e978;
        case 0x15e97cu: goto label_15e97c;
        case 0x15e980u: goto label_15e980;
        case 0x15e984u: goto label_15e984;
        case 0x15e988u: goto label_15e988;
        case 0x15e98cu: goto label_15e98c;
        case 0x15e990u: goto label_15e990;
        case 0x15e994u: goto label_15e994;
        case 0x15e998u: goto label_15e998;
        case 0x15e99cu: goto label_15e99c;
        case 0x15e9a0u: goto label_15e9a0;
        case 0x15e9a4u: goto label_15e9a4;
        case 0x15e9a8u: goto label_15e9a8;
        case 0x15e9acu: goto label_15e9ac;
        case 0x15e9b0u: goto label_15e9b0;
        case 0x15e9b4u: goto label_15e9b4;
        case 0x15e9b8u: goto label_15e9b8;
        case 0x15e9bcu: goto label_15e9bc;
        case 0x15e9c0u: goto label_15e9c0;
        case 0x15e9c4u: goto label_15e9c4;
        case 0x15e9c8u: goto label_15e9c8;
        case 0x15e9ccu: goto label_15e9cc;
        case 0x15e9d0u: goto label_15e9d0;
        case 0x15e9d4u: goto label_15e9d4;
        case 0x15e9d8u: goto label_15e9d8;
        case 0x15e9dcu: goto label_15e9dc;
        case 0x15e9e0u: goto label_15e9e0;
        case 0x15e9e4u: goto label_15e9e4;
        case 0x15e9e8u: goto label_15e9e8;
        case 0x15e9ecu: goto label_15e9ec;
        case 0x15e9f0u: goto label_15e9f0;
        case 0x15e9f4u: goto label_15e9f4;
        case 0x15e9f8u: goto label_15e9f8;
        case 0x15e9fcu: goto label_15e9fc;
        case 0x15ea00u: goto label_15ea00;
        case 0x15ea04u: goto label_15ea04;
        case 0x15ea08u: goto label_15ea08;
        case 0x15ea0cu: goto label_15ea0c;
        case 0x15ea10u: goto label_15ea10;
        case 0x15ea14u: goto label_15ea14;
        case 0x15ea18u: goto label_15ea18;
        case 0x15ea1cu: goto label_15ea1c;
        case 0x15ea20u: goto label_15ea20;
        case 0x15ea24u: goto label_15ea24;
        case 0x15ea28u: goto label_15ea28;
        case 0x15ea2cu: goto label_15ea2c;
        case 0x15ea30u: goto label_15ea30;
        case 0x15ea34u: goto label_15ea34;
        case 0x15ea38u: goto label_15ea38;
        case 0x15ea3cu: goto label_15ea3c;
        case 0x15ea40u: goto label_15ea40;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea48u: goto label_15ea48;
        case 0x15ea4cu: goto label_15ea4c;
        case 0x15ea50u: goto label_15ea50;
        case 0x15ea54u: goto label_15ea54;
        case 0x15ea58u: goto label_15ea58;
        case 0x15ea5cu: goto label_15ea5c;
        case 0x15ea60u: goto label_15ea60;
        case 0x15ea64u: goto label_15ea64;
        case 0x15ea68u: goto label_15ea68;
        case 0x15ea6cu: goto label_15ea6c;
        case 0x15ea70u: goto label_15ea70;
        case 0x15ea74u: goto label_15ea74;
        case 0x15ea78u: goto label_15ea78;
        case 0x15ea7cu: goto label_15ea7c;
        case 0x15ea80u: goto label_15ea80;
        case 0x15ea84u: goto label_15ea84;
        case 0x15ea88u: goto label_15ea88;
        case 0x15ea8cu: goto label_15ea8c;
        case 0x15ea90u: goto label_15ea90;
        case 0x15ea94u: goto label_15ea94;
        case 0x15ea98u: goto label_15ea98;
        case 0x15ea9cu: goto label_15ea9c;
        case 0x15eaa0u: goto label_15eaa0;
        case 0x15eaa4u: goto label_15eaa4;
        case 0x15eaa8u: goto label_15eaa8;
        case 0x15eaacu: goto label_15eaac;
        case 0x15eab0u: goto label_15eab0;
        case 0x15eab4u: goto label_15eab4;
        case 0x15eab8u: goto label_15eab8;
        case 0x15eabcu: goto label_15eabc;
        case 0x15eac0u: goto label_15eac0;
        case 0x15eac4u: goto label_15eac4;
        case 0x15eac8u: goto label_15eac8;
        case 0x15eaccu: goto label_15eacc;
        case 0x15ead0u: goto label_15ead0;
        case 0x15ead4u: goto label_15ead4;
        case 0x15ead8u: goto label_15ead8;
        case 0x15eadcu: goto label_15eadc;
        case 0x15eae0u: goto label_15eae0;
        case 0x15eae4u: goto label_15eae4;
        case 0x15eae8u: goto label_15eae8;
        case 0x15eaecu: goto label_15eaec;
        case 0x15eaf0u: goto label_15eaf0;
        case 0x15eaf4u: goto label_15eaf4;
        case 0x15eaf8u: goto label_15eaf8;
        case 0x15eafcu: goto label_15eafc;
        case 0x15eb00u: goto label_15eb00;
        case 0x15eb04u: goto label_15eb04;
        case 0x15eb08u: goto label_15eb08;
        case 0x15eb0cu: goto label_15eb0c;
        case 0x15eb10u: goto label_15eb10;
        case 0x15eb14u: goto label_15eb14;
        case 0x15eb18u: goto label_15eb18;
        case 0x15eb1cu: goto label_15eb1c;
        case 0x15eb20u: goto label_15eb20;
        case 0x15eb24u: goto label_15eb24;
        case 0x15eb28u: goto label_15eb28;
        case 0x15eb2cu: goto label_15eb2c;
        case 0x15eb30u: goto label_15eb30;
        case 0x15eb34u: goto label_15eb34;
        case 0x15eb38u: goto label_15eb38;
        case 0x15eb3cu: goto label_15eb3c;
        case 0x15eb40u: goto label_15eb40;
        case 0x15eb44u: goto label_15eb44;
        case 0x15eb48u: goto label_15eb48;
        case 0x15eb4cu: goto label_15eb4c;
        case 0x15eb50u: goto label_15eb50;
        case 0x15eb54u: goto label_15eb54;
        case 0x15eb58u: goto label_15eb58;
        case 0x15eb5cu: goto label_15eb5c;
        case 0x15eb60u: goto label_15eb60;
        case 0x15eb64u: goto label_15eb64;
        case 0x15eb68u: goto label_15eb68;
        case 0x15eb6cu: goto label_15eb6c;
        case 0x15eb70u: goto label_15eb70;
        case 0x15eb74u: goto label_15eb74;
        case 0x15eb78u: goto label_15eb78;
        case 0x15eb7cu: goto label_15eb7c;
        case 0x15eb80u: goto label_15eb80;
        case 0x15eb84u: goto label_15eb84;
        case 0x15eb88u: goto label_15eb88;
        case 0x15eb8cu: goto label_15eb8c;
        case 0x15eb90u: goto label_15eb90;
        case 0x15eb94u: goto label_15eb94;
        case 0x15eb98u: goto label_15eb98;
        case 0x15eb9cu: goto label_15eb9c;
        case 0x15eba0u: goto label_15eba0;
        case 0x15eba4u: goto label_15eba4;
        case 0x15eba8u: goto label_15eba8;
        case 0x15ebacu: goto label_15ebac;
        case 0x15ebb0u: goto label_15ebb0;
        case 0x15ebb4u: goto label_15ebb4;
        case 0x15ebb8u: goto label_15ebb8;
        case 0x15ebbcu: goto label_15ebbc;
        case 0x15ebc0u: goto label_15ebc0;
        case 0x15ebc4u: goto label_15ebc4;
        case 0x15ebc8u: goto label_15ebc8;
        case 0x15ebccu: goto label_15ebcc;
        case 0x15ebd0u: goto label_15ebd0;
        case 0x15ebd4u: goto label_15ebd4;
        case 0x15ebd8u: goto label_15ebd8;
        case 0x15ebdcu: goto label_15ebdc;
        case 0x15ebe0u: goto label_15ebe0;
        case 0x15ebe4u: goto label_15ebe4;
        case 0x15ebe8u: goto label_15ebe8;
        case 0x15ebecu: goto label_15ebec;
        case 0x15ebf0u: goto label_15ebf0;
        case 0x15ebf4u: goto label_15ebf4;
        case 0x15ebf8u: goto label_15ebf8;
        case 0x15ebfcu: goto label_15ebfc;
        case 0x15ec00u: goto label_15ec00;
        case 0x15ec04u: goto label_15ec04;
        case 0x15ec08u: goto label_15ec08;
        case 0x15ec0cu: goto label_15ec0c;
        case 0x15ec10u: goto label_15ec10;
        case 0x15ec14u: goto label_15ec14;
        case 0x15ec18u: goto label_15ec18;
        case 0x15ec1cu: goto label_15ec1c;
        case 0x15ec20u: goto label_15ec20;
        case 0x15ec24u: goto label_15ec24;
        case 0x15ec28u: goto label_15ec28;
        case 0x15ec2cu: goto label_15ec2c;
        case 0x15ec30u: goto label_15ec30;
        case 0x15ec34u: goto label_15ec34;
        case 0x15ec38u: goto label_15ec38;
        case 0x15ec3cu: goto label_15ec3c;
        case 0x15ec40u: goto label_15ec40;
        case 0x15ec44u: goto label_15ec44;
        case 0x15ec48u: goto label_15ec48;
        case 0x15ec4cu: goto label_15ec4c;
        case 0x15ec50u: goto label_15ec50;
        case 0x15ec54u: goto label_15ec54;
        case 0x15ec58u: goto label_15ec58;
        case 0x15ec5cu: goto label_15ec5c;
        case 0x15ec60u: goto label_15ec60;
        case 0x15ec64u: goto label_15ec64;
        case 0x15ec68u: goto label_15ec68;
        case 0x15ec6cu: goto label_15ec6c;
        case 0x15ec70u: goto label_15ec70;
        case 0x15ec74u: goto label_15ec74;
        case 0x15ec78u: goto label_15ec78;
        case 0x15ec7cu: goto label_15ec7c;
        case 0x15ec80u: goto label_15ec80;
        case 0x15ec84u: goto label_15ec84;
        case 0x15ec88u: goto label_15ec88;
        case 0x15ec8cu: goto label_15ec8c;
        case 0x15ec90u: goto label_15ec90;
        case 0x15ec94u: goto label_15ec94;
        case 0x15ec98u: goto label_15ec98;
        case 0x15ec9cu: goto label_15ec9c;
        case 0x15eca0u: goto label_15eca0;
        case 0x15eca4u: goto label_15eca4;
        case 0x15eca8u: goto label_15eca8;
        case 0x15ecacu: goto label_15ecac;
        case 0x15ecb0u: goto label_15ecb0;
        case 0x15ecb4u: goto label_15ecb4;
        case 0x15ecb8u: goto label_15ecb8;
        case 0x15ecbcu: goto label_15ecbc;
        case 0x15ecc0u: goto label_15ecc0;
        case 0x15ecc4u: goto label_15ecc4;
        case 0x15ecc8u: goto label_15ecc8;
        case 0x15ecccu: goto label_15eccc;
        case 0x15ecd0u: goto label_15ecd0;
        case 0x15ecd4u: goto label_15ecd4;
        case 0x15ecd8u: goto label_15ecd8;
        case 0x15ecdcu: goto label_15ecdc;
        case 0x15ece0u: goto label_15ece0;
        case 0x15ece4u: goto label_15ece4;
        case 0x15ece8u: goto label_15ece8;
        case 0x15ececu: goto label_15ecec;
        case 0x15ecf0u: goto label_15ecf0;
        case 0x15ecf4u: goto label_15ecf4;
        case 0x15ecf8u: goto label_15ecf8;
        case 0x15ecfcu: goto label_15ecfc;
        case 0x15ed00u: goto label_15ed00;
        case 0x15ed04u: goto label_15ed04;
        case 0x15ed08u: goto label_15ed08;
        case 0x15ed0cu: goto label_15ed0c;
        case 0x15ed10u: goto label_15ed10;
        case 0x15ed14u: goto label_15ed14;
        case 0x15ed18u: goto label_15ed18;
        case 0x15ed1cu: goto label_15ed1c;
        case 0x15ed20u: goto label_15ed20;
        case 0x15ed24u: goto label_15ed24;
        case 0x15ed28u: goto label_15ed28;
        case 0x15ed2cu: goto label_15ed2c;
        case 0x15ed30u: goto label_15ed30;
        case 0x15ed34u: goto label_15ed34;
        case 0x15ed38u: goto label_15ed38;
        case 0x15ed3cu: goto label_15ed3c;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed44u: goto label_15ed44;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed4cu: goto label_15ed4c;
        case 0x15ed50u: goto label_15ed50;
        case 0x15ed54u: goto label_15ed54;
        case 0x15ed58u: goto label_15ed58;
        case 0x15ed5cu: goto label_15ed5c;
        case 0x15ed60u: goto label_15ed60;
        case 0x15ed64u: goto label_15ed64;
        case 0x15ed68u: goto label_15ed68;
        case 0x15ed6cu: goto label_15ed6c;
        case 0x15ed70u: goto label_15ed70;
        case 0x15ed74u: goto label_15ed74;
        case 0x15ed78u: goto label_15ed78;
        case 0x15ed7cu: goto label_15ed7c;
        case 0x15ed80u: goto label_15ed80;
        case 0x15ed84u: goto label_15ed84;
        case 0x15ed88u: goto label_15ed88;
        case 0x15ed8cu: goto label_15ed8c;
        case 0x15ed90u: goto label_15ed90;
        case 0x15ed94u: goto label_15ed94;
        case 0x15ed98u: goto label_15ed98;
        case 0x15ed9cu: goto label_15ed9c;
        case 0x15eda0u: goto label_15eda0;
        case 0x15eda4u: goto label_15eda4;
        case 0x15eda8u: goto label_15eda8;
        case 0x15edacu: goto label_15edac;
        case 0x15edb0u: goto label_15edb0;
        case 0x15edb4u: goto label_15edb4;
        case 0x15edb8u: goto label_15edb8;
        case 0x15edbcu: goto label_15edbc;
        case 0x15edc0u: goto label_15edc0;
        case 0x15edc4u: goto label_15edc4;
        case 0x15edc8u: goto label_15edc8;
        case 0x15edccu: goto label_15edcc;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edd4u: goto label_15edd4;
        case 0x15edd8u: goto label_15edd8;
        case 0x15eddcu: goto label_15eddc;
        case 0x15ede0u: goto label_15ede0;
        case 0x15ede4u: goto label_15ede4;
        case 0x15ede8u: goto label_15ede8;
        case 0x15edecu: goto label_15edec;
        case 0x15edf0u: goto label_15edf0;
        case 0x15edf4u: goto label_15edf4;
        case 0x15edf8u: goto label_15edf8;
        case 0x15edfcu: goto label_15edfc;
        case 0x15ee00u: goto label_15ee00;
        case 0x15ee04u: goto label_15ee04;
        case 0x15ee08u: goto label_15ee08;
        case 0x15ee0cu: goto label_15ee0c;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee14u: goto label_15ee14;
        case 0x15ee18u: goto label_15ee18;
        case 0x15ee1cu: goto label_15ee1c;
        case 0x15ee20u: goto label_15ee20;
        case 0x15ee24u: goto label_15ee24;
        case 0x15ee28u: goto label_15ee28;
        case 0x15ee2cu: goto label_15ee2c;
        case 0x15ee30u: goto label_15ee30;
        case 0x15ee34u: goto label_15ee34;
        case 0x15ee38u: goto label_15ee38;
        case 0x15ee3cu: goto label_15ee3c;
        case 0x15ee40u: goto label_15ee40;
        case 0x15ee44u: goto label_15ee44;
        case 0x15ee48u: goto label_15ee48;
        case 0x15ee4cu: goto label_15ee4c;
        case 0x15ee50u: goto label_15ee50;
        case 0x15ee54u: goto label_15ee54;
        case 0x15ee58u: goto label_15ee58;
        case 0x15ee5cu: goto label_15ee5c;
        case 0x15ee60u: goto label_15ee60;
        case 0x15ee64u: goto label_15ee64;
        case 0x15ee68u: goto label_15ee68;
        case 0x15ee6cu: goto label_15ee6c;
        case 0x15ee70u: goto label_15ee70;
        case 0x15ee74u: goto label_15ee74;
        case 0x15ee78u: goto label_15ee78;
        case 0x15ee7cu: goto label_15ee7c;
        case 0x15ee80u: goto label_15ee80;
        case 0x15ee84u: goto label_15ee84;
        case 0x15ee88u: goto label_15ee88;
        case 0x15ee8cu: goto label_15ee8c;
        case 0x15ee90u: goto label_15ee90;
        case 0x15ee94u: goto label_15ee94;
        case 0x15ee98u: goto label_15ee98;
        case 0x15ee9cu: goto label_15ee9c;
        case 0x15eea0u: goto label_15eea0;
        case 0x15eea4u: goto label_15eea4;
        case 0x15eea8u: goto label_15eea8;
        case 0x15eeacu: goto label_15eeac;
        case 0x15eeb0u: goto label_15eeb0;
        case 0x15eeb4u: goto label_15eeb4;
        case 0x15eeb8u: goto label_15eeb8;
        case 0x15eebcu: goto label_15eebc;
        case 0x15eec0u: goto label_15eec0;
        case 0x15eec4u: goto label_15eec4;
        case 0x15eec8u: goto label_15eec8;
        case 0x15eeccu: goto label_15eecc;
        case 0x15eed0u: goto label_15eed0;
        case 0x15eed4u: goto label_15eed4;
        case 0x15eed8u: goto label_15eed8;
        case 0x15eedcu: goto label_15eedc;
        case 0x15eee0u: goto label_15eee0;
        case 0x15eee4u: goto label_15eee4;
        case 0x15eee8u: goto label_15eee8;
        case 0x15eeecu: goto label_15eeec;
        case 0x15eef0u: goto label_15eef0;
        case 0x15eef4u: goto label_15eef4;
        case 0x15eef8u: goto label_15eef8;
        case 0x15eefcu: goto label_15eefc;
        case 0x15ef00u: goto label_15ef00;
        case 0x15ef04u: goto label_15ef04;
        case 0x15ef08u: goto label_15ef08;
        case 0x15ef0cu: goto label_15ef0c;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef14u: goto label_15ef14;
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef1cu: goto label_15ef1c;
        case 0x15ef20u: goto label_15ef20;
        case 0x15ef24u: goto label_15ef24;
        case 0x15ef28u: goto label_15ef28;
        case 0x15ef2cu: goto label_15ef2c;
        case 0x15ef30u: goto label_15ef30;
        case 0x15ef34u: goto label_15ef34;
        case 0x15ef38u: goto label_15ef38;
        case 0x15ef3cu: goto label_15ef3c;
        case 0x15ef40u: goto label_15ef40;
        case 0x15ef44u: goto label_15ef44;
        case 0x15ef48u: goto label_15ef48;
        case 0x15ef4cu: goto label_15ef4c;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef54u: goto label_15ef54;
        case 0x15ef58u: goto label_15ef58;
        case 0x15ef5cu: goto label_15ef5c;
        case 0x15ef60u: goto label_15ef60;
        default: break;
    }

    ctx->pc = 0x15e800u;

label_15e800:
    // 0x15e800: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_15e804:
    // 0x15e804: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_15e808:
    // 0x15e808: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15e80c:
    // 0x15e80c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15e810:
    // 0x15e810: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15e810u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15e814:
    // 0x15e814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15e818:
    // 0x15e818: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15e818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15e81c:
    // 0x15e81c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e820:
    // 0x15e820: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15e820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e824:
    // 0x15e824: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e828:
    // 0x15e828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e82c:
    // 0x15e82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e830:
    // 0x15e830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e834:
    // 0x15e834: 0x8c830cec  lw          $v1, 0xCEC($a0)
    ctx->pc = 0x15e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3308)));
label_15e838:
    // 0x15e838: 0x186001bf  blez        $v1, . + 4 + (0x1BF << 2)
label_15e83c:
    if (ctx->pc == 0x15E83Cu) {
        ctx->pc = 0x15E83Cu;
            // 0x15e83c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E840u;
        goto label_15e840;
    }
    ctx->pc = 0x15E838u;
    {
        const bool branch_taken_0x15e838 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E838u;
            // 0x15e83c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e838) {
            ctx->pc = 0x15EF38u;
            goto label_15ef38;
        }
    }
    ctx->pc = 0x15E840u;
label_15e840:
    // 0x15e840: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_15e844:
    if (ctx->pc == 0x15E844u) {
        ctx->pc = 0x15E848u;
        goto label_15e848;
    }
    ctx->pc = 0x15E840u;
    {
        const bool branch_taken_0x15e840 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e840) {
            ctx->pc = 0x15E850u;
            goto label_15e850;
        }
    }
    ctx->pc = 0x15E848u;
label_15e848:
    // 0x15e848: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_15e84c:
    if (ctx->pc == 0x15E84Cu) {
        ctx->pc = 0x15E84Cu;
            // 0x15e84c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x15E850u;
        goto label_15e850;
    }
    ctx->pc = 0x15E848u;
    {
        const bool branch_taken_0x15e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E848u;
            // 0x15e84c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e848) {
            ctx->pc = 0x15EF3Cu;
            goto label_15ef3c;
        }
    }
    ctx->pc = 0x15E850u;
label_15e850:
    // 0x15e850: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_15e854:
    // 0x15e854: 0x186001b8  blez        $v1, . + 4 + (0x1B8 << 2)
label_15e858:
    if (ctx->pc == 0x15E858u) {
        ctx->pc = 0x15E85Cu;
        goto label_15e85c;
    }
    ctx->pc = 0x15E854u;
    {
        const bool branch_taken_0x15e854 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15e854) {
            ctx->pc = 0x15EF38u;
            goto label_15ef38;
        }
    }
    ctx->pc = 0x15E85Cu;
label_15e85c:
    // 0x15e85c: 0xc04bc8c  jal         func_12F230
label_15e860:
    if (ctx->pc == 0x15E860u) {
        ctx->pc = 0x15E860u;
            // 0x15e860: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E864u;
        goto label_15e864;
    }
    ctx->pc = 0x15E85Cu;
    SET_GPR_U32(ctx, 31, 0x15E864u);
    ctx->pc = 0x15E860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E85Cu;
            // 0x15e860: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E864u; }
        if (ctx->pc != 0x15E864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E864u; }
        if (ctx->pc != 0x15E864u) { return; }
    }
    ctx->pc = 0x15E864u;
label_15e864:
    // 0x15e864: 0xc04bc8c  jal         func_12F230
label_15e868:
    if (ctx->pc == 0x15E868u) {
        ctx->pc = 0x15E868u;
            // 0x15e868: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15E86Cu;
        goto label_15e86c;
    }
    ctx->pc = 0x15E864u;
    SET_GPR_U32(ctx, 31, 0x15E86Cu);
    ctx->pc = 0x15E868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E864u;
            // 0x15e868: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E86Cu; }
        if (ctx->pc != 0x15E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E86Cu; }
        if (ctx->pc != 0x15E86Cu) { return; }
    }
    ctx->pc = 0x15E86Cu;
label_15e86c:
    // 0x15e86c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_15e870:
    if (ctx->pc == 0x15E870u) {
        ctx->pc = 0x15E870u;
            // 0x15e870: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E874u;
        goto label_15e874;
    }
    ctx->pc = 0x15E86Cu;
    {
        const bool branch_taken_0x15e86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E86Cu;
            // 0x15e870: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e86c) {
            ctx->pc = 0x15E8D4u;
            goto label_15e8d4;
        }
    }
    ctx->pc = 0x15E874u;
label_15e874:
    // 0x15e874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e878:
    // 0x15e878: 0xc04c524  jal         func_131490
label_15e87c:
    if (ctx->pc == 0x15E87Cu) {
        ctx->pc = 0x15E87Cu;
            // 0x15e87c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15E880u;
        goto label_15e880;
    }
    ctx->pc = 0x15E878u;
    SET_GPR_U32(ctx, 31, 0x15E880u);
    ctx->pc = 0x15E87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E878u;
            // 0x15e87c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (runtime->hasFunction(0x131490u)) {
        auto targetFn = runtime->lookupFunction(0x131490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E880u; }
        if (ctx->pc != 0x15E880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDir__9mgCCameraFPf_0x131490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E880u; }
        if (ctx->pc != 0x15E880u) { return; }
    }
    ctx->pc = 0x15E880u;
label_15e880:
    // 0x15e880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e884:
    // 0x15e884: 0xc04c574  jal         func_1315D0
label_15e888:
    if (ctx->pc == 0x15E888u) {
        ctx->pc = 0x15E888u;
            // 0x15e888: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E88Cu;
        goto label_15e88c;
    }
    ctx->pc = 0x15E884u;
    SET_GPR_U32(ctx, 31, 0x15E88Cu);
    ctx->pc = 0x15E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E884u;
            // 0x15e888: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E88Cu; }
        if (ctx->pc != 0x15E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E88Cu; }
        if (ctx->pc != 0x15E88Cu) { return; }
    }
    ctx->pc = 0x15E88Cu;
label_15e88c:
    // 0x15e88c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15e890:
    // 0x15e890: 0xc041be0  jal         func_106F80
label_15e894:
    if (ctx->pc == 0x15E894u) {
        ctx->pc = 0x15E894u;
            // 0x15e894: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E898u;
        goto label_15e898;
    }
    ctx->pc = 0x15E890u;
    SET_GPR_U32(ctx, 31, 0x15E898u);
    ctx->pc = 0x15E894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E890u;
            // 0x15e894: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E898u; }
        if (ctx->pc != 0x15E898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E898u; }
        if (ctx->pc != 0x15E898u) { return; }
    }
    ctx->pc = 0x15E898u;
label_15e898:
    // 0x15e898: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_15e89c:
    // 0x15e89c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15e8a0:
    // 0x15e8a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15e8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e8a4:
    // 0x15e8a4: 0xc041c4a  jal         func_107128
label_15e8a8:
    if (ctx->pc == 0x15E8A8u) {
        ctx->pc = 0x15E8A8u;
            // 0x15e8a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E8ACu;
        goto label_15e8ac;
    }
    ctx->pc = 0x15E8A4u;
    SET_GPR_U32(ctx, 31, 0x15E8ACu);
    ctx->pc = 0x15E8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8A4u;
            // 0x15e8a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8ACu; }
        if (ctx->pc != 0x15E8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8ACu; }
        if (ctx->pc != 0x15E8ACu) { return; }
    }
    ctx->pc = 0x15E8ACu;
label_15e8ac:
    // 0x15e8ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15e8b0:
    // 0x15e8b0: 0xc04bcf4  jal         func_12F3D0
label_15e8b4:
    if (ctx->pc == 0x15E8B4u) {
        ctx->pc = 0x15E8B4u;
            // 0x15e8b4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15E8B8u;
        goto label_15e8b8;
    }
    ctx->pc = 0x15E8B0u;
    SET_GPR_U32(ctx, 31, 0x15E8B8u);
    ctx->pc = 0x15E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8B0u;
            // 0x15e8b4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8B8u; }
        if (ctx->pc != 0x15E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8B8u; }
        if (ctx->pc != 0x15E8B8u) { return; }
    }
    ctx->pc = 0x15E8B8u;
label_15e8b8:
    // 0x15e8b8: 0xc7ad00a8  lwc1        $f13, 0xA8($sp)
    ctx->pc = 0x15e8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15e8bc:
    // 0x15e8bc: 0xc047c76  jal         func_11F1D8
label_15e8c0:
    if (ctx->pc == 0x15E8C0u) {
        ctx->pc = 0x15E8C0u;
            // 0x15e8c0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x15E8C4u;
        goto label_15e8c4;
    }
    ctx->pc = 0x15E8BCu;
    SET_GPR_U32(ctx, 31, 0x15E8C4u);
    ctx->pc = 0x15E8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8BCu;
            // 0x15e8c0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8C4u; }
        if (ctx->pc != 0x15E8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8C4u; }
        if (ctx->pc != 0x15E8C4u) { return; }
    }
    ctx->pc = 0x15E8C4u;
label_15e8c4:
    // 0x15e8c4: 0xc04c374  jal         func_130DD0
label_15e8c8:
    if (ctx->pc == 0x15E8C8u) {
        ctx->pc = 0x15E8C8u;
            // 0x15e8c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x15E8CCu;
        goto label_15e8cc;
    }
    ctx->pc = 0x15E8C4u;
    SET_GPR_U32(ctx, 31, 0x15E8CCu);
    ctx->pc = 0x15E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8C4u;
            // 0x15e8c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8CCu; }
        if (ctx->pc != 0x15E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8CCu; }
        if (ctx->pc != 0x15E8CCu) { return; }
    }
    ctx->pc = 0x15E8CCu;
label_15e8cc:
    // 0x15e8cc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x15e8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_15e8d0:
    // 0x15e8d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15e8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e8d4:
    // 0x15e8d4: 0x10000050  b           . + 4 + (0x50 << 2)
label_15e8d8:
    if (ctx->pc == 0x15E8D8u) {
        ctx->pc = 0x15E8D8u;
            // 0x15e8d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E8DCu;
        goto label_15e8dc;
    }
    ctx->pc = 0x15E8D4u;
    {
        const bool branch_taken_0x15e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8D4u;
            // 0x15e8d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8d4) {
            ctx->pc = 0x15EA18u;
            goto label_15ea18;
        }
    }
    ctx->pc = 0x15E8DCu;
label_15e8dc:
    // 0x15e8dc: 0x8ea20cf0  lw          $v0, 0xCF0($s5)
    ctx->pc = 0x15e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
label_15e8e0:
    // 0x15e8e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15e8e4:
    // 0x15e8e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8e8:
    // 0x15e8e8: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
label_15e8ec:
    if (ctx->pc == 0x15E8ECu) {
        ctx->pc = 0x15E8F0u;
        goto label_15e8f0;
    }
    ctx->pc = 0x15E8E8u;
    {
        const bool branch_taken_0x15e8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e8e8) {
            ctx->pc = 0x15EA10u;
            goto label_15ea10;
        }
    }
    ctx->pc = 0x15E8F0u;
label_15e8f0:
    // 0x15e8f0: 0xc061740  jal         func_185D00
label_15e8f4:
    if (ctx->pc == 0x15E8F4u) {
        ctx->pc = 0x15E8F8u;
        goto label_15e8f8;
    }
    ctx->pc = 0x15E8F0u;
    SET_GPR_U32(ctx, 31, 0x15E8F8u);
    ctx->pc = 0x185D00u;
    if (runtime->hasFunction(0x185D00u)) {
        auto targetFn = runtime->lookupFunction(0x185D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8F8u; }
        if (ctx->pc != 0x15E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePacket__11CWaterFrameFv_0x185d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8F8u; }
        if (ctx->pc != 0x15E8F8u) { return; }
    }
    ctx->pc = 0x15E8F8u;
label_15e8f8:
    // 0x15e8f8: 0x8ea20cf0  lw          $v0, 0xCF0($s5)
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
label_15e8fc:
    // 0x15e8fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15e900:
    // 0x15e900: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e904:
    // 0x15e904: 0xc0616c8  jal         func_185B20
label_15e908:
    if (ctx->pc == 0x15E908u) {
        ctx->pc = 0x15E908u;
            // 0x15e908: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E90Cu;
        goto label_15e90c;
    }
    ctx->pc = 0x15E904u;
    SET_GPR_U32(ctx, 31, 0x15E90Cu);
    ctx->pc = 0x15E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E904u;
            // 0x15e908: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185B20u;
    if (runtime->hasFunction(0x185B20u)) {
        auto targetFn = runtime->lookupFunction(0x185B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E90Cu; }
        if (ctx->pc != 0x15E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__11CWaterFrameFP10mgCTexture_0x185b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E90Cu; }
        if (ctx->pc != 0x15E90Cu) { return; }
    }
    ctx->pc = 0x15E90Cu;
label_15e90c:
    // 0x15e90c: 0xc04a0ea  jal         func_1283A8
label_15e910:
    if (ctx->pc == 0x15E910u) {
        ctx->pc = 0x15E914u;
        goto label_15e914;
    }
    ctx->pc = 0x15E90Cu;
    SET_GPR_U32(ctx, 31, 0x15E914u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E914u; }
        if (ctx->pc != 0x15E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E914u; }
        if (ctx->pc != 0x15E914u) { return; }
    }
    ctx->pc = 0x15E914u;
label_15e914:
    // 0x15e914: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e918:
    // 0x15e918: 0x0  nop
    ctx->pc = 0x15e918u;
    // NOP
label_15e91c:
    // 0x15e91c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15e91cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15e920:
    // 0x15e920: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15e924:
    // 0x15e924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e928:
    // 0x15e928: 0x0  nop
    ctx->pc = 0x15e928u;
    // NOP
label_15e92c:
    // 0x15e92c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15e92cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_15e930:
    // 0x15e930: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_15e934:
    // 0x15e934: 0x0  nop
    ctx->pc = 0x15e934u;
    // NOP
label_15e938:
    // 0x15e938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e93c:
    // 0x15e93c: 0xc0a248c  jal         func_289230
label_15e940:
    if (ctx->pc == 0x15E940u) {
        ctx->pc = 0x15E940u;
            // 0x15e940: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x15E944u;
        goto label_15e944;
    }
    ctx->pc = 0x15E93Cu;
    SET_GPR_U32(ctx, 31, 0x15E944u);
    ctx->pc = 0x15E940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E93Cu;
            // 0x15e940: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E944u; }
        if (ctx->pc != 0x15E944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E944u; }
        if (ctx->pc != 0x15E944u) { return; }
    }
    ctx->pc = 0x15E944u;
label_15e944:
    // 0x15e944: 0xc04a0ea  jal         func_1283A8
label_15e948:
    if (ctx->pc == 0x15E948u) {
        ctx->pc = 0x15E948u;
            // 0x15e948: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E94Cu;
        goto label_15e94c;
    }
    ctx->pc = 0x15E944u;
    SET_GPR_U32(ctx, 31, 0x15E94Cu);
    ctx->pc = 0x15E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E944u;
            // 0x15e948: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E94Cu; }
        if (ctx->pc != 0x15E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E94Cu; }
        if (ctx->pc != 0x15E94Cu) { return; }
    }
    ctx->pc = 0x15E94Cu;
label_15e94c:
    // 0x15e94c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e950:
    // 0x15e950: 0x0  nop
    ctx->pc = 0x15e950u;
    // NOP
label_15e954:
    // 0x15e954: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15e954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15e958:
    // 0x15e958: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15e95c:
    // 0x15e95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e960:
    // 0x15e960: 0x0  nop
    ctx->pc = 0x15e960u;
    // NOP
label_15e964:
    // 0x15e964: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15e964u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_15e968:
    // 0x15e968: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_15e96c:
    // 0x15e96c: 0x0  nop
    ctx->pc = 0x15e96cu;
    // NOP
label_15e970:
    // 0x15e970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e974:
    // 0x15e974: 0xc0a248c  jal         func_289230
label_15e978:
    if (ctx->pc == 0x15E978u) {
        ctx->pc = 0x15E978u;
            // 0x15e978: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x15E97Cu;
        goto label_15e97c;
    }
    ctx->pc = 0x15E974u;
    SET_GPR_U32(ctx, 31, 0x15E97Cu);
    ctx->pc = 0x15E978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E974u;
            // 0x15e978: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E97Cu; }
        if (ctx->pc != 0x15E97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E97Cu; }
        if (ctx->pc != 0x15E97Cu) { return; }
    }
    ctx->pc = 0x15E97Cu;
label_15e97c:
    // 0x15e97c: 0x8ea30cf0  lw          $v1, 0xCF0($s5)
    ctx->pc = 0x15e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
label_15e980:
    // 0x15e980: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e984:
    // 0x15e984: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15e984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_15e988:
    // 0x15e988: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_15e98c:
    // 0x15e98c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15e98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e990:
    // 0x15e990: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15e994:
    // 0x15e994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e998:
    // 0x15e998: 0xc061728  jal         func_185CA0
label_15e99c:
    if (ctx->pc == 0x15E99Cu) {
        ctx->pc = 0x15E99Cu;
            // 0x15e99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E9A0u;
        goto label_15e9a0;
    }
    ctx->pc = 0x15E998u;
    SET_GPR_U32(ctx, 31, 0x15E9A0u);
    ctx->pc = 0x15E99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E998u;
            // 0x15e99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185CA0u;
    if (runtime->hasFunction(0x185CA0u)) {
        auto targetFn = runtime->lookupFunction(0x185CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9A0u; }
        if (ctx->pc != 0x15E9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shake__11CWaterFrameFiif_0x185ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9A0u; }
        if (ctx->pc != 0x15E9A0u) { return; }
    }
    ctx->pc = 0x15E9A0u;
label_15e9a0:
    // 0x15e9a0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_15e9a4:
    // 0x15e9a4: 0x8ea30cf0  lw          $v1, 0xCF0($s5)
    ctx->pc = 0x15e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
label_15e9a8:
    // 0x15e9a8: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x15e9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_15e9ac:
    // 0x15e9ac: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
label_15e9b0:
    // 0x15e9b0: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
label_15e9b4:
    // 0x15e9b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15e9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15e9b8:
    // 0x15e9b8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x15e9b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e9bc:
    // 0x15e9bc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x15e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_15e9c0:
    // 0x15e9c0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15e9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_15e9c4:
    // 0x15e9c4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x15e9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_15e9c8:
    // 0x15e9c8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15e9cc:
    // 0x15e9cc: 0xc0616f0  jal         func_185BC0
label_15e9d0:
    if (ctx->pc == 0x15E9D0u) {
        ctx->pc = 0x15E9D0u;
            // 0x15e9d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x15E9D4u;
        goto label_15e9d4;
    }
    ctx->pc = 0x15E9CCu;
    SET_GPR_U32(ctx, 31, 0x15E9D4u);
    ctx->pc = 0x15E9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9CCu;
            // 0x15e9d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185BC0u;
    if (runtime->hasFunction(0x185BC0u)) {
        auto targetFn = runtime->lookupFunction(0x185BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9D4u; }
        if (ctx->pc != 0x15E9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__11CWaterFrameFffff_0x185bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9D4u; }
        if (ctx->pc != 0x15E9D4u) { return; }
    }
    ctx->pc = 0x15E9D4u;
label_15e9d4:
    // 0x15e9d4: 0x8ea20cf0  lw          $v0, 0xCF0($s5)
    ctx->pc = 0x15e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
label_15e9d8:
    // 0x15e9d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15e9dc:
    // 0x15e9dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9e0:
    // 0x15e9e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15e9e4:
    // 0x15e9e4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15e9e8:
    // 0x15e9e8: 0x320f809  jalr        $t9
label_15e9ec:
    if (ctx->pc == 0x15E9ECu) {
        ctx->pc = 0x15E9F0u;
        goto label_15e9f0;
    }
    ctx->pc = 0x15E9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E9F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E9F0u; }
            if (ctx->pc != 0x15E9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x15E9F0u;
label_15e9f0:
    // 0x15e9f0: 0x8ea20cf0  lw          $v0, 0xCF0($s5)
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
label_15e9f4:
    // 0x15e9f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15e9f8:
    // 0x15e9f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15e9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15e9fc:
    // 0x15e9fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x15e9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15ea00:
    // 0x15ea00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15ea04:
    // 0x15ea04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ea08:
    // 0x15ea08: 0xc06170c  jal         func_185C30
label_15ea0c:
    if (ctx->pc == 0x15EA0Cu) {
        ctx->pc = 0x15EA0Cu;
            // 0x15ea0c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EA10u;
        goto label_15ea10;
    }
    ctx->pc = 0x15EA08u;
    SET_GPR_U32(ctx, 31, 0x15EA10u);
    ctx->pc = 0x15EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA08u;
            // 0x15ea0c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185C30u;
    if (runtime->hasFunction(0x185C30u)) {
        auto targetFn = runtime->lookupFunction(0x185C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA10u; }
        if (ctx->pc != 0x15EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__11CWaterFrameFUcUcUcUc_0x185c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA10u; }
        if (ctx->pc != 0x15EA10u) { return; }
    }
    ctx->pc = 0x15EA10u;
label_15ea10:
    // 0x15ea10: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15ea10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15ea14:
    // 0x15ea14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ea18:
    // 0x15ea18: 0x8ea20cec  lw          $v0, 0xCEC($s5)
    ctx->pc = 0x15ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3308)));
label_15ea1c:
    // 0x15ea1c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x15ea1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15ea20:
    // 0x15ea20: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_15ea24:
    if (ctx->pc == 0x15EA24u) {
        ctx->pc = 0x15EA28u;
        goto label_15ea28;
    }
    ctx->pc = 0x15EA20u;
    {
        const bool branch_taken_0x15ea20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ea20) {
            ctx->pc = 0x15E8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e8dc;
        }
    }
    ctx->pc = 0x15EA28u;
label_15ea28:
    // 0x15ea28: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x15ea28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_15ea2c:
    // 0x15ea2c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_15ea30:
    // 0x15ea30: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x15ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_15ea34:
    // 0x15ea34: 0xc04ba14  jal         func_12E850
label_15ea38:
    if (ctx->pc == 0x15EA38u) {
        ctx->pc = 0x15EA38u;
            // 0x15ea38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EA3Cu;
        goto label_15ea3c;
    }
    ctx->pc = 0x15EA34u;
    SET_GPR_U32(ctx, 31, 0x15EA3Cu);
    ctx->pc = 0x15EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA34u;
            // 0x15ea38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA3Cu; }
        if (ctx->pc != 0x15EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA3Cu; }
        if (ctx->pc != 0x15EA3Cu) { return; }
    }
    ctx->pc = 0x15EA3Cu;
label_15ea3c:
    // 0x15ea3c: 0xc04b120  jal         func_12C480
label_15ea40:
    if (ctx->pc == 0x15EA40u) {
        ctx->pc = 0x15EA40u;
            // 0x15ea40: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x15EA44u;
        goto label_15ea44;
    }
    ctx->pc = 0x15EA3Cu;
    SET_GPR_U32(ctx, 31, 0x15EA44u);
    ctx->pc = 0x15EA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA3Cu;
            // 0x15ea40: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA44u; }
        if (ctx->pc != 0x15EA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA44u; }
        if (ctx->pc != 0x15EA44u) { return; }
    }
    ctx->pc = 0x15EA44u;
label_15ea44:
    // 0x15ea44: 0xc0510c0  jal         func_144300
label_15ea48:
    if (ctx->pc == 0x15EA48u) {
        ctx->pc = 0x15EA48u;
            // 0x15ea48: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x15EA4Cu;
        goto label_15ea4c;
    }
    ctx->pc = 0x15EA44u;
    SET_GPR_U32(ctx, 31, 0x15EA4Cu);
    ctx->pc = 0x15EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA44u;
            // 0x15ea48: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA4Cu; }
        if (ctx->pc != 0x15EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA4Cu; }
        if (ctx->pc != 0x15EA4Cu) { return; }
    }
    ctx->pc = 0x15EA4Cu;
label_15ea4c:
    // 0x15ea4c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_15ea50:
    // 0x15ea50: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15ea54:
    // 0x15ea54: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x15ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_15ea58:
    // 0x15ea58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ea58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea5c:
    // 0x15ea5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ea5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea60:
    // 0x15ea60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15ea64:
    // 0x15ea64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15ea68:
    // 0x15ea68: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ea6c:
    // 0x15ea6c: 0xc04f8e4  jal         func_13E390
label_15ea70:
    if (ctx->pc == 0x15EA70u) {
        ctx->pc = 0x15EA70u;
            // 0x15ea70: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x15EA74u;
        goto label_15ea74;
    }
    ctx->pc = 0x15EA6Cu;
    SET_GPR_U32(ctx, 31, 0x15EA74u);
    ctx->pc = 0x15EA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA6Cu;
            // 0x15ea70: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA74u; }
        if (ctx->pc != 0x15EA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA74u; }
        if (ctx->pc != 0x15EA74u) { return; }
    }
    ctx->pc = 0x15EA74u;
label_15ea74:
    // 0x15ea74: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15ea78:
    // 0x15ea78: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x15ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15ea7c:
    // 0x15ea7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15ea7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15ea80:
    // 0x15ea80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ea80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea84:
    // 0x15ea84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ea84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea88:
    // 0x15ea88: 0xc051158  jal         func_144560
label_15ea8c:
    if (ctx->pc == 0x15EA8Cu) {
        ctx->pc = 0x15EA8Cu;
            // 0x15ea8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EA90u;
        goto label_15ea90;
    }
    ctx->pc = 0x15EA88u;
    SET_GPR_U32(ctx, 31, 0x15EA90u);
    ctx->pc = 0x15EA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA88u;
            // 0x15ea8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144560u;
    if (runtime->hasFunction(0x144560u)) {
        auto targetFn = runtime->lookupFunction(0x144560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA90u; }
        if (ctx->pc != 0x15EA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA90u; }
        if (ctx->pc != 0x15EA90u) { return; }
    }
    ctx->pc = 0x15EA90u;
label_15ea90:
    // 0x15ea90: 0x8eb00cf8  lw          $s0, 0xCF8($s5)
    ctx->pc = 0x15ea90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3320)));
label_15ea94:
    // 0x15ea94: 0xc04c050  jal         func_130140
label_15ea98:
    if (ctx->pc == 0x15EA98u) {
        ctx->pc = 0x15EA98u;
            // 0x15ea98: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x15EA9Cu;
        goto label_15ea9c;
    }
    ctx->pc = 0x15EA94u;
    SET_GPR_U32(ctx, 31, 0x15EA9Cu);
    ctx->pc = 0x15EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA94u;
            // 0x15ea98: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA9Cu; }
        if (ctx->pc != 0x15EA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA9Cu; }
        if (ctx->pc != 0x15EA9Cu) { return; }
    }
    ctx->pc = 0x15EA9Cu;
label_15ea9c:
    // 0x15ea9c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_15eaa0:
    if (ctx->pc == 0x15EAA0u) {
        ctx->pc = 0x15EAA0u;
            // 0x15eaa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EAA4u;
        goto label_15eaa4;
    }
    ctx->pc = 0x15EA9Cu;
    {
        const bool branch_taken_0x15ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA9Cu;
            // 0x15eaa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea9c) {
            ctx->pc = 0x15EC18u;
            goto label_15ec18;
        }
    }
    ctx->pc = 0x15EAA4u;
label_15eaa4:
    // 0x15eaa4: 0x8e120070  lw          $s2, 0x70($s0)
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_15eaa8:
    // 0x15eaa8: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
label_15eaac:
    if (ctx->pc == 0x15EAACu) {
        ctx->pc = 0x15EAB0u;
        goto label_15eab0;
    }
    ctx->pc = 0x15EAA8u;
    {
        const bool branch_taken_0x15eaa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eaa8) {
            ctx->pc = 0x15EC10u;
            goto label_15ec10;
        }
    }
    ctx->pc = 0x15EAB0u;
label_15eab0:
    // 0x15eab0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15eab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15eab4:
    // 0x15eab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eab8:
    // 0x15eab8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15eab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15eabc:
    // 0x15eabc: 0x320f809  jalr        $t9
label_15eac0:
    if (ctx->pc == 0x15EAC0u) {
        ctx->pc = 0x15EAC0u;
            // 0x15eac0: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x15EAC4u;
        goto label_15eac4;
    }
    ctx->pc = 0x15EABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAC4u);
        ctx->pc = 0x15EAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EABCu;
            // 0x15eac0: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EAC4u; }
            if (ctx->pc != 0x15EAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x15EAC4u;
label_15eac4:
    // 0x15eac4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15eac8:
    // 0x15eac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eacc:
    // 0x15eacc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15eaccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15ead0:
    // 0x15ead0: 0x320f809  jalr        $t9
label_15ead4:
    if (ctx->pc == 0x15EAD4u) {
        ctx->pc = 0x15EAD4u;
            // 0x15ead4: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x15EAD8u;
        goto label_15ead8;
    }
    ctx->pc = 0x15EAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAD8u);
        ctx->pc = 0x15EAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAD0u;
            // 0x15ead4: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EAD8u; }
            if (ctx->pc != 0x15EAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x15EAD8u;
label_15ead8:
    // 0x15ead8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15eadc:
    // 0x15eadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eae0:
    // 0x15eae0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_15eae4:
    // 0x15eae4: 0x320f809  jalr        $t9
label_15eae8:
    if (ctx->pc == 0x15EAE8u) {
        ctx->pc = 0x15EAE8u;
            // 0x15eae8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x15EAECu;
        goto label_15eaec;
    }
    ctx->pc = 0x15EAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EAECu);
        ctx->pc = 0x15EAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAE4u;
            // 0x15eae8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EAECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EAECu; }
            if (ctx->pc != 0x15EAECu) { return; }
        }
        }
    }
    ctx->pc = 0x15EAECu;
label_15eaec:
    // 0x15eaec: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x15eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_15eaf0:
    // 0x15eaf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15eaf4:
    if (ctx->pc == 0x15EAF4u) {
        ctx->pc = 0x15EAF8u;
        goto label_15eaf8;
    }
    ctx->pc = 0x15EAF0u;
    {
        const bool branch_taken_0x15eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eaf0) {
            ctx->pc = 0x15EB00u;
            goto label_15eb00;
        }
    }
    ctx->pc = 0x15EAF8u;
label_15eaf8:
    // 0x15eaf8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eafc:
    // 0x15eafc: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x15eafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_15eb00:
    // 0x15eb00: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x15eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_15eb04:
    // 0x15eb04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15eb08:
    if (ctx->pc == 0x15EB08u) {
        ctx->pc = 0x15EB0Cu;
        goto label_15eb0c;
    }
    ctx->pc = 0x15EB04u;
    {
        const bool branch_taken_0x15eb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb04) {
            ctx->pc = 0x15EB14u;
            goto label_15eb14;
        }
    }
    ctx->pc = 0x15EB0Cu;
label_15eb0c:
    // 0x15eb0c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x15eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eb10:
    // 0x15eb10: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x15eb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_15eb14:
    // 0x15eb14: 0x0  nop
    ctx->pc = 0x15eb14u;
    // NOP
label_15eb18:
    // 0x15eb18: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_15eb1c:
    // 0x15eb1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15eb20:
    if (ctx->pc == 0x15EB20u) {
        ctx->pc = 0x15EB24u;
        goto label_15eb24;
    }
    ctx->pc = 0x15EB1Cu;
    {
        const bool branch_taken_0x15eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb1c) {
            ctx->pc = 0x15EB2Cu;
            goto label_15eb2c;
        }
    }
    ctx->pc = 0x15EB24u;
label_15eb24:
    // 0x15eb24: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x15eb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eb28:
    // 0x15eb28: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x15eb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_15eb2c:
    // 0x15eb2c: 0x0  nop
    ctx->pc = 0x15eb2cu;
    // NOP
label_15eb30:
    // 0x15eb30: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15eb30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15eb34:
    // 0x15eb34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15eb38:
    // 0x15eb38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15eb38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15eb3c:
    // 0x15eb3c: 0x320f809  jalr        $t9
label_15eb40:
    if (ctx->pc == 0x15EB40u) {
        ctx->pc = 0x15EB40u;
            // 0x15eb40: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x15EB44u;
        goto label_15eb44;
    }
    ctx->pc = 0x15EB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EB44u);
        ctx->pc = 0x15EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB3Cu;
            // 0x15eb40: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EB44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EB44u; }
            if (ctx->pc != 0x15EB44u) { return; }
        }
        }
    }
    ctx->pc = 0x15EB44u;
label_15eb44:
    // 0x15eb44: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15eb48:
    // 0x15eb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15eb4c:
    // 0x15eb4c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x15eb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_15eb50:
    // 0x15eb50: 0x320f809  jalr        $t9
label_15eb54:
    if (ctx->pc == 0x15EB54u) {
        ctx->pc = 0x15EB54u;
            // 0x15eb54: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x15EB58u;
        goto label_15eb58;
    }
    ctx->pc = 0x15EB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EB58u);
        ctx->pc = 0x15EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB50u;
            // 0x15eb54: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EB58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EB58u; }
            if (ctx->pc != 0x15EB58u) { return; }
        }
        }
    }
    ctx->pc = 0x15EB58u;
label_15eb58:
    // 0x15eb58: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x15eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_15eb5c:
    // 0x15eb5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15eb60:
    if (ctx->pc == 0x15EB60u) {
        ctx->pc = 0x15EB64u;
        goto label_15eb64;
    }
    ctx->pc = 0x15EB5Cu;
    {
        const bool branch_taken_0x15eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb5c) {
            ctx->pc = 0x15EB84u;
            goto label_15eb84;
        }
    }
    ctx->pc = 0x15EB64u;
label_15eb64:
    // 0x15eb64: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x15eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_15eb68:
    // 0x15eb68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15eb6c:
    if (ctx->pc == 0x15EB6Cu) {
        ctx->pc = 0x15EB70u;
        goto label_15eb70;
    }
    ctx->pc = 0x15EB68u;
    {
        const bool branch_taken_0x15eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb68) {
            ctx->pc = 0x15EB84u;
            goto label_15eb84;
        }
    }
    ctx->pc = 0x15EB70u;
label_15eb70:
    // 0x15eb70: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15eb74:
    // 0x15eb74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15eb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15eb78:
    // 0x15eb78: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x15eb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_15eb7c:
    // 0x15eb7c: 0x320f809  jalr        $t9
label_15eb80:
    if (ctx->pc == 0x15EB80u) {
        ctx->pc = 0x15EB80u;
            // 0x15eb80: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15EB84u;
        goto label_15eb84;
    }
    ctx->pc = 0x15EB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EB84u);
        ctx->pc = 0x15EB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB7Cu;
            // 0x15eb80: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EB84u; }
            if (ctx->pc != 0x15EB84u) { return; }
        }
        }
    }
    ctx->pc = 0x15EB84u;
label_15eb84:
    // 0x15eb84: 0x0  nop
    ctx->pc = 0x15eb84u;
    // NOP
label_15eb88:
    // 0x15eb88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15eb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15eb8c:
    // 0x15eb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15eb90:
    // 0x15eb90: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_15eb94:
    // 0x15eb94: 0x320f809  jalr        $t9
label_15eb98:
    if (ctx->pc == 0x15EB98u) {
        ctx->pc = 0x15EB98u;
            // 0x15eb98: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x15EB9Cu;
        goto label_15eb9c;
    }
    ctx->pc = 0x15EB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EB9Cu);
        ctx->pc = 0x15EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB94u;
            // 0x15eb98: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EB9Cu; }
            if (ctx->pc != 0x15EB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15EB9Cu;
label_15eb9c:
    // 0x15eb9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15eb9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eba0:
    // 0x15eba0: 0x10000017  b           . + 4 + (0x17 << 2)
label_15eba4:
    if (ctx->pc == 0x15EBA4u) {
        ctx->pc = 0x15EBA4u;
            // 0x15eba4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EBA8u;
        goto label_15eba8;
    }
    ctx->pc = 0x15EBA0u;
    {
        const bool branch_taken_0x15eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBA0u;
            // 0x15eba4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eba0) {
            ctx->pc = 0x15EC00u;
            goto label_15ec00;
        }
    }
    ctx->pc = 0x15EBA8u;
label_15eba8:
    // 0x15eba8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_15ebac:
    // 0x15ebac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15ebb0:
    // 0x15ebb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ebb4:
    // 0x15ebb4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_15ebb8:
    if (ctx->pc == 0x15EBB8u) {
        ctx->pc = 0x15EBBCu;
        goto label_15ebbc;
    }
    ctx->pc = 0x15EBB4u;
    {
        const bool branch_taken_0x15ebb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ebb4) {
            ctx->pc = 0x15EBCCu;
            goto label_15ebcc;
        }
    }
    ctx->pc = 0x15EBBCu;
label_15ebbc:
    // 0x15ebbc: 0xc050bf4  jal         func_142FD0
label_15ebc0:
    if (ctx->pc == 0x15EBC0u) {
        ctx->pc = 0x15EBC0u;
            // 0x15ebc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EBC4u;
        goto label_15ebc4;
    }
    ctx->pc = 0x15EBBCu;
    SET_GPR_U32(ctx, 31, 0x15EBC4u);
    ctx->pc = 0x15EBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBBCu;
            // 0x15ebc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBC4u; }
        if (ctx->pc != 0x15EBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBC4u; }
        if (ctx->pc != 0x15EBC4u) { return; }
    }
    ctx->pc = 0x15EBC4u;
label_15ebc4:
    // 0x15ebc4: 0x1000000c  b           . + 4 + (0xC << 2)
label_15ebc8:
    if (ctx->pc == 0x15EBC8u) {
        ctx->pc = 0x15EBCCu;
        goto label_15ebcc;
    }
    ctx->pc = 0x15EBC4u;
    {
        const bool branch_taken_0x15ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ebc4) {
            ctx->pc = 0x15EBF8u;
            goto label_15ebf8;
        }
    }
    ctx->pc = 0x15EBCCu;
label_15ebcc:
    // 0x15ebcc: 0x0  nop
    ctx->pc = 0x15ebccu;
    // NOP
label_15ebd0:
    // 0x15ebd0: 0xc059cc0  jal         func_167300
label_15ebd4:
    if (ctx->pc == 0x15EBD4u) {
        ctx->pc = 0x15EBD4u;
            // 0x15ebd4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x15EBD8u;
        goto label_15ebd8;
    }
    ctx->pc = 0x15EBD0u;
    SET_GPR_U32(ctx, 31, 0x15EBD8u);
    ctx->pc = 0x15EBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBD0u;
            // 0x15ebd4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBD8u; }
        if (ctx->pc != 0x15EBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBD8u; }
        if (ctx->pc != 0x15EBD8u) { return; }
    }
    ctx->pc = 0x15EBD8u;
label_15ebd8:
    // 0x15ebd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ebdc:
    // 0x15ebdc: 0xc04dd64  jal         func_137590
label_15ebe0:
    if (ctx->pc == 0x15EBE0u) {
        ctx->pc = 0x15EBE0u;
            // 0x15ebe0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x15EBE4u;
        goto label_15ebe4;
    }
    ctx->pc = 0x15EBDCu;
    SET_GPR_U32(ctx, 31, 0x15EBE4u);
    ctx->pc = 0x15EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBDCu;
            // 0x15ebe0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBE4u; }
        if (ctx->pc != 0x15EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBE4u; }
        if (ctx->pc != 0x15EBE4u) { return; }
    }
    ctx->pc = 0x15EBE4u;
label_15ebe4:
    // 0x15ebe4: 0xc050bf4  jal         func_142FD0
label_15ebe8:
    if (ctx->pc == 0x15EBE8u) {
        ctx->pc = 0x15EBE8u;
            // 0x15ebe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EBECu;
        goto label_15ebec;
    }
    ctx->pc = 0x15EBE4u;
    SET_GPR_U32(ctx, 31, 0x15EBECu);
    ctx->pc = 0x15EBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBE4u;
            // 0x15ebe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBECu; }
        if (ctx->pc != 0x15EBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBECu; }
        if (ctx->pc != 0x15EBECu) { return; }
    }
    ctx->pc = 0x15EBECu;
label_15ebec:
    // 0x15ebec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ebf0:
    // 0x15ebf0: 0xc04dd64  jal         func_137590
label_15ebf4:
    if (ctx->pc == 0x15EBF4u) {
        ctx->pc = 0x15EBF4u;
            // 0x15ebf4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x15EBF8u;
        goto label_15ebf8;
    }
    ctx->pc = 0x15EBF0u;
    SET_GPR_U32(ctx, 31, 0x15EBF8u);
    ctx->pc = 0x15EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBF0u;
            // 0x15ebf4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBF8u; }
        if (ctx->pc != 0x15EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBF8u; }
        if (ctx->pc != 0x15EBF8u) { return; }
    }
    ctx->pc = 0x15EBF8u;
label_15ebf8:
    // 0x15ebf8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_15ebfc:
    // 0x15ebfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15ebfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15ec00:
    // 0x15ec00: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_15ec04:
    // 0x15ec04: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x15ec04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ec08:
    // 0x15ec08: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_15ec0c:
    if (ctx->pc == 0x15EC0Cu) {
        ctx->pc = 0x15EC10u;
        goto label_15ec10;
    }
    ctx->pc = 0x15EC08u;
    {
        const bool branch_taken_0x15ec08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec08) {
            ctx->pc = 0x15EBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15eba8;
        }
    }
    ctx->pc = 0x15EC10u;
label_15ec10:
    // 0x15ec10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ec14:
    // 0x15ec14: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x15ec14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_15ec18:
    // 0x15ec18: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x15ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_15ec1c:
    // 0x15ec1c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ec20:
    // 0x15ec20: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_15ec24:
    if (ctx->pc == 0x15EC24u) {
        ctx->pc = 0x15EC28u;
        goto label_15ec28;
    }
    ctx->pc = 0x15EC20u;
    {
        const bool branch_taken_0x15ec20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec20) {
            ctx->pc = 0x15EAA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15eaa4;
        }
    }
    ctx->pc = 0x15EC28u;
label_15ec28:
    // 0x15ec28: 0x12e000c3  beqz        $s7, . + 4 + (0xC3 << 2)
label_15ec2c:
    if (ctx->pc == 0x15EC2Cu) {
        ctx->pc = 0x15EC30u;
        goto label_15ec30;
    }
    ctx->pc = 0x15EC28u;
    {
        const bool branch_taken_0x15ec28 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec28) {
            ctx->pc = 0x15EF38u;
            goto label_15ef38;
        }
    }
    ctx->pc = 0x15EC30u;
label_15ec30:
    // 0x15ec30: 0xc04d0e8  jal         func_1343A0
label_15ec34:
    if (ctx->pc == 0x15EC34u) {
        ctx->pc = 0x15EC34u;
            // 0x15ec34: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x15EC38u;
        goto label_15ec38;
    }
    ctx->pc = 0x15EC30u;
    SET_GPR_U32(ctx, 31, 0x15EC38u);
    ctx->pc = 0x15EC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC30u;
            // 0x15ec34: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC38u; }
        if (ctx->pc != 0x15EC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC38u; }
        if (ctx->pc != 0x15EC38u) { return; }
    }
    ctx->pc = 0x15EC38u;
label_15ec38:
    // 0x15ec38: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec3c:
    // 0x15ec3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ec3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec40:
    // 0x15ec40: 0xc04d104  jal         func_134410
label_15ec44:
    if (ctx->pc == 0x15EC44u) {
        ctx->pc = 0x15EC44u;
            // 0x15ec44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EC48u;
        goto label_15ec48;
    }
    ctx->pc = 0x15EC40u;
    SET_GPR_U32(ctx, 31, 0x15EC48u);
    ctx->pc = 0x15EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC40u;
            // 0x15ec44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC48u; }
        if (ctx->pc != 0x15EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC48u; }
        if (ctx->pc != 0x15EC48u) { return; }
    }
    ctx->pc = 0x15EC48u;
label_15ec48:
    // 0x15ec48: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec4c:
    // 0x15ec4c: 0xc04d3e4  jal         func_134F90
label_15ec50:
    if (ctx->pc == 0x15EC50u) {
        ctx->pc = 0x15EC50u;
            // 0x15ec50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EC54u;
        goto label_15ec54;
    }
    ctx->pc = 0x15EC4Cu;
    SET_GPR_U32(ctx, 31, 0x15EC54u);
    ctx->pc = 0x15EC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC4Cu;
            // 0x15ec50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC54u; }
        if (ctx->pc != 0x15EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC54u; }
        if (ctx->pc != 0x15EC54u) { return; }
    }
    ctx->pc = 0x15EC54u;
label_15ec54:
    // 0x15ec54: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec58:
    // 0x15ec58: 0xc04d424  jal         func_135090
label_15ec5c:
    if (ctx->pc == 0x15EC5Cu) {
        ctx->pc = 0x15EC5Cu;
            // 0x15ec5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15EC60u;
        goto label_15ec60;
    }
    ctx->pc = 0x15EC58u;
    SET_GPR_U32(ctx, 31, 0x15EC60u);
    ctx->pc = 0x15EC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC58u;
            // 0x15ec5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC60u; }
        if (ctx->pc != 0x15EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC60u; }
        if (ctx->pc != 0x15EC60u) { return; }
    }
    ctx->pc = 0x15EC60u;
label_15ec60:
    // 0x15ec60: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec64:
    // 0x15ec64: 0xc04d428  jal         func_1350A0
label_15ec68:
    if (ctx->pc == 0x15EC68u) {
        ctx->pc = 0x15EC68u;
            // 0x15ec68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15EC6Cu;
        goto label_15ec6c;
    }
    ctx->pc = 0x15EC64u;
    SET_GPR_U32(ctx, 31, 0x15EC6Cu);
    ctx->pc = 0x15EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC64u;
            // 0x15ec68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC6Cu; }
        if (ctx->pc != 0x15EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC6Cu; }
        if (ctx->pc != 0x15EC6Cu) { return; }
    }
    ctx->pc = 0x15EC6Cu;
label_15ec6c:
    // 0x15ec6c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec70:
    // 0x15ec70: 0xc04d3b0  jal         func_134EC0
label_15ec74:
    if (ctx->pc == 0x15EC74u) {
        ctx->pc = 0x15EC74u;
            // 0x15ec74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EC78u;
        goto label_15ec78;
    }
    ctx->pc = 0x15EC70u;
    SET_GPR_U32(ctx, 31, 0x15EC78u);
    ctx->pc = 0x15EC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC70u;
            // 0x15ec74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC78u; }
        if (ctx->pc != 0x15EC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC78u; }
        if (ctx->pc != 0x15EC78u) { return; }
    }
    ctx->pc = 0x15EC78u;
label_15ec78:
    // 0x15ec78: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec7c:
    // 0x15ec7c: 0xc04d3bc  jal         func_134EF0
label_15ec80:
    if (ctx->pc == 0x15EC80u) {
        ctx->pc = 0x15EC80u;
            // 0x15ec80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EC84u;
        goto label_15ec84;
    }
    ctx->pc = 0x15EC7Cu;
    SET_GPR_U32(ctx, 31, 0x15EC84u);
    ctx->pc = 0x15EC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC7Cu;
            // 0x15ec80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC84u; }
        if (ctx->pc != 0x15EC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC84u; }
        if (ctx->pc != 0x15EC84u) { return; }
    }
    ctx->pc = 0x15EC84u;
label_15ec84:
    // 0x15ec84: 0xc050ef8  jal         func_143BE0
label_15ec88:
    if (ctx->pc == 0x15EC88u) {
        ctx->pc = 0x15EC88u;
            // 0x15ec88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EC8Cu;
        goto label_15ec8c;
    }
    ctx->pc = 0x15EC84u;
    SET_GPR_U32(ctx, 31, 0x15EC8Cu);
    ctx->pc = 0x15EC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC84u;
            // 0x15ec88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC8Cu; }
        if (ctx->pc != 0x15EC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC8Cu; }
        if (ctx->pc != 0x15EC8Cu) { return; }
    }
    ctx->pc = 0x15EC8Cu;
label_15ec8c:
    // 0x15ec8c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ec90:
    // 0x15ec90: 0xc04d128  jal         func_1344A0
label_15ec94:
    if (ctx->pc == 0x15EC94u) {
        ctx->pc = 0x15EC94u;
            // 0x15ec94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x15EC98u;
        goto label_15ec98;
    }
    ctx->pc = 0x15EC90u;
    SET_GPR_U32(ctx, 31, 0x15EC98u);
    ctx->pc = 0x15EC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC90u;
            // 0x15ec94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC98u; }
        if (ctx->pc != 0x15EC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC98u; }
        if (ctx->pc != 0x15EC98u) { return; }
    }
    ctx->pc = 0x15EC98u;
label_15ec98:
    // 0x15ec98: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15ec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15ec9c:
    // 0x15ec9c: 0xc04d368  jal         func_134DA0
label_15eca0:
    if (ctx->pc == 0x15ECA0u) {
        ctx->pc = 0x15ECA0u;
            // 0x15eca0: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x15ECA4u;
        goto label_15eca4;
    }
    ctx->pc = 0x15EC9Cu;
    SET_GPR_U32(ctx, 31, 0x15ECA4u);
    ctx->pc = 0x15ECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC9Cu;
            // 0x15eca0: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECA4u; }
        if (ctx->pc != 0x15ECA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECA4u; }
        if (ctx->pc != 0x15ECA4u) { return; }
    }
    ctx->pc = 0x15ECA4u;
label_15eca4:
    // 0x15eca4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15eca8:
    // 0x15eca8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ecac:
    // 0x15ecac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15ecacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15ecb0:
    // 0x15ecb0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x15ecb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15ecb4:
    // 0x15ecb4: 0xc04d320  jal         func_134C80
label_15ecb8:
    if (ctx->pc == 0x15ECB8u) {
        ctx->pc = 0x15ECB8u;
            // 0x15ecb8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ECBCu;
        goto label_15ecbc;
    }
    ctx->pc = 0x15ECB4u;
    SET_GPR_U32(ctx, 31, 0x15ECBCu);
    ctx->pc = 0x15ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECB4u;
            // 0x15ecb8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECBCu; }
        if (ctx->pc != 0x15ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECBCu; }
        if (ctx->pc != 0x15ECBCu) { return; }
    }
    ctx->pc = 0x15ECBCu;
label_15ecbc:
    // 0x15ecbc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ecc0:
    // 0x15ecc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ecc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ecc4:
    // 0x15ecc4: 0xc04d35c  jal         func_134D70
label_15ecc8:
    if (ctx->pc == 0x15ECC8u) {
        ctx->pc = 0x15ECC8u;
            // 0x15ecc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ECCCu;
        goto label_15eccc;
    }
    ctx->pc = 0x15ECC4u;
    SET_GPR_U32(ctx, 31, 0x15ECCCu);
    ctx->pc = 0x15ECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECC4u;
            // 0x15ecc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECCCu; }
        if (ctx->pc != 0x15ECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECCCu; }
        if (ctx->pc != 0x15ECCCu) { return; }
    }
    ctx->pc = 0x15ECCCu;
label_15eccc:
    // 0x15eccc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ecd0:
    // 0x15ecd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ecd4:
    // 0x15ecd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ecd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ecd8:
    // 0x15ecd8: 0xc04d2c8  jal         func_134B20
label_15ecdc:
    if (ctx->pc == 0x15ECDCu) {
        ctx->pc = 0x15ECDCu;
            // 0x15ecdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ECE0u;
        goto label_15ece0;
    }
    ctx->pc = 0x15ECD8u;
    SET_GPR_U32(ctx, 31, 0x15ECE0u);
    ctx->pc = 0x15ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECD8u;
            // 0x15ecdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECE0u; }
        if (ctx->pc != 0x15ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECE0u; }
        if (ctx->pc != 0x15ECE0u) { return; }
    }
    ctx->pc = 0x15ECE0u;
label_15ece0:
    // 0x15ece0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15ece4:
    // 0x15ece4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ece8:
    // 0x15ece8: 0xc04d35c  jal         func_134D70
label_15ecec:
    if (ctx->pc == 0x15ECECu) {
        ctx->pc = 0x15ECECu;
            // 0x15ecec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ECF0u;
        goto label_15ecf0;
    }
    ctx->pc = 0x15ECE8u;
    SET_GPR_U32(ctx, 31, 0x15ECF0u);
    ctx->pc = 0x15ECECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECE8u;
            // 0x15ecec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECF0u; }
        if (ctx->pc != 0x15ECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECF0u; }
        if (ctx->pc != 0x15ECF0u) { return; }
    }
    ctx->pc = 0x15ECF0u;
label_15ecf0:
    // 0x15ecf0: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x15ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_15ecf4:
    // 0x15ecf4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x15ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_15ecf8:
    // 0x15ecf8: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x15ecf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_15ecfc:
    // 0x15ecfc: 0xc04d2c8  jal         func_134B20
label_15ed00:
    if (ctx->pc == 0x15ED00u) {
        ctx->pc = 0x15ED00u;
            // 0x15ed00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ED04u;
        goto label_15ed04;
    }
    ctx->pc = 0x15ECFCu;
    SET_GPR_U32(ctx, 31, 0x15ED04u);
    ctx->pc = 0x15ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECFCu;
            // 0x15ed00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED04u; }
        if (ctx->pc != 0x15ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED04u; }
        if (ctx->pc != 0x15ED04u) { return; }
    }
    ctx->pc = 0x15ED04u;
label_15ed04:
    // 0x15ed04: 0xc04d1a4  jal         func_134690
label_15ed08:
    if (ctx->pc == 0x15ED08u) {
        ctx->pc = 0x15ED08u;
            // 0x15ed08: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x15ED0Cu;
        goto label_15ed0c;
    }
    ctx->pc = 0x15ED04u;
    SET_GPR_U32(ctx, 31, 0x15ED0Cu);
    ctx->pc = 0x15ED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED04u;
            // 0x15ed08: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED0Cu; }
        if (ctx->pc != 0x15ED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED0Cu; }
        if (ctx->pc != 0x15ED0Cu) { return; }
    }
    ctx->pc = 0x15ED0Cu;
label_15ed0c:
    // 0x15ed0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ed10:
    // 0x15ed10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ed10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ed14:
    // 0x15ed14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15ed14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ed18:
    // 0x15ed18: 0xc050f18  jal         func_143C60
label_15ed1c:
    if (ctx->pc == 0x15ED1Cu) {
        ctx->pc = 0x15ED1Cu;
            // 0x15ed1c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ED20u;
        goto label_15ed20;
    }
    ctx->pc = 0x15ED18u;
    SET_GPR_U32(ctx, 31, 0x15ED20u);
    ctx->pc = 0x15ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED18u;
            // 0x15ed1c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED20u; }
        if (ctx->pc != 0x15ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED20u; }
        if (ctx->pc != 0x15ED20u) { return; }
    }
    ctx->pc = 0x15ED20u;
label_15ed20:
    // 0x15ed20: 0x8eb40cf8  lw          $s4, 0xCF8($s5)
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3320)));
label_15ed24:
    // 0x15ed24: 0x10000080  b           . + 4 + (0x80 << 2)
label_15ed28:
    if (ctx->pc == 0x15ED28u) {
        ctx->pc = 0x15ED28u;
            // 0x15ed28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15ED2Cu;
        goto label_15ed2c;
    }
    ctx->pc = 0x15ED24u;
    {
        const bool branch_taken_0x15ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED24u;
            // 0x15ed28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed24) {
            ctx->pc = 0x15EF28u;
            goto label_15ef28;
        }
    }
    ctx->pc = 0x15ED2Cu;
label_15ed2c:
    // 0x15ed2c: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_15ed30:
    // 0x15ed30: 0x1220007b  beqz        $s1, . + 4 + (0x7B << 2)
label_15ed34:
    if (ctx->pc == 0x15ED34u) {
        ctx->pc = 0x15ED38u;
        goto label_15ed38;
    }
    ctx->pc = 0x15ED30u;
    {
        const bool branch_taken_0x15ed30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ed30) {
            ctx->pc = 0x15EF20u;
            goto label_15ef20;
        }
    }
    ctx->pc = 0x15ED38u;
label_15ed38:
    // 0x15ed38: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15ed38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ed3c:
    // 0x15ed3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15ed40:
    // 0x15ed40: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15ed44:
    // 0x15ed44: 0x320f809  jalr        $t9
label_15ed48:
    if (ctx->pc == 0x15ED48u) {
        ctx->pc = 0x15ED48u;
            // 0x15ed48: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x15ED4Cu;
        goto label_15ed4c;
    }
    ctx->pc = 0x15ED44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ED4Cu);
        ctx->pc = 0x15ED48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED44u;
            // 0x15ed48: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15ED4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ED4Cu; }
            if (ctx->pc != 0x15ED4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15ED4Cu;
label_15ed4c:
    // 0x15ed4c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15ed4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ed50:
    // 0x15ed50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15ed54:
    // 0x15ed54: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15ed58:
    // 0x15ed58: 0x320f809  jalr        $t9
label_15ed5c:
    if (ctx->pc == 0x15ED5Cu) {
        ctx->pc = 0x15ED5Cu;
            // 0x15ed5c: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x15ED60u;
        goto label_15ed60;
    }
    ctx->pc = 0x15ED58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ED60u);
        ctx->pc = 0x15ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED58u;
            // 0x15ed5c: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15ED60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ED60u; }
            if (ctx->pc != 0x15ED60u) { return; }
        }
        }
    }
    ctx->pc = 0x15ED60u;
label_15ed60:
    // 0x15ed60: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15ed60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ed64:
    // 0x15ed64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15ed68:
    // 0x15ed68: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x15ed68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_15ed6c:
    // 0x15ed6c: 0x320f809  jalr        $t9
label_15ed70:
    if (ctx->pc == 0x15ED70u) {
        ctx->pc = 0x15ED70u;
            // 0x15ed70: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x15ED74u;
        goto label_15ed74;
    }
    ctx->pc = 0x15ED6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ED74u);
        ctx->pc = 0x15ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED6Cu;
            // 0x15ed70: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15ED74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ED74u; }
            if (ctx->pc != 0x15ED74u) { return; }
        }
        }
    }
    ctx->pc = 0x15ED74u;
label_15ed74:
    // 0x15ed74: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15ed74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ed78:
    // 0x15ed78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15ed7c:
    // 0x15ed7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15ed7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15ed80:
    // 0x15ed80: 0x320f809  jalr        $t9
label_15ed84:
    if (ctx->pc == 0x15ED84u) {
        ctx->pc = 0x15ED84u;
            // 0x15ed84: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x15ED88u;
        goto label_15ed88;
    }
    ctx->pc = 0x15ED80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ED88u);
        ctx->pc = 0x15ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED80u;
            // 0x15ed84: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15ED88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ED88u; }
            if (ctx->pc != 0x15ED88u) { return; }
        }
        }
    }
    ctx->pc = 0x15ED88u;
label_15ed88:
    // 0x15ed88: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15ed88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ed8c:
    // 0x15ed8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15ed90:
    // 0x15ed90: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15ed94:
    // 0x15ed94: 0x320f809  jalr        $t9
label_15ed98:
    if (ctx->pc == 0x15ED98u) {
        ctx->pc = 0x15ED98u;
            // 0x15ed98: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x15ED9Cu;
        goto label_15ed9c;
    }
    ctx->pc = 0x15ED94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ED9Cu);
        ctx->pc = 0x15ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED94u;
            // 0x15ed98: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15ED9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15ED9Cu; }
            if (ctx->pc != 0x15ED9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15ED9Cu;
label_15ed9c:
    // 0x15ed9c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15ed9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15eda0:
    // 0x15eda0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15eda4:
    // 0x15eda4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_15eda8:
    // 0x15eda8: 0x320f809  jalr        $t9
label_15edac:
    if (ctx->pc == 0x15EDACu) {
        ctx->pc = 0x15EDACu;
            // 0x15edac: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x15EDB0u;
        goto label_15edb0;
    }
    ctx->pc = 0x15EDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EDB0u);
        ctx->pc = 0x15EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDA8u;
            // 0x15edac: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EDB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EDB0u; }
            if (ctx->pc != 0x15EDB0u) { return; }
        }
        }
    }
    ctx->pc = 0x15EDB0u;
label_15edb0:
    // 0x15edb0: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x15edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_15edb4:
    // 0x15edb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15edb8:
    if (ctx->pc == 0x15EDB8u) {
        ctx->pc = 0x15EDBCu;
        goto label_15edbc;
    }
    ctx->pc = 0x15EDB4u;
    {
        const bool branch_taken_0x15edb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15edb4) {
            ctx->pc = 0x15EDC4u;
            goto label_15edc4;
        }
    }
    ctx->pc = 0x15EDBCu;
label_15edbc:
    // 0x15edbc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15edc0:
    // 0x15edc0: 0xe7a00300  swc1        $f0, 0x300($sp)
    ctx->pc = 0x15edc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_15edc4:
    // 0x15edc4: 0x0  nop
    ctx->pc = 0x15edc4u;
    // NOP
label_15edc8:
    // 0x15edc8: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_15edcc:
    // 0x15edcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15edd0:
    if (ctx->pc == 0x15EDD0u) {
        ctx->pc = 0x15EDD4u;
        goto label_15edd4;
    }
    ctx->pc = 0x15EDCCu;
    {
        const bool branch_taken_0x15edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15edcc) {
            ctx->pc = 0x15EDDCu;
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15EDD4u;
label_15edd4:
    // 0x15edd4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x15edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15edd8:
    // 0x15edd8: 0xe7a00304  swc1        $f0, 0x304($sp)
    ctx->pc = 0x15edd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
label_15eddc:
    // 0x15eddc: 0x0  nop
    ctx->pc = 0x15eddcu;
    // NOP
label_15ede0:
    // 0x15ede0: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_15ede4:
    // 0x15ede4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15ede8:
    if (ctx->pc == 0x15EDE8u) {
        ctx->pc = 0x15EDECu;
        goto label_15edec;
    }
    ctx->pc = 0x15EDE4u;
    {
        const bool branch_taken_0x15ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ede4) {
            ctx->pc = 0x15EDF4u;
            goto label_15edf4;
        }
    }
    ctx->pc = 0x15EDECu;
label_15edec:
    // 0x15edec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x15edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15edf0:
    // 0x15edf0: 0xe7a00308  swc1        $f0, 0x308($sp)
    ctx->pc = 0x15edf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_15edf4:
    // 0x15edf4: 0x0  nop
    ctx->pc = 0x15edf4u;
    // NOP
label_15edf8:
    // 0x15edf8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15edf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15edfc:
    // 0x15edfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15edfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee00:
    // 0x15ee00: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15ee00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15ee04:
    // 0x15ee04: 0x320f809  jalr        $t9
label_15ee08:
    if (ctx->pc == 0x15EE08u) {
        ctx->pc = 0x15EE08u;
            // 0x15ee08: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x15EE0Cu;
        goto label_15ee0c;
    }
    ctx->pc = 0x15EE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EE0Cu);
        ctx->pc = 0x15EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE04u;
            // 0x15ee08: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EE0Cu; }
            if (ctx->pc != 0x15EE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15EE0Cu;
label_15ee0c:
    // 0x15ee0c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ee10:
    // 0x15ee10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee14:
    // 0x15ee14: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_15ee18:
    // 0x15ee18: 0x320f809  jalr        $t9
label_15ee1c:
    if (ctx->pc == 0x15EE1Cu) {
        ctx->pc = 0x15EE1Cu;
            // 0x15ee1c: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x15EE20u;
        goto label_15ee20;
    }
    ctx->pc = 0x15EE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EE20u);
        ctx->pc = 0x15EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE18u;
            // 0x15ee1c: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EE20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EE20u; }
            if (ctx->pc != 0x15EE20u) { return; }
        }
        }
    }
    ctx->pc = 0x15EE20u;
label_15ee20:
    // 0x15ee20: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_15ee24:
    // 0x15ee24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15ee28:
    if (ctx->pc == 0x15EE28u) {
        ctx->pc = 0x15EE2Cu;
        goto label_15ee2c;
    }
    ctx->pc = 0x15EE24u;
    {
        const bool branch_taken_0x15ee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee24) {
            ctx->pc = 0x15EE4Cu;
            goto label_15ee4c;
        }
    }
    ctx->pc = 0x15EE2Cu;
label_15ee2c:
    // 0x15ee2c: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x15ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_15ee30:
    // 0x15ee30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_15ee34:
    if (ctx->pc == 0x15EE34u) {
        ctx->pc = 0x15EE38u;
        goto label_15ee38;
    }
    ctx->pc = 0x15EE30u;
    {
        const bool branch_taken_0x15ee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee30) {
            ctx->pc = 0x15EE4Cu;
            goto label_15ee4c;
        }
    }
    ctx->pc = 0x15EE38u;
label_15ee38:
    // 0x15ee38: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15ee38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ee3c:
    // 0x15ee3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee40:
    // 0x15ee40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_15ee44:
    // 0x15ee44: 0x320f809  jalr        $t9
label_15ee48:
    if (ctx->pc == 0x15EE48u) {
        ctx->pc = 0x15EE48u;
            // 0x15ee48: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15EE4Cu;
        goto label_15ee4c;
    }
    ctx->pc = 0x15EE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EE4Cu);
        ctx->pc = 0x15EE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE44u;
            // 0x15ee48: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EE4Cu; }
            if (ctx->pc != 0x15EE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15EE4Cu;
label_15ee4c:
    // 0x15ee4c: 0x0  nop
    ctx->pc = 0x15ee4cu;
    // NOP
label_15ee50:
    // 0x15ee50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15ee54:
    // 0x15ee54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee58:
    // 0x15ee58: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15ee5c:
    // 0x15ee5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15ee5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15ee60:
    // 0x15ee60: 0xc06170c  jal         func_185C30
label_15ee64:
    if (ctx->pc == 0x15EE64u) {
        ctx->pc = 0x15EE64u;
            // 0x15ee64: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EE68u;
        goto label_15ee68;
    }
    ctx->pc = 0x15EE60u;
    SET_GPR_U32(ctx, 31, 0x15EE68u);
    ctx->pc = 0x15EE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE60u;
            // 0x15ee64: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185C30u;
    if (runtime->hasFunction(0x185C30u)) {
        auto targetFn = runtime->lookupFunction(0x185C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE68u; }
        if (ctx->pc != 0x15EE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__11CWaterFrameFUcUcUcUc_0x185c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE68u; }
        if (ctx->pc != 0x15EE68u) { return; }
    }
    ctx->pc = 0x15EE68u;
label_15ee68:
    // 0x15ee68: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x15ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
label_15ee6c:
    // 0x15ee6c: 0x3c023b93  lui         $v0, 0x3B93
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15251 << 16));
label_15ee70:
    // 0x15ee70: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x15ee70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_15ee74:
    // 0x15ee74: 0x344374bc  ori         $v1, $v0, 0x74BC
    ctx->pc = 0x15ee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
label_15ee78:
    // 0x15ee78: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x15ee78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ee7c:
    // 0x15ee7c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_15ee80:
    // 0x15ee80: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x15ee80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15ee84:
    // 0x15ee84: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15ee84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_15ee88:
    // 0x15ee88: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x15ee88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_15ee8c:
    // 0x15ee8c: 0xc0616f0  jal         func_185BC0
label_15ee90:
    if (ctx->pc == 0x15EE90u) {
        ctx->pc = 0x15EE90u;
            // 0x15ee90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EE94u;
        goto label_15ee94;
    }
    ctx->pc = 0x15EE8Cu;
    SET_GPR_U32(ctx, 31, 0x15EE94u);
    ctx->pc = 0x15EE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE8Cu;
            // 0x15ee90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185BC0u;
    if (runtime->hasFunction(0x185BC0u)) {
        auto targetFn = runtime->lookupFunction(0x185BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE94u; }
        if (ctx->pc != 0x15EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__11CWaterFrameFffff_0x185bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE94u; }
        if (ctx->pc != 0x15EE94u) { return; }
    }
    ctx->pc = 0x15EE94u;
label_15ee94:
    // 0x15ee94: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15ee94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ee98:
    // 0x15ee98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ee9c:
    // 0x15ee9c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_15eea0:
    // 0x15eea0: 0x320f809  jalr        $t9
label_15eea4:
    if (ctx->pc == 0x15EEA4u) {
        ctx->pc = 0x15EEA4u;
            // 0x15eea4: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x15EEA8u;
        goto label_15eea8;
    }
    ctx->pc = 0x15EEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EEA8u);
        ctx->pc = 0x15EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEA0u;
            // 0x15eea4: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15EEA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15EEA8u; }
            if (ctx->pc != 0x15EEA8u) { return; }
        }
        }
    }
    ctx->pc = 0x15EEA8u;
label_15eea8:
    // 0x15eea8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15eea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eeac:
    // 0x15eeac: 0x10000018  b           . + 4 + (0x18 << 2)
label_15eeb0:
    if (ctx->pc == 0x15EEB0u) {
        ctx->pc = 0x15EEB0u;
            // 0x15eeb0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EEB4u;
        goto label_15eeb4;
    }
    ctx->pc = 0x15EEACu;
    {
        const bool branch_taken_0x15eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEACu;
            // 0x15eeb0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eeac) {
            ctx->pc = 0x15EF10u;
            goto label_15ef10;
        }
    }
    ctx->pc = 0x15EEB4u;
label_15eeb4:
    // 0x15eeb4: 0x0  nop
    ctx->pc = 0x15eeb4u;
    // NOP
label_15eeb8:
    // 0x15eeb8: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_15eebc:
    // 0x15eebc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15eec0:
    // 0x15eec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15eec4:
    // 0x15eec4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_15eec8:
    if (ctx->pc == 0x15EEC8u) {
        ctx->pc = 0x15EECCu;
        goto label_15eecc;
    }
    ctx->pc = 0x15EEC4u;
    {
        const bool branch_taken_0x15eec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eec4) {
            ctx->pc = 0x15EEDCu;
            goto label_15eedc;
        }
    }
    ctx->pc = 0x15EECCu;
label_15eecc:
    // 0x15eecc: 0xc050bf4  jal         func_142FD0
label_15eed0:
    if (ctx->pc == 0x15EED0u) {
        ctx->pc = 0x15EED0u;
            // 0x15eed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EED4u;
        goto label_15eed4;
    }
    ctx->pc = 0x15EECCu;
    SET_GPR_U32(ctx, 31, 0x15EED4u);
    ctx->pc = 0x15EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EECCu;
            // 0x15eed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EED4u; }
        if (ctx->pc != 0x15EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EED4u; }
        if (ctx->pc != 0x15EED4u) { return; }
    }
    ctx->pc = 0x15EED4u;
label_15eed4:
    // 0x15eed4: 0x1000000c  b           . + 4 + (0xC << 2)
label_15eed8:
    if (ctx->pc == 0x15EED8u) {
        ctx->pc = 0x15EEDCu;
        goto label_15eedc;
    }
    ctx->pc = 0x15EED4u;
    {
        const bool branch_taken_0x15eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eed4) {
            ctx->pc = 0x15EF08u;
            goto label_15ef08;
        }
    }
    ctx->pc = 0x15EEDCu;
label_15eedc:
    // 0x15eedc: 0x0  nop
    ctx->pc = 0x15eedcu;
    // NOP
label_15eee0:
    // 0x15eee0: 0xc059cc0  jal         func_167300
label_15eee4:
    if (ctx->pc == 0x15EEE4u) {
        ctx->pc = 0x15EEE4u;
            // 0x15eee4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x15EEE8u;
        goto label_15eee8;
    }
    ctx->pc = 0x15EEE0u;
    SET_GPR_U32(ctx, 31, 0x15EEE8u);
    ctx->pc = 0x15EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEE0u;
            // 0x15eee4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEE8u; }
        if (ctx->pc != 0x15EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEE8u; }
        if (ctx->pc != 0x15EEE8u) { return; }
    }
    ctx->pc = 0x15EEE8u;
label_15eee8:
    // 0x15eee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15eeec:
    // 0x15eeec: 0xc04dd64  jal         func_137590
label_15eef0:
    if (ctx->pc == 0x15EEF0u) {
        ctx->pc = 0x15EEF0u;
            // 0x15eef0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x15EEF4u;
        goto label_15eef4;
    }
    ctx->pc = 0x15EEECu;
    SET_GPR_U32(ctx, 31, 0x15EEF4u);
    ctx->pc = 0x15EEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEECu;
            // 0x15eef0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEF4u; }
        if (ctx->pc != 0x15EEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEF4u; }
        if (ctx->pc != 0x15EEF4u) { return; }
    }
    ctx->pc = 0x15EEF4u;
label_15eef4:
    // 0x15eef4: 0xc050bf4  jal         func_142FD0
label_15eef8:
    if (ctx->pc == 0x15EEF8u) {
        ctx->pc = 0x15EEF8u;
            // 0x15eef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EEFCu;
        goto label_15eefc;
    }
    ctx->pc = 0x15EEF4u;
    SET_GPR_U32(ctx, 31, 0x15EEFCu);
    ctx->pc = 0x15EEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEF4u;
            // 0x15eef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEFCu; }
        if (ctx->pc != 0x15EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEFCu; }
        if (ctx->pc != 0x15EEFCu) { return; }
    }
    ctx->pc = 0x15EEFCu;
label_15eefc:
    // 0x15eefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ef00:
    // 0x15ef00: 0xc04dd64  jal         func_137590
label_15ef04:
    if (ctx->pc == 0x15EF04u) {
        ctx->pc = 0x15EF04u;
            // 0x15ef04: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x15EF08u;
        goto label_15ef08;
    }
    ctx->pc = 0x15EF00u;
    SET_GPR_U32(ctx, 31, 0x15EF08u);
    ctx->pc = 0x15EF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF00u;
            // 0x15ef04: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF08u; }
        if (ctx->pc != 0x15EF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF08u; }
        if (ctx->pc != 0x15EF08u) { return; }
    }
    ctx->pc = 0x15EF08u;
label_15ef08:
    // 0x15ef08: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_15ef0c:
    // 0x15ef0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15ef10:
    // 0x15ef10: 0x8e830098  lw          $v1, 0x98($s4)
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_15ef14:
    // 0x15ef14: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15ef14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ef18:
    // 0x15ef18: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_15ef1c:
    if (ctx->pc == 0x15EF1Cu) {
        ctx->pc = 0x15EF20u;
        goto label_15ef20;
    }
    ctx->pc = 0x15EF18u;
    {
        const bool branch_taken_0x15ef18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ef18) {
            ctx->pc = 0x15EEB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15eeb4;
        }
    }
    ctx->pc = 0x15EF20u;
label_15ef20:
    // 0x15ef20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15ef24:
    // 0x15ef24: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x15ef24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_15ef28:
    // 0x15ef28: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_15ef2c:
    // 0x15ef2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x15ef2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ef30:
    // 0x15ef30: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
label_15ef34:
    if (ctx->pc == 0x15EF34u) {
        ctx->pc = 0x15EF38u;
        goto label_15ef38;
    }
    ctx->pc = 0x15EF30u;
    {
        const bool branch_taken_0x15ef30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ef30) {
            ctx->pc = 0x15ED2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ed2c;
        }
    }
    ctx->pc = 0x15EF38u;
label_15ef38:
    // 0x15ef38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15ef38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15ef3c:
    // 0x15ef3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15ef3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15ef40:
    // 0x15ef40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15ef40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15ef44:
    // 0x15ef44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15ef44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15ef48:
    // 0x15ef48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15ef48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ef4c:
    // 0x15ef4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ef4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15ef50:
    // 0x15ef50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ef50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15ef54:
    // 0x15ef54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ef54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ef58:
    // 0x15ef58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ef58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15ef5c:
    // 0x15ef5c: 0x3e00008  jr          $ra
label_15ef60:
    if (ctx->pc == 0x15EF60u) {
        ctx->pc = 0x15EF60u;
            // 0x15ef60: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->pc = 0x15EF64u;
        goto label_fallthrough_0x15ef5c;
    }
    ctx->pc = 0x15EF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF5Cu;
            // 0x15ef60: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15ef5c:
    ctx->pc = 0x15EF64u;
}
