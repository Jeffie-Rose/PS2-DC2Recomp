#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditCameraControl__FP6CSceneP11CPadControlPA4_f
// Address: 0x1a4e80 - 0x1a57a8
void EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80");
#endif

    switch (ctx->pc) {
        case 0x1a4e80u: goto label_1a4e80;
        case 0x1a4e84u: goto label_1a4e84;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4e8cu: goto label_1a4e8c;
        case 0x1a4e90u: goto label_1a4e90;
        case 0x1a4e94u: goto label_1a4e94;
        case 0x1a4e98u: goto label_1a4e98;
        case 0x1a4e9cu: goto label_1a4e9c;
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4ea4u: goto label_1a4ea4;
        case 0x1a4ea8u: goto label_1a4ea8;
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eb4u: goto label_1a4eb4;
        case 0x1a4eb8u: goto label_1a4eb8;
        case 0x1a4ebcu: goto label_1a4ebc;
        case 0x1a4ec0u: goto label_1a4ec0;
        case 0x1a4ec4u: goto label_1a4ec4;
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        case 0x1a5004u: goto label_1a5004;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a5014u: goto label_1a5014;
        case 0x1a5018u: goto label_1a5018;
        case 0x1a501cu: goto label_1a501c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5024u: goto label_1a5024;
        case 0x1a5028u: goto label_1a5028;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5030u: goto label_1a5030;
        case 0x1a5034u: goto label_1a5034;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a503cu: goto label_1a503c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5044u: goto label_1a5044;
        case 0x1a5048u: goto label_1a5048;
        case 0x1a504cu: goto label_1a504c;
        case 0x1a5050u: goto label_1a5050;
        case 0x1a5054u: goto label_1a5054;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a505cu: goto label_1a505c;
        case 0x1a5060u: goto label_1a5060;
        case 0x1a5064u: goto label_1a5064;
        case 0x1a5068u: goto label_1a5068;
        case 0x1a506cu: goto label_1a506c;
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5074u: goto label_1a5074;
        case 0x1a5078u: goto label_1a5078;
        case 0x1a507cu: goto label_1a507c;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5170u: goto label_1a5170;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5178u: goto label_1a5178;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5180u: goto label_1a5180;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a5188u: goto label_1a5188;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a5194u: goto label_1a5194;
        case 0x1a5198u: goto label_1a5198;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a0u: goto label_1a51a0;
        case 0x1a51a4u: goto label_1a51a4;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51acu: goto label_1a51ac;
        case 0x1a51b0u: goto label_1a51b0;
        case 0x1a51b4u: goto label_1a51b4;
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51bcu: goto label_1a51bc;
        case 0x1a51c0u: goto label_1a51c0;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51c8u: goto label_1a51c8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51d0u: goto label_1a51d0;
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51d8u: goto label_1a51d8;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51e0u: goto label_1a51e0;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51ecu: goto label_1a51ec;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f4u: goto label_1a51f4;
        case 0x1a51f8u: goto label_1a51f8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5200u: goto label_1a5200;
        case 0x1a5204u: goto label_1a5204;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        case 0x1a5358u: goto label_1a5358;
        case 0x1a535cu: goto label_1a535c;
        case 0x1a5360u: goto label_1a5360;
        case 0x1a5364u: goto label_1a5364;
        case 0x1a5368u: goto label_1a5368;
        case 0x1a536cu: goto label_1a536c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5374u: goto label_1a5374;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a537cu: goto label_1a537c;
        case 0x1a5380u: goto label_1a5380;
        case 0x1a5384u: goto label_1a5384;
        case 0x1a5388u: goto label_1a5388;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5390u: goto label_1a5390;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a539cu: goto label_1a539c;
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53a4u: goto label_1a53a4;
        case 0x1a53a8u: goto label_1a53a8;
        case 0x1a53acu: goto label_1a53ac;
        case 0x1a53b0u: goto label_1a53b0;
        case 0x1a53b4u: goto label_1a53b4;
        case 0x1a53b8u: goto label_1a53b8;
        case 0x1a53bcu: goto label_1a53bc;
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c4u: goto label_1a53c4;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53ccu: goto label_1a53cc;
        case 0x1a53d0u: goto label_1a53d0;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a53d8u: goto label_1a53d8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a53e0u: goto label_1a53e0;
        case 0x1a53e4u: goto label_1a53e4;
        case 0x1a53e8u: goto label_1a53e8;
        case 0x1a53ecu: goto label_1a53ec;
        case 0x1a53f0u: goto label_1a53f0;
        case 0x1a53f4u: goto label_1a53f4;
        case 0x1a53f8u: goto label_1a53f8;
        case 0x1a53fcu: goto label_1a53fc;
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5404u: goto label_1a5404;
        case 0x1a5408u: goto label_1a5408;
        case 0x1a540cu: goto label_1a540c;
        case 0x1a5410u: goto label_1a5410;
        case 0x1a5414u: goto label_1a5414;
        case 0x1a5418u: goto label_1a5418;
        case 0x1a541cu: goto label_1a541c;
        case 0x1a5420u: goto label_1a5420;
        case 0x1a5424u: goto label_1a5424;
        case 0x1a5428u: goto label_1a5428;
        case 0x1a542cu: goto label_1a542c;
        case 0x1a5430u: goto label_1a5430;
        case 0x1a5434u: goto label_1a5434;
        case 0x1a5438u: goto label_1a5438;
        case 0x1a543cu: goto label_1a543c;
        case 0x1a5440u: goto label_1a5440;
        case 0x1a5444u: goto label_1a5444;
        case 0x1a5448u: goto label_1a5448;
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5450u: goto label_1a5450;
        case 0x1a5454u: goto label_1a5454;
        case 0x1a5458u: goto label_1a5458;
        case 0x1a545cu: goto label_1a545c;
        case 0x1a5460u: goto label_1a5460;
        case 0x1a5464u: goto label_1a5464;
        case 0x1a5468u: goto label_1a5468;
        case 0x1a546cu: goto label_1a546c;
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5474u: goto label_1a5474;
        case 0x1a5478u: goto label_1a5478;
        case 0x1a547cu: goto label_1a547c;
        case 0x1a5480u: goto label_1a5480;
        case 0x1a5484u: goto label_1a5484;
        case 0x1a5488u: goto label_1a5488;
        case 0x1a548cu: goto label_1a548c;
        case 0x1a5490u: goto label_1a5490;
        case 0x1a5494u: goto label_1a5494;
        case 0x1a5498u: goto label_1a5498;
        case 0x1a549cu: goto label_1a549c;
        case 0x1a54a0u: goto label_1a54a0;
        case 0x1a54a4u: goto label_1a54a4;
        case 0x1a54a8u: goto label_1a54a8;
        case 0x1a54acu: goto label_1a54ac;
        case 0x1a54b0u: goto label_1a54b0;
        case 0x1a54b4u: goto label_1a54b4;
        case 0x1a54b8u: goto label_1a54b8;
        case 0x1a54bcu: goto label_1a54bc;
        case 0x1a54c0u: goto label_1a54c0;
        case 0x1a54c4u: goto label_1a54c4;
        case 0x1a54c8u: goto label_1a54c8;
        case 0x1a54ccu: goto label_1a54cc;
        case 0x1a54d0u: goto label_1a54d0;
        case 0x1a54d4u: goto label_1a54d4;
        case 0x1a54d8u: goto label_1a54d8;
        case 0x1a54dcu: goto label_1a54dc;
        case 0x1a54e0u: goto label_1a54e0;
        case 0x1a54e4u: goto label_1a54e4;
        case 0x1a54e8u: goto label_1a54e8;
        case 0x1a54ecu: goto label_1a54ec;
        case 0x1a54f0u: goto label_1a54f0;
        case 0x1a54f4u: goto label_1a54f4;
        case 0x1a54f8u: goto label_1a54f8;
        case 0x1a54fcu: goto label_1a54fc;
        case 0x1a5500u: goto label_1a5500;
        case 0x1a5504u: goto label_1a5504;
        case 0x1a5508u: goto label_1a5508;
        case 0x1a550cu: goto label_1a550c;
        case 0x1a5510u: goto label_1a5510;
        case 0x1a5514u: goto label_1a5514;
        case 0x1a5518u: goto label_1a5518;
        case 0x1a551cu: goto label_1a551c;
        case 0x1a5520u: goto label_1a5520;
        case 0x1a5524u: goto label_1a5524;
        case 0x1a5528u: goto label_1a5528;
        case 0x1a552cu: goto label_1a552c;
        case 0x1a5530u: goto label_1a5530;
        case 0x1a5534u: goto label_1a5534;
        case 0x1a5538u: goto label_1a5538;
        case 0x1a553cu: goto label_1a553c;
        case 0x1a5540u: goto label_1a5540;
        case 0x1a5544u: goto label_1a5544;
        case 0x1a5548u: goto label_1a5548;
        case 0x1a554cu: goto label_1a554c;
        case 0x1a5550u: goto label_1a5550;
        case 0x1a5554u: goto label_1a5554;
        case 0x1a5558u: goto label_1a5558;
        case 0x1a555cu: goto label_1a555c;
        case 0x1a5560u: goto label_1a5560;
        case 0x1a5564u: goto label_1a5564;
        case 0x1a5568u: goto label_1a5568;
        case 0x1a556cu: goto label_1a556c;
        case 0x1a5570u: goto label_1a5570;
        case 0x1a5574u: goto label_1a5574;
        case 0x1a5578u: goto label_1a5578;
        case 0x1a557cu: goto label_1a557c;
        case 0x1a5580u: goto label_1a5580;
        case 0x1a5584u: goto label_1a5584;
        case 0x1a5588u: goto label_1a5588;
        case 0x1a558cu: goto label_1a558c;
        case 0x1a5590u: goto label_1a5590;
        case 0x1a5594u: goto label_1a5594;
        case 0x1a5598u: goto label_1a5598;
        case 0x1a559cu: goto label_1a559c;
        case 0x1a55a0u: goto label_1a55a0;
        case 0x1a55a4u: goto label_1a55a4;
        case 0x1a55a8u: goto label_1a55a8;
        case 0x1a55acu: goto label_1a55ac;
        case 0x1a55b0u: goto label_1a55b0;
        case 0x1a55b4u: goto label_1a55b4;
        case 0x1a55b8u: goto label_1a55b8;
        case 0x1a55bcu: goto label_1a55bc;
        case 0x1a55c0u: goto label_1a55c0;
        case 0x1a55c4u: goto label_1a55c4;
        case 0x1a55c8u: goto label_1a55c8;
        case 0x1a55ccu: goto label_1a55cc;
        case 0x1a55d0u: goto label_1a55d0;
        case 0x1a55d4u: goto label_1a55d4;
        case 0x1a55d8u: goto label_1a55d8;
        case 0x1a55dcu: goto label_1a55dc;
        case 0x1a55e0u: goto label_1a55e0;
        case 0x1a55e4u: goto label_1a55e4;
        case 0x1a55e8u: goto label_1a55e8;
        case 0x1a55ecu: goto label_1a55ec;
        case 0x1a55f0u: goto label_1a55f0;
        case 0x1a55f4u: goto label_1a55f4;
        case 0x1a55f8u: goto label_1a55f8;
        case 0x1a55fcu: goto label_1a55fc;
        case 0x1a5600u: goto label_1a5600;
        case 0x1a5604u: goto label_1a5604;
        case 0x1a5608u: goto label_1a5608;
        case 0x1a560cu: goto label_1a560c;
        case 0x1a5610u: goto label_1a5610;
        case 0x1a5614u: goto label_1a5614;
        case 0x1a5618u: goto label_1a5618;
        case 0x1a561cu: goto label_1a561c;
        case 0x1a5620u: goto label_1a5620;
        case 0x1a5624u: goto label_1a5624;
        case 0x1a5628u: goto label_1a5628;
        case 0x1a562cu: goto label_1a562c;
        case 0x1a5630u: goto label_1a5630;
        case 0x1a5634u: goto label_1a5634;
        case 0x1a5638u: goto label_1a5638;
        case 0x1a563cu: goto label_1a563c;
        case 0x1a5640u: goto label_1a5640;
        case 0x1a5644u: goto label_1a5644;
        case 0x1a5648u: goto label_1a5648;
        case 0x1a564cu: goto label_1a564c;
        case 0x1a5650u: goto label_1a5650;
        case 0x1a5654u: goto label_1a5654;
        case 0x1a5658u: goto label_1a5658;
        case 0x1a565cu: goto label_1a565c;
        case 0x1a5660u: goto label_1a5660;
        case 0x1a5664u: goto label_1a5664;
        case 0x1a5668u: goto label_1a5668;
        case 0x1a566cu: goto label_1a566c;
        case 0x1a5670u: goto label_1a5670;
        case 0x1a5674u: goto label_1a5674;
        case 0x1a5678u: goto label_1a5678;
        case 0x1a567cu: goto label_1a567c;
        case 0x1a5680u: goto label_1a5680;
        case 0x1a5684u: goto label_1a5684;
        case 0x1a5688u: goto label_1a5688;
        case 0x1a568cu: goto label_1a568c;
        case 0x1a5690u: goto label_1a5690;
        case 0x1a5694u: goto label_1a5694;
        case 0x1a5698u: goto label_1a5698;
        case 0x1a569cu: goto label_1a569c;
        case 0x1a56a0u: goto label_1a56a0;
        case 0x1a56a4u: goto label_1a56a4;
        case 0x1a56a8u: goto label_1a56a8;
        case 0x1a56acu: goto label_1a56ac;
        case 0x1a56b0u: goto label_1a56b0;
        case 0x1a56b4u: goto label_1a56b4;
        case 0x1a56b8u: goto label_1a56b8;
        case 0x1a56bcu: goto label_1a56bc;
        case 0x1a56c0u: goto label_1a56c0;
        case 0x1a56c4u: goto label_1a56c4;
        case 0x1a56c8u: goto label_1a56c8;
        case 0x1a56ccu: goto label_1a56cc;
        case 0x1a56d0u: goto label_1a56d0;
        case 0x1a56d4u: goto label_1a56d4;
        case 0x1a56d8u: goto label_1a56d8;
        case 0x1a56dcu: goto label_1a56dc;
        case 0x1a56e0u: goto label_1a56e0;
        case 0x1a56e4u: goto label_1a56e4;
        case 0x1a56e8u: goto label_1a56e8;
        case 0x1a56ecu: goto label_1a56ec;
        case 0x1a56f0u: goto label_1a56f0;
        case 0x1a56f4u: goto label_1a56f4;
        case 0x1a56f8u: goto label_1a56f8;
        case 0x1a56fcu: goto label_1a56fc;
        case 0x1a5700u: goto label_1a5700;
        case 0x1a5704u: goto label_1a5704;
        case 0x1a5708u: goto label_1a5708;
        case 0x1a570cu: goto label_1a570c;
        case 0x1a5710u: goto label_1a5710;
        case 0x1a5714u: goto label_1a5714;
        case 0x1a5718u: goto label_1a5718;
        case 0x1a571cu: goto label_1a571c;
        case 0x1a5720u: goto label_1a5720;
        case 0x1a5724u: goto label_1a5724;
        case 0x1a5728u: goto label_1a5728;
        case 0x1a572cu: goto label_1a572c;
        case 0x1a5730u: goto label_1a5730;
        case 0x1a5734u: goto label_1a5734;
        case 0x1a5738u: goto label_1a5738;
        case 0x1a573cu: goto label_1a573c;
        case 0x1a5740u: goto label_1a5740;
        case 0x1a5744u: goto label_1a5744;
        case 0x1a5748u: goto label_1a5748;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a5750u: goto label_1a5750;
        case 0x1a5754u: goto label_1a5754;
        case 0x1a5758u: goto label_1a5758;
        case 0x1a575cu: goto label_1a575c;
        case 0x1a5760u: goto label_1a5760;
        case 0x1a5764u: goto label_1a5764;
        case 0x1a5768u: goto label_1a5768;
        case 0x1a576cu: goto label_1a576c;
        case 0x1a5770u: goto label_1a5770;
        case 0x1a5774u: goto label_1a5774;
        case 0x1a5778u: goto label_1a5778;
        case 0x1a577cu: goto label_1a577c;
        case 0x1a5780u: goto label_1a5780;
        case 0x1a5784u: goto label_1a5784;
        case 0x1a5788u: goto label_1a5788;
        case 0x1a578cu: goto label_1a578c;
        case 0x1a5790u: goto label_1a5790;
        case 0x1a5794u: goto label_1a5794;
        case 0x1a5798u: goto label_1a5798;
        case 0x1a579cu: goto label_1a579c;
        case 0x1a57a0u: goto label_1a57a0;
        case 0x1a57a4u: goto label_1a57a4;
        default: break;
    }

    ctx->pc = 0x1a4e80u;

label_1a4e80:
    // 0x1a4e80: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_1a4e84:
    // 0x1a4e84: 0x34215eb0  ori         $at, $at, 0x5EB0
    ctx->pc = 0x1a4e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24240);
label_1a4e88:
    // 0x1a4e88: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1a4e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4e8c:
    // 0x1a4e8c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a4e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a4e90:
    // 0x1a4e90: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a4e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1a4e94:
    // 0x1a4e94: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1a4e98:
    // 0x1a4e98: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a4e98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e9c:
    // 0x1a4e9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1a4ea0:
    // 0x1a4ea0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a4ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a4ea4:
    // 0x1a4ea4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a4ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ea8:
    // 0x1a4ea8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a4eac:
    // 0x1a4eac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a4eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a4eb0:
    // 0x1a4eb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a4eb4:
    // 0x1a4eb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a4eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a4eb8:
    // 0x1a4eb8: 0x83828be8  lb          $v0, -0x7418($gp)
    ctx->pc = 0x1a4eb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937576)));
label_1a4ebc:
    // 0x1a4ebc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a4ec0:
    if (ctx->pc == 0x1A4EC0u) {
        ctx->pc = 0x1A4EC0u;
            // 0x1a4ec0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EC4u;
        goto label_1a4ec4;
    }
    ctx->pc = 0x1A4EBCu;
    {
        const bool branch_taken_0x1a4ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EBCu;
            // 0x1a4ec0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ebc) {
            ctx->pc = 0x1A4ED4u;
            goto label_1a4ed4;
        }
    }
    ctx->pc = 0x1A4EC4u;
label_1a4ec4:
    // 0x1a4ec4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1a4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1a4ec8:
    // 0x1a4ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4ecc:
    // 0x1a4ecc: 0xaf838be4  sw          $v1, -0x741C($gp)
    ctx->pc = 0x1a4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 3));
label_1a4ed0:
    // 0x1a4ed0: 0xa3828be8  sb          $v0, -0x7418($gp)
    ctx->pc = 0x1a4ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937576), (uint8_t)GPR_U32(ctx, 2));
label_1a4ed4:
    // 0x1a4ed4: 0x8e852e50  lw          $a1, 0x2E50($s4)
    ctx->pc = 0x1a4ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
label_1a4ed8:
    // 0x1a4ed8: 0xc0a0ed8  jal         func_283B60
label_1a4edc:
    if (ctx->pc == 0x1A4EDCu) {
        ctx->pc = 0x1A4EDCu;
            // 0x1a4edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EE0u;
        goto label_1a4ee0;
    }
    ctx->pc = 0x1A4ED8u;
    SET_GPR_U32(ctx, 31, 0x1A4EE0u);
    ctx->pc = 0x1A4EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ED8u;
            // 0x1a4edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EE0u; }
        if (ctx->pc != 0x1A4EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EE0u; }
        if (ctx->pc != 0x1A4EE0u) { return; }
    }
    ctx->pc = 0x1A4EE0u;
label_1a4ee0:
    // 0x1a4ee0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a4ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ee4:
    // 0x1a4ee4: 0x12400224  beqz        $s2, . + 4 + (0x224 << 2)
label_1a4ee8:
    if (ctx->pc == 0x1A4EE8u) {
        ctx->pc = 0x1A4EECu;
        goto label_1a4eec;
    }
    ctx->pc = 0x1A4EE4u;
    {
        const bool branch_taken_0x1a4ee4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ee4) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A4EECu;
label_1a4eec:
    // 0x1a4eec: 0x8e852e54  lw          $a1, 0x2E54($s4)
    ctx->pc = 0x1a4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11860)));
label_1a4ef0:
    // 0x1a4ef0: 0xc0a0e30  jal         func_2838C0
label_1a4ef4:
    if (ctx->pc == 0x1A4EF4u) {
        ctx->pc = 0x1A4EF4u;
            // 0x1a4ef4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EF8u;
        goto label_1a4ef8;
    }
    ctx->pc = 0x1A4EF0u;
    SET_GPR_U32(ctx, 31, 0x1A4EF8u);
    ctx->pc = 0x1A4EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EF0u;
            // 0x1a4ef4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EF8u; }
        if (ctx->pc != 0x1A4EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EF8u; }
        if (ctx->pc != 0x1A4EF8u) { return; }
    }
    ctx->pc = 0x1A4EF8u;
label_1a4ef8:
    // 0x1a4ef8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a4ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4efc:
    // 0x1a4efc: 0x1260021e  beqz        $s3, . + 4 + (0x21E << 2)
label_1a4f00:
    if (ctx->pc == 0x1A4F00u) {
        ctx->pc = 0x1A4F04u;
        goto label_1a4f04;
    }
    ctx->pc = 0x1A4EFCu;
    {
        const bool branch_taken_0x1a4efc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4efc) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A4F04u;
label_1a4f04:
    // 0x1a4f04: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a4f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a4f08:
    // 0x1a4f08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a4f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a4f0c:
    // 0x1a4f0c: 0x320f809  jalr        $t9
label_1a4f10:
    if (ctx->pc == 0x1A4F10u) {
        ctx->pc = 0x1A4F10u;
            // 0x1a4f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F14u;
        goto label_1a4f14;
    }
    ctx->pc = 0x1A4F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4F14u);
        ctx->pc = 0x1A4F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F0Cu;
            // 0x1a4f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F14u; }
            if (ctx->pc != 0x1A4F14u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4F14u;
label_1a4f14:
    // 0x1a4f14: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1a4f18:
    // 0x1a4f18: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a4f1c:
    if (ctx->pc == 0x1A4F1Cu) {
        ctx->pc = 0x1A4F20u;
        goto label_1a4f20;
    }
    ctx->pc = 0x1A4F18u;
    {
        const bool branch_taken_0x1a4f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4f18) {
            ctx->pc = 0x1A4F28u;
            goto label_1a4f28;
        }
    }
    ctx->pc = 0x1A4F20u;
label_1a4f20:
    // 0x1a4f20: 0x10000216  b           . + 4 + (0x216 << 2)
label_1a4f24:
    if (ctx->pc == 0x1A4F24u) {
        ctx->pc = 0x1A4F24u;
            // 0x1a4f24: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1A4F28u;
        goto label_1a4f28;
    }
    ctx->pc = 0x1A4F20u;
    {
        const bool branch_taken_0x1a4f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F20u;
            // 0x1a4f24: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f20) {
            ctx->pc = 0x1A577Cu;
            goto label_1a577c;
        }
    }
    ctx->pc = 0x1A4F28u;
label_1a4f28:
    // 0x1a4f28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a4f2c:
    // 0x1a4f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f30:
    // 0x1a4f30: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a4f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a4f34:
    // 0x1a4f34: 0x320f809  jalr        $t9
label_1a4f38:
    if (ctx->pc == 0x1A4F38u) {
        ctx->pc = 0x1A4F38u;
            // 0x1a4f38: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1A4F3Cu;
        goto label_1a4f3c;
    }
    ctx->pc = 0x1A4F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4F3Cu);
        ctx->pc = 0x1A4F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F34u;
            // 0x1a4f38: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4F3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F3Cu; }
            if (ctx->pc != 0x1A4F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A4F3Cu;
label_1a4f3c:
    // 0x1a4f3c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a4f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a4f40:
    // 0x1a4f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f44:
    // 0x1a4f44: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a4f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a4f48:
    // 0x1a4f48: 0x320f809  jalr        $t9
label_1a4f4c:
    if (ctx->pc == 0x1A4F4Cu) {
        ctx->pc = 0x1A4F4Cu;
            // 0x1a4f4c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1A4F50u;
        goto label_1a4f50;
    }
    ctx->pc = 0x1A4F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4F50u);
        ctx->pc = 0x1A4F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F48u;
            // 0x1a4f4c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4F50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F50u; }
            if (ctx->pc != 0x1A4F50u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4F50u;
label_1a4f50:
    // 0x1a4f50: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x1a4f50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_1a4f54:
    // 0x1a4f54: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a4f58:
    // 0x1a4f58: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a4f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a4f5c:
    // 0x1a4f5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1a4f60:
    // 0x1a4f60: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1a4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1a4f64:
    // 0x1a4f64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a4f68:
    if (ctx->pc == 0x1A4F68u) {
        ctx->pc = 0x1A4F68u;
            // 0x1a4f68: 0x8c308070  lw          $s0, -0x7F90($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
        ctx->pc = 0x1A4F6Cu;
        goto label_1a4f6c;
    }
    ctx->pc = 0x1A4F64u;
    {
        const bool branch_taken_0x1a4f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F64u;
            // 0x1a4f68: 0x8c308070  lw          $s0, -0x7F90($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f64) {
            ctx->pc = 0x1A4F70u;
            goto label_1a4f70;
        }
    }
    ctx->pc = 0x1A4F6Cu;
label_1a4f6c:
    // 0x1a4f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a4f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f70:
    // 0x1a4f70: 0xc050874  jal         func_1421D0
label_1a4f74:
    if (ctx->pc == 0x1A4F74u) {
        ctx->pc = 0x1A4F78u;
        goto label_1a4f78;
    }
    ctx->pc = 0x1A4F70u;
    SET_GPR_U32(ctx, 31, 0x1A4F78u);
    ctx->pc = 0x1421D0u;
    if (runtime->hasFunction(0x1421D0u)) {
        auto targetFn = runtime->lookupFunction(0x1421D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F78u; }
        if (ctx->pc != 0x1A4F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetNowFrameRate__Fv_0x1421d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F78u; }
        if (ctx->pc != 0x1A4F78u) { return; }
    }
    ctx->pc = 0x1A4F78u;
label_1a4f78:
    // 0x1a4f78: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1a4f7c:
    // 0x1a4f7c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1a4f80:
    // 0x1a4f80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a4f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4f84:
    // 0x1a4f84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a4f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f88:
    // 0x1a4f88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a4f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4f8c:
    // 0x1a4f8c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1a4f8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a4f90:
    // 0x1a4f90: 0x0  nop
    ctx->pc = 0x1a4f90u;
    // NOP
label_1a4f94:
    // 0x1a4f94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4f98:
    // 0x1a4f98: 0xc04c698  jal         func_131A60
label_1a4f9c:
    if (ctx->pc == 0x1A4F9Cu) {
        ctx->pc = 0x1A4F9Cu;
            // 0x1a4f9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A4FA0u;
        goto label_1a4fa0;
    }
    ctx->pc = 0x1A4F98u;
    SET_GPR_U32(ctx, 31, 0x1A4FA0u);
    ctx->pc = 0x1A4F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F98u;
            // 0x1a4f9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FA0u; }
        if (ctx->pc != 0x1A4FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FA0u; }
        if (ctx->pc != 0x1A4FA0u) { return; }
    }
    ctx->pc = 0x1A4FA0u;
label_1a4fa0:
    // 0x1a4fa0: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
label_1a4fa4:
    if (ctx->pc == 0x1A4FA4u) {
        ctx->pc = 0x1A4FA8u;
        goto label_1a4fa8;
    }
    ctx->pc = 0x1A4FA0u;
    {
        const bool branch_taken_0x1a4fa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fa0) {
            ctx->pc = 0x1A4FE8u;
            goto label_1a4fe8;
        }
    }
    ctx->pc = 0x1A4FA8u;
label_1a4fa8:
    // 0x1a4fa8: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a4fac:
    // 0x1a4fac: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_1a4fb0:
    // 0x1a4fb0: 0x27b50098  addiu       $s5, $sp, 0x98
    ctx->pc = 0x1a4fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1a4fb4:
    // 0x1a4fb4: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1a4fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4fb8:
    // 0x1a4fb8: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x1a4fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a4fbc:
    // 0x1a4fbc: 0xc6ae0000  lwc1        $f14, 0x0($s5)
    ctx->pc = 0x1a4fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a4fc0:
    // 0x1a4fc0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a4fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a4fc4:
    // 0x1a4fc4: 0x320f809  jalr        $t9
label_1a4fc8:
    if (ctx->pc == 0x1A4FC8u) {
        ctx->pc = 0x1A4FC8u;
            // 0x1a4fc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FCCu;
        goto label_1a4fcc;
    }
    ctx->pc = 0x1A4FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4FCCu);
        ctx->pc = 0x1A4FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FC4u;
            // 0x1a4fc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4FCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FCCu; }
            if (ctx->pc != 0x1A4FCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A4FCCu;
label_1a4fcc:
    // 0x1a4fcc: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x1a4fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a4fd0:
    // 0x1a4fd0: 0xc6ae0000  lwc1        $f14, 0x0($s5)
    ctx->pc = 0x1a4fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a4fd4:
    // 0x1a4fd4: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1a4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4fd8:
    // 0x1a4fd8: 0xc0bb234  jal         func_2EC8D0
label_1a4fdc:
    if (ctx->pc == 0x1A4FDCu) {
        ctx->pc = 0x1A4FDCu;
            // 0x1a4fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE0u;
        goto label_1a4fe0;
    }
    ctx->pc = 0x1A4FD8u;
    SET_GPR_U32(ctx, 31, 0x1A4FE0u);
    ctx->pc = 0x1A4FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FD8u;
            // 0x1a4fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8D0u;
    if (runtime->hasFunction(0x2EC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FE0u; }
        if (ctx->pc != 0x1A4FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCheckRef__14CCameraControlFfff_0x2ec8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FE0u; }
        if (ctx->pc != 0x1A4FE0u) { return; }
    }
    ctx->pc = 0x1A4FE0u;
label_1a4fe0:
    // 0x1a4fe0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a4fe4:
    if (ctx->pc == 0x1A4FE4u) {
        ctx->pc = 0x1A4FE4u;
            // 0x1a4fe4: 0x8f958bb4  lw          $s5, -0x744C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
        ctx->pc = 0x1A4FE8u;
        goto label_1a4fe8;
    }
    ctx->pc = 0x1A4FE0u;
    {
        const bool branch_taken_0x1a4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FE0u;
            // 0x1a4fe4: 0x8f958bb4  lw          $s5, -0x744C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fe0) {
            ctx->pc = 0x1A501Cu;
            goto label_1a501c;
        }
    }
    ctx->pc = 0x1A4FE8u;
label_1a4fe8:
    // 0x1a4fe8: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a4fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a4fec:
    // 0x1a4fec: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1a4fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4ff0:
    // 0x1a4ff0: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1a4ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a4ff4:
    // 0x1a4ff4: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x1a4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a4ff8:
    // 0x1a4ff8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a4ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a4ffc:
    // 0x1a4ffc: 0x320f809  jalr        $t9
label_1a5000:
    if (ctx->pc == 0x1A5000u) {
        ctx->pc = 0x1A5000u;
            // 0x1a5000: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5004u;
        goto label_1a5004;
    }
    ctx->pc = 0x1A4FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5004u);
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FFCu;
            // 0x1a5000: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5004u; }
            if (ctx->pc != 0x1A5004u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5004u;
label_1a5004:
    // 0x1a5004: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1a5004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5008:
    // 0x1a5008: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1a5008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a500c:
    // 0x1a500c: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x1a500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a5010:
    // 0x1a5010: 0xc0bb234  jal         func_2EC8D0
label_1a5014:
    if (ctx->pc == 0x1A5014u) {
        ctx->pc = 0x1A5014u;
            // 0x1a5014: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5018u;
        goto label_1a5018;
    }
    ctx->pc = 0x1A5010u;
    SET_GPR_U32(ctx, 31, 0x1A5018u);
    ctx->pc = 0x1A5014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5010u;
            // 0x1a5014: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC8D0u;
    if (runtime->hasFunction(0x2EC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5018u; }
        if (ctx->pc != 0x1A5018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCheckRef__14CCameraControlFfff_0x2ec8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5018u; }
        if (ctx->pc != 0x1A5018u) { return; }
    }
    ctx->pc = 0x1A5018u;
label_1a5018:
    // 0x1a5018: 0x8f958bb4  lw          $s5, -0x744C($gp)
    ctx->pc = 0x1a5018u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
label_1a501c:
    // 0x1a501c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a5020:
    // 0x1a5020: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1a5024:
    // 0x1a5024: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5028:
    // 0x1a5028: 0xaf808bb4  sw          $zero, -0x744C($gp)
    ctx->pc = 0x1a5028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 0));
label_1a502c:
    // 0x1a502c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a502cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5030:
    // 0x1a5030: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
label_1a5034:
    if (ctx->pc == 0x1A5034u) {
        ctx->pc = 0x1A5034u;
            // 0x1a5034: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1A5038u;
        goto label_1a5038;
    }
    ctx->pc = 0x1A5030u;
    {
        const bool branch_taken_0x1a5030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5030u;
            // 0x1a5034: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5030) {
            ctx->pc = 0x1A50B4u;
            goto label_1a50b4;
        }
    }
    ctx->pc = 0x1A5038u;
label_1a5038:
    // 0x1a5038: 0x8f828bc0  lw          $v0, -0x7440($gp)
    ctx->pc = 0x1a5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
label_1a503c:
    // 0x1a503c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1a5040:
    if (ctx->pc == 0x1A5040u) {
        ctx->pc = 0x1A5044u;
        goto label_1a5044;
    }
    ctx->pc = 0x1A503Cu;
    {
        const bool branch_taken_0x1a503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a503c) {
            ctx->pc = 0x1A50B4u;
            goto label_1a50b4;
        }
    }
    ctx->pc = 0x1A5044u;
label_1a5044:
    // 0x1a5044: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a5044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5048:
    // 0x1a5048: 0xc0b201c  jal         func_2C8070
label_1a504c:
    if (ctx->pc == 0x1A504Cu) {
        ctx->pc = 0x1A504Cu;
            // 0x1a504c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A5050u;
        goto label_1a5050;
    }
    ctx->pc = 0x1A5048u;
    SET_GPR_U32(ctx, 31, 0x1A5050u);
    ctx->pc = 0x1A504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5048u;
            // 0x1a504c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8070u;
    if (runtime->hasFunction(0x2C8070u)) {
        auto targetFn = runtime->lookupFunction(0x2C8070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5050u; }
        if (ctx->pc != 0x1A5050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFixCameraPos__6CSceneFPfPf_0x2c8070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5050u; }
        if (ctx->pc != 0x1A5050u) { return; }
    }
    ctx->pc = 0x1A5050u;
label_1a5050:
    // 0x1a5050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5054:
    // 0x1a5054: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x1a5054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
label_1a5058:
    // 0x1a5058: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_1a505c:
    if (ctx->pc == 0x1A505Cu) {
        ctx->pc = 0x1A5060u;
        goto label_1a5060;
    }
    ctx->pc = 0x1A5058u;
    {
        const bool branch_taken_0x1a5058 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a5058) {
            ctx->pc = 0x1A5074u;
            goto label_1a5074;
        }
    }
    ctx->pc = 0x1A5060u;
label_1a5060:
    // 0x1a5060: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1a5060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a5064:
    // 0x1a5064: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a5064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1a5068:
    // 0x1a5068: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a5068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a506c:
    // 0x1a506c: 0x2442b2d0  addiu       $v0, $v0, -0x4D30
    ctx->pc = 0x1a506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947536));
label_1a5070:
    // 0x1a5070: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a5070u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1a5074:
    // 0x1a5074: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x1a5074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
label_1a5078:
    // 0x1a5078: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_1a507c:
    if (ctx->pc == 0x1A507Cu) {
        ctx->pc = 0x1A5080u;
        goto label_1a5080;
    }
    ctx->pc = 0x1A5078u;
    {
        const bool branch_taken_0x1a5078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a5078) {
            ctx->pc = 0x1A5094u;
            goto label_1a5094;
        }
    }
    ctx->pc = 0x1A5080u;
label_1a5080:
    // 0x1a5080: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1a5080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1a5084:
    // 0x1a5084: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1a5084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a5088:
    // 0x1a5088: 0x2463b2d0  addiu       $v1, $v1, -0x4D30
    ctx->pc = 0x1a5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947536));
label_1a508c:
    // 0x1a508c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a508cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5090:
    // 0x1a5090: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a5090u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1a5094:
    // 0x1a5094: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x1a5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
label_1a5098:
    // 0x1a5098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a509c:
    // 0x1a509c: 0xaf828bb8  sw          $v0, -0x7448($gp)
    ctx->pc = 0x1a509cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U32(ctx, 2));
label_1a50a0:
    // 0x1a50a0: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
label_1a50a4:
    // 0x1a50a4: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1a50a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1a50a8:
    // 0x1a50a8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1a50ac:
    if (ctx->pc == 0x1A50ACu) {
        ctx->pc = 0x1A50B0u;
        goto label_1a50b0;
    }
    ctx->pc = 0x1A50A8u;
    {
        const bool branch_taken_0x1a50a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50a8) {
            ctx->pc = 0x1A50B4u;
            goto label_1a50b4;
        }
    }
    ctx->pc = 0x1A50B0u;
label_1a50b0:
    // 0x1a50b0: 0xaf808bb8  sw          $zero, -0x7448($gp)
    ctx->pc = 0x1a50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U32(ctx, 0));
label_1a50b4:
    // 0x1a50b4: 0xc064220  jal         func_190880
label_1a50b8:
    if (ctx->pc == 0x1A50B8u) {
        ctx->pc = 0x1A50BCu;
        goto label_1a50bc;
    }
    ctx->pc = 0x1A50B4u;
    SET_GPR_U32(ctx, 31, 0x1A50BCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A50BCu; }
        if (ctx->pc != 0x1A50BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A50BCu; }
        if (ctx->pc != 0x1A50BCu) { return; }
    }
    ctx->pc = 0x1A50BCu;
label_1a50bc:
    // 0x1a50bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a50bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a50c0:
    // 0x1a50c0: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1a50c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1a50c4:
    // 0x1a50c4: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1a50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1a50c8:
    // 0x1a50c8: 0x80420037  lb          $v0, 0x37($v0)
    ctx->pc = 0x1a50c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 55)));
label_1a50cc:
    // 0x1a50cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a50ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a50d0:
    // 0x1a50d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a50d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a50d4:
    // 0x1a50d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a50d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a50d8:
    // 0x1a50d8: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x1a50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
label_1a50dc:
    // 0x1a50dc: 0x160000f9  bnez        $s0, . + 4 + (0xF9 << 2)
label_1a50e0:
    if (ctx->pc == 0x1A50E0u) {
        ctx->pc = 0x1A50E0u;
            // 0x1a50e0: 0xaf918bb4  sw          $s1, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 17));
        ctx->pc = 0x1A50E4u;
        goto label_1a50e4;
    }
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A50E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A50DCu;
            // 0x1a50e0: 0xaf918bb4  sw          $s1, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A54C4u;
            goto label_1a54c4;
        }
    }
    ctx->pc = 0x1A50E4u;
label_1a50e4:
    // 0x1a50e4: 0x8f828bc0  lw          $v0, -0x7440($gp)
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
label_1a50e8:
    // 0x1a50e8: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
label_1a50ec:
    if (ctx->pc == 0x1A50ECu) {
        ctx->pc = 0x1A50F0u;
        goto label_1a50f0;
    }
    ctx->pc = 0x1A50E8u;
    {
        const bool branch_taken_0x1a50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50e8) {
            ctx->pc = 0x1A54C4u;
            goto label_1a54c4;
        }
    }
    ctx->pc = 0x1A50F0u;
label_1a50f0:
    // 0x1a50f0: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x1a50f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
label_1a50f4:
    // 0x1a50f4: 0xc0a0f24  jal         func_283C90
label_1a50f8:
    if (ctx->pc == 0x1A50F8u) {
        ctx->pc = 0x1A50F8u;
            // 0x1a50f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A50FCu;
        goto label_1a50fc;
    }
    ctx->pc = 0x1A50F4u;
    SET_GPR_U32(ctx, 31, 0x1A50FCu);
    ctx->pc = 0x1A50F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A50F4u;
            // 0x1a50f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A50FCu; }
        if (ctx->pc != 0x1A50FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A50FCu; }
        if (ctx->pc != 0x1A50FCu) { return; }
    }
    ctx->pc = 0x1A50FCu;
label_1a50fc:
    // 0x1a50fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5100:
    // 0x1a5100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5104:
    // 0x1a5104: 0xc04a38a  jal         func_128E28
label_1a5108:
    if (ctx->pc == 0x1A5108u) {
        ctx->pc = 0x1A5108u;
            // 0x1a5108: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
        ctx->pc = 0x1A510Cu;
        goto label_1a510c;
    }
    ctx->pc = 0x1A5104u;
    SET_GPR_U32(ctx, 31, 0x1A510Cu);
    ctx->pc = 0x1A5108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5104u;
            // 0x1a5108: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A510Cu; }
        if (ctx->pc != 0x1A510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A510Cu; }
        if (ctx->pc != 0x1A510Cu) { return; }
    }
    ctx->pc = 0x1A510Cu;
label_1a510c:
    // 0x1a510c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a5110:
    if (ctx->pc == 0x1A5110u) {
        ctx->pc = 0x1A5110u;
            // 0x1a5110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5114u;
        goto label_1a5114;
    }
    ctx->pc = 0x1A510Cu;
    {
        const bool branch_taken_0x1a510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A510Cu;
            // 0x1a5110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a510c) {
            ctx->pc = 0x1A513Cu;
            goto label_1a513c;
        }
    }
    ctx->pc = 0x1A5114u;
label_1a5114:
    // 0x1a5114: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x1a5114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
label_1a5118:
    // 0x1a5118: 0xc0a0f24  jal         func_283C90
label_1a511c:
    if (ctx->pc == 0x1A511Cu) {
        ctx->pc = 0x1A511Cu;
            // 0x1a511c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5120u;
        goto label_1a5120;
    }
    ctx->pc = 0x1A5118u;
    SET_GPR_U32(ctx, 31, 0x1A5120u);
    ctx->pc = 0x1A511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5118u;
            // 0x1a511c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5120u; }
        if (ctx->pc != 0x1A5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5120u; }
        if (ctx->pc != 0x1A5120u) { return; }
    }
    ctx->pc = 0x1A5120u;
label_1a5120:
    // 0x1a5120: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a5120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a5124:
    // 0x1a5124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5128:
    // 0x1a5128: 0xc04a38a  jal         func_128E28
label_1a512c:
    if (ctx->pc == 0x1A512Cu) {
        ctx->pc = 0x1A512Cu;
            // 0x1a512c: 0x24a55b48  addiu       $a1, $a1, 0x5B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23368));
        ctx->pc = 0x1A5130u;
        goto label_1a5130;
    }
    ctx->pc = 0x1A5128u;
    SET_GPR_U32(ctx, 31, 0x1A5130u);
    ctx->pc = 0x1A512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5128u;
            // 0x1a512c: 0x24a55b48  addiu       $a1, $a1, 0x5B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5130u; }
        if (ctx->pc != 0x1A5130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5130u; }
        if (ctx->pc != 0x1A5130u) { return; }
    }
    ctx->pc = 0x1A5130u;
label_1a5130:
    // 0x1a5130: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1a5134:
    if (ctx->pc == 0x1A5134u) {
        ctx->pc = 0x1A5138u;
        goto label_1a5138;
    }
    ctx->pc = 0x1A5130u;
    {
        const bool branch_taken_0x1a5130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5130) {
            ctx->pc = 0x1A519Cu;
            goto label_1a519c;
        }
    }
    ctx->pc = 0x1A5138u;
label_1a5138:
    // 0x1a5138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a513c:
    // 0x1a513c: 0xc0bb030  jal         func_2EC0C0
label_1a5140:
    if (ctx->pc == 0x1A5140u) {
        ctx->pc = 0x1A5144u;
        goto label_1a5144;
    }
    ctx->pc = 0x1A513Cu;
    SET_GPR_U32(ctx, 31, 0x1A5144u);
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5144u; }
        if (ctx->pc != 0x1A5144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5144u; }
        if (ctx->pc != 0x1A5144u) { return; }
    }
    ctx->pc = 0x1A5144u;
label_1a5144:
    // 0x1a5144: 0xc04c668  jal         func_1319A0
label_1a5148:
    if (ctx->pc == 0x1A5148u) {
        ctx->pc = 0x1A5148u;
            // 0x1a5148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A514Cu;
        goto label_1a514c;
    }
    ctx->pc = 0x1A5144u;
    SET_GPR_U32(ctx, 31, 0x1A514Cu);
    ctx->pc = 0x1A5148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5144u;
            // 0x1a5148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A514Cu; }
        if (ctx->pc != 0x1A514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A514Cu; }
        if (ctx->pc != 0x1A514Cu) { return; }
    }
    ctx->pc = 0x1A514Cu;
label_1a514c:
    // 0x1a514c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a5150:
    // 0x1a5150: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a5150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1a5154:
    // 0x1a5154: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5158:
    // 0x1a5158: 0xc04c674  jal         func_1319D0
label_1a515c:
    if (ctx->pc == 0x1A515Cu) {
        ctx->pc = 0x1A515Cu;
            // 0x1a515c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5160u;
        goto label_1a5160;
    }
    ctx->pc = 0x1A5158u;
    SET_GPR_U32(ctx, 31, 0x1A5160u);
    ctx->pc = 0x1A515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5158u;
            // 0x1a515c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319D0u;
    if (runtime->hasFunction(0x1319D0u)) {
        auto targetFn = runtime->lookupFunction(0x1319D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5160u; }
        if (ctx->pc != 0x1A5160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngleSoon__15mgCCameraFollowFf_0x1319d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5160u; }
        if (ctx->pc != 0x1A5160u) { return; }
    }
    ctx->pc = 0x1A5160u;
label_1a5160:
    // 0x1a5160: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_1a5164:
    // 0x1a5164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5168:
    // 0x1a5168: 0xc0bb20c  jal         func_2EC830
label_1a516c:
    if (ctx->pc == 0x1A516Cu) {
        ctx->pc = 0x1A516Cu;
            // 0x1a516c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5170u;
        goto label_1a5170;
    }
    ctx->pc = 0x1A5168u;
    SET_GPR_U32(ctx, 31, 0x1A5170u);
    ctx->pc = 0x1A516Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5168u;
            // 0x1a516c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5170u; }
        if (ctx->pc != 0x1A5170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5170u; }
        if (ctx->pc != 0x1A5170u) { return; }
    }
    ctx->pc = 0x1A5170u;
label_1a5170:
    // 0x1a5170: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a5170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1a5174:
    // 0x1a5174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5178:
    // 0x1a5178: 0xc04c680  jal         func_131A00
label_1a517c:
    if (ctx->pc == 0x1A517Cu) {
        ctx->pc = 0x1A517Cu;
            // 0x1a517c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5180u;
        goto label_1a5180;
    }
    ctx->pc = 0x1A5178u;
    SET_GPR_U32(ctx, 31, 0x1A5180u);
    ctx->pc = 0x1A517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5178u;
            // 0x1a517c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5180u; }
        if (ctx->pc != 0x1A5180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5180u; }
        if (ctx->pc != 0x1A5180u) { return; }
    }
    ctx->pc = 0x1A5180u;
label_1a5180:
    // 0x1a5180: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a5180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a5184:
    // 0x1a5184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5188:
    // 0x1a5188: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a5188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a518c:
    // 0x1a518c: 0x320f809  jalr        $t9
label_1a5190:
    if (ctx->pc == 0x1A5190u) {
        ctx->pc = 0x1A5190u;
            // 0x1a5190: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A5194u;
        goto label_1a5194;
    }
    ctx->pc = 0x1A518Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5194u);
        ctx->pc = 0x1A5190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A518Cu;
            // 0x1a5190: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5194u; }
            if (ctx->pc != 0x1A5194u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5194u;
label_1a5194:
    // 0x1a5194: 0x10000178  b           . + 4 + (0x178 << 2)
label_1a5198:
    if (ctx->pc == 0x1A5198u) {
        ctx->pc = 0x1A519Cu;
        goto label_1a519c;
    }
    ctx->pc = 0x1A5194u;
    {
        const bool branch_taken_0x1a5194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5194) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A519Cu;
label_1a519c:
    // 0x1a519c: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x1a519cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
label_1a51a0:
    // 0x1a51a0: 0xc0a0f24  jal         func_283C90
label_1a51a4:
    if (ctx->pc == 0x1A51A4u) {
        ctx->pc = 0x1A51A4u;
            // 0x1a51a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A51A8u;
        goto label_1a51a8;
    }
    ctx->pc = 0x1A51A0u;
    SET_GPR_U32(ctx, 31, 0x1A51A8u);
    ctx->pc = 0x1A51A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51A0u;
            // 0x1a51a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51A8u; }
        if (ctx->pc != 0x1A51A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51A8u; }
        if (ctx->pc != 0x1A51A8u) { return; }
    }
    ctx->pc = 0x1A51A8u;
label_1a51a8:
    // 0x1a51a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a51ac:
    // 0x1a51ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a51acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a51b0:
    // 0x1a51b0: 0xc04a38a  jal         func_128E28
label_1a51b4:
    if (ctx->pc == 0x1A51B4u) {
        ctx->pc = 0x1A51B4u;
            // 0x1a51b4: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
        ctx->pc = 0x1A51B8u;
        goto label_1a51b8;
    }
    ctx->pc = 0x1A51B0u;
    SET_GPR_U32(ctx, 31, 0x1A51B8u);
    ctx->pc = 0x1A51B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51B0u;
            // 0x1a51b4: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51B8u; }
        if (ctx->pc != 0x1A51B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51B8u; }
        if (ctx->pc != 0x1A51B8u) { return; }
    }
    ctx->pc = 0x1A51B8u;
label_1a51b8:
    // 0x1a51b8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1a51bc:
    if (ctx->pc == 0x1A51BCu) {
        ctx->pc = 0x1A51C0u;
        goto label_1a51c0;
    }
    ctx->pc = 0x1A51B8u;
    {
        const bool branch_taken_0x1a51b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a51b8) {
            ctx->pc = 0x1A5220u;
            goto label_1a5220;
        }
    }
    ctx->pc = 0x1A51C0u;
label_1a51c0:
    // 0x1a51c0: 0xc0bb030  jal         func_2EC0C0
label_1a51c4:
    if (ctx->pc == 0x1A51C4u) {
        ctx->pc = 0x1A51C4u;
            // 0x1a51c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A51C8u;
        goto label_1a51c8;
    }
    ctx->pc = 0x1A51C0u;
    SET_GPR_U32(ctx, 31, 0x1A51C8u);
    ctx->pc = 0x1A51C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51C0u;
            // 0x1a51c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51C8u; }
        if (ctx->pc != 0x1A51C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51C8u; }
        if (ctx->pc != 0x1A51C8u) { return; }
    }
    ctx->pc = 0x1A51C8u;
label_1a51c8:
    // 0x1a51c8: 0xc04c668  jal         func_1319A0
label_1a51cc:
    if (ctx->pc == 0x1A51CCu) {
        ctx->pc = 0x1A51CCu;
            // 0x1a51cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A51D0u;
        goto label_1a51d0;
    }
    ctx->pc = 0x1A51C8u;
    SET_GPR_U32(ctx, 31, 0x1A51D0u);
    ctx->pc = 0x1A51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51C8u;
            // 0x1a51cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51D0u; }
        if (ctx->pc != 0x1A51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51D0u; }
        if (ctx->pc != 0x1A51D0u) { return; }
    }
    ctx->pc = 0x1A51D0u;
label_1a51d0:
    // 0x1a51d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a51d4:
    // 0x1a51d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a51d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1a51d8:
    // 0x1a51d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a51d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a51dc:
    // 0x1a51dc: 0xc04c674  jal         func_1319D0
label_1a51e0:
    if (ctx->pc == 0x1A51E0u) {
        ctx->pc = 0x1A51E0u;
            // 0x1a51e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A51E4u;
        goto label_1a51e4;
    }
    ctx->pc = 0x1A51DCu;
    SET_GPR_U32(ctx, 31, 0x1A51E4u);
    ctx->pc = 0x1A51E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51DCu;
            // 0x1a51e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319D0u;
    if (runtime->hasFunction(0x1319D0u)) {
        auto targetFn = runtime->lookupFunction(0x1319D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51E4u; }
        if (ctx->pc != 0x1A51E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngleSoon__15mgCCameraFollowFf_0x1319d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51E4u; }
        if (ctx->pc != 0x1A51E4u) { return; }
    }
    ctx->pc = 0x1A51E4u;
label_1a51e4:
    // 0x1a51e4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1a51e8:
    // 0x1a51e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a51e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a51ec:
    // 0x1a51ec: 0xc0bb20c  jal         func_2EC830
label_1a51f0:
    if (ctx->pc == 0x1A51F0u) {
        ctx->pc = 0x1A51F0u;
            // 0x1a51f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A51F4u;
        goto label_1a51f4;
    }
    ctx->pc = 0x1A51ECu;
    SET_GPR_U32(ctx, 31, 0x1A51F4u);
    ctx->pc = 0x1A51F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51ECu;
            // 0x1a51f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51F4u; }
        if (ctx->pc != 0x1A51F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51F4u; }
        if (ctx->pc != 0x1A51F4u) { return; }
    }
    ctx->pc = 0x1A51F4u;
label_1a51f4:
    // 0x1a51f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1a51f8:
    // 0x1a51f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a51f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a51fc:
    // 0x1a51fc: 0xc04c680  jal         func_131A00
label_1a5200:
    if (ctx->pc == 0x1A5200u) {
        ctx->pc = 0x1A5200u;
            // 0x1a5200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5204u;
        goto label_1a5204;
    }
    ctx->pc = 0x1A51FCu;
    SET_GPR_U32(ctx, 31, 0x1A5204u);
    ctx->pc = 0x1A5200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51FCu;
            // 0x1a5200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5204u; }
        if (ctx->pc != 0x1A5204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5204u; }
        if (ctx->pc != 0x1A5204u) { return; }
    }
    ctx->pc = 0x1A5204u;
label_1a5204:
    // 0x1a5204: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a5204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a5208:
    // 0x1a5208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a520c:
    // 0x1a520c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a520cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a5210:
    // 0x1a5210: 0x320f809  jalr        $t9
label_1a5214:
    if (ctx->pc == 0x1A5214u) {
        ctx->pc = 0x1A5214u;
            // 0x1a5214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A5218u;
        goto label_1a5218;
    }
    ctx->pc = 0x1A5210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5218u);
        ctx->pc = 0x1A5214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5210u;
            // 0x1a5214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5218u; }
            if (ctx->pc != 0x1A5218u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5218u;
label_1a5218:
    // 0x1a5218: 0x10000157  b           . + 4 + (0x157 << 2)
label_1a521c:
    if (ctx->pc == 0x1A521Cu) {
        ctx->pc = 0x1A5220u;
        goto label_1a5220;
    }
    ctx->pc = 0x1A5218u;
    {
        const bool branch_taken_0x1a5218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5218) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A5220u;
label_1a5220:
    // 0x1a5220: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
label_1a5224:
    if (ctx->pc == 0x1A5224u) {
        ctx->pc = 0x1A5224u;
            // 0x1a5224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5228u;
        goto label_1a5228;
    }
    ctx->pc = 0x1A5220u;
    {
        const bool branch_taken_0x1a5220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5220u;
            // 0x1a5224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5220) {
            ctx->pc = 0x1A53A4u;
            goto label_1a53a4;
        }
    }
    ctx->pc = 0x1A5228u;
label_1a5228:
    // 0x1a5228: 0xc04c66c  jal         func_1319B0
label_1a522c:
    if (ctx->pc == 0x1A522Cu) {
        ctx->pc = 0x1A522Cu;
            // 0x1a522c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5230u;
        goto label_1a5230;
    }
    ctx->pc = 0x1A5228u;
    SET_GPR_U32(ctx, 31, 0x1A5230u);
    ctx->pc = 0x1A522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5228u;
            // 0x1a522c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5230u; }
        if (ctx->pc != 0x1A5230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5230u; }
        if (ctx->pc != 0x1A5230u) { return; }
    }
    ctx->pc = 0x1A5230u;
label_1a5230:
    // 0x1a5230: 0xc0bb030  jal         func_2EC0C0
label_1a5234:
    if (ctx->pc == 0x1A5234u) {
        ctx->pc = 0x1A5234u;
            // 0x1a5234: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5238u;
        goto label_1a5238;
    }
    ctx->pc = 0x1A5230u;
    SET_GPR_U32(ctx, 31, 0x1A5238u);
    ctx->pc = 0x1A5234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5230u;
            // 0x1a5234: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5238u; }
        if (ctx->pc != 0x1A5238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5238u; }
        if (ctx->pc != 0x1A5238u) { return; }
    }
    ctx->pc = 0x1A5238u;
label_1a5238:
    // 0x1a5238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a523c:
    // 0x1a523c: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
label_1a5240:
    if (ctx->pc == 0x1A5240u) {
        ctx->pc = 0x1A5240u;
            // 0x1a5240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5244u;
        goto label_1a5244;
    }
    ctx->pc = 0x1A523Cu;
    {
        const bool branch_taken_0x1a523c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A523Cu;
            // 0x1a5240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a523c) {
            ctx->pc = 0x1A5294u;
            goto label_1a5294;
        }
    }
    ctx->pc = 0x1A5244u;
label_1a5244:
    // 0x1a5244: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1a5244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_1a5248:
    // 0x1a5248: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a524c:
    // 0x1a524c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a524cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5250:
    // 0x1a5250: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a5250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a5254:
    // 0x1a5254: 0xc04c564  jal         func_131590
label_1a5258:
    if (ctx->pc == 0x1A5258u) {
        ctx->pc = 0x1A5258u;
            // 0x1a5258: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A525Cu;
        goto label_1a525c;
    }
    ctx->pc = 0x1A5254u;
    SET_GPR_U32(ctx, 31, 0x1A525Cu);
    ctx->pc = 0x1A5258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5254u;
            // 0x1a5258: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A525Cu; }
        if (ctx->pc != 0x1A525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A525Cu; }
        if (ctx->pc != 0x1A525Cu) { return; }
    }
    ctx->pc = 0x1A525Cu;
label_1a525c:
    // 0x1a525c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5260:
    // 0x1a5260: 0xc04c50c  jal         func_131430
label_1a5264:
    if (ctx->pc == 0x1A5264u) {
        ctx->pc = 0x1A5264u;
            // 0x1a5264: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A5268u;
        goto label_1a5268;
    }
    ctx->pc = 0x1A5260u;
    SET_GPR_U32(ctx, 31, 0x1A5268u);
    ctx->pc = 0x1A5264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5260u;
            // 0x1a5264: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5268u; }
        if (ctx->pc != 0x1A5268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5268u; }
        if (ctx->pc != 0x1A5268u) { return; }
    }
    ctx->pc = 0x1A5268u;
label_1a5268:
    // 0x1a5268: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a5268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a526c:
    // 0x1a526c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1a5270:
    // 0x1a5270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5274:
    // 0x1a5274: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5278:
    // 0x1a5278: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1a5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a527c:
    // 0x1a527c: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x1a527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a5280:
    // 0x1a5280: 0xc04c51c  jal         func_131470
label_1a5284:
    if (ctx->pc == 0x1A5284u) {
        ctx->pc = 0x1A5284u;
            // 0x1a5284: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1A5288u;
        goto label_1a5288;
    }
    ctx->pc = 0x1A5280u;
    SET_GPR_U32(ctx, 31, 0x1A5288u);
    ctx->pc = 0x1A5284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5280u;
            // 0x1a5284: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5288u; }
        if (ctx->pc != 0x1A5288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5288u; }
        if (ctx->pc != 0x1A5288u) { return; }
    }
    ctx->pc = 0x1A5288u;
label_1a5288:
    // 0x1a5288: 0x1000013b  b           . + 4 + (0x13B << 2)
label_1a528c:
    if (ctx->pc == 0x1A528Cu) {
        ctx->pc = 0x1A5290u;
        goto label_1a5290;
    }
    ctx->pc = 0x1A5288u;
    {
        const bool branch_taken_0x1a5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5288) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A5290u;
label_1a5290:
    // 0x1a5290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5294:
    // 0x1a5294: 0xc04c574  jal         func_1315D0
label_1a5298:
    if (ctx->pc == 0x1A5298u) {
        ctx->pc = 0x1A5298u;
            // 0x1a5298: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1A529Cu;
        goto label_1a529c;
    }
    ctx->pc = 0x1A5294u;
    SET_GPR_U32(ctx, 31, 0x1A529Cu);
    ctx->pc = 0x1A5298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5294u;
            // 0x1a5298: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A529Cu; }
        if (ctx->pc != 0x1A529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A529Cu; }
        if (ctx->pc != 0x1A529Cu) { return; }
    }
    ctx->pc = 0x1A529Cu;
label_1a529c:
    // 0x1a529c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1a529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1a52a0:
    // 0x1a52a0: 0xc04c018  jal         func_130060
label_1a52a4:
    if (ctx->pc == 0x1A52A4u) {
        ctx->pc = 0x1A52A4u;
            // 0x1a52a4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A52A8u;
        goto label_1a52a8;
    }
    ctx->pc = 0x1A52A0u;
    SET_GPR_U32(ctx, 31, 0x1A52A8u);
    ctx->pc = 0x1A52A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52A0u;
            // 0x1a52a4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52A8u; }
        if (ctx->pc != 0x1A52A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52A8u; }
        if (ctx->pc != 0x1A52A8u) { return; }
    }
    ctx->pc = 0x1A52A8u;
label_1a52a8:
    // 0x1a52a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1a52ac:
    // 0x1a52ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a52acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a52b0:
    // 0x1a52b0: 0x0  nop
    ctx->pc = 0x1a52b0u;
    // NOP
label_1a52b4:
    // 0x1a52b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a52b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a52b8:
    // 0x1a52b8: 0x0  nop
    ctx->pc = 0x1a52b8u;
    // NOP
label_1a52bc:
    // 0x1a52bc: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_1a52c0:
    if (ctx->pc == 0x1A52C0u) {
        ctx->pc = 0x1A52C0u;
            // 0x1a52c0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1A52C4u;
        goto label_1a52c4;
    }
    ctx->pc = 0x1A52BCu;
    {
        const bool branch_taken_0x1a52bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A52C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52BCu;
            // 0x1a52c0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52bc) {
            ctx->pc = 0x1A5358u;
            goto label_1a5358;
        }
    }
    ctx->pc = 0x1A52C4u;
label_1a52c4:
    // 0x1a52c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a52c8:
    // 0x1a52c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a52cc:
    // 0x1a52cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a52ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a52d0:
    // 0x1a52d0: 0xc04c564  jal         func_131590
label_1a52d4:
    if (ctx->pc == 0x1A52D4u) {
        ctx->pc = 0x1A52D4u;
            // 0x1a52d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A52D8u;
        goto label_1a52d8;
    }
    ctx->pc = 0x1A52D0u;
    SET_GPR_U32(ctx, 31, 0x1A52D8u);
    ctx->pc = 0x1A52D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52D0u;
            // 0x1a52d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52D8u; }
        if (ctx->pc != 0x1A52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52D8u; }
        if (ctx->pc != 0x1A52D8u) { return; }
    }
    ctx->pc = 0x1A52D8u;
label_1a52d8:
    // 0x1a52d8: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_1a52dc:
    if (ctx->pc == 0x1A52DCu) {
        ctx->pc = 0x1A52DCu;
            // 0x1a52dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A52E0u;
        goto label_1a52e0;
    }
    ctx->pc = 0x1A52D8u;
    {
        const bool branch_taken_0x1a52d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52D8u;
            // 0x1a52dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52d8) {
            ctx->pc = 0x1A5310u;
            goto label_1a5310;
        }
    }
    ctx->pc = 0x1A52E0u;
label_1a52e0:
    // 0x1a52e0: 0x8f828bb4  lw          $v0, -0x744C($gp)
    ctx->pc = 0x1a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
label_1a52e4:
    // 0x1a52e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a52e8:
    if (ctx->pc == 0x1A52E8u) {
        ctx->pc = 0x1A52ECu;
        goto label_1a52ec;
    }
    ctx->pc = 0x1A52E4u;
    {
        const bool branch_taken_0x1a52e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52e4) {
            ctx->pc = 0x1A530Cu;
            goto label_1a530c;
        }
    }
    ctx->pc = 0x1A52ECu;
label_1a52ec:
    // 0x1a52ec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1a52f0:
    // 0x1a52f0: 0x26842c70  addiu       $a0, $s4, 0x2C70
    ctx->pc = 0x1a52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11376));
label_1a52f4:
    // 0x1a52f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a52f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a52f8:
    // 0x1a52f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a52f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a52fc:
    // 0x1a52fc: 0xc05f628  jal         func_17D8A0
label_1a5300:
    if (ctx->pc == 0x1A5300u) {
        ctx->pc = 0x1A5300u;
            // 0x1a5300: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1A5304u;
        goto label_1a5304;
    }
    ctx->pc = 0x1A52FCu;
    SET_GPR_U32(ctx, 31, 0x1A5304u);
    ctx->pc = 0x1A5300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52FCu;
            // 0x1a5300: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8A0u;
    if (runtime->hasFunction(0x17D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5304u; }
        if (ctx->pc != 0x1A5304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFade__10CFadeInOutFif_0x17d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5304u; }
        if (ctx->pc != 0x1A5304u) { return; }
    }
    ctx->pc = 0x1A5304u;
label_1a5304:
    // 0x1a5304: 0xc05f69c  jal         func_17DA70
label_1a5308:
    if (ctx->pc == 0x1A5308u) {
        ctx->pc = 0x1A5308u;
            // 0x1a5308: 0x26842c70  addiu       $a0, $s4, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11376));
        ctx->pc = 0x1A530Cu;
        goto label_1a530c;
    }
    ctx->pc = 0x1A5304u;
    SET_GPR_U32(ctx, 31, 0x1A530Cu);
    ctx->pc = 0x1A5308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5304u;
            // 0x1a5308: 0x26842c70  addiu       $a0, $s4, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA70u;
    if (runtime->hasFunction(0x17DA70u)) {
        auto targetFn = runtime->lookupFunction(0x17DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A530Cu; }
        if (ctx->pc != 0x1A530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureScreen__10CFadeInOutFv_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A530Cu; }
        if (ctx->pc != 0x1A530Cu) { return; }
    }
    ctx->pc = 0x1A530Cu;
label_1a530c:
    // 0x1a530c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5310:
    // 0x1a5310: 0xc04c50c  jal         func_131430
label_1a5314:
    if (ctx->pc == 0x1A5314u) {
        ctx->pc = 0x1A5314u;
            // 0x1a5314: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A5318u;
        goto label_1a5318;
    }
    ctx->pc = 0x1A5310u;
    SET_GPR_U32(ctx, 31, 0x1A5318u);
    ctx->pc = 0x1A5314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5310u;
            // 0x1a5314: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5318u; }
        if (ctx->pc != 0x1A5318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5318u; }
        if (ctx->pc != 0x1A5318u) { return; }
    }
    ctx->pc = 0x1A5318u;
label_1a5318:
    // 0x1a5318: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a531c:
    // 0x1a531c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1a5320:
    // 0x1a5320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5324:
    // 0x1a5324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5328:
    // 0x1a5328: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1a5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a532c:
    // 0x1a532c: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x1a532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a5330:
    // 0x1a5330: 0xc04c51c  jal         func_131470
label_1a5334:
    if (ctx->pc == 0x1A5334u) {
        ctx->pc = 0x1A5334u;
            // 0x1a5334: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1A5338u;
        goto label_1a5338;
    }
    ctx->pc = 0x1A5330u;
    SET_GPR_U32(ctx, 31, 0x1A5338u);
    ctx->pc = 0x1A5334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5330u;
            // 0x1a5334: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5338u; }
        if (ctx->pc != 0x1A5338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5338u; }
        if (ctx->pc != 0x1A5338u) { return; }
    }
    ctx->pc = 0x1A5338u;
label_1a5338:
    // 0x1a5338: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1a5338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a533c:
    // 0x1a533c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5340:
    // 0x1a5340: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a5344:
    // 0x1a5344: 0x320f809  jalr        $t9
label_1a5348:
    if (ctx->pc == 0x1A5348u) {
        ctx->pc = 0x1A5348u;
            // 0x1a5348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A534Cu;
        goto label_1a534c;
    }
    ctx->pc = 0x1A5344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A534Cu);
        ctx->pc = 0x1A5348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5344u;
            // 0x1a5348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A534Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A534Cu; }
            if (ctx->pc != 0x1A534Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A534Cu;
label_1a534c:
    // 0x1a534c: 0x1000010a  b           . + 4 + (0x10A << 2)
label_1a5350:
    if (ctx->pc == 0x1A5350u) {
        ctx->pc = 0x1A5354u;
        goto label_1a5354;
    }
    ctx->pc = 0x1A534Cu;
    {
        const bool branch_taken_0x1a534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a534c) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A5354u;
label_1a5354:
    // 0x1a5354: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a5354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1a5358:
    // 0x1a5358: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1a535c:
    // 0x1a535c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a535cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5360:
    // 0x1a5360: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a5360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a5364:
    // 0x1a5364: 0xc04c564  jal         func_131590
label_1a5368:
    if (ctx->pc == 0x1A5368u) {
        ctx->pc = 0x1A5368u;
            // 0x1a5368: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A536Cu;
        goto label_1a536c;
    }
    ctx->pc = 0x1A5364u;
    SET_GPR_U32(ctx, 31, 0x1A536Cu);
    ctx->pc = 0x1A5368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5364u;
            // 0x1a5368: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A536Cu; }
        if (ctx->pc != 0x1A536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A536Cu; }
        if (ctx->pc != 0x1A536Cu) { return; }
    }
    ctx->pc = 0x1A536Cu;
label_1a536c:
    // 0x1a536c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5370:
    // 0x1a5370: 0xc04c50c  jal         func_131430
label_1a5374:
    if (ctx->pc == 0x1A5374u) {
        ctx->pc = 0x1A5374u;
            // 0x1a5374: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A5378u;
        goto label_1a5378;
    }
    ctx->pc = 0x1A5370u;
    SET_GPR_U32(ctx, 31, 0x1A5378u);
    ctx->pc = 0x1A5374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5370u;
            // 0x1a5374: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5378u; }
        if (ctx->pc != 0x1A5378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5378u; }
        if (ctx->pc != 0x1A5378u) { return; }
    }
    ctx->pc = 0x1A5378u;
label_1a5378:
    // 0x1a5378: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a5378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a537c:
    // 0x1a537c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1a5380:
    // 0x1a5380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5384:
    // 0x1a5384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5388:
    // 0x1a5388: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1a5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a538c:
    // 0x1a538c: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x1a538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1a5390:
    // 0x1a5390: 0xc04c51c  jal         func_131470
label_1a5394:
    if (ctx->pc == 0x1A5394u) {
        ctx->pc = 0x1A5394u;
            // 0x1a5394: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1A5398u;
        goto label_1a5398;
    }
    ctx->pc = 0x1A5390u;
    SET_GPR_U32(ctx, 31, 0x1A5398u);
    ctx->pc = 0x1A5394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5390u;
            // 0x1a5394: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5398u; }
        if (ctx->pc != 0x1A5398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5398u; }
        if (ctx->pc != 0x1A5398u) { return; }
    }
    ctx->pc = 0x1A5398u;
label_1a5398:
    // 0x1a5398: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1a539c:
    if (ctx->pc == 0x1A539Cu) {
        ctx->pc = 0x1A53A0u;
        goto label_1a53a0;
    }
    ctx->pc = 0x1A5398u;
    {
        const bool branch_taken_0x1a5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5398) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A53A0u;
label_1a53a0:
    // 0x1a53a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a53a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a53a4:
    // 0x1a53a4: 0xc0bb00c  jal         func_2EC030
label_1a53a8:
    if (ctx->pc == 0x1A53A8u) {
        ctx->pc = 0x1A53ACu;
        goto label_1a53ac;
    }
    ctx->pc = 0x1A53A4u;
    SET_GPR_U32(ctx, 31, 0x1A53ACu);
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53ACu; }
        if (ctx->pc != 0x1A53ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53ACu; }
        if (ctx->pc != 0x1A53ACu) { return; }
    }
    ctx->pc = 0x1A53ACu;
label_1a53ac:
    // 0x1a53ac: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1a53acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1a53b0:
    // 0x1a53b0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a53b4:
    // 0x1a53b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a53b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a53b8:
    // 0x1a53b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a53b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a53bc:
    // 0x1a53bc: 0xc04c564  jal         func_131590
label_1a53c0:
    if (ctx->pc == 0x1A53C0u) {
        ctx->pc = 0x1A53C0u;
            // 0x1a53c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A53C4u;
        goto label_1a53c4;
    }
    ctx->pc = 0x1A53BCu;
    SET_GPR_U32(ctx, 31, 0x1A53C4u);
    ctx->pc = 0x1A53C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53BCu;
            // 0x1a53c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53C4u; }
        if (ctx->pc != 0x1A53C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53C4u; }
        if (ctx->pc != 0x1A53C4u) { return; }
    }
    ctx->pc = 0x1A53C4u;
label_1a53c4:
    // 0x1a53c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a53c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a53c8:
    // 0x1a53c8: 0xc04c574  jal         func_1315D0
label_1a53cc:
    if (ctx->pc == 0x1A53CCu) {
        ctx->pc = 0x1A53CCu;
            // 0x1a53cc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1A53D0u;
        goto label_1a53d0;
    }
    ctx->pc = 0x1A53C8u;
    SET_GPR_U32(ctx, 31, 0x1A53D0u);
    ctx->pc = 0x1A53CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53C8u;
            // 0x1a53cc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53D0u; }
        if (ctx->pc != 0x1A53D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53D0u; }
        if (ctx->pc != 0x1A53D0u) { return; }
    }
    ctx->pc = 0x1A53D0u;
label_1a53d0:
    // 0x1a53d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a53d4:
    // 0x1a53d4: 0xc04c578  jal         func_1315E0
label_1a53d8:
    if (ctx->pc == 0x1A53D8u) {
        ctx->pc = 0x1A53D8u;
            // 0x1a53d8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1A53DCu;
        goto label_1a53dc;
    }
    ctx->pc = 0x1A53D4u;
    SET_GPR_U32(ctx, 31, 0x1A53DCu);
    ctx->pc = 0x1A53D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53D4u;
            // 0x1a53d8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53DCu; }
        if (ctx->pc != 0x1A53DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53DCu; }
        if (ctx->pc != 0x1A53DCu) { return; }
    }
    ctx->pc = 0x1A53DCu;
label_1a53dc:
    // 0x1a53dc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1a53dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1a53e0:
    // 0x1a53e0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1a53e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1a53e4:
    // 0x1a53e4: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1a53e8:
    // 0x1a53e8: 0xc04bd2c  jal         func_12F4B0
label_1a53ec:
    if (ctx->pc == 0x1A53ECu) {
        ctx->pc = 0x1A53ECu;
            // 0x1a53ec: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1A53F0u;
        goto label_1a53f0;
    }
    ctx->pc = 0x1A53E8u;
    SET_GPR_U32(ctx, 31, 0x1A53F0u);
    ctx->pc = 0x1A53ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53E8u;
            // 0x1a53ec: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53F0u; }
        if (ctx->pc != 0x1A53F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53F0u; }
        if (ctx->pc != 0x1A53F0u) { return; }
    }
    ctx->pc = 0x1A53F0u;
label_1a53f0:
    // 0x1a53f0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1a53f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a53f4:
    // 0x1a53f4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1a53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1a53f8:
    // 0x1a53f8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1a53f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a53fc:
    // 0x1a53fc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1a53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1a5400:
    // 0x1a5400: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a5400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a5404:
    // 0x1a5404: 0x27a800f4  addiu       $t0, $sp, 0xF4
    ctx->pc = 0x1a5404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_1a5408:
    // 0x1a5408: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1a5408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a540c:
    // 0x1a540c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5410:
    // 0x1a5410: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a5414:
    // 0x1a5414: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1a5414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1a5418:
    // 0x1a5418: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1a541c:
    // 0x1a541c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1a541cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1a5420:
    // 0x1a5420: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a5420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a5424:
    // 0x1a5424: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a5424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a5428:
    // 0x1a5428: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1a5428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1a542c:
    // 0x1a542c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1a542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1a5430:
    // 0x1a5430: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1a5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5434:
    // 0x1a5434: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a5434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a5438:
    // 0x1a5438: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1a5438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1a543c:
    // 0x1a543c: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x1a543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5440:
    // 0x1a5440: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1a5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5444:
    // 0x1a5444: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1a5444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5448:
    // 0x1a5448: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1a5448u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1a544c:
    // 0x1a544c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a544cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a5450:
    // 0x1a5450: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a5450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a5454:
    // 0x1a5454: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x1a5454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1a5458:
    // 0x1a5458: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1a5458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1a545c:
    // 0x1a545c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1a545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1a5460:
    // 0x1a5460: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1a5460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5464:
    // 0x1a5464: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1a5464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1a5468:
    // 0x1a5468: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1a5468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1a546c:
    // 0x1a546c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1a546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5470:
    // 0x1a5470: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1a5470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_1a5474:
    // 0x1a5474: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x1a5474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_1a5478:
    // 0x1a5478: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a5478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1a547c:
    // 0x1a547c: 0xc0b1f08  jal         func_2C7C20
label_1a5480:
    if (ctx->pc == 0x1A5480u) {
        ctx->pc = 0x1A5480u;
            // 0x1a5480: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x1A5484u;
        goto label_1a5484;
    }
    ctx->pc = 0x1A547Cu;
    SET_GPR_U32(ctx, 31, 0x1A5484u);
    ctx->pc = 0x1A5480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A547Cu;
            // 0x1a5480: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7C20u;
    if (runtime->hasFunction(0x2C7C20u)) {
        auto targetFn = runtime->lookupFunction(0x2C7C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5484u; }
        if (ctx->pc != 0x1A5484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5484u; }
        if (ctx->pc != 0x1A5484u) { return; }
    }
    ctx->pc = 0x1A5484u;
label_1a5484:
    // 0x1a5484: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a5484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a5488:
    // 0x1a5488: 0x3401a130  ori         $at, $zero, 0xA130
    ctx->pc = 0x1a5488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41264);
label_1a548c:
    // 0x1a548c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a548cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5490:
    // 0x1a5490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a5490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5494:
    // 0x1a5494: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a5494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a5498:
    // 0x1a5498: 0x320f809  jalr        $t9
label_1a549c:
    if (ctx->pc == 0x1A549Cu) {
        ctx->pc = 0x1A549Cu;
            // 0x1a549c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1A54A0u;
        goto label_1a54a0;
    }
    ctx->pc = 0x1A5498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A54A0u);
        ctx->pc = 0x1A549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5498u;
            // 0x1a549c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A54A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A54A0u; }
            if (ctx->pc != 0x1A54A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A54A0u;
label_1a54a0:
    // 0x1a54a0: 0x3401a130  ori         $at, $zero, 0xA130
    ctx->pc = 0x1a54a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41264);
label_1a54a4:
    // 0x1a54a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a54a8:
    // 0x1a54a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a54a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a54ac:
    // 0x1a54ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a54acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a54b0:
    // 0x1a54b0: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1a54b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a54b4:
    // 0x1a54b4: 0xc0bb07c  jal         func_2EC1F0
label_1a54b8:
    if (ctx->pc == 0x1A54B8u) {
        ctx->pc = 0x1A54B8u;
            // 0x1a54b8: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1A54BCu;
        goto label_1a54bc;
    }
    ctx->pc = 0x1A54B4u;
    SET_GPR_U32(ctx, 31, 0x1A54BCu);
    ctx->pc = 0x1A54B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54B4u;
            // 0x1a54b8: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1F0u;
    if (runtime->hasFunction(0x2EC1F0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54BCu; }
        if (ctx->pc != 0x1A54BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__14CCameraControlFP11CPadControlPfP6CCPolyi_0x2ec1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54BCu; }
        if (ctx->pc != 0x1A54BCu) { return; }
    }
    ctx->pc = 0x1A54BCu;
label_1a54bc:
    // 0x1a54bc: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1a54c0:
    if (ctx->pc == 0x1A54C0u) {
        ctx->pc = 0x1A54C4u;
        goto label_1a54c4;
    }
    ctx->pc = 0x1A54BCu;
    {
        const bool branch_taken_0x1a54bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a54bc) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A54C4u;
label_1a54c4:
    // 0x1a54c4: 0xc78d8be4  lwc1        $f13, -0x741C($gp)
    ctx->pc = 0x1a54c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a54c8:
    // 0x1a54c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a54cc:
    // 0x1a54cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a54ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a54d0:
    // 0x1a54d0: 0xc04c698  jal         func_131A60
label_1a54d4:
    if (ctx->pc == 0x1A54D4u) {
        ctx->pc = 0x1A54D4u;
            // 0x1a54d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A54D8u;
        goto label_1a54d8;
    }
    ctx->pc = 0x1A54D0u;
    SET_GPR_U32(ctx, 31, 0x1A54D8u);
    ctx->pc = 0x1A54D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54D0u;
            // 0x1a54d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54D8u; }
        if (ctx->pc != 0x1A54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54D8u; }
        if (ctx->pc != 0x1A54D8u) { return; }
    }
    ctx->pc = 0x1A54D8u;
label_1a54d8:
    // 0x1a54d8: 0xc0bb030  jal         func_2EC0C0
label_1a54dc:
    if (ctx->pc == 0x1A54DCu) {
        ctx->pc = 0x1A54DCu;
            // 0x1a54dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A54E0u;
        goto label_1a54e0;
    }
    ctx->pc = 0x1A54D8u;
    SET_GPR_U32(ctx, 31, 0x1A54E0u);
    ctx->pc = 0x1A54DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54D8u;
            // 0x1a54dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54E0u; }
        if (ctx->pc != 0x1A54E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54E0u; }
        if (ctx->pc != 0x1A54E0u) { return; }
    }
    ctx->pc = 0x1A54E0u;
label_1a54e0:
    // 0x1a54e0: 0xc04c668  jal         func_1319A0
label_1a54e4:
    if (ctx->pc == 0x1A54E4u) {
        ctx->pc = 0x1A54E4u;
            // 0x1a54e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A54E8u;
        goto label_1a54e8;
    }
    ctx->pc = 0x1A54E0u;
    SET_GPR_U32(ctx, 31, 0x1A54E8u);
    ctx->pc = 0x1A54E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54E0u;
            // 0x1a54e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54E8u; }
        if (ctx->pc != 0x1A54E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54E8u; }
        if (ctx->pc != 0x1A54E8u) { return; }
    }
    ctx->pc = 0x1A54E8u;
label_1a54e8:
    // 0x1a54e8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a54ec:
    // 0x1a54ec: 0xc052ca0  jal         func_14B280
label_1a54f0:
    if (ctx->pc == 0x1A54F0u) {
        ctx->pc = 0x1A54F0u;
            // 0x1a54f0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A54F4u;
        goto label_1a54f4;
    }
    ctx->pc = 0x1A54ECu;
    SET_GPR_U32(ctx, 31, 0x1A54F4u);
    ctx->pc = 0x1A54F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54ECu;
            // 0x1a54f0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54F4u; }
        if (ctx->pc != 0x1A54F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A54F4u; }
        if (ctx->pc != 0x1A54F4u) { return; }
    }
    ctx->pc = 0x1A54F4u;
label_1a54f4:
    // 0x1a54f4: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1a54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_1a54f8:
    // 0x1a54f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a54f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a54fc:
    // 0x1a54fc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1a54fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1a5500:
    // 0x1a5500: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1a5500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_1a5504:
    // 0x1a5504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5508:
    // 0x1a5508: 0x0  nop
    ctx->pc = 0x1a5508u;
    // NOP
label_1a550c:
    // 0x1a550c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a550cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a5510:
    // 0x1a5510: 0xc04c67c  jal         func_1319F0
label_1a5514:
    if (ctx->pc == 0x1A5514u) {
        ctx->pc = 0x1A5514u;
            // 0x1a5514: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1A5518u;
        goto label_1a5518;
    }
    ctx->pc = 0x1A5510u;
    SET_GPR_U32(ctx, 31, 0x1A5518u);
    ctx->pc = 0x1A5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5510u;
            // 0x1a5514: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5518u; }
        if (ctx->pc != 0x1A5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5518u; }
        if (ctx->pc != 0x1A5518u) { return; }
    }
    ctx->pc = 0x1A5518u;
label_1a5518:
    // 0x1a5518: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1a5518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1a551c:
    // 0x1a551c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a5520:
    // 0x1a5520: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a5520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5524:
    // 0x1a5524: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a5524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a5528:
    // 0x1a5528: 0xc04c564  jal         func_131590
label_1a552c:
    if (ctx->pc == 0x1A552Cu) {
        ctx->pc = 0x1A552Cu;
            // 0x1a552c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5530u;
        goto label_1a5530;
    }
    ctx->pc = 0x1A5528u;
    SET_GPR_U32(ctx, 31, 0x1A5530u);
    ctx->pc = 0x1A552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5528u;
            // 0x1a552c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5530u; }
        if (ctx->pc != 0x1A5530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5530u; }
        if (ctx->pc != 0x1A5530u) { return; }
    }
    ctx->pc = 0x1A5530u;
label_1a5530:
    // 0x1a5530: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a5534:
    // 0x1a5534: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1a5538:
    // 0x1a5538: 0xc052cf0  jal         func_14B3C0
label_1a553c:
    if (ctx->pc == 0x1A553Cu) {
        ctx->pc = 0x1A553Cu;
            // 0x1a553c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A5540u;
        goto label_1a5540;
    }
    ctx->pc = 0x1A5538u;
    SET_GPR_U32(ctx, 31, 0x1A5540u);
    ctx->pc = 0x1A553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5538u;
            // 0x1a553c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5540u; }
        if (ctx->pc != 0x1A5540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5540u; }
        if (ctx->pc != 0x1A5540u) { return; }
    }
    ctx->pc = 0x1A5540u;
label_1a5540:
    // 0x1a5540: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a5544:
    if (ctx->pc == 0x1A5544u) {
        ctx->pc = 0x1A5548u;
        goto label_1a5548;
    }
    ctx->pc = 0x1A5540u;
    {
        const bool branch_taken_0x1a5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5540) {
            ctx->pc = 0x1A5578u;
            goto label_1a5578;
        }
    }
    ctx->pc = 0x1A5548u;
label_1a5548:
    // 0x1a5548: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a554c:
    // 0x1a554c: 0xc052cb0  jal         func_14B2C0
label_1a5550:
    if (ctx->pc == 0x1A5550u) {
        ctx->pc = 0x1A5550u;
            // 0x1a5550: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A5554u;
        goto label_1a5554;
    }
    ctx->pc = 0x1A554Cu;
    SET_GPR_U32(ctx, 31, 0x1A5554u);
    ctx->pc = 0x1A5550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A554Cu;
            // 0x1a5550: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5554u; }
        if (ctx->pc != 0x1A5554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5554u; }
        if (ctx->pc != 0x1A5554u) { return; }
    }
    ctx->pc = 0x1A5554u;
label_1a5554:
    // 0x1a5554: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a5554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a5558:
    // 0x1a5558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a555c:
    // 0x1a555c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5560:
    // 0x1a5560: 0x0  nop
    ctx->pc = 0x1a5560u;
    // NOP
label_1a5564:
    // 0x1a5564: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a5568:
    // 0x1a5568: 0xc04c688  jal         func_131A20
label_1a556c:
    if (ctx->pc == 0x1A556Cu) {
        ctx->pc = 0x1A556Cu;
            // 0x1a556c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1A5570u;
        goto label_1a5570;
    }
    ctx->pc = 0x1A5568u;
    SET_GPR_U32(ctx, 31, 0x1A5570u);
    ctx->pc = 0x1A556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5568u;
            // 0x1a556c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A20u;
    if (runtime->hasFunction(0x131A20u)) {
        auto targetFn = runtime->lookupFunction(0x131A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5570u; }
        if (ctx->pc != 0x1A5570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDistance__15mgCCameraFollowFf_0x131a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5570u; }
        if (ctx->pc != 0x1A5570u) { return; }
    }
    ctx->pc = 0x1A5570u;
label_1a5570:
    // 0x1a5570: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a5574:
    if (ctx->pc == 0x1A5574u) {
        ctx->pc = 0x1A5578u;
        goto label_1a5578;
    }
    ctx->pc = 0x1A5570u;
    {
        const bool branch_taken_0x1a5570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5570) {
            ctx->pc = 0x1A55A0u;
            goto label_1a55a0;
        }
    }
    ctx->pc = 0x1A5578u;
label_1a5578:
    // 0x1a5578: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a557c:
    // 0x1a557c: 0xc052cb0  jal         func_14B2C0
label_1a5580:
    if (ctx->pc == 0x1A5580u) {
        ctx->pc = 0x1A5580u;
            // 0x1a5580: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A5584u;
        goto label_1a5584;
    }
    ctx->pc = 0x1A557Cu;
    SET_GPR_U32(ctx, 31, 0x1A5584u);
    ctx->pc = 0x1A5580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A557Cu;
            // 0x1a5580: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5584u; }
        if (ctx->pc != 0x1A5584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5584u; }
        if (ctx->pc != 0x1A5584u) { return; }
    }
    ctx->pc = 0x1A5584u;
label_1a5584:
    // 0x1a5584: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a5584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a5588:
    // 0x1a5588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a558c:
    // 0x1a558c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a558cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5590:
    // 0x1a5590: 0x0  nop
    ctx->pc = 0x1a5590u;
    // NOP
label_1a5594:
    // 0x1a5594: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a5598:
    // 0x1a5598: 0xc04c694  jal         func_131A50
label_1a559c:
    if (ctx->pc == 0x1A559Cu) {
        ctx->pc = 0x1A559Cu;
            // 0x1a559c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1A55A0u;
        goto label_1a55a0;
    }
    ctx->pc = 0x1A5598u;
    SET_GPR_U32(ctx, 31, 0x1A55A0u);
    ctx->pc = 0x1A559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5598u;
            // 0x1a559c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A50u;
    if (runtime->hasFunction(0x131A50u)) {
        auto targetFn = runtime->lookupFunction(0x131A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55A0u; }
        if (ctx->pc != 0x1A55A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHeight__15mgCCameraFollowFf_0x131a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55A0u; }
        if (ctx->pc != 0x1A55A0u) { return; }
    }
    ctx->pc = 0x1A55A0u;
label_1a55a0:
    // 0x1a55a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a55a4:
    // 0x1a55a4: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1a55a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1a55a8:
    // 0x1a55a8: 0xc052cf0  jal         func_14B3C0
label_1a55ac:
    if (ctx->pc == 0x1A55ACu) {
        ctx->pc = 0x1A55ACu;
            // 0x1a55ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A55B0u;
        goto label_1a55b0;
    }
    ctx->pc = 0x1A55A8u;
    SET_GPR_U32(ctx, 31, 0x1A55B0u);
    ctx->pc = 0x1A55ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55A8u;
            // 0x1a55ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55B0u; }
        if (ctx->pc != 0x1A55B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55B0u; }
        if (ctx->pc != 0x1A55B0u) { return; }
    }
    ctx->pc = 0x1A55B0u;
label_1a55b0:
    // 0x1a55b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a55b4:
    if (ctx->pc == 0x1A55B4u) {
        ctx->pc = 0x1A55B8u;
        goto label_1a55b8;
    }
    ctx->pc = 0x1A55B0u;
    {
        const bool branch_taken_0x1a55b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55b0) {
            ctx->pc = 0x1A55D0u;
            goto label_1a55d0;
        }
    }
    ctx->pc = 0x1A55B8u;
label_1a55b8:
    // 0x1a55b8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a55bc:
    // 0x1a55bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a55bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a55c0:
    // 0x1a55c0: 0xc7818be4  lwc1        $f1, -0x741C($gp)
    ctx->pc = 0x1a55c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a55c4:
    // 0x1a55c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a55c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a55c8:
    // 0x1a55c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a55c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a55cc:
    // 0x1a55cc: 0xe7808be4  swc1        $f0, -0x741C($gp)
    ctx->pc = 0x1a55ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), bits); }
label_1a55d0:
    // 0x1a55d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a55d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a55d4:
    // 0x1a55d4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1a55d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1a55d8:
    // 0x1a55d8: 0xc052cf0  jal         func_14B3C0
label_1a55dc:
    if (ctx->pc == 0x1A55DCu) {
        ctx->pc = 0x1A55DCu;
            // 0x1a55dc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A55E0u;
        goto label_1a55e0;
    }
    ctx->pc = 0x1A55D8u;
    SET_GPR_U32(ctx, 31, 0x1A55E0u);
    ctx->pc = 0x1A55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55D8u;
            // 0x1a55dc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55E0u; }
        if (ctx->pc != 0x1A55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55E0u; }
        if (ctx->pc != 0x1A55E0u) { return; }
    }
    ctx->pc = 0x1A55E0u;
label_1a55e0:
    // 0x1a55e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a55e4:
    if (ctx->pc == 0x1A55E4u) {
        ctx->pc = 0x1A55E8u;
        goto label_1a55e8;
    }
    ctx->pc = 0x1A55E0u;
    {
        const bool branch_taken_0x1a55e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55e0) {
            ctx->pc = 0x1A5600u;
            goto label_1a5600;
        }
    }
    ctx->pc = 0x1A55E8u;
label_1a55e8:
    // 0x1a55e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a55ec:
    // 0x1a55ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a55ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a55f0:
    // 0x1a55f0: 0xc7818be4  lwc1        $f1, -0x741C($gp)
    ctx->pc = 0x1a55f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a55f4:
    // 0x1a55f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a55f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a55f8:
    // 0x1a55f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a55f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a55fc:
    // 0x1a55fc: 0xe7808be4  swc1        $f0, -0x741C($gp)
    ctx->pc = 0x1a55fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), bits); }
label_1a5600:
    // 0x1a5600: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a5604:
    // 0x1a5604: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a5608:
    // 0x1a5608: 0xc052cf0  jal         func_14B3C0
label_1a560c:
    if (ctx->pc == 0x1A560Cu) {
        ctx->pc = 0x1A560Cu;
            // 0x1a560c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A5610u;
        goto label_1a5610;
    }
    ctx->pc = 0x1A5608u;
    SET_GPR_U32(ctx, 31, 0x1A5610u);
    ctx->pc = 0x1A560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5608u;
            // 0x1a560c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5610u; }
        if (ctx->pc != 0x1A5610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5610u; }
        if (ctx->pc != 0x1A5610u) { return; }
    }
    ctx->pc = 0x1A5610u;
label_1a5610:
    // 0x1a5610: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a5614:
    if (ctx->pc == 0x1A5614u) {
        ctx->pc = 0x1A5618u;
        goto label_1a5618;
    }
    ctx->pc = 0x1A5610u;
    {
        const bool branch_taken_0x1a5610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5610) {
            ctx->pc = 0x1A5630u;
            goto label_1a5630;
        }
    }
    ctx->pc = 0x1A5618u;
label_1a5618:
    // 0x1a5618: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1a5618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1a561c:
    // 0x1a561c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5620:
    // 0x1a5620: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a5620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a5624:
    // 0x1a5624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5628:
    // 0x1a5628: 0xc04c67c  jal         func_1319F0
label_1a562c:
    if (ctx->pc == 0x1A562Cu) {
        ctx->pc = 0x1A562Cu;
            // 0x1a562c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x1A5630u;
        goto label_1a5630;
    }
    ctx->pc = 0x1A5628u;
    SET_GPR_U32(ctx, 31, 0x1A5630u);
    ctx->pc = 0x1A562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5628u;
            // 0x1a562c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5630u; }
        if (ctx->pc != 0x1A5630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5630u; }
        if (ctx->pc != 0x1A5630u) { return; }
    }
    ctx->pc = 0x1A5630u;
label_1a5630:
    // 0x1a5630: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a5634:
    // 0x1a5634: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a5638:
    // 0x1a5638: 0xc052cf0  jal         func_14B3C0
label_1a563c:
    if (ctx->pc == 0x1A563Cu) {
        ctx->pc = 0x1A563Cu;
            // 0x1a563c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A5640u;
        goto label_1a5640;
    }
    ctx->pc = 0x1A5638u;
    SET_GPR_U32(ctx, 31, 0x1A5640u);
    ctx->pc = 0x1A563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5638u;
            // 0x1a563c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5640u; }
        if (ctx->pc != 0x1A5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5640u; }
        if (ctx->pc != 0x1A5640u) { return; }
    }
    ctx->pc = 0x1A5640u;
label_1a5640:
    // 0x1a5640: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a5644:
    if (ctx->pc == 0x1A5644u) {
        ctx->pc = 0x1A5648u;
        goto label_1a5648;
    }
    ctx->pc = 0x1A5640u;
    {
        const bool branch_taken_0x1a5640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5640) {
            ctx->pc = 0x1A5660u;
            goto label_1a5660;
        }
    }
    ctx->pc = 0x1A5648u;
label_1a5648:
    // 0x1a5648: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x1a5648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
label_1a564c:
    // 0x1a564c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5650:
    // 0x1a5650: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a5650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a5654:
    // 0x1a5654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5658:
    // 0x1a5658: 0xc04c67c  jal         func_1319F0
label_1a565c:
    if (ctx->pc == 0x1A565Cu) {
        ctx->pc = 0x1A565Cu;
            // 0x1a565c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x1A5660u;
        goto label_1a5660;
    }
    ctx->pc = 0x1A5658u;
    SET_GPR_U32(ctx, 31, 0x1A5660u);
    ctx->pc = 0x1A565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5658u;
            // 0x1a565c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5660u; }
        if (ctx->pc != 0x1A5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5660u; }
        if (ctx->pc != 0x1A5660u) { return; }
    }
    ctx->pc = 0x1A5660u;
label_1a5660:
    // 0x1a5660: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a5660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a5664:
    // 0x1a5664: 0xc052cc0  jal         func_14B300
label_1a5668:
    if (ctx->pc == 0x1A5668u) {
        ctx->pc = 0x1A5668u;
            // 0x1a5668: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A566Cu;
        goto label_1a566c;
    }
    ctx->pc = 0x1A5664u;
    SET_GPR_U32(ctx, 31, 0x1A566Cu);
    ctx->pc = 0x1A5668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5664u;
            // 0x1a5668: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A566Cu; }
        if (ctx->pc != 0x1A566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A566Cu; }
        if (ctx->pc != 0x1A566Cu) { return; }
    }
    ctx->pc = 0x1A566Cu;
label_1a566c:
    // 0x1a566c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a5670:
    // 0x1a5670: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a5670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a5674:
    // 0x1a5674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5678:
    // 0x1a5678: 0x0  nop
    ctx->pc = 0x1a5678u;
    // NOP
label_1a567c:
    // 0x1a567c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a567cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5680:
    // 0x1a5680: 0x0  nop
    ctx->pc = 0x1a5680u;
    // NOP
label_1a5684:
    // 0x1a5684: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a5688:
    if (ctx->pc == 0x1A5688u) {
        ctx->pc = 0x1A568Cu;
        goto label_1a568c;
    }
    ctx->pc = 0x1A5684u;
    {
        const bool branch_taken_0x1a5684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5684) {
            ctx->pc = 0x1A56A4u;
            goto label_1a56a4;
        }
    }
    ctx->pc = 0x1A568Cu;
label_1a568c:
    // 0x1a568c: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
label_1a5690:
    // 0x1a5690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5694:
    // 0x1a5694: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a5694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a5698:
    // 0x1a5698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a569c:
    // 0x1a569c: 0xc04c67c  jal         func_1319F0
label_1a56a0:
    if (ctx->pc == 0x1A56A0u) {
        ctx->pc = 0x1A56A0u;
            // 0x1a56a0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x1A56A4u;
        goto label_1a56a4;
    }
    ctx->pc = 0x1A569Cu;
    SET_GPR_U32(ctx, 31, 0x1A56A4u);
    ctx->pc = 0x1A56A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A569Cu;
            // 0x1a56a0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56A4u; }
        if (ctx->pc != 0x1A56A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56A4u; }
        if (ctx->pc != 0x1A56A4u) { return; }
    }
    ctx->pc = 0x1A56A4u;
label_1a56a4:
    // 0x1a56a4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a56a8:
    // 0x1a56a8: 0xc052cc0  jal         func_14B300
label_1a56ac:
    if (ctx->pc == 0x1A56ACu) {
        ctx->pc = 0x1A56ACu;
            // 0x1a56ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1A56B0u;
        goto label_1a56b0;
    }
    ctx->pc = 0x1A56A8u;
    SET_GPR_U32(ctx, 31, 0x1A56B0u);
    ctx->pc = 0x1A56ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56A8u;
            // 0x1a56ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56B0u; }
        if (ctx->pc != 0x1A56B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56B0u; }
        if (ctx->pc != 0x1A56B0u) { return; }
    }
    ctx->pc = 0x1A56B0u;
label_1a56b0:
    // 0x1a56b0: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_1a56b4:
    // 0x1a56b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a56b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a56b8:
    // 0x1a56b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a56b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a56bc:
    // 0x1a56bc: 0x0  nop
    ctx->pc = 0x1a56bcu;
    // NOP
label_1a56c0:
    // 0x1a56c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a56c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a56c4:
    // 0x1a56c4: 0x0  nop
    ctx->pc = 0x1a56c4u;
    // NOP
label_1a56c8:
    // 0x1a56c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a56cc:
    if (ctx->pc == 0x1A56CCu) {
        ctx->pc = 0x1A56D0u;
        goto label_1a56d0;
    }
    ctx->pc = 0x1A56C8u;
    {
        const bool branch_taken_0x1a56c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56c8) {
            ctx->pc = 0x1A56E8u;
            goto label_1a56e8;
        }
    }
    ctx->pc = 0x1A56D0u;
label_1a56d0:
    // 0x1a56d0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1a56d4:
    // 0x1a56d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a56d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a56d8:
    // 0x1a56d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a56d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a56dc:
    // 0x1a56dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a56dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a56e0:
    // 0x1a56e0: 0xc04c67c  jal         func_1319F0
label_1a56e4:
    if (ctx->pc == 0x1A56E4u) {
        ctx->pc = 0x1A56E4u;
            // 0x1a56e4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x1A56E8u;
        goto label_1a56e8;
    }
    ctx->pc = 0x1A56E0u;
    SET_GPR_U32(ctx, 31, 0x1A56E8u);
    ctx->pc = 0x1A56E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56E0u;
            // 0x1a56e4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (runtime->hasFunction(0x1319F0u)) {
        auto targetFn = runtime->lookupFunction(0x1319F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56E8u; }
        if (ctx->pc != 0x1A56E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAngle__15mgCCameraFollowFf_0x1319f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56E8u; }
        if (ctx->pc != 0x1A56E8u) { return; }
    }
    ctx->pc = 0x1A56E8u;
label_1a56e8:
    // 0x1a56e8: 0x83828bf0  lb          $v0, -0x7410($gp)
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937584)));
label_1a56ec:
    // 0x1a56ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a56f0:
    if (ctx->pc == 0x1A56F0u) {
        ctx->pc = 0x1A56F4u;
        goto label_1a56f4;
    }
    ctx->pc = 0x1A56ECu;
    {
        const bool branch_taken_0x1a56ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a56ec) {
            ctx->pc = 0x1A5700u;
            goto label_1a5700;
        }
    }
    ctx->pc = 0x1A56F4u;
label_1a56f4:
    // 0x1a56f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a56f8:
    // 0x1a56f8: 0xaf808bec  sw          $zero, -0x7414($gp)
    ctx->pc = 0x1a56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
label_1a56fc:
    // 0x1a56fc: 0xa3828bf0  sb          $v0, -0x7410($gp)
    ctx->pc = 0x1a56fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937584), (uint8_t)GPR_U32(ctx, 2));
label_1a5700:
    // 0x1a5700: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1a5700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1a5704:
    // 0x1a5704: 0x3401a140  ori         $at, $zero, 0xA140
    ctx->pc = 0x1a5704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41280);
label_1a5708:
    // 0x1a5708: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
label_1a570c:
    // 0x1a570c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1a570cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1a5710:
    // 0x1a5710: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a5710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1a5714:
    // 0x1a5714: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5718:
    // 0x1a5718: 0x3a11821  addu        $v1, $sp, $at
    ctx->pc = 0x1a5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a571c:
    // 0x1a571c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1a5720:
    // 0x1a5720: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a5720u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1a5724:
    // 0x1a5724: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1a5728:
    // 0x1a5728: 0xc052d0c  jal         func_14B430
label_1a572c:
    if (ctx->pc == 0x1A572Cu) {
        ctx->pc = 0x1A572Cu;
            // 0x1a572c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->pc = 0x1A5730u;
        goto label_1a5730;
    }
    ctx->pc = 0x1A5728u;
    SET_GPR_U32(ctx, 31, 0x1A5730u);
    ctx->pc = 0x1A572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5728u;
            // 0x1a572c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5730u; }
        if (ctx->pc != 0x1A5730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5730u; }
        if (ctx->pc != 0x1A5730u) { return; }
    }
    ctx->pc = 0x1A5730u;
label_1a5730:
    // 0x1a5730: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1a5734:
    if (ctx->pc == 0x1A5734u) {
        ctx->pc = 0x1A5738u;
        goto label_1a5738;
    }
    ctx->pc = 0x1A5730u;
    {
        const bool branch_taken_0x1a5730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5730) {
            ctx->pc = 0x1A5778u;
            goto label_1a5778;
        }
    }
    ctx->pc = 0x1A5738u;
label_1a5738:
    // 0x1a5738: 0x8f828bec  lw          $v0, -0x7414($gp)
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937580)));
label_1a573c:
    // 0x1a573c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5740:
    // 0x1a5740: 0xaf828bec  sw          $v0, -0x7414($gp)
    ctx->pc = 0x1a5740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 2));
label_1a5744:
    // 0x1a5744: 0x8f828bec  lw          $v0, -0x7414($gp)
    ctx->pc = 0x1a5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937580)));
label_1a5748:
    // 0x1a5748: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1a5748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a574c:
    // 0x1a574c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a5750:
    if (ctx->pc == 0x1A5750u) {
        ctx->pc = 0x1A5754u;
        goto label_1a5754;
    }
    ctx->pc = 0x1A574Cu;
    {
        const bool branch_taken_0x1a574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a574c) {
            ctx->pc = 0x1A5758u;
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A5754u;
label_1a5754:
    // 0x1a5754: 0xaf808bec  sw          $zero, -0x7414($gp)
    ctx->pc = 0x1a5754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
label_1a5758:
    // 0x1a5758: 0x8f828bec  lw          $v0, -0x7414($gp)
    ctx->pc = 0x1a5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937580)));
label_1a575c:
    // 0x1a575c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a575cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a5760:
    // 0x1a5760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5764:
    // 0x1a5764: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a5764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1a5768:
    // 0x1a5768: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1a576c:
    // 0x1a576c: 0xc42ca140  lwc1        $f12, -0x5EC0($at)
    ctx->pc = 0x1a576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5770:
    // 0x1a5770: 0xc04c680  jal         func_131A00
label_1a5774:
    if (ctx->pc == 0x1A5774u) {
        ctx->pc = 0x1A5774u;
            // 0x1a5774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5778u;
        goto label_1a5778;
    }
    ctx->pc = 0x1A5770u;
    SET_GPR_U32(ctx, 31, 0x1A5778u);
    ctx->pc = 0x1A5774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5770u;
            // 0x1a5774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5778u; }
        if (ctx->pc != 0x1A5778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5778u; }
        if (ctx->pc != 0x1A5778u) { return; }
    }
    ctx->pc = 0x1A5778u;
label_1a5778:
    // 0x1a5778: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a5778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a577c:
    // 0x1a577c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a5780:
    // 0x1a5780: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a5780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5784:
    // 0x1a5784: 0x3401a150  ori         $at, $zero, 0xA150
    ctx->pc = 0x1a5784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41296);
label_1a5788:
    // 0x1a5788: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a5788u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a578c:
    // 0x1a578c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a578cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5790:
    // 0x1a5790: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a5790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5794:
    // 0x1a5794: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a5794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5798:
    // 0x1a5798: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a5798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a579c:
    // 0x1a579c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a579cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a57a0:
    // 0x1a57a0: 0x3e00008  jr          $ra
label_1a57a4:
    if (ctx->pc == 0x1A57A4u) {
        ctx->pc = 0x1A57A4u;
            // 0x1a57a4: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1A57A8u;
        goto label_fallthrough_0x1a57a0;
    }
    ctx->pc = 0x1A57A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57A0u;
            // 0x1a57a4: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a57a0:
    ctx->pc = 0x1A57A8u;
}
