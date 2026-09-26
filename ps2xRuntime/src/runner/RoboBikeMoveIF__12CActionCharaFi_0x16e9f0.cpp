#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RoboBikeMoveIF__12CActionCharaFi
// Address: 0x16e9f0 - 0x16f32c
void RoboBikeMoveIF__12CActionCharaFi_0x16e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RoboBikeMoveIF__12CActionCharaFi_0x16e9f0");
#endif

    switch (ctx->pc) {
        case 0x16e9f0u: goto label_16e9f0;
        case 0x16e9f4u: goto label_16e9f4;
        case 0x16e9f8u: goto label_16e9f8;
        case 0x16e9fcu: goto label_16e9fc;
        case 0x16ea00u: goto label_16ea00;
        case 0x16ea04u: goto label_16ea04;
        case 0x16ea08u: goto label_16ea08;
        case 0x16ea0cu: goto label_16ea0c;
        case 0x16ea10u: goto label_16ea10;
        case 0x16ea14u: goto label_16ea14;
        case 0x16ea18u: goto label_16ea18;
        case 0x16ea1cu: goto label_16ea1c;
        case 0x16ea20u: goto label_16ea20;
        case 0x16ea24u: goto label_16ea24;
        case 0x16ea28u: goto label_16ea28;
        case 0x16ea2cu: goto label_16ea2c;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea34u: goto label_16ea34;
        case 0x16ea38u: goto label_16ea38;
        case 0x16ea3cu: goto label_16ea3c;
        case 0x16ea40u: goto label_16ea40;
        case 0x16ea44u: goto label_16ea44;
        case 0x16ea48u: goto label_16ea48;
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea50u: goto label_16ea50;
        case 0x16ea54u: goto label_16ea54;
        case 0x16ea58u: goto label_16ea58;
        case 0x16ea5cu: goto label_16ea5c;
        case 0x16ea60u: goto label_16ea60;
        case 0x16ea64u: goto label_16ea64;
        case 0x16ea68u: goto label_16ea68;
        case 0x16ea6cu: goto label_16ea6c;
        case 0x16ea70u: goto label_16ea70;
        case 0x16ea74u: goto label_16ea74;
        case 0x16ea78u: goto label_16ea78;
        case 0x16ea7cu: goto label_16ea7c;
        case 0x16ea80u: goto label_16ea80;
        case 0x16ea84u: goto label_16ea84;
        case 0x16ea88u: goto label_16ea88;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16ea90u: goto label_16ea90;
        case 0x16ea94u: goto label_16ea94;
        case 0x16ea98u: goto label_16ea98;
        case 0x16ea9cu: goto label_16ea9c;
        case 0x16eaa0u: goto label_16eaa0;
        case 0x16eaa4u: goto label_16eaa4;
        case 0x16eaa8u: goto label_16eaa8;
        case 0x16eaacu: goto label_16eaac;
        case 0x16eab0u: goto label_16eab0;
        case 0x16eab4u: goto label_16eab4;
        case 0x16eab8u: goto label_16eab8;
        case 0x16eabcu: goto label_16eabc;
        case 0x16eac0u: goto label_16eac0;
        case 0x16eac4u: goto label_16eac4;
        case 0x16eac8u: goto label_16eac8;
        case 0x16eaccu: goto label_16eacc;
        case 0x16ead0u: goto label_16ead0;
        case 0x16ead4u: goto label_16ead4;
        case 0x16ead8u: goto label_16ead8;
        case 0x16eadcu: goto label_16eadc;
        case 0x16eae0u: goto label_16eae0;
        case 0x16eae4u: goto label_16eae4;
        case 0x16eae8u: goto label_16eae8;
        case 0x16eaecu: goto label_16eaec;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eaf4u: goto label_16eaf4;
        case 0x16eaf8u: goto label_16eaf8;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb00u: goto label_16eb00;
        case 0x16eb04u: goto label_16eb04;
        case 0x16eb08u: goto label_16eb08;
        case 0x16eb0cu: goto label_16eb0c;
        case 0x16eb10u: goto label_16eb10;
        case 0x16eb14u: goto label_16eb14;
        case 0x16eb18u: goto label_16eb18;
        case 0x16eb1cu: goto label_16eb1c;
        case 0x16eb20u: goto label_16eb20;
        case 0x16eb24u: goto label_16eb24;
        case 0x16eb28u: goto label_16eb28;
        case 0x16eb2cu: goto label_16eb2c;
        case 0x16eb30u: goto label_16eb30;
        case 0x16eb34u: goto label_16eb34;
        case 0x16eb38u: goto label_16eb38;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16eb40u: goto label_16eb40;
        case 0x16eb44u: goto label_16eb44;
        case 0x16eb48u: goto label_16eb48;
        case 0x16eb4cu: goto label_16eb4c;
        case 0x16eb50u: goto label_16eb50;
        case 0x16eb54u: goto label_16eb54;
        case 0x16eb58u: goto label_16eb58;
        case 0x16eb5cu: goto label_16eb5c;
        case 0x16eb60u: goto label_16eb60;
        case 0x16eb64u: goto label_16eb64;
        case 0x16eb68u: goto label_16eb68;
        case 0x16eb6cu: goto label_16eb6c;
        case 0x16eb70u: goto label_16eb70;
        case 0x16eb74u: goto label_16eb74;
        case 0x16eb78u: goto label_16eb78;
        case 0x16eb7cu: goto label_16eb7c;
        case 0x16eb80u: goto label_16eb80;
        case 0x16eb84u: goto label_16eb84;
        case 0x16eb88u: goto label_16eb88;
        case 0x16eb8cu: goto label_16eb8c;
        case 0x16eb90u: goto label_16eb90;
        case 0x16eb94u: goto label_16eb94;
        case 0x16eb98u: goto label_16eb98;
        case 0x16eb9cu: goto label_16eb9c;
        case 0x16eba0u: goto label_16eba0;
        case 0x16eba4u: goto label_16eba4;
        case 0x16eba8u: goto label_16eba8;
        case 0x16ebacu: goto label_16ebac;
        case 0x16ebb0u: goto label_16ebb0;
        case 0x16ebb4u: goto label_16ebb4;
        case 0x16ebb8u: goto label_16ebb8;
        case 0x16ebbcu: goto label_16ebbc;
        case 0x16ebc0u: goto label_16ebc0;
        case 0x16ebc4u: goto label_16ebc4;
        case 0x16ebc8u: goto label_16ebc8;
        case 0x16ebccu: goto label_16ebcc;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebd4u: goto label_16ebd4;
        case 0x16ebd8u: goto label_16ebd8;
        case 0x16ebdcu: goto label_16ebdc;
        case 0x16ebe0u: goto label_16ebe0;
        case 0x16ebe4u: goto label_16ebe4;
        case 0x16ebe8u: goto label_16ebe8;
        case 0x16ebecu: goto label_16ebec;
        case 0x16ebf0u: goto label_16ebf0;
        case 0x16ebf4u: goto label_16ebf4;
        case 0x16ebf8u: goto label_16ebf8;
        case 0x16ebfcu: goto label_16ebfc;
        case 0x16ec00u: goto label_16ec00;
        case 0x16ec04u: goto label_16ec04;
        case 0x16ec08u: goto label_16ec08;
        case 0x16ec0cu: goto label_16ec0c;
        case 0x16ec10u: goto label_16ec10;
        case 0x16ec14u: goto label_16ec14;
        case 0x16ec18u: goto label_16ec18;
        case 0x16ec1cu: goto label_16ec1c;
        case 0x16ec20u: goto label_16ec20;
        case 0x16ec24u: goto label_16ec24;
        case 0x16ec28u: goto label_16ec28;
        case 0x16ec2cu: goto label_16ec2c;
        case 0x16ec30u: goto label_16ec30;
        case 0x16ec34u: goto label_16ec34;
        case 0x16ec38u: goto label_16ec38;
        case 0x16ec3cu: goto label_16ec3c;
        case 0x16ec40u: goto label_16ec40;
        case 0x16ec44u: goto label_16ec44;
        case 0x16ec48u: goto label_16ec48;
        case 0x16ec4cu: goto label_16ec4c;
        case 0x16ec50u: goto label_16ec50;
        case 0x16ec54u: goto label_16ec54;
        case 0x16ec58u: goto label_16ec58;
        case 0x16ec5cu: goto label_16ec5c;
        case 0x16ec60u: goto label_16ec60;
        case 0x16ec64u: goto label_16ec64;
        case 0x16ec68u: goto label_16ec68;
        case 0x16ec6cu: goto label_16ec6c;
        case 0x16ec70u: goto label_16ec70;
        case 0x16ec74u: goto label_16ec74;
        case 0x16ec78u: goto label_16ec78;
        case 0x16ec7cu: goto label_16ec7c;
        case 0x16ec80u: goto label_16ec80;
        case 0x16ec84u: goto label_16ec84;
        case 0x16ec88u: goto label_16ec88;
        case 0x16ec8cu: goto label_16ec8c;
        case 0x16ec90u: goto label_16ec90;
        case 0x16ec94u: goto label_16ec94;
        case 0x16ec98u: goto label_16ec98;
        case 0x16ec9cu: goto label_16ec9c;
        case 0x16eca0u: goto label_16eca0;
        case 0x16eca4u: goto label_16eca4;
        case 0x16eca8u: goto label_16eca8;
        case 0x16ecacu: goto label_16ecac;
        case 0x16ecb0u: goto label_16ecb0;
        case 0x16ecb4u: goto label_16ecb4;
        case 0x16ecb8u: goto label_16ecb8;
        case 0x16ecbcu: goto label_16ecbc;
        case 0x16ecc0u: goto label_16ecc0;
        case 0x16ecc4u: goto label_16ecc4;
        case 0x16ecc8u: goto label_16ecc8;
        case 0x16ecccu: goto label_16eccc;
        case 0x16ecd0u: goto label_16ecd0;
        case 0x16ecd4u: goto label_16ecd4;
        case 0x16ecd8u: goto label_16ecd8;
        case 0x16ecdcu: goto label_16ecdc;
        case 0x16ece0u: goto label_16ece0;
        case 0x16ece4u: goto label_16ece4;
        case 0x16ece8u: goto label_16ece8;
        case 0x16ececu: goto label_16ecec;
        case 0x16ecf0u: goto label_16ecf0;
        case 0x16ecf4u: goto label_16ecf4;
        case 0x16ecf8u: goto label_16ecf8;
        case 0x16ecfcu: goto label_16ecfc;
        case 0x16ed00u: goto label_16ed00;
        case 0x16ed04u: goto label_16ed04;
        case 0x16ed08u: goto label_16ed08;
        case 0x16ed0cu: goto label_16ed0c;
        case 0x16ed10u: goto label_16ed10;
        case 0x16ed14u: goto label_16ed14;
        case 0x16ed18u: goto label_16ed18;
        case 0x16ed1cu: goto label_16ed1c;
        case 0x16ed20u: goto label_16ed20;
        case 0x16ed24u: goto label_16ed24;
        case 0x16ed28u: goto label_16ed28;
        case 0x16ed2cu: goto label_16ed2c;
        case 0x16ed30u: goto label_16ed30;
        case 0x16ed34u: goto label_16ed34;
        case 0x16ed38u: goto label_16ed38;
        case 0x16ed3cu: goto label_16ed3c;
        case 0x16ed40u: goto label_16ed40;
        case 0x16ed44u: goto label_16ed44;
        case 0x16ed48u: goto label_16ed48;
        case 0x16ed4cu: goto label_16ed4c;
        case 0x16ed50u: goto label_16ed50;
        case 0x16ed54u: goto label_16ed54;
        case 0x16ed58u: goto label_16ed58;
        case 0x16ed5cu: goto label_16ed5c;
        case 0x16ed60u: goto label_16ed60;
        case 0x16ed64u: goto label_16ed64;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed6cu: goto label_16ed6c;
        case 0x16ed70u: goto label_16ed70;
        case 0x16ed74u: goto label_16ed74;
        case 0x16ed78u: goto label_16ed78;
        case 0x16ed7cu: goto label_16ed7c;
        case 0x16ed80u: goto label_16ed80;
        case 0x16ed84u: goto label_16ed84;
        case 0x16ed88u: goto label_16ed88;
        case 0x16ed8cu: goto label_16ed8c;
        case 0x16ed90u: goto label_16ed90;
        case 0x16ed94u: goto label_16ed94;
        case 0x16ed98u: goto label_16ed98;
        case 0x16ed9cu: goto label_16ed9c;
        case 0x16eda0u: goto label_16eda0;
        case 0x16eda4u: goto label_16eda4;
        case 0x16eda8u: goto label_16eda8;
        case 0x16edacu: goto label_16edac;
        case 0x16edb0u: goto label_16edb0;
        case 0x16edb4u: goto label_16edb4;
        case 0x16edb8u: goto label_16edb8;
        case 0x16edbcu: goto label_16edbc;
        case 0x16edc0u: goto label_16edc0;
        case 0x16edc4u: goto label_16edc4;
        case 0x16edc8u: goto label_16edc8;
        case 0x16edccu: goto label_16edcc;
        case 0x16edd0u: goto label_16edd0;
        case 0x16edd4u: goto label_16edd4;
        case 0x16edd8u: goto label_16edd8;
        case 0x16eddcu: goto label_16eddc;
        case 0x16ede0u: goto label_16ede0;
        case 0x16ede4u: goto label_16ede4;
        case 0x16ede8u: goto label_16ede8;
        case 0x16edecu: goto label_16edec;
        case 0x16edf0u: goto label_16edf0;
        case 0x16edf4u: goto label_16edf4;
        case 0x16edf8u: goto label_16edf8;
        case 0x16edfcu: goto label_16edfc;
        case 0x16ee00u: goto label_16ee00;
        case 0x16ee04u: goto label_16ee04;
        case 0x16ee08u: goto label_16ee08;
        case 0x16ee0cu: goto label_16ee0c;
        case 0x16ee10u: goto label_16ee10;
        case 0x16ee14u: goto label_16ee14;
        case 0x16ee18u: goto label_16ee18;
        case 0x16ee1cu: goto label_16ee1c;
        case 0x16ee20u: goto label_16ee20;
        case 0x16ee24u: goto label_16ee24;
        case 0x16ee28u: goto label_16ee28;
        case 0x16ee2cu: goto label_16ee2c;
        case 0x16ee30u: goto label_16ee30;
        case 0x16ee34u: goto label_16ee34;
        case 0x16ee38u: goto label_16ee38;
        case 0x16ee3cu: goto label_16ee3c;
        case 0x16ee40u: goto label_16ee40;
        case 0x16ee44u: goto label_16ee44;
        case 0x16ee48u: goto label_16ee48;
        case 0x16ee4cu: goto label_16ee4c;
        case 0x16ee50u: goto label_16ee50;
        case 0x16ee54u: goto label_16ee54;
        case 0x16ee58u: goto label_16ee58;
        case 0x16ee5cu: goto label_16ee5c;
        case 0x16ee60u: goto label_16ee60;
        case 0x16ee64u: goto label_16ee64;
        case 0x16ee68u: goto label_16ee68;
        case 0x16ee6cu: goto label_16ee6c;
        case 0x16ee70u: goto label_16ee70;
        case 0x16ee74u: goto label_16ee74;
        case 0x16ee78u: goto label_16ee78;
        case 0x16ee7cu: goto label_16ee7c;
        case 0x16ee80u: goto label_16ee80;
        case 0x16ee84u: goto label_16ee84;
        case 0x16ee88u: goto label_16ee88;
        case 0x16ee8cu: goto label_16ee8c;
        case 0x16ee90u: goto label_16ee90;
        case 0x16ee94u: goto label_16ee94;
        case 0x16ee98u: goto label_16ee98;
        case 0x16ee9cu: goto label_16ee9c;
        case 0x16eea0u: goto label_16eea0;
        case 0x16eea4u: goto label_16eea4;
        case 0x16eea8u: goto label_16eea8;
        case 0x16eeacu: goto label_16eeac;
        case 0x16eeb0u: goto label_16eeb0;
        case 0x16eeb4u: goto label_16eeb4;
        case 0x16eeb8u: goto label_16eeb8;
        case 0x16eebcu: goto label_16eebc;
        case 0x16eec0u: goto label_16eec0;
        case 0x16eec4u: goto label_16eec4;
        case 0x16eec8u: goto label_16eec8;
        case 0x16eeccu: goto label_16eecc;
        case 0x16eed0u: goto label_16eed0;
        case 0x16eed4u: goto label_16eed4;
        case 0x16eed8u: goto label_16eed8;
        case 0x16eedcu: goto label_16eedc;
        case 0x16eee0u: goto label_16eee0;
        case 0x16eee4u: goto label_16eee4;
        case 0x16eee8u: goto label_16eee8;
        case 0x16eeecu: goto label_16eeec;
        case 0x16eef0u: goto label_16eef0;
        case 0x16eef4u: goto label_16eef4;
        case 0x16eef8u: goto label_16eef8;
        case 0x16eefcu: goto label_16eefc;
        case 0x16ef00u: goto label_16ef00;
        case 0x16ef04u: goto label_16ef04;
        case 0x16ef08u: goto label_16ef08;
        case 0x16ef0cu: goto label_16ef0c;
        case 0x16ef10u: goto label_16ef10;
        case 0x16ef14u: goto label_16ef14;
        case 0x16ef18u: goto label_16ef18;
        case 0x16ef1cu: goto label_16ef1c;
        case 0x16ef20u: goto label_16ef20;
        case 0x16ef24u: goto label_16ef24;
        case 0x16ef28u: goto label_16ef28;
        case 0x16ef2cu: goto label_16ef2c;
        case 0x16ef30u: goto label_16ef30;
        case 0x16ef34u: goto label_16ef34;
        case 0x16ef38u: goto label_16ef38;
        case 0x16ef3cu: goto label_16ef3c;
        case 0x16ef40u: goto label_16ef40;
        case 0x16ef44u: goto label_16ef44;
        case 0x16ef48u: goto label_16ef48;
        case 0x16ef4cu: goto label_16ef4c;
        case 0x16ef50u: goto label_16ef50;
        case 0x16ef54u: goto label_16ef54;
        case 0x16ef58u: goto label_16ef58;
        case 0x16ef5cu: goto label_16ef5c;
        case 0x16ef60u: goto label_16ef60;
        case 0x16ef64u: goto label_16ef64;
        case 0x16ef68u: goto label_16ef68;
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef70u: goto label_16ef70;
        case 0x16ef74u: goto label_16ef74;
        case 0x16ef78u: goto label_16ef78;
        case 0x16ef7cu: goto label_16ef7c;
        case 0x16ef80u: goto label_16ef80;
        case 0x16ef84u: goto label_16ef84;
        case 0x16ef88u: goto label_16ef88;
        case 0x16ef8cu: goto label_16ef8c;
        case 0x16ef90u: goto label_16ef90;
        case 0x16ef94u: goto label_16ef94;
        case 0x16ef98u: goto label_16ef98;
        case 0x16ef9cu: goto label_16ef9c;
        case 0x16efa0u: goto label_16efa0;
        case 0x16efa4u: goto label_16efa4;
        case 0x16efa8u: goto label_16efa8;
        case 0x16efacu: goto label_16efac;
        case 0x16efb0u: goto label_16efb0;
        case 0x16efb4u: goto label_16efb4;
        case 0x16efb8u: goto label_16efb8;
        case 0x16efbcu: goto label_16efbc;
        case 0x16efc0u: goto label_16efc0;
        case 0x16efc4u: goto label_16efc4;
        case 0x16efc8u: goto label_16efc8;
        case 0x16efccu: goto label_16efcc;
        case 0x16efd0u: goto label_16efd0;
        case 0x16efd4u: goto label_16efd4;
        case 0x16efd8u: goto label_16efd8;
        case 0x16efdcu: goto label_16efdc;
        case 0x16efe0u: goto label_16efe0;
        case 0x16efe4u: goto label_16efe4;
        case 0x16efe8u: goto label_16efe8;
        case 0x16efecu: goto label_16efec;
        case 0x16eff0u: goto label_16eff0;
        case 0x16eff4u: goto label_16eff4;
        case 0x16eff8u: goto label_16eff8;
        case 0x16effcu: goto label_16effc;
        case 0x16f000u: goto label_16f000;
        case 0x16f004u: goto label_16f004;
        case 0x16f008u: goto label_16f008;
        case 0x16f00cu: goto label_16f00c;
        case 0x16f010u: goto label_16f010;
        case 0x16f014u: goto label_16f014;
        case 0x16f018u: goto label_16f018;
        case 0x16f01cu: goto label_16f01c;
        case 0x16f020u: goto label_16f020;
        case 0x16f024u: goto label_16f024;
        case 0x16f028u: goto label_16f028;
        case 0x16f02cu: goto label_16f02c;
        case 0x16f030u: goto label_16f030;
        case 0x16f034u: goto label_16f034;
        case 0x16f038u: goto label_16f038;
        case 0x16f03cu: goto label_16f03c;
        case 0x16f040u: goto label_16f040;
        case 0x16f044u: goto label_16f044;
        case 0x16f048u: goto label_16f048;
        case 0x16f04cu: goto label_16f04c;
        case 0x16f050u: goto label_16f050;
        case 0x16f054u: goto label_16f054;
        case 0x16f058u: goto label_16f058;
        case 0x16f05cu: goto label_16f05c;
        case 0x16f060u: goto label_16f060;
        case 0x16f064u: goto label_16f064;
        case 0x16f068u: goto label_16f068;
        case 0x16f06cu: goto label_16f06c;
        case 0x16f070u: goto label_16f070;
        case 0x16f074u: goto label_16f074;
        case 0x16f078u: goto label_16f078;
        case 0x16f07cu: goto label_16f07c;
        case 0x16f080u: goto label_16f080;
        case 0x16f084u: goto label_16f084;
        case 0x16f088u: goto label_16f088;
        case 0x16f08cu: goto label_16f08c;
        case 0x16f090u: goto label_16f090;
        case 0x16f094u: goto label_16f094;
        case 0x16f098u: goto label_16f098;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0a4u: goto label_16f0a4;
        case 0x16f0a8u: goto label_16f0a8;
        case 0x16f0acu: goto label_16f0ac;
        case 0x16f0b0u: goto label_16f0b0;
        case 0x16f0b4u: goto label_16f0b4;
        case 0x16f0b8u: goto label_16f0b8;
        case 0x16f0bcu: goto label_16f0bc;
        case 0x16f0c0u: goto label_16f0c0;
        case 0x16f0c4u: goto label_16f0c4;
        case 0x16f0c8u: goto label_16f0c8;
        case 0x16f0ccu: goto label_16f0cc;
        case 0x16f0d0u: goto label_16f0d0;
        case 0x16f0d4u: goto label_16f0d4;
        case 0x16f0d8u: goto label_16f0d8;
        case 0x16f0dcu: goto label_16f0dc;
        case 0x16f0e0u: goto label_16f0e0;
        case 0x16f0e4u: goto label_16f0e4;
        case 0x16f0e8u: goto label_16f0e8;
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        case 0x16f128u: goto label_16f128;
        case 0x16f12cu: goto label_16f12c;
        case 0x16f130u: goto label_16f130;
        case 0x16f134u: goto label_16f134;
        case 0x16f138u: goto label_16f138;
        case 0x16f13cu: goto label_16f13c;
        case 0x16f140u: goto label_16f140;
        case 0x16f144u: goto label_16f144;
        case 0x16f148u: goto label_16f148;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f150u: goto label_16f150;
        case 0x16f154u: goto label_16f154;
        case 0x16f158u: goto label_16f158;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f160u: goto label_16f160;
        case 0x16f164u: goto label_16f164;
        case 0x16f168u: goto label_16f168;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f170u: goto label_16f170;
        case 0x16f174u: goto label_16f174;
        case 0x16f178u: goto label_16f178;
        case 0x16f17cu: goto label_16f17c;
        case 0x16f180u: goto label_16f180;
        case 0x16f184u: goto label_16f184;
        case 0x16f188u: goto label_16f188;
        case 0x16f18cu: goto label_16f18c;
        case 0x16f190u: goto label_16f190;
        case 0x16f194u: goto label_16f194;
        case 0x16f198u: goto label_16f198;
        case 0x16f19cu: goto label_16f19c;
        case 0x16f1a0u: goto label_16f1a0;
        case 0x16f1a4u: goto label_16f1a4;
        case 0x16f1a8u: goto label_16f1a8;
        case 0x16f1acu: goto label_16f1ac;
        case 0x16f1b0u: goto label_16f1b0;
        case 0x16f1b4u: goto label_16f1b4;
        case 0x16f1b8u: goto label_16f1b8;
        case 0x16f1bcu: goto label_16f1bc;
        case 0x16f1c0u: goto label_16f1c0;
        case 0x16f1c4u: goto label_16f1c4;
        case 0x16f1c8u: goto label_16f1c8;
        case 0x16f1ccu: goto label_16f1cc;
        case 0x16f1d0u: goto label_16f1d0;
        case 0x16f1d4u: goto label_16f1d4;
        case 0x16f1d8u: goto label_16f1d8;
        case 0x16f1dcu: goto label_16f1dc;
        case 0x16f1e0u: goto label_16f1e0;
        case 0x16f1e4u: goto label_16f1e4;
        case 0x16f1e8u: goto label_16f1e8;
        case 0x16f1ecu: goto label_16f1ec;
        case 0x16f1f0u: goto label_16f1f0;
        case 0x16f1f4u: goto label_16f1f4;
        case 0x16f1f8u: goto label_16f1f8;
        case 0x16f1fcu: goto label_16f1fc;
        case 0x16f200u: goto label_16f200;
        case 0x16f204u: goto label_16f204;
        case 0x16f208u: goto label_16f208;
        case 0x16f20cu: goto label_16f20c;
        case 0x16f210u: goto label_16f210;
        case 0x16f214u: goto label_16f214;
        case 0x16f218u: goto label_16f218;
        case 0x16f21cu: goto label_16f21c;
        case 0x16f220u: goto label_16f220;
        case 0x16f224u: goto label_16f224;
        case 0x16f228u: goto label_16f228;
        case 0x16f22cu: goto label_16f22c;
        case 0x16f230u: goto label_16f230;
        case 0x16f234u: goto label_16f234;
        case 0x16f238u: goto label_16f238;
        case 0x16f23cu: goto label_16f23c;
        case 0x16f240u: goto label_16f240;
        case 0x16f244u: goto label_16f244;
        case 0x16f248u: goto label_16f248;
        case 0x16f24cu: goto label_16f24c;
        case 0x16f250u: goto label_16f250;
        case 0x16f254u: goto label_16f254;
        case 0x16f258u: goto label_16f258;
        case 0x16f25cu: goto label_16f25c;
        case 0x16f260u: goto label_16f260;
        case 0x16f264u: goto label_16f264;
        case 0x16f268u: goto label_16f268;
        case 0x16f26cu: goto label_16f26c;
        case 0x16f270u: goto label_16f270;
        case 0x16f274u: goto label_16f274;
        case 0x16f278u: goto label_16f278;
        case 0x16f27cu: goto label_16f27c;
        case 0x16f280u: goto label_16f280;
        case 0x16f284u: goto label_16f284;
        case 0x16f288u: goto label_16f288;
        case 0x16f28cu: goto label_16f28c;
        case 0x16f290u: goto label_16f290;
        case 0x16f294u: goto label_16f294;
        case 0x16f298u: goto label_16f298;
        case 0x16f29cu: goto label_16f29c;
        case 0x16f2a0u: goto label_16f2a0;
        case 0x16f2a4u: goto label_16f2a4;
        case 0x16f2a8u: goto label_16f2a8;
        case 0x16f2acu: goto label_16f2ac;
        case 0x16f2b0u: goto label_16f2b0;
        case 0x16f2b4u: goto label_16f2b4;
        case 0x16f2b8u: goto label_16f2b8;
        case 0x16f2bcu: goto label_16f2bc;
        case 0x16f2c0u: goto label_16f2c0;
        case 0x16f2c4u: goto label_16f2c4;
        case 0x16f2c8u: goto label_16f2c8;
        case 0x16f2ccu: goto label_16f2cc;
        case 0x16f2d0u: goto label_16f2d0;
        case 0x16f2d4u: goto label_16f2d4;
        case 0x16f2d8u: goto label_16f2d8;
        case 0x16f2dcu: goto label_16f2dc;
        case 0x16f2e0u: goto label_16f2e0;
        case 0x16f2e4u: goto label_16f2e4;
        case 0x16f2e8u: goto label_16f2e8;
        case 0x16f2ecu: goto label_16f2ec;
        case 0x16f2f0u: goto label_16f2f0;
        case 0x16f2f4u: goto label_16f2f4;
        case 0x16f2f8u: goto label_16f2f8;
        case 0x16f2fcu: goto label_16f2fc;
        case 0x16f300u: goto label_16f300;
        case 0x16f304u: goto label_16f304;
        case 0x16f308u: goto label_16f308;
        case 0x16f30cu: goto label_16f30c;
        case 0x16f310u: goto label_16f310;
        case 0x16f314u: goto label_16f314;
        case 0x16f318u: goto label_16f318;
        case 0x16f31cu: goto label_16f31c;
        case 0x16f320u: goto label_16f320;
        case 0x16f324u: goto label_16f324;
        case 0x16f328u: goto label_16f328;
        default: break;
    }

    ctx->pc = 0x16e9f0u;

label_16e9f0:
    // 0x16e9f0: 0x27bdd650  addiu       $sp, $sp, -0x29B0
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956624));
label_16e9f4:
    // 0x16e9f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16e9f8:
    // 0x16e9f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16e9fc:
    // 0x16e9fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16ea00:
    // 0x16ea00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16ea04:
    // 0x16ea04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16ea08:
    // 0x16ea08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ea0c:
    // 0x16ea0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16ea0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16ea10:
    // 0x16ea10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16ea14:
    // 0x16ea14: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ea18:
    // 0x16ea18: 0x24a536d0  addiu       $a1, $a1, 0x36D0
    ctx->pc = 0x16ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14032));
label_16ea1c:
    // 0x16ea1c: 0xc05af24  jal         func_16BC90
label_16ea20:
    if (ctx->pc == 0x16EA20u) {
        ctx->pc = 0x16EA20u;
            // 0x16ea20: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x16EA24u;
        goto label_16ea24;
    }
    ctx->pc = 0x16EA1Cu;
    SET_GPR_U32(ctx, 31, 0x16EA24u);
    ctx->pc = 0x16EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA1Cu;
            // 0x16ea20: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA24u; }
        if (ctx->pc != 0x16EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA24u; }
        if (ctx->pc != 0x16EA24u) { return; }
    }
    ctx->pc = 0x16EA24u;
label_16ea24:
    // 0x16ea24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ea24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ea28:
    // 0x16ea28: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_16ea2c:
    if (ctx->pc == 0x16EA2Cu) {
        ctx->pc = 0x16EA2Cu;
            // 0x16ea2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA30u;
        goto label_16ea30;
    }
    ctx->pc = 0x16EA28u;
    {
        const bool branch_taken_0x16ea28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA28u;
            // 0x16ea2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea28) {
            ctx->pc = 0x16EA38u;
            goto label_16ea38;
        }
    }
    ctx->pc = 0x16EA30u;
label_16ea30:
    // 0x16ea30: 0x10000236  b           . + 4 + (0x236 << 2)
label_16ea34:
    if (ctx->pc == 0x16EA34u) {
        ctx->pc = 0x16EA34u;
            // 0x16ea34: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x16EA38u;
        goto label_16ea38;
    }
    ctx->pc = 0x16EA30u;
    {
        const bool branch_taken_0x16ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA30u;
            // 0x16ea34: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea30) {
            ctx->pc = 0x16F30Cu;
            goto label_16f30c;
        }
    }
    ctx->pc = 0x16EA38u;
label_16ea38:
    // 0x16ea38: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16ea3c:
    // 0x16ea3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ea40:
    // 0x16ea40: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16ea44:
    // 0x16ea44: 0x320f809  jalr        $t9
label_16ea48:
    if (ctx->pc == 0x16EA48u) {
        ctx->pc = 0x16EA48u;
            // 0x16ea48: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16EA4Cu;
        goto label_16ea4c;
    }
    ctx->pc = 0x16EA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EA4Cu);
        ctx->pc = 0x16EA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA44u;
            // 0x16ea48: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EA4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EA4Cu; }
            if (ctx->pc != 0x16EA4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16EA4Cu;
label_16ea4c:
    // 0x16ea4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16ea4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ea50:
    // 0x16ea50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ea54:
    // 0x16ea54: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16ea54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16ea58:
    // 0x16ea58: 0x320f809  jalr        $t9
label_16ea5c:
    if (ctx->pc == 0x16EA5Cu) {
        ctx->pc = 0x16EA5Cu;
            // 0x16ea5c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16EA60u;
        goto label_16ea60;
    }
    ctx->pc = 0x16EA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EA60u);
        ctx->pc = 0x16EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA58u;
            // 0x16ea5c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EA60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EA60u; }
            if (ctx->pc != 0x16EA60u) { return; }
        }
        }
    }
    ctx->pc = 0x16EA60u;
label_16ea60:
    // 0x16ea60: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16ea64:
    // 0x16ea64: 0xc052cc0  jal         func_14B300
label_16ea68:
    if (ctx->pc == 0x16EA68u) {
        ctx->pc = 0x16EA68u;
            // 0x16ea68: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16EA6Cu;
        goto label_16ea6c;
    }
    ctx->pc = 0x16EA64u;
    SET_GPR_U32(ctx, 31, 0x16EA6Cu);
    ctx->pc = 0x16EA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA64u;
            // 0x16ea68: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA6Cu; }
        if (ctx->pc != 0x16EA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA6Cu; }
        if (ctx->pc != 0x16EA6Cu) { return; }
    }
    ctx->pc = 0x16EA6Cu;
label_16ea6c:
    // 0x16ea6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16ea70:
    // 0x16ea70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ea70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16ea74:
    // 0x16ea74: 0xc052cd0  jal         func_14B340
label_16ea78:
    if (ctx->pc == 0x16EA78u) {
        ctx->pc = 0x16EA78u;
            // 0x16ea78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16EA7Cu;
        goto label_16ea7c;
    }
    ctx->pc = 0x16EA74u;
    SET_GPR_U32(ctx, 31, 0x16EA7Cu);
    ctx->pc = 0x16EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EA74u;
            // 0x16ea78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA7Cu; }
        if (ctx->pc != 0x16EA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EA7Cu; }
        if (ctx->pc != 0x16EA7Cu) { return; }
    }
    ctx->pc = 0x16EA7Cu;
label_16ea7c:
    // 0x16ea7c: 0xa240076d  sb          $zero, 0x76D($s2)
    ctx->pc = 0x16ea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1901), (uint8_t)GPR_U32(ctx, 0));
label_16ea80:
    // 0x16ea80: 0x8e4209e0  lw          $v0, 0x9E0($s2)
    ctx->pc = 0x16ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2528)));
label_16ea84:
    // 0x16ea84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_16ea88:
    // 0x16ea88: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_16ea8c:
    if (ctx->pc == 0x16EA8Cu) {
        ctx->pc = 0x16EA90u;
        goto label_16ea90;
    }
    ctx->pc = 0x16EA88u;
    {
        const bool branch_taken_0x16ea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea88) {
            ctx->pc = 0x16EB20u;
            goto label_16eb20;
        }
    }
    ctx->pc = 0x16EA90u;
label_16ea90:
    // 0x16ea90: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ea94:
    // 0x16ea94: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x16ea94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16ea98:
    // 0x16ea98: 0x0  nop
    ctx->pc = 0x16ea98u;
    // NOP
label_16ea9c:
    // 0x16ea9c: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x16ea9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eaa0:
    // 0x16eaa0: 0x0  nop
    ctx->pc = 0x16eaa0u;
    // NOP
label_16eaa4:
    // 0x16eaa4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_16eaa8:
    if (ctx->pc == 0x16EAA8u) {
        ctx->pc = 0x16EAACu;
        goto label_16eaac;
    }
    ctx->pc = 0x16EAA4u;
    {
        const bool branch_taken_0x16eaa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eaa4) {
            ctx->pc = 0x16EB20u;
            goto label_16eb20;
        }
    }
    ctx->pc = 0x16EAACu;
label_16eaac:
    // 0x16eaac: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x16eaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eab0:
    // 0x16eab0: 0x0  nop
    ctx->pc = 0x16eab0u;
    // NOP
label_16eab4:
    // 0x16eab4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_16eab8:
    if (ctx->pc == 0x16EAB8u) {
        ctx->pc = 0x16EAB8u;
            // 0x16eab8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->pc = 0x16EABCu;
        goto label_16eabc;
    }
    ctx->pc = 0x16EAB4u;
    {
        const bool branch_taken_0x16eab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAB4u;
            // 0x16eab8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eab4) {
            ctx->pc = 0x16EAE0u;
            goto label_16eae0;
        }
    }
    ctx->pc = 0x16EABCu;
label_16eabc:
    // 0x16eabc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16eac0:
    // 0x16eac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16eac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eac4:
    // 0x16eac4: 0x0  nop
    ctx->pc = 0x16eac4u;
    // NOP
label_16eac8:
    // 0x16eac8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16eac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16eacc:
    // 0x16eacc: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x16eaccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ead0:
    // 0x16ead0: 0x0  nop
    ctx->pc = 0x16ead0u;
    // NOP
label_16ead4:
    // 0x16ead4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16ead8:
    if (ctx->pc == 0x16EAD8u) {
        ctx->pc = 0x16EAD8u;
            // 0x16ead8: 0xe6410790  swc1        $f1, 0x790($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
        ctx->pc = 0x16EADCu;
        goto label_16eadc;
    }
    ctx->pc = 0x16EAD4u;
    {
        const bool branch_taken_0x16ead4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAD4u;
            // 0x16ead8: 0xe6410790  swc1        $f1, 0x790($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead4) {
            ctx->pc = 0x16EAE0u;
            goto label_16eae0;
        }
    }
    ctx->pc = 0x16EADCu;
label_16eadc:
    // 0x16eadc: 0xe6430790  swc1        $f3, 0x790($s2)
    ctx->pc = 0x16eadcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
label_16eae0:
    // 0x16eae0: 0xc6430790  lwc1        $f3, 0x790($s2)
    ctx->pc = 0x16eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16eae4:
    // 0x16eae4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16eae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16eae8:
    // 0x16eae8: 0x0  nop
    ctx->pc = 0x16eae8u;
    // NOP
label_16eaec:
    // 0x16eaec: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x16eaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eaf0:
    // 0x16eaf0: 0x0  nop
    ctx->pc = 0x16eaf0u;
    // NOP
label_16eaf4:
    // 0x16eaf4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_16eaf8:
    if (ctx->pc == 0x16EAF8u) {
        ctx->pc = 0x16EAF8u;
            // 0x16eaf8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->pc = 0x16EAFCu;
        goto label_16eafc;
    }
    ctx->pc = 0x16EAF4u;
    {
        const bool branch_taken_0x16eaf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EAF4u;
            // 0x16eaf8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaf4) {
            ctx->pc = 0x16EB20u;
            goto label_16eb20;
        }
    }
    ctx->pc = 0x16EAFCu;
label_16eafc:
    // 0x16eafc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16eb00:
    // 0x16eb00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16eb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eb04:
    // 0x16eb04: 0x0  nop
    ctx->pc = 0x16eb04u;
    // NOP
label_16eb08:
    // 0x16eb08: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x16eb08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_16eb0c:
    // 0x16eb0c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x16eb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eb10:
    // 0x16eb10: 0x0  nop
    ctx->pc = 0x16eb10u;
    // NOP
label_16eb14:
    // 0x16eb14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16eb18:
    if (ctx->pc == 0x16EB18u) {
        ctx->pc = 0x16EB18u;
            // 0x16eb18: 0xe6410790  swc1        $f1, 0x790($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
        ctx->pc = 0x16EB1Cu;
        goto label_16eb1c;
    }
    ctx->pc = 0x16EB14u;
    {
        const bool branch_taken_0x16eb14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB14u;
            // 0x16eb18: 0xe6410790  swc1        $f1, 0x790($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb14) {
            ctx->pc = 0x16EB20u;
            goto label_16eb20;
        }
    }
    ctx->pc = 0x16EB1Cu;
label_16eb1c:
    // 0x16eb1c: 0xe6420790  swc1        $f2, 0x790($s2)
    ctx->pc = 0x16eb1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
label_16eb20:
    // 0x16eb20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eb20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eb24:
    // 0x16eb24: 0x0  nop
    ctx->pc = 0x16eb24u;
    // NOP
label_16eb28:
    // 0x16eb28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16eb28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eb2c:
    // 0x16eb2c: 0x0  nop
    ctx->pc = 0x16eb2cu;
    // NOP
label_16eb30:
    // 0x16eb30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16eb34:
    if (ctx->pc == 0x16EB34u) {
        ctx->pc = 0x16EB34u;
            // 0x16eb34: 0x3c02be4c  lui         $v0, 0xBE4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
        ctx->pc = 0x16EB38u;
        goto label_16eb38;
    }
    ctx->pc = 0x16EB30u;
    {
        const bool branch_taken_0x16eb30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB30u;
            // 0x16eb34: 0x3c02be4c  lui         $v0, 0xBE4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb30) {
            ctx->pc = 0x16EB50u;
            goto label_16eb50;
        }
    }
    ctx->pc = 0x16EB38u;
label_16eb38:
    // 0x16eb38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16eb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16eb3c:
    // 0x16eb3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16eb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eb40:
    // 0x16eb40: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16eb44:
    // 0x16eb44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16eb44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16eb48:
    // 0x16eb48: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16eb48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16eb4c:
    // 0x16eb4c: 0xe6410790  swc1        $f1, 0x790($s2)
    ctx->pc = 0x16eb4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
label_16eb50:
    // 0x16eb50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eb54:
    // 0x16eb54: 0x0  nop
    ctx->pc = 0x16eb54u;
    // NOP
label_16eb58:
    // 0x16eb58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16eb58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eb5c:
    // 0x16eb5c: 0x0  nop
    ctx->pc = 0x16eb5cu;
    // NOP
label_16eb60:
    // 0x16eb60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16eb64:
    if (ctx->pc == 0x16EB64u) {
        ctx->pc = 0x16EB64u;
            // 0x16eb64: 0x3c02be19  lui         $v0, 0xBE19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48665 << 16));
        ctx->pc = 0x16EB68u;
        goto label_16eb68;
    }
    ctx->pc = 0x16EB60u;
    {
        const bool branch_taken_0x16eb60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EB60u;
            // 0x16eb64: 0x3c02be19  lui         $v0, 0xBE19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48665 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb60) {
            ctx->pc = 0x16EB80u;
            goto label_16eb80;
        }
    }
    ctx->pc = 0x16EB68u;
label_16eb68:
    // 0x16eb68: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16eb6c:
    // 0x16eb6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16eb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eb70:
    // 0x16eb70: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16eb74:
    // 0x16eb74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16eb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16eb78:
    // 0x16eb78: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16eb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16eb7c:
    // 0x16eb7c: 0xe6400790  swc1        $f0, 0x790($s2)
    ctx->pc = 0x16eb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
label_16eb80:
    // 0x16eb80: 0xc6400790  lwc1        $f0, 0x790($s2)
    ctx->pc = 0x16eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16eb84:
    // 0x16eb84: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x16eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_16eb88:
    // 0x16eb88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16eb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eb8c:
    // 0x16eb8c: 0x0  nop
    ctx->pc = 0x16eb8cu;
    // NOP
label_16eb90:
    // 0x16eb90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16eb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eb94:
    // 0x16eb94: 0x0  nop
    ctx->pc = 0x16eb94u;
    // NOP
label_16eb98:
    // 0x16eb98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16eb9c:
    if (ctx->pc == 0x16EB9Cu) {
        ctx->pc = 0x16EBA0u;
        goto label_16eba0;
    }
    ctx->pc = 0x16EB98u;
    {
        const bool branch_taken_0x16eb98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16eb98) {
            ctx->pc = 0x16EBA4u;
            goto label_16eba4;
        }
    }
    ctx->pc = 0x16EBA0u;
label_16eba0:
    // 0x16eba0: 0xe6410790  swc1        $f1, 0x790($s2)
    ctx->pc = 0x16eba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
label_16eba4:
    // 0x16eba4: 0xc6400790  lwc1        $f0, 0x790($s2)
    ctx->pc = 0x16eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16eba8:
    // 0x16eba8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_16ebac:
    // 0x16ebac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ebacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ebb0:
    // 0x16ebb0: 0x0  nop
    ctx->pc = 0x16ebb0u;
    // NOP
label_16ebb4:
    // 0x16ebb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16ebb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ebb8:
    // 0x16ebb8: 0x0  nop
    ctx->pc = 0x16ebb8u;
    // NOP
label_16ebbc:
    // 0x16ebbc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16ebc0:
    if (ctx->pc == 0x16EBC0u) {
        ctx->pc = 0x16EBC4u;
        goto label_16ebc4;
    }
    ctx->pc = 0x16EBBCu;
    {
        const bool branch_taken_0x16ebbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ebbc) {
            ctx->pc = 0x16EBC8u;
            goto label_16ebc8;
        }
    }
    ctx->pc = 0x16EBC4u;
label_16ebc4:
    // 0x16ebc4: 0xe6410790  swc1        $f1, 0x790($s2)
    ctx->pc = 0x16ebc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1936), bits); }
label_16ebc8:
    // 0x16ebc8: 0xc6400790  lwc1        $f0, 0x790($s2)
    ctx->pc = 0x16ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ebcc:
    // 0x16ebcc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_16ebd0:
    // 0x16ebd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16ebd4:
    // 0x16ebd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ebd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ebd8:
    // 0x16ebd8: 0x0  nop
    ctx->pc = 0x16ebd8u;
    // NOP
label_16ebdc:
    // 0x16ebdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ebdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ebe0:
    // 0x16ebe0: 0x0  nop
    ctx->pc = 0x16ebe0u;
    // NOP
label_16ebe4:
    // 0x16ebe4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_16ebe8:
    if (ctx->pc == 0x16EBE8u) {
        ctx->pc = 0x16EBECu;
        goto label_16ebec;
    }
    ctx->pc = 0x16EBE4u;
    {
        const bool branch_taken_0x16ebe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ebe4) {
            ctx->pc = 0x16EC0Cu;
            goto label_16ec0c;
        }
    }
    ctx->pc = 0x16EBECu;
label_16ebec:
    // 0x16ebec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ebf0:
    // 0x16ebf0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x16ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16ebf4:
    // 0x16ebf4: 0xae42059c  sw          $v0, 0x59C($s2)
    ctx->pc = 0x16ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1436), GPR_U32(ctx, 2));
label_16ebf8:
    // 0x16ebf8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x16ebf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ebfc:
    // 0x16ebfc: 0x8e4405a0  lw          $a0, 0x5A0($s2)
    ctx->pc = 0x16ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
label_16ec00:
    // 0x16ec00: 0x8e450588  lw          $a1, 0x588($s2)
    ctx->pc = 0x16ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1416)));
label_16ec04:
    // 0x16ec04: 0xc0631a8  jal         func_18C6A0
label_16ec08:
    if (ctx->pc == 0x16EC08u) {
        ctx->pc = 0x16EC08u;
            // 0x16ec08: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x16EC0Cu;
        goto label_16ec0c;
    }
    ctx->pc = 0x16EC04u;
    SET_GPR_U32(ctx, 31, 0x16EC0Cu);
    ctx->pc = 0x16EC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC04u;
            // 0x16ec08: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC0Cu; }
        if (ctx->pc != 0x16EC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC0Cu; }
        if (ctx->pc != 0x16EC0Cu) { return; }
    }
    ctx->pc = 0x16EC0Cu;
label_16ec0c:
    // 0x16ec0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16ec10:
    // 0x16ec10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16ec14:
    // 0x16ec14: 0xc052cf0  jal         func_14B3C0
label_16ec18:
    if (ctx->pc == 0x16EC18u) {
        ctx->pc = 0x16EC18u;
            // 0x16ec18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16EC1Cu;
        goto label_16ec1c;
    }
    ctx->pc = 0x16EC14u;
    SET_GPR_U32(ctx, 31, 0x16EC1Cu);
    ctx->pc = 0x16EC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC14u;
            // 0x16ec18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC1Cu; }
        if (ctx->pc != 0x16EC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EC1Cu; }
        if (ctx->pc != 0x16EC1Cu) { return; }
    }
    ctx->pc = 0x16EC1Cu;
label_16ec1c:
    // 0x16ec1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16ec20:
    if (ctx->pc == 0x16EC20u) {
        ctx->pc = 0x16EC20u;
            // 0x16ec20: 0x3c023d0e  lui         $v0, 0x3D0E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
        ctx->pc = 0x16EC24u;
        goto label_16ec24;
    }
    ctx->pc = 0x16EC1Cu;
    {
        const bool branch_taken_0x16ec1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC1Cu;
            // 0x16ec20: 0x3c023d0e  lui         $v0, 0x3D0E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec1c) {
            ctx->pc = 0x16EC60u;
            goto label_16ec60;
        }
    }
    ctx->pc = 0x16EC24u;
label_16ec24:
    // 0x16ec24: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x16ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_16ec28:
    // 0x16ec28: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x16ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_16ec2c:
    // 0x16ec2c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x16ec2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_16ec30:
    // 0x16ec30: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16ec34:
    // 0x16ec34: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x16ec34u;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
label_16ec38:
    // 0x16ec38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16ec3c:
    // 0x16ec3c: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ec40:
    // 0x16ec40: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x16ec40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_16ec44:
    // 0x16ec44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16ec44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_16ec48:
    // 0x16ec48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ec48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ec4c:
    // 0x16ec4c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x16ec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ec50:
    // 0x16ec50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ec50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16ec54:
    // 0x16ec54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ec54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16ec58:
    // 0x16ec58: 0x1000000e  b           . + 4 + (0xE << 2)
label_16ec5c:
    if (ctx->pc == 0x16EC5Cu) {
        ctx->pc = 0x16EC5Cu;
            // 0x16ec5c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x16EC60u;
        goto label_16ec60;
    }
    ctx->pc = 0x16EC58u;
    {
        const bool branch_taken_0x16ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC58u;
            // 0x16ec5c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec58) {
            ctx->pc = 0x16EC94u;
            goto label_16ec94;
        }
    }
    ctx->pc = 0x16EC60u;
label_16ec60:
    // 0x16ec60: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x16ec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_16ec64:
    // 0x16ec64: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x16ec64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_16ec68:
    // 0x16ec68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_16ec6c:
    // 0x16ec6c: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x16ec6cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
label_16ec70:
    // 0x16ec70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16ec74:
    // 0x16ec74: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ec78:
    // 0x16ec78: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x16ec78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_16ec7c:
    // 0x16ec7c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16ec7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_16ec80:
    // 0x16ec80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ec80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ec84:
    // 0x16ec84: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x16ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ec88:
    // 0x16ec88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ec88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16ec8c:
    // 0x16ec8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ec8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16ec90:
    // 0x16ec90: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x16ec90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_16ec94:
    // 0x16ec94: 0x27b30084  addiu       $s3, $sp, 0x84
    ctx->pc = 0x16ec94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_16ec98:
    // 0x16ec98: 0xc04c374  jal         func_130DD0
label_16ec9c:
    if (ctx->pc == 0x16EC9Cu) {
        ctx->pc = 0x16EC9Cu;
            // 0x16ec9c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x16ECA0u;
        goto label_16eca0;
    }
    ctx->pc = 0x16EC98u;
    SET_GPR_U32(ctx, 31, 0x16ECA0u);
    ctx->pc = 0x16EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC98u;
            // 0x16ec9c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECA0u; }
        if (ctx->pc != 0x16ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECA0u; }
        if (ctx->pc != 0x16ECA0u) { return; }
    }
    ctx->pc = 0x16ECA0u;
label_16eca0:
    // 0x16eca0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x16eca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_16eca4:
    // 0x16eca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16eca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16eca8:
    // 0x16eca8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16eca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ecac:
    // 0x16ecac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16ecacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16ecb0:
    // 0x16ecb0: 0x320f809  jalr        $t9
label_16ecb4:
    if (ctx->pc == 0x16ECB4u) {
        ctx->pc = 0x16ECB4u;
            // 0x16ecb4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16ECB8u;
        goto label_16ecb8;
    }
    ctx->pc = 0x16ECB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16ECB8u);
        ctx->pc = 0x16ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECB0u;
            // 0x16ecb4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16ECB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16ECB8u; }
            if (ctx->pc != 0x16ECB8u) { return; }
        }
        }
    }
    ctx->pc = 0x16ECB8u;
label_16ecb8:
    // 0x16ecb8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_16ecbc:
    if (ctx->pc == 0x16ECBCu) {
        ctx->pc = 0x16ECBCu;
            // 0x16ecbc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16ECC0u;
        goto label_16ecc0;
    }
    ctx->pc = 0x16ECB8u;
    {
        const bool branch_taken_0x16ecb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECB8u;
            // 0x16ecbc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecb8) {
            ctx->pc = 0x16ED18u;
            goto label_16ed18;
        }
    }
    ctx->pc = 0x16ECC0u;
label_16ecc0:
    // 0x16ecc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16ecc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ecc4:
    // 0x16ecc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ecc8:
    // 0x16ecc8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16ecc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16eccc:
    // 0x16eccc: 0x320f809  jalr        $t9
label_16ecd0:
    if (ctx->pc == 0x16ECD0u) {
        ctx->pc = 0x16ECD0u;
            // 0x16ecd0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16ECD4u;
        goto label_16ecd4;
    }
    ctx->pc = 0x16ECCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16ECD4u);
        ctx->pc = 0x16ECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECCCu;
            // 0x16ecd0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16ECD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16ECD4u; }
            if (ctx->pc != 0x16ECD4u) { return; }
        }
        }
    }
    ctx->pc = 0x16ECD4u;
label_16ecd4:
    // 0x16ecd4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_16ecd8:
    // 0x16ecd8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x16ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16ecdc:
    // 0x16ecdc: 0x24424c00  addiu       $v0, $v0, 0x4C00
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19456));
label_16ece0:
    // 0x16ece0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16ece4:
    // 0x16ece4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16ece4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16ece8:
    // 0x16ece8: 0xc041c7a  jal         func_1071E8
label_16ecec:
    if (ctx->pc == 0x16ECECu) {
        ctx->pc = 0x16ECECu;
            // 0x16ecec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x16ECF0u;
        goto label_16ecf0;
    }
    ctx->pc = 0x16ECE8u;
    SET_GPR_U32(ctx, 31, 0x16ECF0u);
    ctx->pc = 0x16ECECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECE8u;
            // 0x16ecec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECF0u; }
        if (ctx->pc != 0x16ECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECF0u; }
        if (ctx->pc != 0x16ECF0u) { return; }
    }
    ctx->pc = 0x16ECF0u;
label_16ecf0:
    // 0x16ecf0: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x16ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16ecf4:
    // 0x16ecf4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16ecf8:
    // 0x16ecf8: 0xc041cf6  jal         func_1073D8
label_16ecfc:
    if (ctx->pc == 0x16ECFCu) {
        ctx->pc = 0x16ECFCu;
            // 0x16ecfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16ED00u;
        goto label_16ed00;
    }
    ctx->pc = 0x16ECF8u;
    SET_GPR_U32(ctx, 31, 0x16ED00u);
    ctx->pc = 0x16ECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECF8u;
            // 0x16ecfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED00u; }
        if (ctx->pc != 0x16ED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED00u; }
        if (ctx->pc != 0x16ED00u) { return; }
    }
    ctx->pc = 0x16ED00u;
label_16ed00:
    // 0x16ed00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16ed04:
    // 0x16ed04: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16ed08:
    // 0x16ed08: 0xc041bb0  jal         func_106EC0
label_16ed0c:
    if (ctx->pc == 0x16ED0Cu) {
        ctx->pc = 0x16ED0Cu;
            // 0x16ed0c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x16ED10u;
        goto label_16ed10;
    }
    ctx->pc = 0x16ED08u;
    SET_GPR_U32(ctx, 31, 0x16ED10u);
    ctx->pc = 0x16ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED08u;
            // 0x16ed0c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED10u; }
        if (ctx->pc != 0x16ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED10u; }
        if (ctx->pc != 0x16ED10u) { return; }
    }
    ctx->pc = 0x16ED10u;
label_16ed10:
    // 0x16ed10: 0x10000004  b           . + 4 + (0x4 << 2)
label_16ed14:
    if (ctx->pc == 0x16ED14u) {
        ctx->pc = 0x16ED14u;
            // 0x16ed14: 0xc64c0790  lwc1        $f12, 0x790($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x16ED18u;
        goto label_16ed18;
    }
    ctx->pc = 0x16ED10u;
    {
        const bool branch_taken_0x16ed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED10u;
            // 0x16ed14: 0xc64c0790  lwc1        $f12, 0x790($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed10) {
            ctx->pc = 0x16ED24u;
            goto label_16ed24;
        }
    }
    ctx->pc = 0x16ED18u;
label_16ed18:
    // 0x16ed18: 0xc041c5c  jal         func_107170
label_16ed1c:
    if (ctx->pc == 0x16ED1Cu) {
        ctx->pc = 0x16ED1Cu;
            // 0x16ed1c: 0x26450690  addiu       $a1, $s2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1680));
        ctx->pc = 0x16ED20u;
        goto label_16ed20;
    }
    ctx->pc = 0x16ED18u;
    SET_GPR_U32(ctx, 31, 0x16ED20u);
    ctx->pc = 0x16ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED18u;
            // 0x16ed1c: 0x26450690  addiu       $a1, $s2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED20u; }
        if (ctx->pc != 0x16ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED20u; }
        if (ctx->pc != 0x16ED20u) { return; }
    }
    ctx->pc = 0x16ED20u;
label_16ed20:
    // 0x16ed20: 0xc64c0790  lwc1        $f12, 0x790($s2)
    ctx->pc = 0x16ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16ed24:
    // 0x16ed24: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16ed28:
    // 0x16ed28: 0xc041c4a  jal         func_107128
label_16ed2c:
    if (ctx->pc == 0x16ED2Cu) {
        ctx->pc = 0x16ED2Cu;
            // 0x16ed2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16ED30u;
        goto label_16ed30;
    }
    ctx->pc = 0x16ED28u;
    SET_GPR_U32(ctx, 31, 0x16ED30u);
    ctx->pc = 0x16ED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED28u;
            // 0x16ed2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED30u; }
        if (ctx->pc != 0x16ED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED30u; }
        if (ctx->pc != 0x16ED30u) { return; }
    }
    ctx->pc = 0x16ED30u;
label_16ed30:
    // 0x16ed30: 0xc6410790  lwc1        $f1, 0x790($s2)
    ctx->pc = 0x16ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ed34:
    // 0x16ed34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16ed34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ed38:
    // 0x16ed38: 0x0  nop
    ctx->pc = 0x16ed38u;
    // NOP
label_16ed3c:
    // 0x16ed3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16ed3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ed40:
    // 0x16ed40: 0x0  nop
    ctx->pc = 0x16ed40u;
    // NOP
label_16ed44:
    // 0x16ed44: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_16ed48:
    if (ctx->pc == 0x16ED48u) {
        ctx->pc = 0x16ED4Cu;
        goto label_16ed4c;
    }
    ctx->pc = 0x16ED44u;
    {
        const bool branch_taken_0x16ed44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ed44) {
            ctx->pc = 0x16EDECu;
            goto label_16edec;
        }
    }
    ctx->pc = 0x16ED4Cu;
label_16ed4c:
    // 0x16ed4c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16ed4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16ed50:
    // 0x16ed50: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ed54:
    // 0x16ed54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ed58:
    // 0x16ed58: 0x24a53690  addiu       $a1, $a1, 0x3690
    ctx->pc = 0x16ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
label_16ed5c:
    // 0x16ed5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ed5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ed60:
    // 0x16ed60: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ed60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ed64:
    // 0x16ed64: 0x320f809  jalr        $t9
label_16ed68:
    if (ctx->pc == 0x16ED68u) {
        ctx->pc = 0x16ED68u;
            // 0x16ed68: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16ED6Cu;
        goto label_16ed6c;
    }
    ctx->pc = 0x16ED64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16ED6Cu);
        ctx->pc = 0x16ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED64u;
            // 0x16ed68: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16ED6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16ED6Cu; }
            if (ctx->pc != 0x16ED6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16ED6Cu;
label_16ed6c:
    // 0x16ed6c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16ed70:
    // 0x16ed70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ed70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ed74:
    // 0x16ed74: 0x0  nop
    ctx->pc = 0x16ed74u;
    // NOP
label_16ed78:
    // 0x16ed78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16ed78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ed7c:
    // 0x16ed7c: 0x0  nop
    ctx->pc = 0x16ed7cu;
    // NOP
label_16ed80:
    // 0x16ed80: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_16ed84:
    if (ctx->pc == 0x16ED84u) {
        ctx->pc = 0x16ED84u;
            // 0x16ed84: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->pc = 0x16ED88u;
        goto label_16ed88;
    }
    ctx->pc = 0x16ED80u;
    {
        const bool branch_taken_0x16ed80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED80u;
            // 0x16ed84: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed80) {
            ctx->pc = 0x16EDACu;
            goto label_16edac;
        }
    }
    ctx->pc = 0x16ED88u;
label_16ed88:
    // 0x16ed88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16ed88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16ed8c:
    // 0x16ed8c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ed90:
    // 0x16ed90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ed94:
    // 0x16ed94: 0x24a536d8  addiu       $a1, $a1, 0x36D8
    ctx->pc = 0x16ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14040));
label_16ed98:
    // 0x16ed98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ed98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ed9c:
    // 0x16ed9c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16eda0:
    // 0x16eda0: 0x320f809  jalr        $t9
label_16eda4:
    if (ctx->pc == 0x16EDA4u) {
        ctx->pc = 0x16EDA4u;
            // 0x16eda4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EDA8u;
        goto label_16eda8;
    }
    ctx->pc = 0x16EDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EDA8u);
        ctx->pc = 0x16EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDA0u;
            // 0x16eda4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EDA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EDA8u; }
            if (ctx->pc != 0x16EDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x16EDA8u;
label_16eda8:
    // 0x16eda8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x16eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_16edac:
    // 0x16edac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16edacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16edb0:
    // 0x16edb0: 0x0  nop
    ctx->pc = 0x16edb0u;
    // NOP
label_16edb4:
    // 0x16edb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16edb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16edb8:
    // 0x16edb8: 0x0  nop
    ctx->pc = 0x16edb8u;
    // NOP
label_16edbc:
    // 0x16edbc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_16edc0:
    if (ctx->pc == 0x16EDC0u) {
        ctx->pc = 0x16EDC4u;
        goto label_16edc4;
    }
    ctx->pc = 0x16EDBCu;
    {
        const bool branch_taken_0x16edbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16edbc) {
            ctx->pc = 0x16EE0Cu;
            goto label_16ee0c;
        }
    }
    ctx->pc = 0x16EDC4u;
label_16edc4:
    // 0x16edc4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16edc8:
    // 0x16edc8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16edcc:
    // 0x16edcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16edccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16edd0:
    // 0x16edd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16edd4:
    // 0x16edd4: 0x24a536e0  addiu       $a1, $a1, 0x36E0
    ctx->pc = 0x16edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14048));
label_16edd8:
    // 0x16edd8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16edd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16eddc:
    // 0x16eddc: 0x320f809  jalr        $t9
label_16ede0:
    if (ctx->pc == 0x16EDE0u) {
        ctx->pc = 0x16EDE0u;
            // 0x16ede0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EDE4u;
        goto label_16ede4;
    }
    ctx->pc = 0x16EDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EDE4u);
        ctx->pc = 0x16EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDDCu;
            // 0x16ede0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EDE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EDE4u; }
            if (ctx->pc != 0x16EDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x16EDE4u;
label_16ede4:
    // 0x16ede4: 0x1000000a  b           . + 4 + (0xA << 2)
label_16ede8:
    if (ctx->pc == 0x16EDE8u) {
        ctx->pc = 0x16EDE8u;
            // 0x16ede8: 0x86420772  lh          $v0, 0x772($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
        ctx->pc = 0x16EDECu;
        goto label_16edec;
    }
    ctx->pc = 0x16EDE4u;
    {
        const bool branch_taken_0x16ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDE4u;
            // 0x16ede8: 0x86420772  lh          $v0, 0x772($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ede4) {
            ctx->pc = 0x16EE10u;
            goto label_16ee10;
        }
    }
    ctx->pc = 0x16EDECu;
label_16edec:
    // 0x16edec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16edecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16edf0:
    // 0x16edf0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16edf4:
    // 0x16edf4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16edf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16edf8:
    // 0x16edf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16edfc:
    // 0x16edfc: 0x24a536a0  addiu       $a1, $a1, 0x36A0
    ctx->pc = 0x16edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13984));
label_16ee00:
    // 0x16ee00: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ee00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ee04:
    // 0x16ee04: 0x320f809  jalr        $t9
label_16ee08:
    if (ctx->pc == 0x16EE08u) {
        ctx->pc = 0x16EE08u;
            // 0x16ee08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EE0Cu;
        goto label_16ee0c;
    }
    ctx->pc = 0x16EE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE0Cu);
        ctx->pc = 0x16EE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE04u;
            // 0x16ee08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EE0Cu; }
            if (ctx->pc != 0x16EE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16EE0Cu;
label_16ee0c:
    // 0x16ee0c: 0x86420772  lh          $v0, 0x772($s2)
    ctx->pc = 0x16ee0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
label_16ee10:
    // 0x16ee10: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_16ee14:
    if (ctx->pc == 0x16EE14u) {
        ctx->pc = 0x16EE14u;
            // 0x16ee14: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16EE18u;
        goto label_16ee18;
    }
    ctx->pc = 0x16EE10u;
    {
        const bool branch_taken_0x16ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE10u;
            // 0x16ee14: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee10) {
            ctx->pc = 0x16EF44u;
            goto label_16ef44;
        }
    }
    ctx->pc = 0x16EE18u;
label_16ee18:
    // 0x16ee18: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16ee1c:
    // 0x16ee1c: 0xc0a0ed8  jal         func_283B60
label_16ee20:
    if (ctx->pc == 0x16EE20u) {
        ctx->pc = 0x16EE20u;
            // 0x16ee20: 0x86450770  lh          $a1, 0x770($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1904)));
        ctx->pc = 0x16EE24u;
        goto label_16ee24;
    }
    ctx->pc = 0x16EE1Cu;
    SET_GPR_U32(ctx, 31, 0x16EE24u);
    ctx->pc = 0x16EE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE1Cu;
            // 0x16ee20: 0x86450770  lh          $a1, 0x770($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE24u; }
        if (ctx->pc != 0x16EE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE24u; }
        if (ctx->pc != 0x16EE24u) { return; }
    }
    ctx->pc = 0x16EE24u;
label_16ee24:
    // 0x16ee24: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_16ee28:
    if (ctx->pc == 0x16EE28u) {
        ctx->pc = 0x16EE2Cu;
        goto label_16ee2c;
    }
    ctx->pc = 0x16EE24u;
    {
        const bool branch_taken_0x16ee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee24) {
            ctx->pc = 0x16EF8Cu;
            goto label_16ef8c;
        }
    }
    ctx->pc = 0x16EE2Cu;
label_16ee2c:
    // 0x16ee2c: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16ee2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16ee30:
    // 0x16ee30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ee34:
    // 0x16ee34: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_16ee38:
    if (ctx->pc == 0x16EE38u) {
        ctx->pc = 0x16EE3Cu;
        goto label_16ee3c;
    }
    ctx->pc = 0x16EE34u;
    {
        const bool branch_taken_0x16ee34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ee34) {
            ctx->pc = 0x16EF8Cu;
            goto label_16ef8c;
        }
    }
    ctx->pc = 0x16EE3Cu;
label_16ee3c:
    // 0x16ee3c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16ee3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ee40:
    // 0x16ee40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ee44:
    // 0x16ee44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16ee44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16ee48:
    // 0x16ee48: 0x320f809  jalr        $t9
label_16ee4c:
    if (ctx->pc == 0x16EE4Cu) {
        ctx->pc = 0x16EE4Cu;
            // 0x16ee4c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x16EE50u;
        goto label_16ee50;
    }
    ctx->pc = 0x16EE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE50u);
        ctx->pc = 0x16EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE48u;
            // 0x16ee4c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EE50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EE50u; }
            if (ctx->pc != 0x16EE50u) { return; }
        }
        }
    }
    ctx->pc = 0x16EE50u;
label_16ee50:
    // 0x16ee50: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x16ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16ee54:
    // 0x16ee54: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x16ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ee58:
    // 0x16ee58: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x16ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ee5c:
    // 0x16ee5c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x16ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ee60:
    // 0x16ee60: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16ee60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16ee64:
    // 0x16ee64: 0xc047c76  jal         func_11F1D8
label_16ee68:
    if (ctx->pc == 0x16EE68u) {
        ctx->pc = 0x16EE68u;
            // 0x16ee68: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16EE6Cu;
        goto label_16ee6c;
    }
    ctx->pc = 0x16EE64u;
    SET_GPR_U32(ctx, 31, 0x16EE6Cu);
    ctx->pc = 0x16EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE64u;
            // 0x16ee68: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE6Cu; }
        if (ctx->pc != 0x16EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE6Cu; }
        if (ctx->pc != 0x16EE6Cu) { return; }
    }
    ctx->pc = 0x16EE6Cu;
label_16ee6c:
    // 0x16ee6c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16ee70:
    // 0x16ee70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ee70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16ee74:
    // 0x16ee74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ee78:
    // 0x16ee78: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16ee7c:
    // 0x16ee7c: 0x320f809  jalr        $t9
label_16ee80:
    if (ctx->pc == 0x16EE80u) {
        ctx->pc = 0x16EE80u;
            // 0x16ee80: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x16EE84u;
        goto label_16ee84;
    }
    ctx->pc = 0x16EE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EE84u);
        ctx->pc = 0x16EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE7Cu;
            // 0x16ee80: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EE84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EE84u; }
            if (ctx->pc != 0x16EE84u) { return; }
        }
        }
    }
    ctx->pc = 0x16EE84u;
label_16ee84:
    // 0x16ee84: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x16ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ee88:
    // 0x16ee88: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16ee8c:
    // 0x16ee8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16ee90:
    // 0x16ee90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ee90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ee94:
    // 0x16ee94: 0x0  nop
    ctx->pc = 0x16ee94u;
    // NOP
label_16ee98:
    // 0x16ee98: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x16ee98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_16ee9c:
    // 0x16ee9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16ee9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eea0:
    // 0x16eea0: 0x0  nop
    ctx->pc = 0x16eea0u;
    // NOP
label_16eea4:
    // 0x16eea4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16eea8:
    if (ctx->pc == 0x16EEA8u) {
        ctx->pc = 0x16EEA8u;
            // 0x16eea8: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x16EEACu;
        goto label_16eeac;
    }
    ctx->pc = 0x16EEA4u;
    {
        const bool branch_taken_0x16eea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEA4u;
            // 0x16eea8: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eea4) {
            ctx->pc = 0x16EEC4u;
            goto label_16eec4;
        }
    }
    ctx->pc = 0x16EEACu;
label_16eeac:
    // 0x16eeac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16eeb0:
    // 0x16eeb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16eeb4:
    // 0x16eeb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16eeb8:
    // 0x16eeb8: 0x0  nop
    ctx->pc = 0x16eeb8u;
    // NOP
label_16eebc:
    // 0x16eebc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16eebcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16eec0:
    // 0x16eec0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16eec4:
    // 0x16eec4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16eec8:
    // 0x16eec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16eecc:
    // 0x16eecc: 0x0  nop
    ctx->pc = 0x16eeccu;
    // NOP
label_16eed0:
    // 0x16eed0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16eed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16eed4:
    // 0x16eed4: 0x0  nop
    ctx->pc = 0x16eed4u;
    // NOP
label_16eed8:
    // 0x16eed8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_16eedc:
    if (ctx->pc == 0x16EEDCu) {
        ctx->pc = 0x16EEDCu;
            // 0x16eedc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16EEE0u;
        goto label_16eee0;
    }
    ctx->pc = 0x16EED8u;
    {
        const bool branch_taken_0x16eed8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EED8u;
            // 0x16eedc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eed8) {
            ctx->pc = 0x16EEF4u;
            goto label_16eef4;
        }
    }
    ctx->pc = 0x16EEE0u;
label_16eee0:
    // 0x16eee0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16eee4:
    // 0x16eee4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16eee8:
    // 0x16eee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16eeec:
    // 0x16eeec: 0x0  nop
    ctx->pc = 0x16eeecu;
    // NOP
label_16eef0:
    // 0x16eef0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16eef0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_16eef4:
    // 0x16eef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16eef8:
    // 0x16eef8: 0xc05af24  jal         func_16BC90
label_16eefc:
    if (ctx->pc == 0x16EEFCu) {
        ctx->pc = 0x16EEFCu;
            // 0x16eefc: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16EF00u;
        goto label_16ef00;
    }
    ctx->pc = 0x16EEF8u;
    SET_GPR_U32(ctx, 31, 0x16EF00u);
    ctx->pc = 0x16EEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEF8u;
            // 0x16eefc: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF00u; }
        if (ctx->pc != 0x16EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF00u; }
        if (ctx->pc != 0x16EF00u) { return; }
    }
    ctx->pc = 0x16EF00u;
label_16ef00:
    // 0x16ef00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ef00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ef04:
    // 0x16ef04: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_16ef08:
    if (ctx->pc == 0x16EF08u) {
        ctx->pc = 0x16EF0Cu;
        goto label_16ef0c;
    }
    ctx->pc = 0x16EF04u;
    {
        const bool branch_taken_0x16ef04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef04) {
            ctx->pc = 0x16EF8Cu;
            goto label_16ef8c;
        }
    }
    ctx->pc = 0x16EF0Cu;
label_16ef0c:
    // 0x16ef0c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16ef10:
    // 0x16ef10: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x16ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_16ef14:
    // 0x16ef14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16ef14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16ef18:
    // 0x16ef18: 0xc072408  jal         func_1C9020
label_16ef1c:
    if (ctx->pc == 0x16EF1Cu) {
        ctx->pc = 0x16EF1Cu;
            // 0x16ef1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16EF20u;
        goto label_16ef20;
    }
    ctx->pc = 0x16EF18u;
    SET_GPR_U32(ctx, 31, 0x16EF20u);
    ctx->pc = 0x16EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF18u;
            // 0x16ef1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF20u; }
        if (ctx->pc != 0x16EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF20u; }
        if (ctx->pc != 0x16EF20u) { return; }
    }
    ctx->pc = 0x16EF20u;
label_16ef20:
    // 0x16ef20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ef24:
    // 0x16ef24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16ef24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ef28:
    // 0x16ef28: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16ef28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16ef2c:
    // 0x16ef2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ef30:
    // 0x16ef30: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16ef30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16ef34:
    // 0x16ef34: 0x320f809  jalr        $t9
label_16ef38:
    if (ctx->pc == 0x16EF38u) {
        ctx->pc = 0x16EF38u;
            // 0x16ef38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16EF3Cu;
        goto label_16ef3c;
    }
    ctx->pc = 0x16EF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EF3Cu);
        ctx->pc = 0x16EF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF34u;
            // 0x16ef38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EF3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EF3Cu; }
            if (ctx->pc != 0x16EF3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16EF3Cu;
label_16ef3c:
    // 0x16ef3c: 0x10000014  b           . + 4 + (0x14 << 2)
label_16ef40:
    if (ctx->pc == 0x16EF40u) {
        ctx->pc = 0x16EF40u;
            // 0x16ef40: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->pc = 0x16EF44u;
        goto label_16ef44;
    }
    ctx->pc = 0x16EF3Cu;
    {
        const bool branch_taken_0x16ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF3Cu;
            // 0x16ef40: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef3c) {
            ctx->pc = 0x16EF90u;
            goto label_16ef90;
        }
    }
    ctx->pc = 0x16EF44u;
label_16ef44:
    // 0x16ef44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ef44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ef48:
    // 0x16ef48: 0xc05af24  jal         func_16BC90
label_16ef4c:
    if (ctx->pc == 0x16EF4Cu) {
        ctx->pc = 0x16EF4Cu;
            // 0x16ef4c: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16EF50u;
        goto label_16ef50;
    }
    ctx->pc = 0x16EF48u;
    SET_GPR_U32(ctx, 31, 0x16EF50u);
    ctx->pc = 0x16EF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF48u;
            // 0x16ef4c: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF50u; }
        if (ctx->pc != 0x16EF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF50u; }
        if (ctx->pc != 0x16EF50u) { return; }
    }
    ctx->pc = 0x16EF50u;
label_16ef50:
    // 0x16ef50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ef50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ef54:
    // 0x16ef54: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_16ef58:
    if (ctx->pc == 0x16EF58u) {
        ctx->pc = 0x16EF5Cu;
        goto label_16ef5c;
    }
    ctx->pc = 0x16EF54u;
    {
        const bool branch_taken_0x16ef54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef54) {
            ctx->pc = 0x16EF8Cu;
            goto label_16ef8c;
        }
    }
    ctx->pc = 0x16EF5Cu;
label_16ef5c:
    // 0x16ef5c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_16ef60:
    // 0x16ef60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16ef60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ef64:
    // 0x16ef64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16ef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16ef68:
    // 0x16ef68: 0xc072408  jal         func_1C9020
label_16ef6c:
    if (ctx->pc == 0x16EF6Cu) {
        ctx->pc = 0x16EF6Cu;
            // 0x16ef6c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x16EF70u;
        goto label_16ef70;
    }
    ctx->pc = 0x16EF68u;
    SET_GPR_U32(ctx, 31, 0x16EF70u);
    ctx->pc = 0x16EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF68u;
            // 0x16ef6c: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF70u; }
        if (ctx->pc != 0x16EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF70u; }
        if (ctx->pc != 0x16EF70u) { return; }
    }
    ctx->pc = 0x16EF70u;
label_16ef70:
    // 0x16ef70: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16ef74:
    // 0x16ef74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16ef74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16ef78:
    // 0x16ef78: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16ef78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16ef7c:
    // 0x16ef7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ef80:
    // 0x16ef80: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16ef80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16ef84:
    // 0x16ef84: 0x320f809  jalr        $t9
label_16ef88:
    if (ctx->pc == 0x16EF88u) {
        ctx->pc = 0x16EF88u;
            // 0x16ef88: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16EF8Cu;
        goto label_16ef8c;
    }
    ctx->pc = 0x16EF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EF8Cu);
        ctx->pc = 0x16EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF84u;
            // 0x16ef88: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16EF8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EF8Cu; }
            if (ctx->pc != 0x16EF8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16EF8Cu;
label_16ef8c:
    // 0x16ef8c: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16ef90:
    // 0x16ef90: 0xc0a0f58  jal         func_283D60
label_16ef94:
    if (ctx->pc == 0x16EF94u) {
        ctx->pc = 0x16EF94u;
            // 0x16ef94: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x16EF98u;
        goto label_16ef98;
    }
    ctx->pc = 0x16EF90u;
    SET_GPR_U32(ctx, 31, 0x16EF98u);
    ctx->pc = 0x16EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF90u;
            // 0x16ef94: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF98u; }
        if (ctx->pc != 0x16EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF98u; }
        if (ctx->pc != 0x16EF98u) { return; }
    }
    ctx->pc = 0x16EF98u;
label_16ef98:
    // 0x16ef98: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x16ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ef9c:
    // 0x16ef9c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x16ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_16efa0:
    // 0x16efa0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16efa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16efa4:
    // 0x16efa4: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_16efa8:
    // 0x16efa8: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x16efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16efac:
    // 0x16efac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16efacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16efb0:
    // 0x16efb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16efb4:
    // 0x16efb4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_16efb8:
    // 0x16efb8: 0x27a62920  addiu       $a2, $sp, 0x2920
    ctx->pc = 0x16efb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10528));
label_16efbc:
    // 0x16efbc: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x16efbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16efc0:
    // 0x16efc0: 0xe7a02920  swc1        $f0, 0x2920($sp)
    ctx->pc = 0x16efc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10528), bits); }
label_16efc4:
    // 0x16efc4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x16efc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16efc8:
    // 0x16efc8: 0xe7a02930  swc1        $f0, 0x2930($sp)
    ctx->pc = 0x16efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10544), bits); }
label_16efcc:
    // 0x16efcc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x16efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16efd0:
    // 0x16efd0: 0x46041040  add.s       $f1, $f2, $f4
    ctx->pc = 0x16efd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_16efd4:
    // 0x16efd4: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x16efd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_16efd8:
    // 0x16efd8: 0xafa3292c  sw          $v1, 0x292C($sp)
    ctx->pc = 0x16efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10540), GPR_U32(ctx, 3));
label_16efdc:
    // 0x16efdc: 0xafa3293c  sw          $v1, 0x293C($sp)
    ctx->pc = 0x16efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10556), GPR_U32(ctx, 3));
label_16efe0:
    // 0x16efe0: 0xe7a12928  swc1        $f1, 0x2928($sp)
    ctx->pc = 0x16efe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10536), bits); }
label_16efe4:
    // 0x16efe4: 0xe7a02938  swc1        $f0, 0x2938($sp)
    ctx->pc = 0x16efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10552), bits); }
label_16efe8:
    // 0x16efe8: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x16efe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_16efec:
    // 0x16efec: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x16efecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16eff0:
    // 0x16eff0: 0xe7a12924  swc1        $f1, 0x2924($sp)
    ctx->pc = 0x16eff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10532), bits); }
label_16eff4:
    // 0x16eff4: 0xe7a02934  swc1        $f0, 0x2934($sp)
    ctx->pc = 0x16eff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10548), bits); }
label_16eff8:
    // 0x16eff8: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_16effc:
    // 0x16effc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16f000:
    // 0x16f000: 0x320f809  jalr        $t9
label_16f004:
    if (ctx->pc == 0x16F004u) {
        ctx->pc = 0x16F004u;
            // 0x16f004: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x16F008u;
        goto label_16f008;
    }
    ctx->pc = 0x16F000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F008u);
        ctx->pc = 0x16F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F000u;
            // 0x16f004: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F008u; }
            if (ctx->pc != 0x16F008u) { return; }
        }
        }
    }
    ctx->pc = 0x16F008u;
label_16f008:
    // 0x16f008: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f00c:
    // 0x16f00c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f010:
    // 0x16f010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f014:
    // 0x16f014: 0xc05af3c  jal         func_16BCF0
label_16f018:
    if (ctx->pc == 0x16F018u) {
        ctx->pc = 0x16F018u;
            // 0x16f018: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->pc = 0x16F01Cu;
        goto label_16f01c;
    }
    ctx->pc = 0x16F014u;
    SET_GPR_U32(ctx, 31, 0x16F01Cu);
    ctx->pc = 0x16F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F014u;
            // 0x16f018: 0x24a536e8  addiu       $a1, $a1, 0x36E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F01Cu; }
        if (ctx->pc != 0x16F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F01Cu; }
        if (ctx->pc != 0x16F01Cu) { return; }
    }
    ctx->pc = 0x16F01Cu;
label_16f01c:
    // 0x16f01c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16f01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f020:
    // 0x16f020: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
label_16f024:
    if (ctx->pc == 0x16F024u) {
        ctx->pc = 0x16F028u;
        goto label_16f028;
    }
    ctx->pc = 0x16F020u;
    {
        const bool branch_taken_0x16f020 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f020) {
            ctx->pc = 0x16F128u;
            goto label_16f128;
        }
    }
    ctx->pc = 0x16F028u;
label_16f028:
    // 0x16f028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f02c:
    // 0x16f02c: 0xc04de4c  jal         func_137930
label_16f030:
    if (ctx->pc == 0x16F030u) {
        ctx->pc = 0x16F030u;
            // 0x16f030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16F034u;
        goto label_16f034;
    }
    ctx->pc = 0x16F02Cu;
    SET_GPR_U32(ctx, 31, 0x16F034u);
    ctx->pc = 0x16F030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F02Cu;
            // 0x16f030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F034u; }
        if (ctx->pc != 0x16F034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F034u; }
        if (ctx->pc != 0x16F034u) { return; }
    }
    ctx->pc = 0x16F034u;
label_16f034:
    // 0x16f034: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f038:
    // 0x16f038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f03c:
    // 0x16f03c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f040:
    // 0x16f040: 0x320f809  jalr        $t9
label_16f044:
    if (ctx->pc == 0x16F044u) {
        ctx->pc = 0x16F044u;
            // 0x16f044: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->pc = 0x16F048u;
        goto label_16f048;
    }
    ctx->pc = 0x16F040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F048u);
        ctx->pc = 0x16F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F040u;
            // 0x16f044: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F048u; }
            if (ctx->pc != 0x16F048u) { return; }
        }
        }
    }
    ctx->pc = 0x16F048u;
label_16f048:
    // 0x16f048: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16f04c:
    // 0x16f04c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x16f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_16f050:
    // 0x16f050: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x16f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_16f054:
    // 0x16f054: 0x27b42948  addiu       $s4, $sp, 0x2948
    ctx->pc = 0x16f054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 10568));
label_16f058:
    // 0x16f058: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16f058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16f05c:
    // 0x16f05c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x16f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f060:
    // 0x16f060: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16f060u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16f064:
    // 0x16f064: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16f064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16f068:
    // 0x16f068: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x16f068u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16f06c:
    // 0x16f06c: 0xc04c374  jal         func_130DD0
label_16f070:
    if (ctx->pc == 0x16F070u) {
        ctx->pc = 0x16F070u;
            // 0x16f070: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x16F074u;
        goto label_16f074;
    }
    ctx->pc = 0x16F06Cu;
    SET_GPR_U32(ctx, 31, 0x16F074u);
    ctx->pc = 0x16F070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F06Cu;
            // 0x16f070: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F074u; }
        if (ctx->pc != 0x16F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F074u; }
        if (ctx->pc != 0x16F074u) { return; }
    }
    ctx->pc = 0x16F074u;
label_16f074:
    // 0x16f074: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x16f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_16f078:
    // 0x16f078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f07c:
    // 0x16f07c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16f07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f080:
    // 0x16f080: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f084:
    // 0x16f084: 0x320f809  jalr        $t9
label_16f088:
    if (ctx->pc == 0x16F088u) {
        ctx->pc = 0x16F088u;
            // 0x16f088: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->pc = 0x16F08Cu;
        goto label_16f08c;
    }
    ctx->pc = 0x16F084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F08Cu);
        ctx->pc = 0x16F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F084u;
            // 0x16f088: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F08Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F08Cu; }
            if (ctx->pc != 0x16F08Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16F08Cu;
label_16f08c:
    // 0x16f08c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f090:
    // 0x16f090: 0xc04de0c  jal         func_137830
label_16f094:
    if (ctx->pc == 0x16F094u) {
        ctx->pc = 0x16F094u;
            // 0x16f094: 0x27a52970  addiu       $a1, $sp, 0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10608));
        ctx->pc = 0x16F098u;
        goto label_16f098;
    }
    ctx->pc = 0x16F090u;
    SET_GPR_U32(ctx, 31, 0x16F098u);
    ctx->pc = 0x16F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F090u;
            // 0x16f094: 0x27a52970  addiu       $a1, $sp, 0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F098u; }
        if (ctx->pc != 0x16F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F098u; }
        if (ctx->pc != 0x16F098u) { return; }
    }
    ctx->pc = 0x16F098u;
label_16f098:
    // 0x16f098: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x16f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f09c:
    // 0x16f09c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_16f0a0:
    // 0x16f0a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16f0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16f0a4:
    // 0x16f0a4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_16f0a8:
    // 0x16f0a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f0ac:
    // 0x16f0ac: 0x27a62970  addiu       $a2, $sp, 0x2970
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10608));
label_16f0b0:
    // 0x16f0b0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_16f0b4:
    // 0x16f0b4: 0x27a72950  addiu       $a3, $sp, 0x2950
    ctx->pc = 0x16f0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
label_16f0b8:
    // 0x16f0b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f0bc:
    // 0x16f0bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16f0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f0c0:
    // 0x16f0c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16f0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16f0c4:
    // 0x16f0c4: 0xc053870  jal         func_14E1C0
label_16f0c8:
    if (ctx->pc == 0x16F0C8u) {
        ctx->pc = 0x16F0C8u;
            // 0x16f0c8: 0xe7a02974  swc1        $f0, 0x2974($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10612), bits); }
        ctx->pc = 0x16F0CCu;
        goto label_16f0cc;
    }
    ctx->pc = 0x16F0C4u;
    SET_GPR_U32(ctx, 31, 0x16F0CCu);
    ctx->pc = 0x16F0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0C4u;
            // 0x16f0c8: 0xe7a02974  swc1        $f0, 0x2974($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10612), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1C0u;
    if (runtime->hasFunction(0x14E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F0CCu; }
        if (ctx->pc != 0x16F0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F0CCu; }
        if (ctx->pc != 0x16F0CCu) { return; }
    }
    ctx->pc = 0x16F0CCu;
label_16f0cc:
    // 0x16f0cc: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_16f0d0:
    if (ctx->pc == 0x16F0D0u) {
        ctx->pc = 0x16F0D0u;
            // 0x16f0d0: 0x27a32954  addiu       $v1, $sp, 0x2954 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10580));
        ctx->pc = 0x16F0D4u;
        goto label_16f0d4;
    }
    ctx->pc = 0x16F0CCu;
    {
        const bool branch_taken_0x16f0cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0CCu;
            // 0x16f0d0: 0x27a32954  addiu       $v1, $sp, 0x2954 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0cc) {
            ctx->pc = 0x16F0FCu;
            goto label_16f0fc;
        }
    }
    ctx->pc = 0x16F0D4u;
label_16f0d4:
    // 0x16f0d4: 0x27a42950  addiu       $a0, $sp, 0x2950
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
label_16f0d8:
    // 0x16f0d8: 0xc041c5c  jal         func_107170
label_16f0dc:
    if (ctx->pc == 0x16F0DCu) {
        ctx->pc = 0x16F0DCu;
            // 0x16f0dc: 0x27a52970  addiu       $a1, $sp, 0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10608));
        ctx->pc = 0x16F0E0u;
        goto label_16f0e0;
    }
    ctx->pc = 0x16F0D8u;
    SET_GPR_U32(ctx, 31, 0x16F0E0u);
    ctx->pc = 0x16F0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0D8u;
            // 0x16f0dc: 0x27a52970  addiu       $a1, $sp, 0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F0E0u; }
        if (ctx->pc != 0x16F0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F0E0u; }
        if (ctx->pc != 0x16F0E0u) { return; }
    }
    ctx->pc = 0x16F0E0u;
label_16f0e0:
    // 0x16f0e0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x16f0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f0e4:
    // 0x16f0e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_16f0e8:
    // 0x16f0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f0ec:
    // 0x16f0ec: 0x0  nop
    ctx->pc = 0x16f0ecu;
    // NOP
label_16f0f0:
    // 0x16f0f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16f0f4:
    // 0x16f0f4: 0xe7a02954  swc1        $f0, 0x2954($sp)
    ctx->pc = 0x16f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10580), bits); }
label_16f0f8:
    // 0x16f0f8: 0x27a32954  addiu       $v1, $sp, 0x2954
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10580));
label_16f0fc:
    // 0x16f0fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x16f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_16f100:
    // 0x16f100: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x16f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f104:
    // 0x16f104: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f108:
    // 0x16f108: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16f108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f10c:
    // 0x16f10c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16f110:
    // 0x16f110: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16f110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f114:
    // 0x16f114: 0x0  nop
    ctx->pc = 0x16f114u;
    // NOP
label_16f118:
    // 0x16f118: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16f11c:
    if (ctx->pc == 0x16F11Cu) {
        ctx->pc = 0x16F120u;
        goto label_16f120;
    }
    ctx->pc = 0x16F118u;
    {
        const bool branch_taken_0x16f118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f118) {
            ctx->pc = 0x16F128u;
            goto label_16f128;
        }
    }
    ctx->pc = 0x16F120u;
label_16f120:
    // 0x16f120: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x16f120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16f124:
    // 0x16f124: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16f124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_16f128:
    // 0x16f128: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f12c:
    // 0x16f12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f130:
    // 0x16f130: 0xc05af3c  jal         func_16BCF0
label_16f134:
    if (ctx->pc == 0x16F134u) {
        ctx->pc = 0x16F134u;
            // 0x16f134: 0x24a536f0  addiu       $a1, $a1, 0x36F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14064));
        ctx->pc = 0x16F138u;
        goto label_16f138;
    }
    ctx->pc = 0x16F130u;
    SET_GPR_U32(ctx, 31, 0x16F138u);
    ctx->pc = 0x16F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F130u;
            // 0x16f134: 0x24a536f0  addiu       $a1, $a1, 0x36F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F138u; }
        if (ctx->pc != 0x16F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F138u; }
        if (ctx->pc != 0x16F138u) { return; }
    }
    ctx->pc = 0x16F138u;
label_16f138:
    // 0x16f138: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16f138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f13c:
    // 0x16f13c: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
label_16f140:
    if (ctx->pc == 0x16F140u) {
        ctx->pc = 0x16F140u;
            // 0x16f140: 0x27a42950  addiu       $a0, $sp, 0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
        ctx->pc = 0x16F144u;
        goto label_16f144;
    }
    ctx->pc = 0x16F13Cu;
    {
        const bool branch_taken_0x16f13c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F13Cu;
            // 0x16f140: 0x27a42950  addiu       $a0, $sp, 0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f13c) {
            ctx->pc = 0x16F244u;
            goto label_16f244;
        }
    }
    ctx->pc = 0x16F144u;
label_16f144:
    // 0x16f144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f148:
    // 0x16f148: 0xc04de4c  jal         func_137930
label_16f14c:
    if (ctx->pc == 0x16F14Cu) {
        ctx->pc = 0x16F14Cu;
            // 0x16f14c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16F150u;
        goto label_16f150;
    }
    ctx->pc = 0x16F148u;
    SET_GPR_U32(ctx, 31, 0x16F150u);
    ctx->pc = 0x16F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F148u;
            // 0x16f14c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F150u; }
        if (ctx->pc != 0x16F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F150u; }
        if (ctx->pc != 0x16F150u) { return; }
    }
    ctx->pc = 0x16F150u;
label_16f150:
    // 0x16f150: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16f150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f154:
    // 0x16f154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f158:
    // 0x16f158: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f15c:
    // 0x16f15c: 0x320f809  jalr        $t9
label_16f160:
    if (ctx->pc == 0x16F160u) {
        ctx->pc = 0x16F160u;
            // 0x16f160: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->pc = 0x16F164u;
        goto label_16f164;
    }
    ctx->pc = 0x16F15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F164u);
        ctx->pc = 0x16F160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F15Cu;
            // 0x16f160: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F164u; }
            if (ctx->pc != 0x16F164u) { return; }
        }
        }
    }
    ctx->pc = 0x16F164u;
label_16f164:
    // 0x16f164: 0xc6420790  lwc1        $f2, 0x790($s2)
    ctx->pc = 0x16f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16f168:
    // 0x16f168: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_16f16c:
    // 0x16f16c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x16f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_16f170:
    // 0x16f170: 0x27b42948  addiu       $s4, $sp, 0x2948
    ctx->pc = 0x16f170u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 10568));
label_16f174:
    // 0x16f174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16f174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16f178:
    // 0x16f178: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x16f178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f17c:
    // 0x16f17c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16f17cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16f180:
    // 0x16f180: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16f180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_16f184:
    // 0x16f184: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x16f184u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16f188:
    // 0x16f188: 0xc04c374  jal         func_130DD0
label_16f18c:
    if (ctx->pc == 0x16F18Cu) {
        ctx->pc = 0x16F18Cu;
            // 0x16f18c: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x16F190u;
        goto label_16f190;
    }
    ctx->pc = 0x16F188u;
    SET_GPR_U32(ctx, 31, 0x16F190u);
    ctx->pc = 0x16F18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F188u;
            // 0x16f18c: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F190u; }
        if (ctx->pc != 0x16F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F190u; }
        if (ctx->pc != 0x16F190u) { return; }
    }
    ctx->pc = 0x16F190u;
label_16f190:
    // 0x16f190: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x16f190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_16f194:
    // 0x16f194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f198:
    // 0x16f198: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f19c:
    // 0x16f19c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f1a0:
    // 0x16f1a0: 0x320f809  jalr        $t9
label_16f1a4:
    if (ctx->pc == 0x16F1A4u) {
        ctx->pc = 0x16F1A4u;
            // 0x16f1a4: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->pc = 0x16F1A8u;
        goto label_16f1a8;
    }
    ctx->pc = 0x16F1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F1A8u);
        ctx->pc = 0x16F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1A0u;
            // 0x16f1a4: 0x27a52940  addiu       $a1, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F1A8u; }
            if (ctx->pc != 0x16F1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x16F1A8u;
label_16f1a8:
    // 0x16f1a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f1ac:
    // 0x16f1ac: 0xc04de0c  jal         func_137830
label_16f1b0:
    if (ctx->pc == 0x16F1B0u) {
        ctx->pc = 0x16F1B0u;
            // 0x16f1b0: 0x27a52980  addiu       $a1, $sp, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10624));
        ctx->pc = 0x16F1B4u;
        goto label_16f1b4;
    }
    ctx->pc = 0x16F1ACu;
    SET_GPR_U32(ctx, 31, 0x16F1B4u);
    ctx->pc = 0x16F1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1ACu;
            // 0x16f1b0: 0x27a52980  addiu       $a1, $sp, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1B4u; }
        if (ctx->pc != 0x16F1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1B4u; }
        if (ctx->pc != 0x16F1B4u) { return; }
    }
    ctx->pc = 0x16F1B4u;
label_16f1b4:
    // 0x16f1b4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x16f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f1b8:
    // 0x16f1b8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_16f1bc:
    // 0x16f1bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16f1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16f1c0:
    // 0x16f1c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f1c4:
    // 0x16f1c4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_16f1c8:
    // 0x16f1c8: 0x27a62980  addiu       $a2, $sp, 0x2980
    ctx->pc = 0x16f1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10624));
label_16f1cc:
    // 0x16f1cc: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x16f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_16f1d0:
    // 0x16f1d0: 0x27a72960  addiu       $a3, $sp, 0x2960
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10592));
label_16f1d4:
    // 0x16f1d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16f1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f1d8:
    // 0x16f1d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16f1d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f1dc:
    // 0x16f1dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16f1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16f1e0:
    // 0x16f1e0: 0xc053870  jal         func_14E1C0
label_16f1e4:
    if (ctx->pc == 0x16F1E4u) {
        ctx->pc = 0x16F1E4u;
            // 0x16f1e4: 0xe7a02984  swc1        $f0, 0x2984($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10628), bits); }
        ctx->pc = 0x16F1E8u;
        goto label_16f1e8;
    }
    ctx->pc = 0x16F1E0u;
    SET_GPR_U32(ctx, 31, 0x16F1E8u);
    ctx->pc = 0x16F1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1E0u;
            // 0x16f1e4: 0xe7a02984  swc1        $f0, 0x2984($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10628), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1C0u;
    if (runtime->hasFunction(0x14E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1E8u; }
        if (ctx->pc != 0x16F1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1E8u; }
        if (ctx->pc != 0x16F1E8u) { return; }
    }
    ctx->pc = 0x16F1E8u;
label_16f1e8:
    // 0x16f1e8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_16f1ec:
    if (ctx->pc == 0x16F1ECu) {
        ctx->pc = 0x16F1ECu;
            // 0x16f1ec: 0x27a32964  addiu       $v1, $sp, 0x2964 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10596));
        ctx->pc = 0x16F1F0u;
        goto label_16f1f0;
    }
    ctx->pc = 0x16F1E8u;
    {
        const bool branch_taken_0x16f1e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1E8u;
            // 0x16f1ec: 0x27a32964  addiu       $v1, $sp, 0x2964 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1e8) {
            ctx->pc = 0x16F218u;
            goto label_16f218;
        }
    }
    ctx->pc = 0x16F1F0u;
label_16f1f0:
    // 0x16f1f0: 0x27a42960  addiu       $a0, $sp, 0x2960
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10592));
label_16f1f4:
    // 0x16f1f4: 0xc041c5c  jal         func_107170
label_16f1f8:
    if (ctx->pc == 0x16F1F8u) {
        ctx->pc = 0x16F1F8u;
            // 0x16f1f8: 0x27a52980  addiu       $a1, $sp, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10624));
        ctx->pc = 0x16F1FCu;
        goto label_16f1fc;
    }
    ctx->pc = 0x16F1F4u;
    SET_GPR_U32(ctx, 31, 0x16F1FCu);
    ctx->pc = 0x16F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1F4u;
            // 0x16f1f8: 0x27a52980  addiu       $a1, $sp, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1FCu; }
        if (ctx->pc != 0x16F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1FCu; }
        if (ctx->pc != 0x16F1FCu) { return; }
    }
    ctx->pc = 0x16F1FCu;
label_16f1fc:
    // 0x16f1fc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x16f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f200:
    // 0x16f200: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_16f204:
    // 0x16f204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f208:
    // 0x16f208: 0x0  nop
    ctx->pc = 0x16f208u;
    // NOP
label_16f20c:
    // 0x16f20c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16f210:
    // 0x16f210: 0xe7a02964  swc1        $f0, 0x2964($sp)
    ctx->pc = 0x16f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10596), bits); }
label_16f214:
    // 0x16f214: 0x27a32964  addiu       $v1, $sp, 0x2964
    ctx->pc = 0x16f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10596));
label_16f218:
    // 0x16f218: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x16f218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_16f21c:
    // 0x16f21c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x16f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f220:
    // 0x16f220: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f224:
    // 0x16f224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16f224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f228:
    // 0x16f228: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16f22c:
    // 0x16f22c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16f22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f230:
    // 0x16f230: 0x0  nop
    ctx->pc = 0x16f230u;
    // NOP
label_16f234:
    // 0x16f234: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16f238:
    if (ctx->pc == 0x16F238u) {
        ctx->pc = 0x16F238u;
            // 0x16f238: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x16F23Cu;
        goto label_16f23c;
    }
    ctx->pc = 0x16F234u;
    {
        const bool branch_taken_0x16f234 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F234u;
            // 0x16f238: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f234) {
            ctx->pc = 0x16F240u;
            goto label_16f240;
        }
    }
    ctx->pc = 0x16F23Cu;
label_16f23c:
    // 0x16f23c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_16f240:
    // 0x16f240: 0x27a42950  addiu       $a0, $sp, 0x2950
    ctx->pc = 0x16f240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
label_16f244:
    // 0x16f244: 0x27a52960  addiu       $a1, $sp, 0x2960
    ctx->pc = 0x16f244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10592));
label_16f248:
    // 0x16f248: 0xc041c3e  jal         func_1070F8
label_16f24c:
    if (ctx->pc == 0x16F24Cu) {
        ctx->pc = 0x16F24Cu;
            // 0x16f24c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F250u;
        goto label_16f250;
    }
    ctx->pc = 0x16F248u;
    SET_GPR_U32(ctx, 31, 0x16F250u);
    ctx->pc = 0x16F24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F248u;
            // 0x16f24c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F250u; }
        if (ctx->pc != 0x16F250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F250u; }
        if (ctx->pc != 0x16F250u) { return; }
    }
    ctx->pc = 0x16F250u;
label_16f250:
    // 0x16f250: 0x27a42960  addiu       $a0, $sp, 0x2960
    ctx->pc = 0x16f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10592));
label_16f254:
    // 0x16f254: 0xc041c5c  jal         func_107170
label_16f258:
    if (ctx->pc == 0x16F258u) {
        ctx->pc = 0x16F258u;
            // 0x16f258: 0x27a52950  addiu       $a1, $sp, 0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
        ctx->pc = 0x16F25Cu;
        goto label_16f25c;
    }
    ctx->pc = 0x16F254u;
    SET_GPR_U32(ctx, 31, 0x16F25Cu);
    ctx->pc = 0x16F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F254u;
            // 0x16f258: 0x27a52950  addiu       $a1, $sp, 0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F25Cu; }
        if (ctx->pc != 0x16F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F25Cu; }
        if (ctx->pc != 0x16F25Cu) { return; }
    }
    ctx->pc = 0x16F25Cu;
label_16f25c:
    // 0x16f25c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16f260:
    // 0x16f260: 0x27a42960  addiu       $a0, $sp, 0x2960
    ctx->pc = 0x16f260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10592));
label_16f264:
    // 0x16f264: 0xafa2296c  sw          $v0, 0x296C($sp)
    ctx->pc = 0x16f264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10604), GPR_U32(ctx, 2));
label_16f268:
    // 0x16f268: 0xc04bff4  jal         func_12FFD0
label_16f26c:
    if (ctx->pc == 0x16F26Cu) {
        ctx->pc = 0x16F26Cu;
            // 0x16f26c: 0xafa02964  sw          $zero, 0x2964($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 10596), GPR_U32(ctx, 0));
        ctx->pc = 0x16F270u;
        goto label_16f270;
    }
    ctx->pc = 0x16F268u;
    SET_GPR_U32(ctx, 31, 0x16F270u);
    ctx->pc = 0x16F26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F268u;
            // 0x16f26c: 0xafa02964  sw          $zero, 0x2964($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 10596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F270u; }
        if (ctx->pc != 0x16F270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F270u; }
        if (ctx->pc != 0x16F270u) { return; }
    }
    ctx->pc = 0x16F270u;
label_16f270:
    // 0x16f270: 0xc7ac2954  lwc1        $f12, 0x2954($sp)
    ctx->pc = 0x16f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16f274:
    // 0x16f274: 0xc047c76  jal         func_11F1D8
label_16f278:
    if (ctx->pc == 0x16F278u) {
        ctx->pc = 0x16F278u;
            // 0x16f278: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16F27Cu;
        goto label_16f27c;
    }
    ctx->pc = 0x16F274u;
    SET_GPR_U32(ctx, 31, 0x16F27Cu);
    ctx->pc = 0x16F278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F274u;
            // 0x16f278: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F27Cu; }
        if (ctx->pc != 0x16F27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F27Cu; }
        if (ctx->pc != 0x16F27Cu) { return; }
    }
    ctx->pc = 0x16F27Cu;
label_16f27c:
    // 0x16f27c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f280:
    // 0x16f280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f284:
    // 0x16f284: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16f284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16f288:
    // 0x16f288: 0xc05af3c  jal         func_16BCF0
label_16f28c:
    if (ctx->pc == 0x16F28Cu) {
        ctx->pc = 0x16F28Cu;
            // 0x16f28c: 0x24a536f8  addiu       $a1, $a1, 0x36F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14072));
        ctx->pc = 0x16F290u;
        goto label_16f290;
    }
    ctx->pc = 0x16F288u;
    SET_GPR_U32(ctx, 31, 0x16F290u);
    ctx->pc = 0x16F28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F288u;
            // 0x16f28c: 0x24a536f8  addiu       $a1, $a1, 0x36F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F290u; }
        if (ctx->pc != 0x16F290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F290u; }
        if (ctx->pc != 0x16F290u) { return; }
    }
    ctx->pc = 0x16F290u;
label_16f290:
    // 0x16f290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f294:
    // 0x16f294: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_16f298:
    if (ctx->pc == 0x16F298u) {
        ctx->pc = 0x16F298u;
            // 0x16f298: 0x27a429a0  addiu       $a0, $sp, 0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10656));
        ctx->pc = 0x16F29Cu;
        goto label_16f29c;
    }
    ctx->pc = 0x16F294u;
    {
        const bool branch_taken_0x16f294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F294u;
            // 0x16f298: 0x27a429a0  addiu       $a0, $sp, 0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f294) {
            ctx->pc = 0x16F2D8u;
            goto label_16f2d8;
        }
    }
    ctx->pc = 0x16F29Cu;
label_16f29c:
    // 0x16f29c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_16f2a0:
    // 0x16f2a0: 0x27a32990  addiu       $v1, $sp, 0x2990
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10640));
label_16f2a4:
    // 0x16f2a4: 0x24424c10  addiu       $v0, $v0, 0x4C10
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
label_16f2a8:
    // 0x16f2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f2ac:
    // 0x16f2ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16f2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16f2b0:
    // 0x16f2b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f2b4:
    // 0x16f2b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16f2b8:
    // 0x16f2b8: 0xc04de4c  jal         func_137930
label_16f2bc:
    if (ctx->pc == 0x16F2BCu) {
        ctx->pc = 0x16F2BCu;
            // 0x16f2bc: 0xe7b42990  swc1        $f20, 0x2990($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10640), bits); }
        ctx->pc = 0x16F2C0u;
        goto label_16f2c0;
    }
    ctx->pc = 0x16F2B8u;
    SET_GPR_U32(ctx, 31, 0x16F2C0u);
    ctx->pc = 0x16F2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2B8u;
            // 0x16f2bc: 0xe7b42990  swc1        $f20, 0x2990($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10640), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2C0u; }
        if (ctx->pc != 0x16F2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2C0u; }
        if (ctx->pc != 0x16F2C0u) { return; }
    }
    ctx->pc = 0x16F2C0u;
label_16f2c0:
    // 0x16f2c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f2c4:
    // 0x16f2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f2c8:
    // 0x16f2c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f2cc:
    // 0x16f2cc: 0x320f809  jalr        $t9
label_16f2d0:
    if (ctx->pc == 0x16F2D0u) {
        ctx->pc = 0x16F2D0u;
            // 0x16f2d0: 0x27a52990  addiu       $a1, $sp, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10640));
        ctx->pc = 0x16F2D4u;
        goto label_16f2d4;
    }
    ctx->pc = 0x16F2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F2D4u);
        ctx->pc = 0x16F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2CCu;
            // 0x16f2d0: 0x27a52990  addiu       $a1, $sp, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F2D4u; }
            if (ctx->pc != 0x16F2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x16F2D4u;
label_16f2d4:
    // 0x16f2d4: 0x27a429a0  addiu       $a0, $sp, 0x29A0
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10656));
label_16f2d8:
    // 0x16f2d8: 0xc041c5c  jal         func_107170
label_16f2dc:
    if (ctx->pc == 0x16F2DCu) {
        ctx->pc = 0x16F2DCu;
            // 0x16f2dc: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x16F2E0u;
        goto label_16f2e0;
    }
    ctx->pc = 0x16F2D8u;
    SET_GPR_U32(ctx, 31, 0x16F2E0u);
    ctx->pc = 0x16F2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2D8u;
            // 0x16f2dc: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2E0u; }
        if (ctx->pc != 0x16F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2E0u; }
        if (ctx->pc != 0x16F2E0u) { return; }
    }
    ctx->pc = 0x16F2E0u;
label_16f2e0:
    // 0x16f2e0: 0xc7a029a4  lwc1        $f0, 0x29A4($sp)
    ctx->pc = 0x16f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f2e4:
    // 0x16f2e4: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x16f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_16f2e8:
    // 0x16f2e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16f2ec:
    // 0x16f2ec: 0xc041c5c  jal         func_107170
label_16f2f0:
    if (ctx->pc == 0x16F2F0u) {
        ctx->pc = 0x16F2F0u;
            // 0x16f2f0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x16F2F4u;
        goto label_16f2f4;
    }
    ctx->pc = 0x16F2ECu;
    SET_GPR_U32(ctx, 31, 0x16F2F4u);
    ctx->pc = 0x16F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2ECu;
            // 0x16f2f0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2F4u; }
        if (ctx->pc != 0x16F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2F4u; }
        if (ctx->pc != 0x16F2F4u) { return; }
    }
    ctx->pc = 0x16F2F4u;
label_16f2f4:
    // 0x16f2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f2f8:
    // 0x16f2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f2fc:
    // 0x16f2fc: 0xc05b1e8  jal         func_16C7A0
label_16f300:
    if (ctx->pc == 0x16F300u) {
        ctx->pc = 0x16F300u;
            // 0x16f300: 0xa242076c  sb          $v0, 0x76C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16F304u;
        goto label_16f304;
    }
    ctx->pc = 0x16F2FCu;
    SET_GPR_U32(ctx, 31, 0x16F304u);
    ctx->pc = 0x16F300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2FCu;
            // 0x16f300: 0xa242076c  sb          $v0, 0x76C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F304u; }
        if (ctx->pc != 0x16F304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F304u; }
        if (ctx->pc != 0x16F304u) { return; }
    }
    ctx->pc = 0x16F304u;
label_16f304:
    // 0x16f304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f308:
    // 0x16f308: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16f30c:
    // 0x16f30c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16f310:
    // 0x16f310: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16f310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16f314:
    // 0x16f314: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16f314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16f318:
    // 0x16f318: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16f318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f31c:
    // 0x16f31c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16f31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f320:
    // 0x16f320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f324:
    // 0x16f324: 0x3e00008  jr          $ra
label_16f328:
    if (ctx->pc == 0x16F328u) {
        ctx->pc = 0x16F328u;
            // 0x16f328: 0x27bd29b0  addiu       $sp, $sp, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10672));
        ctx->pc = 0x16F32Cu;
        goto label_fallthrough_0x16f324;
    }
    ctx->pc = 0x16F324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F324u;
            // 0x16f328: 0x27bd29b0  addiu       $sp, $sp, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16f324:
    ctx->pc = 0x16F32Cu;
}
