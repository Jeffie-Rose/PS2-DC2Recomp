#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MainLoop__Fv
// Address: 0x190cb0 - 0x191964
void MainLoop__Fv_0x190cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MainLoop__Fv_0x190cb0");
#endif

    switch (ctx->pc) {
        case 0x190cb0u: goto label_190cb0;
        case 0x190cb4u: goto label_190cb4;
        case 0x190cb8u: goto label_190cb8;
        case 0x190cbcu: goto label_190cbc;
        case 0x190cc0u: goto label_190cc0;
        case 0x190cc4u: goto label_190cc4;
        case 0x190cc8u: goto label_190cc8;
        case 0x190cccu: goto label_190ccc;
        case 0x190cd0u: goto label_190cd0;
        case 0x190cd4u: goto label_190cd4;
        case 0x190cd8u: goto label_190cd8;
        case 0x190cdcu: goto label_190cdc;
        case 0x190ce0u: goto label_190ce0;
        case 0x190ce4u: goto label_190ce4;
        case 0x190ce8u: goto label_190ce8;
        case 0x190cecu: goto label_190cec;
        case 0x190cf0u: goto label_190cf0;
        case 0x190cf4u: goto label_190cf4;
        case 0x190cf8u: goto label_190cf8;
        case 0x190cfcu: goto label_190cfc;
        case 0x190d00u: goto label_190d00;
        case 0x190d04u: goto label_190d04;
        case 0x190d08u: goto label_190d08;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d10u: goto label_190d10;
        case 0x190d14u: goto label_190d14;
        case 0x190d18u: goto label_190d18;
        case 0x190d1cu: goto label_190d1c;
        case 0x190d20u: goto label_190d20;
        case 0x190d24u: goto label_190d24;
        case 0x190d28u: goto label_190d28;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d30u: goto label_190d30;
        case 0x190d34u: goto label_190d34;
        case 0x190d38u: goto label_190d38;
        case 0x190d3cu: goto label_190d3c;
        case 0x190d40u: goto label_190d40;
        case 0x190d44u: goto label_190d44;
        case 0x190d48u: goto label_190d48;
        case 0x190d4cu: goto label_190d4c;
        case 0x190d50u: goto label_190d50;
        case 0x190d54u: goto label_190d54;
        case 0x190d58u: goto label_190d58;
        case 0x190d5cu: goto label_190d5c;
        case 0x190d60u: goto label_190d60;
        case 0x190d64u: goto label_190d64;
        case 0x190d68u: goto label_190d68;
        case 0x190d6cu: goto label_190d6c;
        case 0x190d70u: goto label_190d70;
        case 0x190d74u: goto label_190d74;
        case 0x190d78u: goto label_190d78;
        case 0x190d7cu: goto label_190d7c;
        case 0x190d80u: goto label_190d80;
        case 0x190d84u: goto label_190d84;
        case 0x190d88u: goto label_190d88;
        case 0x190d8cu: goto label_190d8c;
        case 0x190d90u: goto label_190d90;
        case 0x190d94u: goto label_190d94;
        case 0x190d98u: goto label_190d98;
        case 0x190d9cu: goto label_190d9c;
        case 0x190da0u: goto label_190da0;
        case 0x190da4u: goto label_190da4;
        case 0x190da8u: goto label_190da8;
        case 0x190dacu: goto label_190dac;
        case 0x190db0u: goto label_190db0;
        case 0x190db4u: goto label_190db4;
        case 0x190db8u: goto label_190db8;
        case 0x190dbcu: goto label_190dbc;
        case 0x190dc0u: goto label_190dc0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190dc8u: goto label_190dc8;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd0u: goto label_190dd0;
        case 0x190dd4u: goto label_190dd4;
        case 0x190dd8u: goto label_190dd8;
        case 0x190ddcu: goto label_190ddc;
        case 0x190de0u: goto label_190de0;
        case 0x190de4u: goto label_190de4;
        case 0x190de8u: goto label_190de8;
        case 0x190decu: goto label_190dec;
        case 0x190df0u: goto label_190df0;
        case 0x190df4u: goto label_190df4;
        case 0x190df8u: goto label_190df8;
        case 0x190dfcu: goto label_190dfc;
        case 0x190e00u: goto label_190e00;
        case 0x190e04u: goto label_190e04;
        case 0x190e08u: goto label_190e08;
        case 0x190e0cu: goto label_190e0c;
        case 0x190e10u: goto label_190e10;
        case 0x190e14u: goto label_190e14;
        case 0x190e18u: goto label_190e18;
        case 0x190e1cu: goto label_190e1c;
        case 0x190e20u: goto label_190e20;
        case 0x190e24u: goto label_190e24;
        case 0x190e28u: goto label_190e28;
        case 0x190e2cu: goto label_190e2c;
        case 0x190e30u: goto label_190e30;
        case 0x190e34u: goto label_190e34;
        case 0x190e38u: goto label_190e38;
        case 0x190e3cu: goto label_190e3c;
        case 0x190e40u: goto label_190e40;
        case 0x190e44u: goto label_190e44;
        case 0x190e48u: goto label_190e48;
        case 0x190e4cu: goto label_190e4c;
        case 0x190e50u: goto label_190e50;
        case 0x190e54u: goto label_190e54;
        case 0x190e58u: goto label_190e58;
        case 0x190e5cu: goto label_190e5c;
        case 0x190e60u: goto label_190e60;
        case 0x190e64u: goto label_190e64;
        case 0x190e68u: goto label_190e68;
        case 0x190e6cu: goto label_190e6c;
        case 0x190e70u: goto label_190e70;
        case 0x190e74u: goto label_190e74;
        case 0x190e78u: goto label_190e78;
        case 0x190e7cu: goto label_190e7c;
        case 0x190e80u: goto label_190e80;
        case 0x190e84u: goto label_190e84;
        case 0x190e88u: goto label_190e88;
        case 0x190e8cu: goto label_190e8c;
        case 0x190e90u: goto label_190e90;
        case 0x190e94u: goto label_190e94;
        case 0x190e98u: goto label_190e98;
        case 0x190e9cu: goto label_190e9c;
        case 0x190ea0u: goto label_190ea0;
        case 0x190ea4u: goto label_190ea4;
        case 0x190ea8u: goto label_190ea8;
        case 0x190eacu: goto label_190eac;
        case 0x190eb0u: goto label_190eb0;
        case 0x190eb4u: goto label_190eb4;
        case 0x190eb8u: goto label_190eb8;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ec0u: goto label_190ec0;
        case 0x190ec4u: goto label_190ec4;
        case 0x190ec8u: goto label_190ec8;
        case 0x190eccu: goto label_190ecc;
        case 0x190ed0u: goto label_190ed0;
        case 0x190ed4u: goto label_190ed4;
        case 0x190ed8u: goto label_190ed8;
        case 0x190edcu: goto label_190edc;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ee4u: goto label_190ee4;
        case 0x190ee8u: goto label_190ee8;
        case 0x190eecu: goto label_190eec;
        case 0x190ef0u: goto label_190ef0;
        case 0x190ef4u: goto label_190ef4;
        case 0x190ef8u: goto label_190ef8;
        case 0x190efcu: goto label_190efc;
        case 0x190f00u: goto label_190f00;
        case 0x190f04u: goto label_190f04;
        case 0x190f08u: goto label_190f08;
        case 0x190f0cu: goto label_190f0c;
        case 0x190f10u: goto label_190f10;
        case 0x190f14u: goto label_190f14;
        case 0x190f18u: goto label_190f18;
        case 0x190f1cu: goto label_190f1c;
        case 0x190f20u: goto label_190f20;
        case 0x190f24u: goto label_190f24;
        case 0x190f28u: goto label_190f28;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f30u: goto label_190f30;
        case 0x190f34u: goto label_190f34;
        case 0x190f38u: goto label_190f38;
        case 0x190f3cu: goto label_190f3c;
        case 0x190f40u: goto label_190f40;
        case 0x190f44u: goto label_190f44;
        case 0x190f48u: goto label_190f48;
        case 0x190f4cu: goto label_190f4c;
        case 0x190f50u: goto label_190f50;
        case 0x190f54u: goto label_190f54;
        case 0x190f58u: goto label_190f58;
        case 0x190f5cu: goto label_190f5c;
        case 0x190f60u: goto label_190f60;
        case 0x190f64u: goto label_190f64;
        case 0x190f68u: goto label_190f68;
        case 0x190f6cu: goto label_190f6c;
        case 0x190f70u: goto label_190f70;
        case 0x190f74u: goto label_190f74;
        case 0x190f78u: goto label_190f78;
        case 0x190f7cu: goto label_190f7c;
        case 0x190f80u: goto label_190f80;
        case 0x190f84u: goto label_190f84;
        case 0x190f88u: goto label_190f88;
        case 0x190f8cu: goto label_190f8c;
        case 0x190f90u: goto label_190f90;
        case 0x190f94u: goto label_190f94;
        case 0x190f98u: goto label_190f98;
        case 0x190f9cu: goto label_190f9c;
        case 0x190fa0u: goto label_190fa0;
        case 0x190fa4u: goto label_190fa4;
        case 0x190fa8u: goto label_190fa8;
        case 0x190facu: goto label_190fac;
        case 0x190fb0u: goto label_190fb0;
        case 0x190fb4u: goto label_190fb4;
        case 0x190fb8u: goto label_190fb8;
        case 0x190fbcu: goto label_190fbc;
        case 0x190fc0u: goto label_190fc0;
        case 0x190fc4u: goto label_190fc4;
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        case 0x191168u: goto label_191168;
        case 0x19116cu: goto label_19116c;
        case 0x191170u: goto label_191170;
        case 0x191174u: goto label_191174;
        case 0x191178u: goto label_191178;
        case 0x19117cu: goto label_19117c;
        case 0x191180u: goto label_191180;
        case 0x191184u: goto label_191184;
        case 0x191188u: goto label_191188;
        case 0x19118cu: goto label_19118c;
        case 0x191190u: goto label_191190;
        case 0x191194u: goto label_191194;
        case 0x191198u: goto label_191198;
        case 0x19119cu: goto label_19119c;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a4u: goto label_1911a4;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911acu: goto label_1911ac;
        case 0x1911b0u: goto label_1911b0;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911b8u: goto label_1911b8;
        case 0x1911bcu: goto label_1911bc;
        case 0x1911c0u: goto label_1911c0;
        case 0x1911c4u: goto label_1911c4;
        case 0x1911c8u: goto label_1911c8;
        case 0x1911ccu: goto label_1911cc;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911d4u: goto label_1911d4;
        case 0x1911d8u: goto label_1911d8;
        case 0x1911dcu: goto label_1911dc;
        case 0x1911e0u: goto label_1911e0;
        case 0x1911e4u: goto label_1911e4;
        case 0x1911e8u: goto label_1911e8;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f0u: goto label_1911f0;
        case 0x1911f4u: goto label_1911f4;
        case 0x1911f8u: goto label_1911f8;
        case 0x1911fcu: goto label_1911fc;
        case 0x191200u: goto label_191200;
        case 0x191204u: goto label_191204;
        case 0x191208u: goto label_191208;
        case 0x19120cu: goto label_19120c;
        case 0x191210u: goto label_191210;
        case 0x191214u: goto label_191214;
        case 0x191218u: goto label_191218;
        case 0x19121cu: goto label_19121c;
        case 0x191220u: goto label_191220;
        case 0x191224u: goto label_191224;
        case 0x191228u: goto label_191228;
        case 0x19122cu: goto label_19122c;
        case 0x191230u: goto label_191230;
        case 0x191234u: goto label_191234;
        case 0x191238u: goto label_191238;
        case 0x19123cu: goto label_19123c;
        case 0x191240u: goto label_191240;
        case 0x191244u: goto label_191244;
        case 0x191248u: goto label_191248;
        case 0x19124cu: goto label_19124c;
        case 0x191250u: goto label_191250;
        case 0x191254u: goto label_191254;
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        case 0x191330u: goto label_191330;
        case 0x191334u: goto label_191334;
        case 0x191338u: goto label_191338;
        case 0x19133cu: goto label_19133c;
        case 0x191340u: goto label_191340;
        case 0x191344u: goto label_191344;
        case 0x191348u: goto label_191348;
        case 0x19134cu: goto label_19134c;
        case 0x191350u: goto label_191350;
        case 0x191354u: goto label_191354;
        case 0x191358u: goto label_191358;
        case 0x19135cu: goto label_19135c;
        case 0x191360u: goto label_191360;
        case 0x191364u: goto label_191364;
        case 0x191368u: goto label_191368;
        case 0x19136cu: goto label_19136c;
        case 0x191370u: goto label_191370;
        case 0x191374u: goto label_191374;
        case 0x191378u: goto label_191378;
        case 0x19137cu: goto label_19137c;
        case 0x191380u: goto label_191380;
        case 0x191384u: goto label_191384;
        case 0x191388u: goto label_191388;
        case 0x19138cu: goto label_19138c;
        case 0x191390u: goto label_191390;
        case 0x191394u: goto label_191394;
        case 0x191398u: goto label_191398;
        case 0x19139cu: goto label_19139c;
        case 0x1913a0u: goto label_1913a0;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913acu: goto label_1913ac;
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b4u: goto label_1913b4;
        case 0x1913b8u: goto label_1913b8;
        case 0x1913bcu: goto label_1913bc;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913c4u: goto label_1913c4;
        case 0x1913c8u: goto label_1913c8;
        case 0x1913ccu: goto label_1913cc;
        case 0x1913d0u: goto label_1913d0;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913d8u: goto label_1913d8;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914acu: goto label_1914ac;
        case 0x1914b0u: goto label_1914b0;
        case 0x1914b4u: goto label_1914b4;
        case 0x1914b8u: goto label_1914b8;
        case 0x1914bcu: goto label_1914bc;
        case 0x1914c0u: goto label_1914c0;
        case 0x1914c4u: goto label_1914c4;
        case 0x1914c8u: goto label_1914c8;
        case 0x1914ccu: goto label_1914cc;
        case 0x1914d0u: goto label_1914d0;
        case 0x1914d4u: goto label_1914d4;
        case 0x1914d8u: goto label_1914d8;
        case 0x1914dcu: goto label_1914dc;
        case 0x1914e0u: goto label_1914e0;
        case 0x1914e4u: goto label_1914e4;
        case 0x1914e8u: goto label_1914e8;
        case 0x1914ecu: goto label_1914ec;
        case 0x1914f0u: goto label_1914f0;
        case 0x1914f4u: goto label_1914f4;
        case 0x1914f8u: goto label_1914f8;
        case 0x1914fcu: goto label_1914fc;
        case 0x191500u: goto label_191500;
        case 0x191504u: goto label_191504;
        case 0x191508u: goto label_191508;
        case 0x19150cu: goto label_19150c;
        case 0x191510u: goto label_191510;
        case 0x191514u: goto label_191514;
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        case 0x191530u: goto label_191530;
        case 0x191534u: goto label_191534;
        case 0x191538u: goto label_191538;
        case 0x19153cu: goto label_19153c;
        case 0x191540u: goto label_191540;
        case 0x191544u: goto label_191544;
        case 0x191548u: goto label_191548;
        case 0x19154cu: goto label_19154c;
        case 0x191550u: goto label_191550;
        case 0x191554u: goto label_191554;
        case 0x191558u: goto label_191558;
        case 0x19155cu: goto label_19155c;
        case 0x191560u: goto label_191560;
        case 0x191564u: goto label_191564;
        case 0x191568u: goto label_191568;
        case 0x19156cu: goto label_19156c;
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        case 0x1915f0u: goto label_1915f0;
        case 0x1915f4u: goto label_1915f4;
        case 0x1915f8u: goto label_1915f8;
        case 0x1915fcu: goto label_1915fc;
        case 0x191600u: goto label_191600;
        case 0x191604u: goto label_191604;
        case 0x191608u: goto label_191608;
        case 0x19160cu: goto label_19160c;
        case 0x191610u: goto label_191610;
        case 0x191614u: goto label_191614;
        case 0x191618u: goto label_191618;
        case 0x19161cu: goto label_19161c;
        case 0x191620u: goto label_191620;
        case 0x191624u: goto label_191624;
        case 0x191628u: goto label_191628;
        case 0x19162cu: goto label_19162c;
        case 0x191630u: goto label_191630;
        case 0x191634u: goto label_191634;
        case 0x191638u: goto label_191638;
        case 0x19163cu: goto label_19163c;
        case 0x191640u: goto label_191640;
        case 0x191644u: goto label_191644;
        case 0x191648u: goto label_191648;
        case 0x19164cu: goto label_19164c;
        case 0x191650u: goto label_191650;
        case 0x191654u: goto label_191654;
        case 0x191658u: goto label_191658;
        case 0x19165cu: goto label_19165c;
        case 0x191660u: goto label_191660;
        case 0x191664u: goto label_191664;
        case 0x191668u: goto label_191668;
        case 0x19166cu: goto label_19166c;
        case 0x191670u: goto label_191670;
        case 0x191674u: goto label_191674;
        case 0x191678u: goto label_191678;
        case 0x19167cu: goto label_19167c;
        case 0x191680u: goto label_191680;
        case 0x191684u: goto label_191684;
        case 0x191688u: goto label_191688;
        case 0x19168cu: goto label_19168c;
        case 0x191690u: goto label_191690;
        case 0x191694u: goto label_191694;
        case 0x191698u: goto label_191698;
        case 0x19169cu: goto label_19169c;
        case 0x1916a0u: goto label_1916a0;
        case 0x1916a4u: goto label_1916a4;
        case 0x1916a8u: goto label_1916a8;
        case 0x1916acu: goto label_1916ac;
        case 0x1916b0u: goto label_1916b0;
        case 0x1916b4u: goto label_1916b4;
        case 0x1916b8u: goto label_1916b8;
        case 0x1916bcu: goto label_1916bc;
        case 0x1916c0u: goto label_1916c0;
        case 0x1916c4u: goto label_1916c4;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916ccu: goto label_1916cc;
        case 0x1916d0u: goto label_1916d0;
        case 0x1916d4u: goto label_1916d4;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916dcu: goto label_1916dc;
        case 0x1916e0u: goto label_1916e0;
        case 0x1916e4u: goto label_1916e4;
        case 0x1916e8u: goto label_1916e8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916f0u: goto label_1916f0;
        case 0x1916f4u: goto label_1916f4;
        case 0x1916f8u: goto label_1916f8;
        case 0x1916fcu: goto label_1916fc;
        case 0x191700u: goto label_191700;
        case 0x191704u: goto label_191704;
        case 0x191708u: goto label_191708;
        case 0x19170cu: goto label_19170c;
        case 0x191710u: goto label_191710;
        case 0x191714u: goto label_191714;
        case 0x191718u: goto label_191718;
        case 0x19171cu: goto label_19171c;
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        case 0x1917c8u: goto label_1917c8;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917d8u: goto label_1917d8;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917e4u: goto label_1917e4;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917ecu: goto label_1917ec;
        case 0x1917f0u: goto label_1917f0;
        case 0x1917f4u: goto label_1917f4;
        case 0x1917f8u: goto label_1917f8;
        case 0x1917fcu: goto label_1917fc;
        case 0x191800u: goto label_191800;
        case 0x191804u: goto label_191804;
        case 0x191808u: goto label_191808;
        case 0x19180cu: goto label_19180c;
        case 0x191810u: goto label_191810;
        case 0x191814u: goto label_191814;
        case 0x191818u: goto label_191818;
        case 0x19181cu: goto label_19181c;
        case 0x191820u: goto label_191820;
        case 0x191824u: goto label_191824;
        case 0x191828u: goto label_191828;
        case 0x19182cu: goto label_19182c;
        case 0x191830u: goto label_191830;
        case 0x191834u: goto label_191834;
        case 0x191838u: goto label_191838;
        case 0x19183cu: goto label_19183c;
        case 0x191840u: goto label_191840;
        case 0x191844u: goto label_191844;
        case 0x191848u: goto label_191848;
        case 0x19184cu: goto label_19184c;
        case 0x191850u: goto label_191850;
        case 0x191854u: goto label_191854;
        case 0x191858u: goto label_191858;
        case 0x19185cu: goto label_19185c;
        case 0x191860u: goto label_191860;
        case 0x191864u: goto label_191864;
        case 0x191868u: goto label_191868;
        case 0x19186cu: goto label_19186c;
        case 0x191870u: goto label_191870;
        case 0x191874u: goto label_191874;
        case 0x191878u: goto label_191878;
        case 0x19187cu: goto label_19187c;
        case 0x191880u: goto label_191880;
        case 0x191884u: goto label_191884;
        case 0x191888u: goto label_191888;
        case 0x19188cu: goto label_19188c;
        case 0x191890u: goto label_191890;
        case 0x191894u: goto label_191894;
        case 0x191898u: goto label_191898;
        case 0x19189cu: goto label_19189c;
        case 0x1918a0u: goto label_1918a0;
        case 0x1918a4u: goto label_1918a4;
        case 0x1918a8u: goto label_1918a8;
        case 0x1918acu: goto label_1918ac;
        case 0x1918b0u: goto label_1918b0;
        case 0x1918b4u: goto label_1918b4;
        case 0x1918b8u: goto label_1918b8;
        case 0x1918bcu: goto label_1918bc;
        case 0x1918c0u: goto label_1918c0;
        case 0x1918c4u: goto label_1918c4;
        case 0x1918c8u: goto label_1918c8;
        case 0x1918ccu: goto label_1918cc;
        case 0x1918d0u: goto label_1918d0;
        case 0x1918d4u: goto label_1918d4;
        case 0x1918d8u: goto label_1918d8;
        case 0x1918dcu: goto label_1918dc;
        case 0x1918e0u: goto label_1918e0;
        case 0x1918e4u: goto label_1918e4;
        case 0x1918e8u: goto label_1918e8;
        case 0x1918ecu: goto label_1918ec;
        case 0x1918f0u: goto label_1918f0;
        case 0x1918f4u: goto label_1918f4;
        case 0x1918f8u: goto label_1918f8;
        case 0x1918fcu: goto label_1918fc;
        case 0x191900u: goto label_191900;
        case 0x191904u: goto label_191904;
        case 0x191908u: goto label_191908;
        case 0x19190cu: goto label_19190c;
        case 0x191910u: goto label_191910;
        case 0x191914u: goto label_191914;
        case 0x191918u: goto label_191918;
        case 0x19191cu: goto label_19191c;
        case 0x191920u: goto label_191920;
        case 0x191924u: goto label_191924;
        case 0x191928u: goto label_191928;
        case 0x19192cu: goto label_19192c;
        case 0x191930u: goto label_191930;
        case 0x191934u: goto label_191934;
        case 0x191938u: goto label_191938;
        case 0x19193cu: goto label_19193c;
        case 0x191940u: goto label_191940;
        case 0x191944u: goto label_191944;
        case 0x191948u: goto label_191948;
        case 0x19194cu: goto label_19194c;
        case 0x191950u: goto label_191950;
        case 0x191954u: goto label_191954;
        case 0x191958u: goto label_191958;
        case 0x19195cu: goto label_19195c;
        case 0x191960u: goto label_191960;
        default: break;
    }

    ctx->pc = 0x190cb0u;

label_190cb0:
    // 0x190cb0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x190cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_190cb4:
    // 0x190cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190cb8:
    // 0x190cb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190cbc:
    // 0x190cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190cc0:
    // 0x190cc0: 0xc06423c  jal         func_1908F0
label_190cc4:
    if (ctx->pc == 0x190CC4u) {
        ctx->pc = 0x190CC4u;
            // 0x190cc4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x190CC8u;
        goto label_190cc8;
    }
    ctx->pc = 0x190CC0u;
    SET_GPR_U32(ctx, 31, 0x190CC8u);
    ctx->pc = 0x190CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190CC0u;
            // 0x190cc4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CC8u; }
        if (ctx->pc != 0x190CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CC8u; }
        if (ctx->pc != 0x190CC8u) { return; }
    }
    ctx->pc = 0x190CC8u;
label_190cc8:
    // 0x190cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190ccc:
    // 0x190ccc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x190cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_190cd0:
    // 0x190cd0: 0x24a58230  addiu       $a1, $a1, -0x7DD0
    ctx->pc = 0x190cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935088));
label_190cd4:
    // 0x190cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190cd8:
    // 0x190cd8: 0xc04e79c  jal         func_139E70
label_190cdc:
    if (ctx->pc == 0x190CDCu) {
        ctx->pc = 0x190CDCu;
            // 0x190cdc: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->pc = 0x190CE0u;
        goto label_190ce0;
    }
    ctx->pc = 0x190CD8u;
    SET_GPR_U32(ctx, 31, 0x190CE0u);
    ctx->pc = 0x190CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190CD8u;
            // 0x190cdc: 0x3c06001a  lui         $a2, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CE0u; }
        if (ctx->pc != 0x190CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CE0u; }
        if (ctx->pc != 0x190CE0u) { return; }
    }
    ctx->pc = 0x190CE0u;
label_190ce0:
    // 0x190ce0: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_190ce4:
    // 0x190ce4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x190ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_190ce8:
    // 0x190ce8: 0x24841810  addiu       $a0, $a0, 0x1810
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6160));
label_190cec:
    // 0x190cec: 0xc0bd87c  jal         func_2F61F0
label_190cf0:
    if (ctx->pc == 0x190CF0u) {
        ctx->pc = 0x190CF0u;
            // 0x190cf0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x190CF4u;
        goto label_190cf4;
    }
    ctx->pc = 0x190CECu;
    SET_GPR_U32(ctx, 31, 0x190CF4u);
    ctx->pc = 0x190CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190CECu;
            // 0x190cf0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F61F0u;
    if (runtime->hasFunction(0x2F61F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F61F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CF4u; }
        if (ctx->pc != 0x190CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSaveDataFv_0x2f61f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CF4u; }
        if (ctx->pc != 0x190CF4u) { return; }
    }
    ctx->pc = 0x190CF4u;
label_190cf4:
    // 0x190cf4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x190cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_190cf8:
    // 0x190cf8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190cfc:
    // 0x190cfc: 0x24421810  addiu       $v0, $v0, 0x1810
    ctx->pc = 0x190cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6160));
label_190d00:
    // 0x190d00: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x190d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_190d04:
    // 0x190d04: 0xaf828af4  sw          $v0, -0x750C($gp)
    ctx->pc = 0x190d04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937332), GPR_U32(ctx, 2));
label_190d08:
    // 0x190d08: 0xaf808af8  sw          $zero, -0x7508($gp)
    ctx->pc = 0x190d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937336), GPR_U32(ctx, 0));
label_190d0c:
    // 0x190d0c: 0xc052864  jal         func_14A190
label_190d10:
    if (ctx->pc == 0x190D10u) {
        ctx->pc = 0x190D10u;
            // 0x190d10: 0xaf808ac8  sw          $zero, -0x7538($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 0));
        ctx->pc = 0x190D14u;
        goto label_190d14;
    }
    ctx->pc = 0x190D0Cu;
    SET_GPR_U32(ctx, 31, 0x190D14u);
    ctx->pc = 0x190D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D0Cu;
            // 0x190d10: 0xaf808ac8  sw          $zero, -0x7538($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A190u;
    if (runtime->hasFunction(0x14A190u)) {
        auto targetFn = runtime->lookupFunction(0x14A190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D14u; }
        if (ctx->pc != 0x190D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__8CGamePadFv_0x14a190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D14u; }
        if (ctx->pc != 0x190D14u) { return; }
    }
    ctx->pc = 0x190D14u;
label_190d14:
    // 0x190d14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190d18:
    // 0x190d18: 0xc05262c  jal         func_1498B0
label_190d1c:
    if (ctx->pc == 0x190D1Cu) {
        ctx->pc = 0x190D1Cu;
            // 0x190d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190D20u;
        goto label_190d20;
    }
    ctx->pc = 0x190D18u;
    SET_GPR_U32(ctx, 31, 0x190D20u);
    ctx->pc = 0x190D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D18u;
            // 0x190d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1498B0u;
    if (runtime->hasFunction(0x1498B0u)) {
        auto targetFn = runtime->lookupFunction(0x1498B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D20u; }
        if (ctx->pc != 0x190D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFileCache__FP1i_0x1498b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D20u; }
        if (ctx->pc != 0x190D20u) { return; }
    }
    ctx->pc = 0x190D20u;
label_190d20:
    // 0x190d20: 0xc0504f8  jal         func_1413E0
label_190d24:
    if (ctx->pc == 0x190D24u) {
        ctx->pc = 0x190D24u;
            // 0x190d24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x190D28u;
        goto label_190d28;
    }
    ctx->pc = 0x190D20u;
    SET_GPR_U32(ctx, 31, 0x190D28u);
    ctx->pc = 0x190D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D20u;
            // 0x190d24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1413E0u;
    if (runtime->hasFunction(0x1413E0u)) {
        auto targetFn = runtime->lookupFunction(0x1413E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D28u; }
        if (ctx->pc != 0x190D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInit__Fi_0x1413e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D28u; }
        if (ctx->pc != 0x190D28u) { return; }
    }
    ctx->pc = 0x190D28u;
label_190d28:
    // 0x190d28: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x190d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
label_190d2c:
    // 0x190d2c: 0xaf808afc  sw          $zero, -0x7504($gp)
    ctx->pc = 0x190d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937340), GPR_U32(ctx, 0));
label_190d30:
    // 0x190d30: 0xc0504a0  jal         func_141280
label_190d34:
    if (ctx->pc == 0x190D34u) {
        ctx->pc = 0x190D34u;
            // 0x190d34: 0x24840ba0  addiu       $a0, $a0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2976));
        ctx->pc = 0x190D38u;
        goto label_190d38;
    }
    ctx->pc = 0x190D30u;
    SET_GPR_U32(ctx, 31, 0x190D38u);
    ctx->pc = 0x190D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D30u;
            // 0x190d34: 0x24840ba0  addiu       $a0, $a0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141280u;
    if (runtime->hasFunction(0x141280u)) {
        auto targetFn = runtime->lookupFunction(0x141280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D38u; }
        if (ctx->pc != 0x190D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVSyncCallBack__FPFi_i_0x141280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D38u; }
        if (ctx->pc != 0x190D38u) { return; }
    }
    ctx->pc = 0x190D38u;
label_190d38:
    // 0x190d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190d3c:
    // 0x190d3c: 0xc0c28a4  jal         func_30A290
label_190d40:
    if (ctx->pc == 0x190D40u) {
        ctx->pc = 0x190D40u;
            // 0x190d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190D44u;
        goto label_190d44;
    }
    ctx->pc = 0x190D3Cu;
    SET_GPR_U32(ctx, 31, 0x190D44u);
    ctx->pc = 0x190D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D3Cu;
            // 0x190d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A290u;
    if (runtime->hasFunction(0x30A290u)) {
        auto targetFn = runtime->lookupFunction(0x30A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D44u; }
        if (ctx->pc != 0x190D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SCElogoFade__FiP9mgCMemory_0x30a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D44u; }
        if (ctx->pc != 0x190D44u) { return; }
    }
    ctx->pc = 0x190D44u;
label_190d44:
    // 0x190d44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_190d48:
    // 0x190d48: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_190d4c:
    // 0x190d4c: 0xaf828adc  sw          $v0, -0x7524($gp)
    ctx->pc = 0x190d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937308), GPR_U32(ctx, 2));
label_190d50:
    // 0x190d50: 0x83828b04  lb          $v0, -0x74FC($gp)
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937348)));
label_190d54:
    // 0x190d54: 0xaf808ac8  sw          $zero, -0x7538($gp)
    ctx->pc = 0x190d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 0));
label_190d58:
    // 0x190d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_190d5c:
    if (ctx->pc == 0x190D5Cu) {
        ctx->pc = 0x190D5Cu;
            // 0x190d5c: 0xac208074  sw          $zero, -0x7F8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934644), GPR_U32(ctx, 0));
        ctx->pc = 0x190D60u;
        goto label_190d60;
    }
    ctx->pc = 0x190D58u;
    {
        const bool branch_taken_0x190d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D58u;
            // 0x190d5c: 0xac208074  sw          $zero, -0x7F8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d58) {
            ctx->pc = 0x190D68u;
            goto label_190d68;
        }
    }
    ctx->pc = 0x190D60u;
label_190d60:
    // 0x190d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190d64:
    // 0x190d64: 0xa3828b04  sb          $v0, -0x74FC($gp)
    ctx->pc = 0x190d64u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937348), (uint8_t)GPR_U32(ctx, 2));
label_190d68:
    // 0x190d68: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190d6c:
    // 0x190d6c: 0xaf808b00  sw          $zero, -0x7500($gp)
    ctx->pc = 0x190d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937344), GPR_U32(ctx, 0));
label_190d70:
    // 0x190d70: 0xc052a0c  jal         func_14A830
label_190d74:
    if (ctx->pc == 0x190D74u) {
        ctx->pc = 0x190D74u;
            // 0x190d74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190D78u;
        goto label_190d78;
    }
    ctx->pc = 0x190D70u;
    SET_GPR_U32(ctx, 31, 0x190D78u);
    ctx->pc = 0x190D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D70u;
            // 0x190d74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A830u;
    if (runtime->hasFunction(0x14A830u)) {
        auto targetFn = runtime->lookupFunction(0x14A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D78u; }
        if (ctx->pc != 0x190D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitEnable__8CGamePadFv_0x14a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D78u; }
        if (ctx->pc != 0x190D78u) { return; }
    }
    ctx->pc = 0x190D78u;
label_190d78:
    // 0x190d78: 0xc040cc0  jal         func_103300
label_190d7c:
    if (ctx->pc == 0x190D7Cu) {
        ctx->pc = 0x190D7Cu;
            // 0x190d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190D80u;
        goto label_190d80;
    }
    ctx->pc = 0x190D78u;
    SET_GPR_U32(ctx, 31, 0x190D80u);
    ctx->pc = 0x190D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D78u;
            // 0x190d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D80u; }
        if (ctx->pc != 0x190D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D80u; }
        if (ctx->pc != 0x190D80u) { return; }
    }
    ctx->pc = 0x190D80u;
label_190d80:
    // 0x190d80: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190d84:
    // 0x190d84: 0xc052a4c  jal         func_14A930
label_190d88:
    if (ctx->pc == 0x190D88u) {
        ctx->pc = 0x190D88u;
            // 0x190d88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190D8Cu;
        goto label_190d8c;
    }
    ctx->pc = 0x190D84u;
    SET_GPR_U32(ctx, 31, 0x190D8Cu);
    ctx->pc = 0x190D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D84u;
            // 0x190d88: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D8Cu; }
        if (ctx->pc != 0x190D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D8Cu; }
        if (ctx->pc != 0x190D8Cu) { return; }
    }
    ctx->pc = 0x190D8Cu;
label_190d8c:
    // 0x190d8c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190d90:
    // 0x190d90: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_190d94:
    // 0x190d94: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x190d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_190d98:
    // 0x190d98: 0xaf808ad8  sw          $zero, -0x7528($gp)
    ctx->pc = 0x190d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937304), GPR_U32(ctx, 0));
label_190d9c:
    // 0x190d9c: 0xc052cfc  jal         func_14B3F0
label_190da0:
    if (ctx->pc == 0x190DA0u) {
        ctx->pc = 0x190DA0u;
            // 0x190da0: 0xaf808ac8  sw          $zero, -0x7538($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 0));
        ctx->pc = 0x190DA4u;
        goto label_190da4;
    }
    ctx->pc = 0x190D9Cu;
    SET_GPR_U32(ctx, 31, 0x190DA4u);
    ctx->pc = 0x190DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D9Cu;
            // 0x190da0: 0xaf808ac8  sw          $zero, -0x7538($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DA4u; }
        if (ctx->pc != 0x190DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DA4u; }
        if (ctx->pc != 0x190DA4u) { return; }
    }
    ctx->pc = 0x190DA4u;
label_190da4:
    // 0x190da4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_190da8:
    if (ctx->pc == 0x190DA8u) {
        ctx->pc = 0x190DACu;
        goto label_190dac;
    }
    ctx->pc = 0x190DA4u;
    {
        const bool branch_taken_0x190da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190da4) {
            ctx->pc = 0x190DFCu;
            goto label_190dfc;
        }
    }
    ctx->pc = 0x190DACu;
label_190dac:
    // 0x190dac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190db0:
    // 0x190db0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x190db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_190db4:
    // 0x190db4: 0xc052cfc  jal         func_14B3F0
label_190db8:
    if (ctx->pc == 0x190DB8u) {
        ctx->pc = 0x190DB8u;
            // 0x190db8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190DBCu;
        goto label_190dbc;
    }
    ctx->pc = 0x190DB4u;
    SET_GPR_U32(ctx, 31, 0x190DBCu);
    ctx->pc = 0x190DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190DB4u;
            // 0x190db8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DBCu; }
        if (ctx->pc != 0x190DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DBCu; }
        if (ctx->pc != 0x190DBCu) { return; }
    }
    ctx->pc = 0x190DBCu;
label_190dbc:
    // 0x190dbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_190dc0:
    if (ctx->pc == 0x190DC0u) {
        ctx->pc = 0x190DC4u;
        goto label_190dc4;
    }
    ctx->pc = 0x190DBCu;
    {
        const bool branch_taken_0x190dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dbc) {
            ctx->pc = 0x190DFCu;
            goto label_190dfc;
        }
    }
    ctx->pc = 0x190DC4u;
label_190dc4:
    // 0x190dc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190dc8:
    // 0x190dc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x190dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_190dcc:
    // 0x190dcc: 0xc052cfc  jal         func_14B3F0
label_190dd0:
    if (ctx->pc == 0x190DD0u) {
        ctx->pc = 0x190DD0u;
            // 0x190dd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190DD4u;
        goto label_190dd4;
    }
    ctx->pc = 0x190DCCu;
    SET_GPR_U32(ctx, 31, 0x190DD4u);
    ctx->pc = 0x190DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190DCCu;
            // 0x190dd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DD4u; }
        if (ctx->pc != 0x190DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DD4u; }
        if (ctx->pc != 0x190DD4u) { return; }
    }
    ctx->pc = 0x190DD4u;
label_190dd4:
    // 0x190dd4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_190dd8:
    if (ctx->pc == 0x190DD8u) {
        ctx->pc = 0x190DDCu;
        goto label_190ddc;
    }
    ctx->pc = 0x190DD4u;
    {
        const bool branch_taken_0x190dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dd4) {
            ctx->pc = 0x190DFCu;
            goto label_190dfc;
        }
    }
    ctx->pc = 0x190DDCu;
label_190ddc:
    // 0x190ddc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190de0:
    // 0x190de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190de4:
    // 0x190de4: 0xc052cfc  jal         func_14B3F0
label_190de8:
    if (ctx->pc == 0x190DE8u) {
        ctx->pc = 0x190DE8u;
            // 0x190de8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190DECu;
        goto label_190dec;
    }
    ctx->pc = 0x190DE4u;
    SET_GPR_U32(ctx, 31, 0x190DECu);
    ctx->pc = 0x190DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190DE4u;
            // 0x190de8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DECu; }
        if (ctx->pc != 0x190DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DECu; }
        if (ctx->pc != 0x190DECu) { return; }
    }
    ctx->pc = 0x190DECu;
label_190dec:
    // 0x190dec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_190df0:
    if (ctx->pc == 0x190DF0u) {
        ctx->pc = 0x190DF4u;
        goto label_190df4;
    }
    ctx->pc = 0x190DECu;
    {
        const bool branch_taken_0x190dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dec) {
            ctx->pc = 0x190DFCu;
            goto label_190dfc;
        }
    }
    ctx->pc = 0x190DF4u;
label_190df4:
    // 0x190df4: 0x24025d44  addiu       $v0, $zero, 0x5D44
    ctx->pc = 0x190df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23876));
label_190df8:
    // 0x190df8: 0xaf828ad8  sw          $v0, -0x7528($gp)
    ctx->pc = 0x190df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937304), GPR_U32(ctx, 2));
label_190dfc:
    // 0x190dfc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190e00:
    // 0x190e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190e04:
    // 0x190e04: 0xc052c78  jal         func_14B1E0
label_190e08:
    if (ctx->pc == 0x190E08u) {
        ctx->pc = 0x190E08u;
            // 0x190e08: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190E0Cu;
        goto label_190e0c;
    }
    ctx->pc = 0x190E04u;
    SET_GPR_U32(ctx, 31, 0x190E0Cu);
    ctx->pc = 0x190E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E04u;
            // 0x190e08: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1E0u;
    if (runtime->hasFunction(0x14B1E0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E0Cu; }
        if (ctx->pc != 0x190E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugKeyLock__8CGamePadFi_0x14b1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E0Cu; }
        if (ctx->pc != 0x190E0Cu) { return; }
    }
    ctx->pc = 0x190E0Cu;
label_190e0c:
    // 0x190e0c: 0xc040cc0  jal         func_103300
label_190e10:
    if (ctx->pc == 0x190E10u) {
        ctx->pc = 0x190E10u;
            // 0x190e10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190E14u;
        goto label_190e14;
    }
    ctx->pc = 0x190E0Cu;
    SET_GPR_U32(ctx, 31, 0x190E14u);
    ctx->pc = 0x190E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E0Cu;
            // 0x190e10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E14u; }
        if (ctx->pc != 0x190E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E14u; }
        if (ctx->pc != 0x190E14u) { return; }
    }
    ctx->pc = 0x190E14u;
label_190e14:
    // 0x190e14: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190e18:
    // 0x190e18: 0xc052a4c  jal         func_14A930
label_190e1c:
    if (ctx->pc == 0x190E1Cu) {
        ctx->pc = 0x190E1Cu;
            // 0x190e1c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190E20u;
        goto label_190e20;
    }
    ctx->pc = 0x190E18u;
    SET_GPR_U32(ctx, 31, 0x190E20u);
    ctx->pc = 0x190E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E18u;
            // 0x190e1c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E20u; }
        if (ctx->pc != 0x190E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E20u; }
        if (ctx->pc != 0x190E20u) { return; }
    }
    ctx->pc = 0x190E20u;
label_190e20:
    // 0x190e20: 0xc040cc0  jal         func_103300
label_190e24:
    if (ctx->pc == 0x190E24u) {
        ctx->pc = 0x190E24u;
            // 0x190e24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190E28u;
        goto label_190e28;
    }
    ctx->pc = 0x190E20u;
    SET_GPR_U32(ctx, 31, 0x190E28u);
    ctx->pc = 0x190E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E20u;
            // 0x190e24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E28u; }
        if (ctx->pc != 0x190E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E28u; }
        if (ctx->pc != 0x190E28u) { return; }
    }
    ctx->pc = 0x190E28u;
label_190e28:
    // 0x190e28: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190e2c:
    // 0x190e2c: 0xc052a4c  jal         func_14A930
label_190e30:
    if (ctx->pc == 0x190E30u) {
        ctx->pc = 0x190E30u;
            // 0x190e30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190E34u;
        goto label_190e34;
    }
    ctx->pc = 0x190E2Cu;
    SET_GPR_U32(ctx, 31, 0x190E34u);
    ctx->pc = 0x190E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E2Cu;
            // 0x190e30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E34u; }
        if (ctx->pc != 0x190E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E34u; }
        if (ctx->pc != 0x190E34u) { return; }
    }
    ctx->pc = 0x190E34u;
label_190e34:
    // 0x190e34: 0xc040cc0  jal         func_103300
label_190e38:
    if (ctx->pc == 0x190E38u) {
        ctx->pc = 0x190E38u;
            // 0x190e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190E3Cu;
        goto label_190e3c;
    }
    ctx->pc = 0x190E34u;
    SET_GPR_U32(ctx, 31, 0x190E3Cu);
    ctx->pc = 0x190E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E34u;
            // 0x190e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E3Cu; }
        if (ctx->pc != 0x190E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E3Cu; }
        if (ctx->pc != 0x190E3Cu) { return; }
    }
    ctx->pc = 0x190E3Cu;
label_190e3c:
    // 0x190e3c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_190e40:
    // 0x190e40: 0xc052a4c  jal         func_14A930
label_190e44:
    if (ctx->pc == 0x190E44u) {
        ctx->pc = 0x190E44u;
            // 0x190e44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x190E48u;
        goto label_190e48;
    }
    ctx->pc = 0x190E40u;
    SET_GPR_U32(ctx, 31, 0x190E48u);
    ctx->pc = 0x190E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E40u;
            // 0x190e44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E48u; }
        if (ctx->pc != 0x190E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E48u; }
        if (ctx->pc != 0x190E48u) { return; }
    }
    ctx->pc = 0x190E48u;
label_190e48:
    // 0x190e48: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x190e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
label_190e4c:
    // 0x190e4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x190e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_190e50:
    // 0x190e50: 0xc0517c0  jal         func_145F00
label_190e54:
    if (ctx->pc == 0x190E54u) {
        ctx->pc = 0x190E54u;
            // 0x190e54: 0x24847140  addiu       $a0, $a0, 0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28992));
        ctx->pc = 0x190E58u;
        goto label_190e58;
    }
    ctx->pc = 0x190E50u;
    SET_GPR_U32(ctx, 31, 0x190E58u);
    ctx->pc = 0x190E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E50u;
            // 0x190e54: 0x24847140  addiu       $a0, $a0, 0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E58u; }
        if (ctx->pc != 0x190E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetUserVuProg__FPP1i_0x145f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E58u; }
        if (ctx->pc != 0x190E58u) { return; }
    }
    ctx->pc = 0x190E58u;
label_190e58:
    // 0x190e58: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_190e5c:
    // 0x190e5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190e60:
    // 0x190e60: 0xc0517c4  jal         func_145F10
label_190e64:
    if (ctx->pc == 0x190E64u) {
        ctx->pc = 0x190E64u;
            // 0x190e64: 0x24a55f50  addiu       $a1, $a1, 0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24400));
        ctx->pc = 0x190E68u;
        goto label_190e68;
    }
    ctx->pc = 0x190E60u;
    SET_GPR_U32(ctx, 31, 0x190E68u);
    ctx->pc = 0x190E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E60u;
            // 0x190e64: 0x24a55f50  addiu       $a1, $a1, 0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F10u;
    if (runtime->hasFunction(0x145F10u)) {
        auto targetFn = runtime->lookupFunction(0x145F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E68u; }
        if (ctx->pc != 0x190E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetUserVuProgAdr__FiP1_0x145f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E68u; }
        if (ctx->pc != 0x190E68u) { return; }
    }
    ctx->pc = 0x190E68u;
label_190e68:
    // 0x190e68: 0xc06428c  jal         func_190A30
label_190e6c:
    if (ctx->pc == 0x190E6Cu) {
        ctx->pc = 0x190E6Cu;
            // 0x190e6c: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->pc = 0x190E70u;
        goto label_190e70;
    }
    ctx->pc = 0x190E68u;
    SET_GPR_U32(ctx, 31, 0x190E70u);
    ctx->pc = 0x190E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E68u;
            // 0x190e6c: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190A30u;
    if (runtime->hasFunction(0x190A30u)) {
        auto targetFn = runtime->lookupFunction(0x190A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E70u; }
        if (ctx->pc != 0x190E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPadTable__Fi_0x190a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E70u; }
        if (ctx->pc != 0x190E70u) { return; }
    }
    ctx->pc = 0x190E70u;
label_190e70:
    // 0x190e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190e74:
    // 0x190e74: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
label_190e78:
    // 0x190e78: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x190e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
label_190e7c:
    // 0x190e7c: 0xc065550  jal         func_195540
label_190e80:
    if (ctx->pc == 0x190E80u) {
        ctx->pc = 0x190E80u;
            // 0x190e80: 0xaf828ad0  sw          $v0, -0x7530($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U32(ctx, 2));
        ctx->pc = 0x190E84u;
        goto label_190e84;
    }
    ctx->pc = 0x190E7Cu;
    SET_GPR_U32(ctx, 31, 0x190E84u);
    ctx->pc = 0x190E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E7Cu;
            // 0x190e80: 0xaf828ad0  sw          $v0, -0x7530($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195540u;
    if (runtime->hasFunction(0x195540u)) {
        auto targetFn = runtime->lookupFunction(0x195540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E84u; }
        if (ctx->pc != 0x190E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadData__9CGameDataFv_0x195540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E84u; }
        if (ctx->pc != 0x190E84u) { return; }
    }
    ctx->pc = 0x190E84u;
label_190e84:
    // 0x190e84: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_190e88:
    // 0x190e88: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x190e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
label_190e8c:
    // 0x190e8c: 0xc06558c  jal         func_195630
label_190e90:
    if (ctx->pc == 0x190E90u) {
        ctx->pc = 0x190E90u;
            // 0x190e90: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->pc = 0x190E94u;
        goto label_190e94;
    }
    ctx->pc = 0x190E8Cu;
    SET_GPR_U32(ctx, 31, 0x190E94u);
    ctx->pc = 0x190E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E8Cu;
            // 0x190e90: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195630u;
    if (runtime->hasFunction(0x195630u)) {
        auto targetFn = runtime->lookupFunction(0x195630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E94u; }
        if (ctx->pc != 0x190E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadItemSystemMes__9CGameDataFi_0x195630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E94u; }
        if (ctx->pc != 0x190E94u) { return; }
    }
    ctx->pc = 0x190E94u;
label_190e94:
    // 0x190e94: 0xc0659f0  jal         func_1967C0
label_190e98:
    if (ctx->pc == 0x190E98u) {
        ctx->pc = 0x190E9Cu;
        goto label_190e9c;
    }
    ctx->pc = 0x190E94u;
    SET_GPR_U32(ctx, 31, 0x190E9Cu);
    ctx->pc = 0x1967C0u;
    if (runtime->hasFunction(0x1967C0u)) {
        auto targetFn = runtime->lookupFunction(0x1967C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E9Cu; }
        if (ctx->pc != 0x190E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSystemMes__Fv_0x1967c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E9Cu; }
        if (ctx->pc != 0x190E9Cu) { return; }
    }
    ctx->pc = 0x190E9Cu;
label_190e9c:
    // 0x190e9c: 0xc065a20  jal         func_196880
label_190ea0:
    if (ctx->pc == 0x190EA0u) {
        ctx->pc = 0x190EA4u;
        goto label_190ea4;
    }
    ctx->pc = 0x190E9Cu;
    SET_GPR_U32(ctx, 31, 0x190EA4u);
    ctx->pc = 0x196880u;
    if (runtime->hasFunction(0x196880u)) {
        auto targetFn = runtime->lookupFunction(0x196880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EA4u; }
        if (ctx->pc != 0x190EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSystemMes__Fv_0x196880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EA4u; }
        if (ctx->pc != 0x190EA4u) { return; }
    }
    ctx->pc = 0x190EA4u;
label_190ea4:
    // 0x190ea4: 0xc064bf0  jal         func_192FC0
label_190ea8:
    if (ctx->pc == 0x190EA8u) {
        ctx->pc = 0x190EACu;
        goto label_190eac;
    }
    ctx->pc = 0x190EA4u;
    SET_GPR_U32(ctx, 31, 0x190EACu);
    ctx->pc = 0x192FC0u;
    if (runtime->hasFunction(0x192FC0u)) {
        auto targetFn = runtime->lookupFunction(0x192FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EACu; }
        if (ctx->pc != 0x190EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTexture__Fv_0x192fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EACu; }
        if (ctx->pc != 0x190EACu) { return; }
    }
    ctx->pc = 0x190EACu;
label_190eac:
    // 0x190eac: 0xc0b61bc  jal         func_2D86F0
label_190eb0:
    if (ctx->pc == 0x190EB0u) {
        ctx->pc = 0x190EB4u;
        goto label_190eb4;
    }
    ctx->pc = 0x190EACu;
    SET_GPR_U32(ctx, 31, 0x190EB4u);
    ctx->pc = 0x2D86F0u;
    if (runtime->hasFunction(0x2D86F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D86F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EB4u; }
        if (ctx->pc != 0x190EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGaijiImg__Fv_0x2d86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EB4u; }
        if (ctx->pc != 0x190EB4u) { return; }
    }
    ctx->pc = 0x190EB4u;
label_190eb4:
    // 0x190eb4: 0xc0b50d0  jal         func_2D4340
label_190eb8:
    if (ctx->pc == 0x190EB8u) {
        ctx->pc = 0x190EBCu;
        goto label_190ebc;
    }
    ctx->pc = 0x190EB4u;
    SET_GPR_U32(ctx, 31, 0x190EBCu);
    ctx->pc = 0x2D4340u;
    if (runtime->hasFunction(0x2D4340u)) {
        auto targetFn = runtime->lookupFunction(0x2D4340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EBCu; }
        if (ctx->pc != 0x190EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTblBin__Fv_0x2d4340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EBCu; }
        if (ctx->pc != 0x190EBCu) { return; }
    }
    ctx->pc = 0x190EBCu;
label_190ebc:
    // 0x190ebc: 0xc0b61dc  jal         func_2D8770
label_190ec0:
    if (ctx->pc == 0x190EC0u) {
        ctx->pc = 0x190EC4u;
        goto label_190ec4;
    }
    ctx->pc = 0x190EBCu;
    SET_GPR_U32(ctx, 31, 0x190EC4u);
    ctx->pc = 0x2D8770u;
    if (runtime->hasFunction(0x2D8770u)) {
        auto targetFn = runtime->lookupFunction(0x2D8770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EC4u; }
        if (ctx->pc != 0x190EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFontTex2Img__Fv_0x2d8770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EC4u; }
        if (ctx->pc != 0x190EC4u) { return; }
    }
    ctx->pc = 0x190EC4u;
label_190ec4:
    // 0x190ec4: 0xc0aac94  jal         func_2AB250
label_190ec8:
    if (ctx->pc == 0x190EC8u) {
        ctx->pc = 0x190ECCu;
        goto label_190ecc;
    }
    ctx->pc = 0x190EC4u;
    SET_GPR_U32(ctx, 31, 0x190ECCu);
    ctx->pc = 0x2AB250u;
    if (runtime->hasFunction(0x2AB250u)) {
        auto targetFn = runtime->lookupFunction(0x2AB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190ECCu; }
        if (ctx->pc != 0x190ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadNPCCfg__Fv_0x2ab250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190ECCu; }
        if (ctx->pc != 0x190ECCu) { return; }
    }
    ctx->pc = 0x190ECCu;
label_190ecc:
    // 0x190ecc: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x190eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_190ed0:
    // 0x190ed0: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x190ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
label_190ed4:
    // 0x190ed4: 0x248417e0  addiu       $a0, $a0, 0x17E0
    ctx->pc = 0x190ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6112));
label_190ed8:
    // 0x190ed8: 0x24a5a0e0  addiu       $a1, $a1, -0x5F20
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942944));
label_190edc:
    // 0x190edc: 0xc04e79c  jal         func_139E70
label_190ee0:
    if (ctx->pc == 0x190EE0u) {
        ctx->pc = 0x190EE0u;
            // 0x190ee0: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->pc = 0x190EE4u;
        goto label_190ee4;
    }
    ctx->pc = 0x190EDCu;
    SET_GPR_U32(ctx, 31, 0x190EE4u);
    ctx->pc = 0x190EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190EDCu;
            // 0x190ee0: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EE4u; }
        if (ctx->pc != 0x190EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EE4u; }
        if (ctx->pc != 0x190EE4u) { return; }
    }
    ctx->pc = 0x190EE4u;
label_190ee4:
    // 0x190ee4: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_190ee8:
    // 0x190ee8: 0xc0c6950  jal         func_31A540
label_190eec:
    if (ctx->pc == 0x190EECu) {
        ctx->pc = 0x190EECu;
            // 0x190eec: 0x248417e0  addiu       $a0, $a0, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6112));
        ctx->pc = 0x190EF0u;
        goto label_190ef0;
    }
    ctx->pc = 0x190EE8u;
    SET_GPR_U32(ctx, 31, 0x190EF0u);
    ctx->pc = 0x190EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190EE8u;
            // 0x190eec: 0x248417e0  addiu       $a0, $a0, 0x17E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A540u;
    if (runtime->hasFunction(0x31A540u)) {
        auto targetFn = runtime->lookupFunction(0x31A540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EF0u; }
        if (ctx->pc != 0x190EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameInfo__FP9mgCMemory_0x31a540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EF0u; }
        if (ctx->pc != 0x190EF0u) { return; }
    }
    ctx->pc = 0x190EF0u;
label_190ef0:
    // 0x190ef0: 0xc0c26d4  jal         func_309B50
label_190ef4:
    if (ctx->pc == 0x190EF4u) {
        ctx->pc = 0x190EF8u;
        goto label_190ef8;
    }
    ctx->pc = 0x190EF0u;
    SET_GPR_U32(ctx, 31, 0x190EF8u);
    ctx->pc = 0x309B50u;
    if (runtime->hasFunction(0x309B50u)) {
        auto targetFn = runtime->lookupFunction(0x309B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EF8u; }
        if (ctx->pc != 0x190EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPauseData__Fv_0x309b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EF8u; }
        if (ctx->pc != 0x190EF8u) { return; }
    }
    ctx->pc = 0x190EF8u;
label_190ef8:
    // 0x190ef8: 0xc064228  jal         func_1908A0
label_190efc:
    if (ctx->pc == 0x190EFCu) {
        ctx->pc = 0x190F00u;
        goto label_190f00;
    }
    ctx->pc = 0x190EF8u;
    SET_GPR_U32(ctx, 31, 0x190F00u);
    ctx->pc = 0x1908A0u;
    if (runtime->hasFunction(0x1908A0u)) {
        auto targetFn = runtime->lookupFunction(0x1908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F00u; }
        if (ctx->pc != 0x190F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveData__Fv_0x1908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F00u; }
        if (ctx->pc != 0x190F00u) { return; }
    }
    ctx->pc = 0x190F00u;
label_190f00:
    // 0x190f00: 0x8f828af4  lw          $v0, -0x750C($gp)
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937332)));
label_190f04:
    // 0x190f04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_190f08:
    if (ctx->pc == 0x190F08u) {
        ctx->pc = 0x190F08u;
            // 0x190f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190F0Cu;
        goto label_190f0c;
    }
    ctx->pc = 0x190F04u;
    {
        const bool branch_taken_0x190f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F04u;
            // 0x190f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f04) {
            ctx->pc = 0x190F18u;
            goto label_190f18;
        }
    }
    ctx->pc = 0x190F0Cu;
label_190f0c:
    // 0x190f0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x190f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_190f10:
    // 0x190f10: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x190f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_190f14:
    // 0x190f14: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x190f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_190f18:
    // 0x190f18: 0xc078150  jal         func_1E0540
label_190f1c:
    if (ctx->pc == 0x190F1Cu) {
        ctx->pc = 0x190F1Cu;
            // 0x190f1c: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->pc = 0x190F20u;
        goto label_190f20;
    }
    ctx->pc = 0x190F18u;
    SET_GPR_U32(ctx, 31, 0x190F20u);
    ctx->pc = 0x190F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F18u;
            // 0x190f1c: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0540u;
    if (runtime->hasFunction(0x1E0540u)) {
        auto targetFn = runtime->lookupFunction(0x1E0540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F20u; }
        if (ctx->pc != 0x190F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMonsterLanguage__Fi_0x1e0540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F20u; }
        if (ctx->pc != 0x190F20u) { return; }
    }
    ctx->pc = 0x190F20u;
label_190f20:
    // 0x190f20: 0xc06428c  jal         func_190A30
label_190f24:
    if (ctx->pc == 0x190F24u) {
        ctx->pc = 0x190F24u;
            // 0x190f24: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->pc = 0x190F28u;
        goto label_190f28;
    }
    ctx->pc = 0x190F20u;
    SET_GPR_U32(ctx, 31, 0x190F28u);
    ctx->pc = 0x190F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F20u;
            // 0x190f24: 0x8f848ad0  lw          $a0, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190A30u;
    if (runtime->hasFunction(0x190A30u)) {
        auto targetFn = runtime->lookupFunction(0x190A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F28u; }
        if (ctx->pc != 0x190F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPadTable__Fi_0x190a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F28u; }
        if (ctx->pc != 0x190F28u) { return; }
    }
    ctx->pc = 0x190F28u;
label_190f28:
    // 0x190f28: 0xc067b70  jal         func_19EDC0
label_190f2c:
    if (ctx->pc == 0x190F2Cu) {
        ctx->pc = 0x190F30u;
        goto label_190f30;
    }
    ctx->pc = 0x190F28u;
    SET_GPR_U32(ctx, 31, 0x190F30u);
    ctx->pc = 0x19EDC0u;
    if (runtime->hasFunction(0x19EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x19EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F30u; }
        if (ctx->pc != 0x190F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LanguageEquipChange__Fv_0x19edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F30u; }
        if (ctx->pc != 0x190F30u) { return; }
    }
    ctx->pc = 0x190F30u;
label_190f30:
    // 0x190f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190f34:
    // 0x190f34: 0xc0686e0  jal         func_1A1B80
label_190f38:
    if (ctx->pc == 0x190F38u) {
        ctx->pc = 0x190F38u;
            // 0x190f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190F3Cu;
        goto label_190f3c;
    }
    ctx->pc = 0x190F34u;
    SET_GPR_U32(ctx, 31, 0x190F3Cu);
    ctx->pc = 0x190F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F34u;
            // 0x190f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B80u;
    if (runtime->hasFunction(0x1A1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F3Cu; }
        if (ctx->pc != 0x190F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugGetItem__FP16CUserDataManageri_0x1a1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F3Cu; }
        if (ctx->pc != 0x190F3Cu) { return; }
    }
    ctx->pc = 0x190F3Cu;
label_190f3c:
    // 0x190f3c: 0xc0632fc  jal         func_18CBF0
label_190f40:
    if (ctx->pc == 0x190F40u) {
        ctx->pc = 0x190F40u;
            // 0x190f40: 0xaf808ae8  sw          $zero, -0x7518($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 0));
        ctx->pc = 0x190F44u;
        goto label_190f44;
    }
    ctx->pc = 0x190F3Cu;
    SET_GPR_U32(ctx, 31, 0x190F44u);
    ctx->pc = 0x190F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F3Cu;
            // 0x190f40: 0xaf808ae8  sw          $zero, -0x7518($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CBF0u;
    if (runtime->hasFunction(0x18CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F44u; }
        if (ctx->pc != 0x190F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitMngr__Fv_0x18cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F44u; }
        if (ctx->pc != 0x190F44u) { return; }
    }
    ctx->pc = 0x190F44u;
label_190f44:
    // 0x190f44: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x190f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_190f48:
    // 0x190f48: 0xc0a96cc  jal         func_2A5B30
label_190f4c:
    if (ctx->pc == 0x190F4Cu) {
        ctx->pc = 0x190F4Cu;
            // 0x190f4c: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->pc = 0x190F50u;
        goto label_190f50;
    }
    ctx->pc = 0x190F48u;
    SET_GPR_U32(ctx, 31, 0x190F50u);
    ctx->pc = 0x190F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F48u;
            // 0x190f4c: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B30u;
    if (runtime->hasFunction(0x2A5B30u)) {
        auto targetFn = runtime->lookupFunction(0x2A5B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F50u; }
        if (ctx->pc != 0x190F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSnd__6CSceneFv_0x2a5b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F50u; }
        if (ctx->pc != 0x190F50u) { return; }
    }
    ctx->pc = 0x190F50u;
label_190f50:
    // 0x190f50: 0xc0521d8  jal         func_148760
label_190f54:
    if (ctx->pc == 0x190F54u) {
        ctx->pc = 0x190F54u;
            // 0x190f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190F58u;
        goto label_190f58;
    }
    ctx->pc = 0x190F50u;
    SET_GPR_U32(ctx, 31, 0x190F58u);
    ctx->pc = 0x190F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F50u;
            // 0x190f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F58u; }
        if (ctx->pc != 0x190F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F58u; }
        if (ctx->pc != 0x190F58u) { return; }
    }
    ctx->pc = 0x190F58u;
label_190f58:
    // 0x190f58: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
label_190f5c:
    // 0x190f5c: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
label_190f60:
    // 0x190f60: 0x2484a0b0  addiu       $a0, $a0, -0x5F50
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942896));
label_190f64:
    // 0x190f64: 0x24a587b0  addiu       $a1, $a1, -0x7850
    ctx->pc = 0x190f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
label_190f68:
    // 0x190f68: 0xc04e79c  jal         func_139E70
label_190f6c:
    if (ctx->pc == 0x190F6Cu) {
        ctx->pc = 0x190F6Cu;
            // 0x190f6c: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x190F70u;
        goto label_190f70;
    }
    ctx->pc = 0x190F68u;
    SET_GPR_U32(ctx, 31, 0x190F70u);
    ctx->pc = 0x190F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F68u;
            // 0x190f6c: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F70u; }
        if (ctx->pc != 0x190F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F70u; }
        if (ctx->pc != 0x190F70u) { return; }
    }
    ctx->pc = 0x190F70u;
label_190f70:
    // 0x190f70: 0x3c0101df  lui         $at, 0x1DF
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)479 << 16));
label_190f74:
    // 0x190f74: 0xac20a0d4  sw          $zero, -0x5F2C($at)
    ctx->pc = 0x190f74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942932), GPR_U32(ctx, 0));
label_190f78:
    // 0x190f78: 0x3c0101df  lui         $at, 0x1DF
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)479 << 16));
label_190f7c:
    // 0x190f7c: 0xc06423c  jal         func_1908F0
label_190f80:
    if (ctx->pc == 0x190F80u) {
        ctx->pc = 0x190F80u;
            // 0x190f80: 0xac20a0cc  sw          $zero, -0x5F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 0));
        ctx->pc = 0x190F84u;
        goto label_190f84;
    }
    ctx->pc = 0x190F7Cu;
    SET_GPR_U32(ctx, 31, 0x190F84u);
    ctx->pc = 0x190F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F7Cu;
            // 0x190f80: 0xac20a0cc  sw          $zero, -0x5F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F84u; }
        if (ctx->pc != 0x190F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F84u; }
        if (ctx->pc != 0x190F84u) { return; }
    }
    ctx->pc = 0x190F84u;
label_190f84:
    // 0x190f84: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x190f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_190f88:
    // 0x190f88: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x190f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_190f8c:
    // 0x190f8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x190f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_190f90:
    // 0x190f90: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190f94:
    // 0x190f94: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_190f98:
    if (ctx->pc == 0x190F98u) {
        ctx->pc = 0x190F98u;
            // 0x190f98: 0x3223003f  andi        $v1, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->pc = 0x190F9Cu;
        goto label_190f9c;
    }
    ctx->pc = 0x190F94u;
    {
        const bool branch_taken_0x190f94 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x190F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F94u;
            // 0x190f98: 0x3223003f  andi        $v1, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f94) {
            ctx->pc = 0x190FA8u;
            goto label_190fa8;
        }
    }
    ctx->pc = 0x190F9Cu;
label_190f9c:
    // 0x190f9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_190fa0:
    if (ctx->pc == 0x190FA0u) {
        ctx->pc = 0x190FA4u;
        goto label_190fa4;
    }
    ctx->pc = 0x190F9Cu;
    {
        const bool branch_taken_0x190f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f9c) {
            ctx->pc = 0x190FA8u;
            goto label_190fa8;
        }
    }
    ctx->pc = 0x190FA4u;
label_190fa4:
    // 0x190fa4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x190fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_190fa8:
    // 0x190fa8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_190fac:
    if (ctx->pc == 0x190FACu) {
        ctx->pc = 0x190FACu;
            // 0x190fac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x190FB0u;
        goto label_190fb0;
    }
    ctx->pc = 0x190FA8u;
    {
        const bool branch_taken_0x190fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190FA8u;
            // 0x190fac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fa8) {
            ctx->pc = 0x190FD4u;
            goto label_190fd4;
        }
    }
    ctx->pc = 0x190FB0u;
label_190fb0:
    // 0x190fb0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_190fb4:
    // 0x190fb4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x190fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190fb8:
    // 0x190fb8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_190fbc:
    if (ctx->pc == 0x190FBCu) {
        ctx->pc = 0x190FBCu;
            // 0x190fbc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x190FC0u;
        goto label_190fc0;
    }
    ctx->pc = 0x190FB8u;
    {
        const bool branch_taken_0x190fb8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x190FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190FB8u;
            // 0x190fbc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fb8) {
            ctx->pc = 0x190FC8u;
            goto label_190fc8;
        }
    }
    ctx->pc = 0x190FC0u;
label_190fc0:
    // 0x190fc0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_190fc4:
    // 0x190fc4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x190fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_190fc8:
    // 0x190fc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_190fcc:
    // 0x190fcc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_190fd0:
    // 0x190fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_190fd4:
    // 0x190fd4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x190fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_190fd8:
    // 0x190fd8: 0x24844b60  addiu       $a0, $a0, 0x4B60
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
label_190fdc:
    // 0x190fdc: 0xaf828ac4  sw          $v0, -0x753C($gp)
    ctx->pc = 0x190fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937284), GPR_U32(ctx, 2));
label_190fe0:
    // 0x190fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190fe4:
    // 0x190fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190fe8:
    // 0x190fe8: 0xc0524dc  jal         func_149370
label_190fec:
    if (ctx->pc == 0x190FECu) {
        ctx->pc = 0x190FECu;
            // 0x190fec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190FF0u;
        goto label_190ff0;
    }
    ctx->pc = 0x190FE8u;
    SET_GPR_U32(ctx, 31, 0x190FF0u);
    ctx->pc = 0x190FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190FE8u;
            // 0x190fec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190FF0u; }
        if (ctx->pc != 0x190FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190FF0u; }
        if (ctx->pc != 0x190FF0u) { return; }
    }
    ctx->pc = 0x190FF0u;
label_190ff0:
    // 0x190ff0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_190ff4:
    if (ctx->pc == 0x190FF4u) {
        ctx->pc = 0x190FF8u;
        goto label_190ff8;
    }
    ctx->pc = 0x190FF0u;
    {
        const bool branch_taken_0x190ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ff0) {
            ctx->pc = 0x191010u;
            goto label_191010;
        }
    }
    ctx->pc = 0x190FF8u;
label_190ff8:
    // 0x190ff8: 0x3c0601df  lui         $a2, 0x1DF
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)479 << 16));
label_190ffc:
    // 0x190ffc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x190ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_191000:
    // 0x191000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191004:
    // 0x191004: 0xc06368c  jal         func_18DA30
label_191008:
    if (ctx->pc == 0x191008u) {
        ctx->pc = 0x191008u;
            // 0x191008: 0x24c6a0b0  addiu       $a2, $a2, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942896));
        ctx->pc = 0x19100Cu;
        goto label_19100c;
    }
    ctx->pc = 0x191004u;
    SET_GPR_U32(ctx, 31, 0x19100Cu);
    ctx->pc = 0x191008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191004u;
            // 0x191008: 0x24c6a0b0  addiu       $a2, $a2, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19100Cu; }
        if (ctx->pc != 0x19100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19100Cu; }
        if (ctx->pc != 0x19100Cu) { return; }
    }
    ctx->pc = 0x19100Cu;
label_19100c:
    // 0x19100c: 0xaf828ac4  sw          $v0, -0x753C($gp)
    ctx->pc = 0x19100cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937284), GPR_U32(ctx, 2));
label_191010:
    // 0x191010: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x191010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_191014:
    // 0x191014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191018:
    // 0x191018: 0x24844b70  addiu       $a0, $a0, 0x4B70
    ctx->pc = 0x191018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19312));
label_19101c:
    // 0x19101c: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_191020:
    // 0x191020: 0xc0524dc  jal         func_149370
label_191024:
    if (ctx->pc == 0x191024u) {
        ctx->pc = 0x191024u;
            // 0x191024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191028u;
        goto label_191028;
    }
    ctx->pc = 0x191020u;
    SET_GPR_U32(ctx, 31, 0x191028u);
    ctx->pc = 0x191024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191020u;
            // 0x191024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191028u; }
        if (ctx->pc != 0x191028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191028u; }
        if (ctx->pc != 0x191028u) { return; }
    }
    ctx->pc = 0x191028u;
label_191028:
    // 0x191028: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19102c:
    if (ctx->pc == 0x19102Cu) {
        ctx->pc = 0x191030u;
        goto label_191030;
    }
    ctx->pc = 0x191028u;
    {
        const bool branch_taken_0x191028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191028) {
            ctx->pc = 0x191044u;
            goto label_191044;
        }
    }
    ctx->pc = 0x191030u;
label_191030:
    // 0x191030: 0x8fa601ac  lw          $a2, 0x1AC($sp)
    ctx->pc = 0x191030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_191034:
    // 0x191034: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_191038:
    // 0x191038: 0x24848260  addiu       $a0, $a0, -0x7DA0
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
label_19103c:
    // 0x19103c: 0xc0aa0c0  jal         func_2A8300
label_191040:
    if (ctx->pc == 0x191040u) {
        ctx->pc = 0x191040u;
            // 0x191040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191044u;
        goto label_191044;
    }
    ctx->pc = 0x19103Cu;
    SET_GPR_U32(ctx, 31, 0x191044u);
    ctx->pc = 0x191040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19103Cu;
            // 0x191040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8300u;
    if (runtime->hasFunction(0x2A8300u)) {
        auto targetFn = runtime->lookupFunction(0x2A8300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191044u; }
        if (ctx->pc != 0x191044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSndRevInfo__6CSceneFPci_0x2a8300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191044u; }
        if (ctx->pc != 0x191044u) { return; }
    }
    ctx->pc = 0x191044u;
label_191044:
    // 0x191044: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x191044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_191048:
    // 0x191048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19104c:
    // 0x19104c: 0x24844b80  addiu       $a0, $a0, 0x4B80
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19328));
label_191050:
    // 0x191050: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_191054:
    // 0x191054: 0xc0524dc  jal         func_149370
label_191058:
    if (ctx->pc == 0x191058u) {
        ctx->pc = 0x191058u;
            // 0x191058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19105Cu;
        goto label_19105c;
    }
    ctx->pc = 0x191054u;
    SET_GPR_U32(ctx, 31, 0x19105Cu);
    ctx->pc = 0x191058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191054u;
            // 0x191058: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19105Cu; }
        if (ctx->pc != 0x19105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19105Cu; }
        if (ctx->pc != 0x19105Cu) { return; }
    }
    ctx->pc = 0x19105Cu;
label_19105c:
    // 0x19105c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_191060:
    if (ctx->pc == 0x191060u) {
        ctx->pc = 0x191060u;
            // 0x191060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191064u;
        goto label_191064;
    }
    ctx->pc = 0x19105Cu;
    {
        const bool branch_taken_0x19105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19105Cu;
            // 0x191060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19105c) {
            ctx->pc = 0x19107Cu;
            goto label_19107c;
        }
    }
    ctx->pc = 0x191064u;
label_191064:
    // 0x191064: 0x8fa601ac  lw          $a2, 0x1AC($sp)
    ctx->pc = 0x191064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_191068:
    // 0x191068: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x191068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_19106c:
    // 0x19106c: 0x24848260  addiu       $a0, $a0, -0x7DA0
    ctx->pc = 0x19106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
label_191070:
    // 0x191070: 0xc0aa0c8  jal         func_2A8320
label_191074:
    if (ctx->pc == 0x191074u) {
        ctx->pc = 0x191074u;
            // 0x191074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191078u;
        goto label_191078;
    }
    ctx->pc = 0x191070u;
    SET_GPR_U32(ctx, 31, 0x191078u);
    ctx->pc = 0x191074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191070u;
            // 0x191074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8320u;
    if (runtime->hasFunction(0x2A8320u)) {
        auto targetFn = runtime->lookupFunction(0x2A8320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191078u; }
        if (ctx->pc != 0x191078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSndFileInfo__6CSceneFPci_0x2a8320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191078u; }
        if (ctx->pc != 0x191078u) { return; }
    }
    ctx->pc = 0x191078u;
label_191078:
    // 0x191078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19107c:
    // 0x19107c: 0xc0c63bc  jal         func_318EF0
label_191080:
    if (ctx->pc == 0x191080u) {
        ctx->pc = 0x191084u;
        goto label_191084;
    }
    ctx->pc = 0x19107Cu;
    SET_GPR_U32(ctx, 31, 0x191084u);
    ctx->pc = 0x318EF0u;
    if (runtime->hasFunction(0x318EF0u)) {
        auto targetFn = runtime->lookupFunction(0x318EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191084u; }
        if (ctx->pc != 0x191084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadHelpMes__FP1_0x318ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191084u; }
        if (ctx->pc != 0x191084u) { return; }
    }
    ctx->pc = 0x191084u;
label_191084:
    // 0x191084: 0x8f848ad0  lw          $a0, -0x7530($gp)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_191088:
    // 0x191088: 0xc0b4940  jal         func_2D2500
label_19108c:
    if (ctx->pc == 0x19108Cu) {
        ctx->pc = 0x19108Cu;
            // 0x19108c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191090u;
        goto label_191090;
    }
    ctx->pc = 0x191088u;
    SET_GPR_U32(ctx, 31, 0x191090u);
    ctx->pc = 0x19108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191088u;
            // 0x19108c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2500u;
    if (runtime->hasFunction(0x2D2500u)) {
        auto targetFn = runtime->lookupFunction(0x2D2500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191090u; }
        if (ctx->pc != 0x191090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapName__FiP1_0x2d2500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191090u; }
        if (ctx->pc != 0x191090u) { return; }
    }
    ctx->pc = 0x191090u;
label_191090:
    // 0x191090: 0x8f848ad0  lw          $a0, -0x7530($gp)
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_191094:
    // 0x191094: 0xc0aa908  jal         func_2AA420
label_191098:
    if (ctx->pc == 0x191098u) {
        ctx->pc = 0x191098u;
            // 0x191098: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19109Cu;
        goto label_19109c;
    }
    ctx->pc = 0x191094u;
    SET_GPR_U32(ctx, 31, 0x19109Cu);
    ctx->pc = 0x191098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191094u;
            // 0x191098: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA420u;
    if (runtime->hasFunction(0x2AA420u)) {
        auto targetFn = runtime->lookupFunction(0x2AA420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19109Cu; }
        if (ctx->pc != 0x19109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditAnalyzeData__FiP1_0x2aa420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19109Cu; }
        if (ctx->pc != 0x19109Cu) { return; }
    }
    ctx->pc = 0x19109Cu;
label_19109c:
    // 0x19109c: 0xc07fe1c  jal         func_1FF870
label_1910a0:
    if (ctx->pc == 0x1910A0u) {
        ctx->pc = 0x1910A4u;
        goto label_1910a4;
    }
    ctx->pc = 0x19109Cu;
    SET_GPR_U32(ctx, 31, 0x1910A4u);
    ctx->pc = 0x1FF870u;
    if (runtime->hasFunction(0x1FF870u)) {
        auto targetFn = runtime->lookupFunction(0x1FF870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910A4u; }
        if (ctx->pc != 0x1910A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFilePictureName__Fv_0x1ff870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910A4u; }
        if (ctx->pc != 0x1910A4u) { return; }
    }
    ctx->pc = 0x1910A4u;
label_1910a4:
    // 0x1910a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1910a8:
    // 0x1910a8: 0xc0b5750  jal         func_2D5D40
label_1910ac:
    if (ctx->pc == 0x1910ACu) {
        ctx->pc = 0x1910ACu;
            // 0x1910ac: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->pc = 0x1910B0u;
        goto label_1910b0;
    }
    ctx->pc = 0x1910A8u;
    SET_GPR_U32(ctx, 31, 0x1910B0u);
    ctx->pc = 0x1910ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910A8u;
            // 0x1910ac: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910B0u; }
        if (ctx->pc != 0x1910B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910B0u; }
        if (ctx->pc != 0x1910B0u) { return; }
    }
    ctx->pc = 0x1910B0u;
label_1910b0:
    // 0x1910b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1910b4:
    // 0x1910b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1910b8:
    // 0x1910b8: 0xc0b5720  jal         func_2D5C80
label_1910bc:
    if (ctx->pc == 0x1910BCu) {
        ctx->pc = 0x1910BCu;
            // 0x1910bc: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->pc = 0x1910C0u;
        goto label_1910c0;
    }
    ctx->pc = 0x1910B8u;
    SET_GPR_U32(ctx, 31, 0x1910C0u);
    ctx->pc = 0x1910BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910B8u;
            // 0x1910bc: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C80u;
    if (runtime->hasFunction(0x2D5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2D5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910C0u; }
        if (ctx->pc != 0x1910C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__5CFontFi_0x2d5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910C0u; }
        if (ctx->pc != 0x1910C0u) { return; }
    }
    ctx->pc = 0x1910C0u;
label_1910c0:
    // 0x1910c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1910c4:
    // 0x1910c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1910c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1910c8:
    // 0x1910c8: 0xc0b515c  jal         func_2D4570
label_1910cc:
    if (ctx->pc == 0x1910CCu) {
        ctx->pc = 0x1910CCu;
            // 0x1910cc: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->pc = 0x1910D0u;
        goto label_1910d0;
    }
    ctx->pc = 0x1910C8u;
    SET_GPR_U32(ctx, 31, 0x1910D0u);
    ctx->pc = 0x1910CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910C8u;
            // 0x1910cc: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910D0u; }
        if (ctx->pc != 0x1910D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910D0u; }
        if (ctx->pc != 0x1910D0u) { return; }
    }
    ctx->pc = 0x1910D0u;
label_1910d0:
    // 0x1910d0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1910d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1910d4:
    // 0x1910d4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1910d8:
    // 0x1910d8: 0x24848090  addiu       $a0, $a0, -0x7F70
    ctx->pc = 0x1910d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
label_1910dc:
    // 0x1910dc: 0xc0b512c  jal         func_2D44B0
label_1910e0:
    if (ctx->pc == 0x1910E0u) {
        ctx->pc = 0x1910E0u;
            // 0x1910e0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x1910E4u;
        goto label_1910e4;
    }
    ctx->pc = 0x1910DCu;
    SET_GPR_U32(ctx, 31, 0x1910E4u);
    ctx->pc = 0x1910E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910DCu;
            // 0x1910e0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910E4u; }
        if (ctx->pc != 0x1910E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910E4u; }
        if (ctx->pc != 0x1910E4u) { return; }
    }
    ctx->pc = 0x1910E4u;
label_1910e4:
    // 0x1910e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1910e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1910e8:
    // 0x1910e8: 0xc052df4  jal         func_14B7D0
label_1910ec:
    if (ctx->pc == 0x1910ECu) {
        ctx->pc = 0x1910ECu;
            // 0x1910ec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1910F0u;
        goto label_1910f0;
    }
    ctx->pc = 0x1910E8u;
    SET_GPR_U32(ctx, 31, 0x1910F0u);
    ctx->pc = 0x1910ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910E8u;
            // 0x1910ec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B7D0u;
    if (runtime->hasFunction(0x14B7D0u)) {
        auto targetFn = runtime->lookupFunction(0x14B7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910F0u; }
        if (ctx->pc != 0x1910F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateGamePadThread__FP8CGamePad_0x14b7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910F0u; }
        if (ctx->pc != 0x1910F0u) { return; }
    }
    ctx->pc = 0x1910F0u;
label_1910f0:
    // 0x1910f0: 0xc064df0  jal         func_1937C0
label_1910f4:
    if (ctx->pc == 0x1910F4u) {
        ctx->pc = 0x1910F4u;
            // 0x1910f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1910F8u;
        goto label_1910f8;
    }
    ctx->pc = 0x1910F0u;
    SET_GPR_U32(ctx, 31, 0x1910F8u);
    ctx->pc = 0x1910F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910F0u;
            // 0x1910f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1937C0u;
    if (runtime->hasFunction(0x1937C0u)) {
        auto targetFn = runtime->lookupFunction(0x1937C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910F8u; }
        if (ctx->pc != 0x1910F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGameConfig__FPc_0x1937c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910F8u; }
        if (ctx->pc != 0x1910F8u) { return; }
    }
    ctx->pc = 0x1910F8u;
label_1910f8:
    // 0x1910f8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_1910fc:
    // 0x1910fc: 0xc0521d4  jal         func_148750
label_191100:
    if (ctx->pc == 0x191100u) {
        ctx->pc = 0x191100u;
            // 0x191100: 0x2484b580  addiu       $a0, $a0, -0x4A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948224));
        ctx->pc = 0x191104u;
        goto label_191104;
    }
    ctx->pc = 0x1910FCu;
    SET_GPR_U32(ctx, 31, 0x191104u);
    ctx->pc = 0x191100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910FCu;
            // 0x191100: 0x2484b580  addiu       $a0, $a0, -0x4A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148750u;
    if (runtime->hasFunction(0x148750u)) {
        auto targetFn = runtime->lookupFunction(0x148750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191104u; }
        if (ctx->pc != 0x191104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIoErrCallBack__FPFi_i_0x148750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191104u; }
        if (ctx->pc != 0x191104u) { return; }
    }
    ctx->pc = 0x191104u;
label_191104:
    // 0x191104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191108:
    // 0x191108: 0xc0c28a4  jal         func_30A290
label_19110c:
    if (ctx->pc == 0x19110Cu) {
        ctx->pc = 0x19110Cu;
            // 0x19110c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191110u;
        goto label_191110;
    }
    ctx->pc = 0x191108u;
    SET_GPR_U32(ctx, 31, 0x191110u);
    ctx->pc = 0x19110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191108u;
            // 0x19110c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A290u;
    if (runtime->hasFunction(0x30A290u)) {
        auto targetFn = runtime->lookupFunction(0x30A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191110u; }
        if (ctx->pc != 0x191110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SCElogoFade__FiP9mgCMemory_0x30a290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191110u; }
        if (ctx->pc != 0x191110u) { return; }
    }
    ctx->pc = 0x191110u;
label_191110:
    // 0x191110: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x191110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_191114:
    // 0x191114: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x191114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_191118:
    // 0x191118: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19111c:
    if (ctx->pc == 0x19111Cu) {
        ctx->pc = 0x191120u;
        goto label_191120;
    }
    ctx->pc = 0x191118u;
    {
        const bool branch_taken_0x191118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191118) {
            ctx->pc = 0x19112Cu;
            goto label_19112c;
        }
    }
    ctx->pc = 0x191120u;
label_191120:
    // 0x191120: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_191124:
    // 0x191124: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_191128:
    if (ctx->pc == 0x191128u) {
        ctx->pc = 0x19112Cu;
        goto label_19112c;
    }
    ctx->pc = 0x191124u;
    {
        const bool branch_taken_0x191124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191124) {
            ctx->pc = 0x19115Cu;
            goto label_19115c;
        }
    }
    ctx->pc = 0x19112Cu;
label_19112c:
    // 0x19112c: 0x0  nop
    ctx->pc = 0x19112cu;
    // NOP
label_191130:
    // 0x191130: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x191130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_191134:
    // 0x191134: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x191134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
label_191138:
    // 0x191138: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x191138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_19113c:
    // 0x19113c: 0xaf828af8  sw          $v0, -0x7508($gp)
    ctx->pc = 0x19113cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937336), GPR_U32(ctx, 2));
label_191140:
    // 0x191140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191144:
    // 0x191144: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x191144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
label_191148:
    // 0x191148: 0x24a5bab0  addiu       $a1, $a1, -0x4550
    ctx->pc = 0x191148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949552));
label_19114c:
    // 0x19114c: 0xc04e79c  jal         func_139E70
label_191150:
    if (ctx->pc == 0x191150u) {
        ctx->pc = 0x191150u;
            // 0x191150: 0x3446ec78  ori         $a2, $v0, 0xEC78 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60536);
        ctx->pc = 0x191154u;
        goto label_191154;
    }
    ctx->pc = 0x19114Cu;
    SET_GPR_U32(ctx, 31, 0x191154u);
    ctx->pc = 0x191150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19114Cu;
            // 0x191150: 0x3446ec78  ori         $a2, $v0, 0xEC78 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60536);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191154u; }
        if (ctx->pc != 0x191154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191154u; }
        if (ctx->pc != 0x191154u) { return; }
    }
    ctx->pc = 0x191154u;
label_191154:
    // 0x191154: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x191154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_191158:
    // 0x191158: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x191158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_19115c:
    // 0x19115c: 0x0  nop
    ctx->pc = 0x19115cu;
    // NOP
label_191160:
    // 0x191160: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x191160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_191164:
    // 0x191164: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x191164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_191168:
    // 0x191168: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19116c:
    // 0x19116c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19116cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191170:
    // 0x191170: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_191174:
    if (ctx->pc == 0x191174u) {
        ctx->pc = 0x191174u;
            // 0x191174: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x191178u;
        goto label_191178;
    }
    ctx->pc = 0x191170u;
    {
        const bool branch_taken_0x191170 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x191174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191170u;
            // 0x191174: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191170) {
            ctx->pc = 0x191180u;
            goto label_191180;
        }
    }
    ctx->pc = 0x191178u;
label_191178:
    // 0x191178: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x191178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_19117c:
    // 0x19117c: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x19117cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_191180:
    // 0x191180: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_191184:
    // 0x191184: 0xc04a0d2  jal         func_128348
label_191188:
    if (ctx->pc == 0x191188u) {
        ctx->pc = 0x191188u;
            // 0x191188: 0x24844ba0  addiu       $a0, $a0, 0x4BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19360));
        ctx->pc = 0x19118Cu;
        goto label_19118c;
    }
    ctx->pc = 0x191184u;
    SET_GPR_U32(ctx, 31, 0x19118Cu);
    ctx->pc = 0x191188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191184u;
            // 0x191188: 0x24844ba0  addiu       $a0, $a0, 0x4BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19118Cu; }
        if (ctx->pc != 0x19118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19118Cu; }
        if (ctx->pc != 0x19118Cu) { return; }
    }
    ctx->pc = 0x19118Cu;
label_19118c:
    // 0x19118c: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_191190:
    // 0x191190: 0x46001d8  bltz        $v1, . + 4 + (0x1D8 << 2)
label_191194:
    if (ctx->pc == 0x191194u) {
        ctx->pc = 0x191194u;
            // 0x191194: 0x2861000a  slti        $at, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->pc = 0x191198u;
        goto label_191198;
    }
    ctx->pc = 0x191190u;
    {
        const bool branch_taken_0x191190 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x191194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191190u;
            // 0x191194: 0x2861000a  slti        $at, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191190) {
            ctx->pc = 0x1918F4u;
            goto label_1918f4;
        }
    }
    ctx->pc = 0x191198u;
label_191198:
    // 0x191198: 0x102001d6  beqz        $at, . + 4 + (0x1D6 << 2)
label_19119c:
    if (ctx->pc == 0x19119Cu) {
        ctx->pc = 0x1911A0u;
        goto label_1911a0;
    }
    ctx->pc = 0x191198u;
    {
        const bool branch_taken_0x191198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x191198) {
            ctx->pc = 0x1918F4u;
            goto label_1918f4;
        }
    }
    ctx->pc = 0x1911A0u;
label_1911a0:
    // 0x1911a0: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1911a4:
    // 0x1911a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1911a8:
    if (ctx->pc == 0x1911A8u) {
        ctx->pc = 0x1911ACu;
        goto label_1911ac;
    }
    ctx->pc = 0x1911A4u;
    {
        const bool branch_taken_0x1911a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1911a4) {
            ctx->pc = 0x1911B8u;
            goto label_1911b8;
        }
    }
    ctx->pc = 0x1911ACu;
label_1911ac:
    // 0x1911ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1911b0:
    if (ctx->pc == 0x1911B0u) {
        ctx->pc = 0x1911B0u;
            // 0x1911b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1911B4u;
        goto label_1911b4;
    }
    ctx->pc = 0x1911ACu;
    {
        const bool branch_taken_0x1911ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911ACu;
            // 0x1911b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911ac) {
            ctx->pc = 0x1911B8u;
            goto label_1911b8;
        }
    }
    ctx->pc = 0x1911B4u;
label_1911b4:
    // 0x1911b4: 0xaf828adc  sw          $v0, -0x7524($gp)
    ctx->pc = 0x1911b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937308), GPR_U32(ctx, 2));
label_1911b8:
    // 0x1911b8: 0x8f838ae8  lw          $v1, -0x7518($gp)
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
label_1911bc:
    // 0x1911bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1911c0:
    // 0x1911c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1911c4:
    if (ctx->pc == 0x1911C4u) {
        ctx->pc = 0x1911C4u;
            // 0x1911c4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1911C8u;
        goto label_1911c8;
    }
    ctx->pc = 0x1911C0u;
    {
        const bool branch_taken_0x1911c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1911C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911C0u;
            // 0x1911c4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911c0) {
            ctx->pc = 0x1911D8u;
            goto label_1911d8;
        }
    }
    ctx->pc = 0x1911C8u;
label_1911c8:
    // 0x1911c8: 0xc052d7c  jal         func_14B5F0
label_1911cc:
    if (ctx->pc == 0x1911CCu) {
        ctx->pc = 0x1911CCu;
            // 0x1911cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1911D0u;
        goto label_1911d0;
    }
    ctx->pc = 0x1911C8u;
    SET_GPR_U32(ctx, 31, 0x1911D0u);
    ctx->pc = 0x1911CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1911C8u;
            // 0x1911cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B5F0u;
    if (runtime->hasFunction(0x14B5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D0u; }
        if (ctx->pc != 0x1911D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureStart__8CGamePadFv_0x14b5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D0u; }
        if (ctx->pc != 0x1911D0u) { return; }
    }
    ctx->pc = 0x1911D0u;
label_1911d0:
    // 0x1911d0: 0xc04a0e6  jal         func_128398
label_1911d4:
    if (ctx->pc == 0x1911D4u) {
        ctx->pc = 0x1911D4u;
            // 0x1911d4: 0x2404270f  addiu       $a0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->pc = 0x1911D8u;
        goto label_1911d8;
    }
    ctx->pc = 0x1911D0u;
    SET_GPR_U32(ctx, 31, 0x1911D8u);
    ctx->pc = 0x1911D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1911D0u;
            // 0x1911d4: 0x2404270f  addiu       $a0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128398u;
    if (runtime->hasFunction(0x128398u)) {
        auto targetFn = runtime->lookupFunction(0x128398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D8u; }
        if (ctx->pc != 0x1911D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        srand_0x128398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D8u; }
        if (ctx->pc != 0x1911D8u) { return; }
    }
    ctx->pc = 0x1911D8u;
label_1911d8:
    // 0x1911d8: 0x8f838ae8  lw          $v1, -0x7518($gp)
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
label_1911dc:
    // 0x1911dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1911dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1911e0:
    // 0x1911e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1911e4:
    if (ctx->pc == 0x1911E4u) {
        ctx->pc = 0x1911E4u;
            // 0x1911e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1911E8u;
        goto label_1911e8;
    }
    ctx->pc = 0x1911E0u;
    {
        const bool branch_taken_0x1911e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1911E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911E0u;
            // 0x1911e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911e0) {
            ctx->pc = 0x1911F0u;
            goto label_1911f0;
        }
    }
    ctx->pc = 0x1911E8u;
label_1911e8:
    // 0x1911e8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1911ec:
    if (ctx->pc == 0x1911ECu) {
        ctx->pc = 0x1911F0u;
        goto label_1911f0;
    }
    ctx->pc = 0x1911E8u;
    {
        const bool branch_taken_0x1911e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1911e8) {
            ctx->pc = 0x191214u;
            goto label_191214;
        }
    }
    ctx->pc = 0x1911F0u;
label_1911f0:
    // 0x1911f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1911f4:
    if (ctx->pc == 0x1911F4u) {
        ctx->pc = 0x1911F4u;
            // 0x1911f4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1911F8u;
        goto label_1911f8;
    }
    ctx->pc = 0x1911F0u;
    {
        const bool branch_taken_0x1911f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911F0u;
            // 0x1911f4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911f0) {
            ctx->pc = 0x191200u;
            goto label_191200;
        }
    }
    ctx->pc = 0x1911F8u;
label_1911f8:
    // 0x1911f8: 0xc052dc8  jal         func_14B720
label_1911fc:
    if (ctx->pc == 0x1911FCu) {
        ctx->pc = 0x1911FCu;
            // 0x1911fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x191200u;
        goto label_191200;
    }
    ctx->pc = 0x1911F8u;
    SET_GPR_U32(ctx, 31, 0x191200u);
    ctx->pc = 0x1911FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1911F8u;
            // 0x1911fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B720u;
    if (runtime->hasFunction(0x14B720u)) {
        auto targetFn = runtime->lookupFunction(0x14B720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191200u; }
        if (ctx->pc != 0x191200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCapture__8CGamePadFv_0x14b720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191200u; }
        if (ctx->pc != 0x191200u) { return; }
    }
    ctx->pc = 0x191200u;
label_191200:
    // 0x191200: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191204:
    // 0x191204: 0xc052d84  jal         func_14B610
label_191208:
    if (ctx->pc == 0x191208u) {
        ctx->pc = 0x191208u;
            // 0x191208: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x19120Cu;
        goto label_19120c;
    }
    ctx->pc = 0x191204u;
    SET_GPR_U32(ctx, 31, 0x19120Cu);
    ctx->pc = 0x191208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191204u;
            // 0x191208: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B610u;
    if (runtime->hasFunction(0x14B610u)) {
        auto targetFn = runtime->lookupFunction(0x14B610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19120Cu; }
        if (ctx->pc != 0x19120Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CapturePlay__8CGamePadFv_0x14b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19120Cu; }
        if (ctx->pc != 0x19120Cu) { return; }
    }
    ctx->pc = 0x19120Cu;
label_19120c:
    // 0x19120c: 0xc04a0e6  jal         func_128398
label_191210:
    if (ctx->pc == 0x191210u) {
        ctx->pc = 0x191210u;
            // 0x191210: 0x2404270f  addiu       $a0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->pc = 0x191214u;
        goto label_191214;
    }
    ctx->pc = 0x19120Cu;
    SET_GPR_U32(ctx, 31, 0x191214u);
    ctx->pc = 0x191210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19120Cu;
            // 0x191210: 0x2404270f  addiu       $a0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128398u;
    if (runtime->hasFunction(0x128398u)) {
        auto targetFn = runtime->lookupFunction(0x128398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191214u; }
        if (ctx->pc != 0x191214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        srand_0x128398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191214u; }
        if (ctx->pc != 0x191214u) { return; }
    }
    ctx->pc = 0x191214u;
label_191214:
    // 0x191214: 0x0  nop
    ctx->pc = 0x191214u;
    // NOP
label_191218:
    // 0x191218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19121c:
    // 0x19121c: 0xaf828760  sw          $v0, -0x78A0($gp)
    ctx->pc = 0x19121cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
label_191220:
    // 0x191220: 0xc064220  jal         func_190880
label_191224:
    if (ctx->pc == 0x191224u) {
        ctx->pc = 0x191224u;
            // 0x191224: 0xaf808aec  sw          $zero, -0x7514($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937324), GPR_U32(ctx, 0));
        ctx->pc = 0x191228u;
        goto label_191228;
    }
    ctx->pc = 0x191220u;
    SET_GPR_U32(ctx, 31, 0x191228u);
    ctx->pc = 0x191224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191220u;
            // 0x191224: 0xaf808aec  sw          $zero, -0x7514($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191228u; }
        if (ctx->pc != 0x191228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191228u; }
        if (ctx->pc != 0x191228u) { return; }
    }
    ctx->pc = 0x191228u;
label_191228:
    // 0x191228: 0xc06421c  jal         func_190870
label_19122c:
    if (ctx->pc == 0x19122Cu) {
        ctx->pc = 0x19122Cu;
            // 0x19122c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191230u;
        goto label_191230;
    }
    ctx->pc = 0x191228u;
    SET_GPR_U32(ctx, 31, 0x191230u);
    ctx->pc = 0x19122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191228u;
            // 0x19122c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191230u; }
        if (ctx->pc != 0x191230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191230u; }
        if (ctx->pc != 0x191230u) { return; }
    }
    ctx->pc = 0x191230u;
label_191230:
    // 0x191230: 0xc064220  jal         func_190880
label_191234:
    if (ctx->pc == 0x191234u) {
        ctx->pc = 0x191234u;
            // 0x191234: 0xac513040  sw          $s1, 0x3040($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12352), GPR_U32(ctx, 17));
        ctx->pc = 0x191238u;
        goto label_191238;
    }
    ctx->pc = 0x191230u;
    SET_GPR_U32(ctx, 31, 0x191238u);
    ctx->pc = 0x191234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191230u;
            // 0x191234: 0xac513040  sw          $s1, 0x3040($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12352), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191238u; }
        if (ctx->pc != 0x191238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191238u; }
        if (ctx->pc != 0x191238u) { return; }
    }
    ctx->pc = 0x191238u;
label_191238:
    // 0x191238: 0xc06421c  jal         func_190870
label_19123c:
    if (ctx->pc == 0x19123Cu) {
        ctx->pc = 0x19123Cu;
            // 0x19123c: 0xc4541a10  lwc1        $f20, 0x1A10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x191240u;
        goto label_191240;
    }
    ctx->pc = 0x191238u;
    SET_GPR_U32(ctx, 31, 0x191240u);
    ctx->pc = 0x19123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191238u;
            // 0x19123c: 0xc4541a10  lwc1        $f20, 0x1A10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191240u; }
        if (ctx->pc != 0x191240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191240u; }
        if (ctx->pc != 0x191240u) { return; }
    }
    ctx->pc = 0x191240u;
label_191240:
    // 0x191240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191244:
    // 0x191244: 0xc0a1270  jal         func_2849C0
label_191248:
    if (ctx->pc == 0x191248u) {
        ctx->pc = 0x191248u;
            // 0x191248: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x19124Cu;
        goto label_19124c;
    }
    ctx->pc = 0x191244u;
    SET_GPR_U32(ctx, 31, 0x19124Cu);
    ctx->pc = 0x191248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191244u;
            // 0x191248: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19124Cu; }
        if (ctx->pc != 0x19124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19124Cu; }
        if (ctx->pc != 0x19124Cu) { return; }
    }
    ctx->pc = 0x19124Cu;
label_19124c:
    // 0x19124c: 0xc064220  jal         func_190880
label_191250:
    if (ctx->pc == 0x191250u) {
        ctx->pc = 0x191254u;
        goto label_191254;
    }
    ctx->pc = 0x19124Cu;
    SET_GPR_U32(ctx, 31, 0x191254u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191254u; }
        if (ctx->pc != 0x191254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191254u; }
        if (ctx->pc != 0x191254u) { return; }
    }
    ctx->pc = 0x191254u;
label_191254:
    // 0x191254: 0xc06421c  jal         func_190870
label_191258:
    if (ctx->pc == 0x191258u) {
        ctx->pc = 0x191258u;
            // 0x191258: 0x8c511a14  lw          $s1, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->pc = 0x19125Cu;
        goto label_19125c;
    }
    ctx->pc = 0x191254u;
    SET_GPR_U32(ctx, 31, 0x19125Cu);
    ctx->pc = 0x191258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191254u;
            // 0x191258: 0x8c511a14  lw          $s1, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19125Cu; }
        if (ctx->pc != 0x19125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19125Cu; }
        if (ctx->pc != 0x19125Cu) { return; }
    }
    ctx->pc = 0x19125Cu;
label_19125c:
    // 0x19125c: 0xc064220  jal         func_190880
label_191260:
    if (ctx->pc == 0x191260u) {
        ctx->pc = 0x191260u;
            // 0x191260: 0xac512f68  sw          $s1, 0x2F68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12136), GPR_U32(ctx, 17));
        ctx->pc = 0x191264u;
        goto label_191264;
    }
    ctx->pc = 0x19125Cu;
    SET_GPR_U32(ctx, 31, 0x191264u);
    ctx->pc = 0x191260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19125Cu;
            // 0x191260: 0xac512f68  sw          $s1, 0x2F68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191264u; }
        if (ctx->pc != 0x191264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191264u; }
        if (ctx->pc != 0x191264u) { return; }
    }
    ctx->pc = 0x191264u;
label_191264:
    // 0x191264: 0x8c431a08  lw          $v1, 0x1A08($v0)
    ctx->pc = 0x191264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_191268:
    // 0x191268: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19126c:
    // 0x19126c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_191270:
    if (ctx->pc == 0x191270u) {
        ctx->pc = 0x191274u;
        goto label_191274;
    }
    ctx->pc = 0x19126Cu;
    {
        const bool branch_taken_0x19126c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19126c) {
            ctx->pc = 0x1912A8u;
            goto label_1912a8;
        }
    }
    ctx->pc = 0x191274u;
label_191274:
    // 0x191274: 0xc064220  jal         func_190880
label_191278:
    if (ctx->pc == 0x191278u) {
        ctx->pc = 0x19127Cu;
        goto label_19127c;
    }
    ctx->pc = 0x191274u;
    SET_GPR_U32(ctx, 31, 0x19127Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19127Cu; }
        if (ctx->pc != 0x19127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19127Cu; }
        if (ctx->pc != 0x19127Cu) { return; }
    }
    ctx->pc = 0x19127Cu;
label_19127c:
    // 0x19127c: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x19127cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
label_191280:
    // 0x191280: 0xc06421c  jal         func_190870
label_191284:
    if (ctx->pc == 0x191284u) {
        ctx->pc = 0x191284u;
            // 0x191284: 0xac431a10  sw          $v1, 0x1A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 3));
        ctx->pc = 0x191288u;
        goto label_191288;
    }
    ctx->pc = 0x191280u;
    SET_GPR_U32(ctx, 31, 0x191288u);
    ctx->pc = 0x191284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191280u;
            // 0x191284: 0xac431a10  sw          $v1, 0x1A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191288u; }
        if (ctx->pc != 0x191288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191288u; }
        if (ctx->pc != 0x191288u) { return; }
    }
    ctx->pc = 0x191288u;
label_191288:
    // 0x191288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19128c:
    // 0x19128c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x19128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_191290:
    // 0x191290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x191290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_191294:
    // 0x191294: 0xc0a1270  jal         func_2849C0
label_191298:
    if (ctx->pc == 0x191298u) {
        ctx->pc = 0x19129Cu;
        goto label_19129c;
    }
    ctx->pc = 0x191294u;
    SET_GPR_U32(ctx, 31, 0x19129Cu);
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19129Cu; }
        if (ctx->pc != 0x19129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19129Cu; }
        if (ctx->pc != 0x19129Cu) { return; }
    }
    ctx->pc = 0x19129Cu;
label_19129c:
    // 0x19129c: 0xc06421c  jal         func_190870
label_1912a0:
    if (ctx->pc == 0x1912A0u) {
        ctx->pc = 0x1912A4u;
        goto label_1912a4;
    }
    ctx->pc = 0x19129Cu;
    SET_GPR_U32(ctx, 31, 0x1912A4u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912A4u; }
        if (ctx->pc != 0x1912A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912A4u; }
        if (ctx->pc != 0x1912A4u) { return; }
    }
    ctx->pc = 0x1912A4u;
label_1912a4:
    // 0x1912a4: 0xac402f74  sw          $zero, 0x2F74($v0)
    ctx->pc = 0x1912a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12148), GPR_U32(ctx, 0));
label_1912a8:
    // 0x1912a8: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x1912a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_1912ac:
    // 0x1912ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1912acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1912b0:
    // 0x1912b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1912b4:
    if (ctx->pc == 0x1912B4u) {
        ctx->pc = 0x1912B4u;
            // 0x1912b4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1912B8u;
        goto label_1912b8;
    }
    ctx->pc = 0x1912B0u;
    {
        const bool branch_taken_0x1912b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1912B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1912B0u;
            // 0x1912b4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912b0) {
            ctx->pc = 0x1912D4u;
            goto label_1912d4;
        }
    }
    ctx->pc = 0x1912B8u;
label_1912b8:
    // 0x1912b8: 0xc0635f0  jal         func_18D7C0
label_1912bc:
    if (ctx->pc == 0x1912BCu) {
        ctx->pc = 0x1912C0u;
        goto label_1912c0;
    }
    ctx->pc = 0x1912B8u;
    SET_GPR_U32(ctx, 31, 0x1912C0u);
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912C0u; }
        if (ctx->pc != 0x1912C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912C0u; }
        if (ctx->pc != 0x1912C0u) { return; }
    }
    ctx->pc = 0x1912C0u;
label_1912c0:
    // 0x1912c0: 0xc0637cc  jal         func_18DF30
label_1912c4:
    if (ctx->pc == 0x1912C4u) {
        ctx->pc = 0x1912C4u;
            // 0x1912c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1912C8u;
        goto label_1912c8;
    }
    ctx->pc = 0x1912C0u;
    SET_GPR_U32(ctx, 31, 0x1912C8u);
    ctx->pc = 0x1912C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1912C0u;
            // 0x1912c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912C8u; }
        if (ctx->pc != 0x1912C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912C8u; }
        if (ctx->pc != 0x1912C8u) { return; }
    }
    ctx->pc = 0x1912C8u;
label_1912c8:
    // 0x1912c8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1912c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_1912cc:
    // 0x1912cc: 0xc0a96cc  jal         func_2A5B30
label_1912d0:
    if (ctx->pc == 0x1912D0u) {
        ctx->pc = 0x1912D0u;
            // 0x1912d0: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->pc = 0x1912D4u;
        goto label_1912d4;
    }
    ctx->pc = 0x1912CCu;
    SET_GPR_U32(ctx, 31, 0x1912D4u);
    ctx->pc = 0x1912D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1912CCu;
            // 0x1912d0: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B30u;
    if (runtime->hasFunction(0x2A5B30u)) {
        auto targetFn = runtime->lookupFunction(0x2A5B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912D4u; }
        if (ctx->pc != 0x1912D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSnd__6CSceneFv_0x2a5b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912D4u; }
        if (ctx->pc != 0x1912D4u) { return; }
    }
    ctx->pc = 0x1912D4u;
label_1912d4:
    // 0x1912d4: 0x0  nop
    ctx->pc = 0x1912d4u;
    // NOP
label_1912d8:
    // 0x1912d8: 0xc0504c4  jal         func_141310
label_1912dc:
    if (ctx->pc == 0x1912DCu) {
        ctx->pc = 0x1912E0u;
        goto label_1912e0;
    }
    ctx->pc = 0x1912D8u;
    SET_GPR_U32(ctx, 31, 0x1912E0u);
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912E0u; }
        if (ctx->pc != 0x1912E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912E0u; }
        if (ctx->pc != 0x1912E0u) { return; }
    }
    ctx->pc = 0x1912E0u;
label_1912e0:
    // 0x1912e0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1912e4:
    // 0x1912e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1912e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1912e8:
    // 0x1912e8: 0xc04a0d2  jal         func_128348
label_1912ec:
    if (ctx->pc == 0x1912ECu) {
        ctx->pc = 0x1912ECu;
            // 0x1912ec: 0x24844bc0  addiu       $a0, $a0, 0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19392));
        ctx->pc = 0x1912F0u;
        goto label_1912f0;
    }
    ctx->pc = 0x1912E8u;
    SET_GPR_U32(ctx, 31, 0x1912F0u);
    ctx->pc = 0x1912ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1912E8u;
            // 0x1912ec: 0x24844bc0  addiu       $a0, $a0, 0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912F0u; }
        if (ctx->pc != 0x1912F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912F0u; }
        if (ctx->pc != 0x1912F0u) { return; }
    }
    ctx->pc = 0x1912F0u;
label_1912f0:
    // 0x1912f0: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x1912f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_1912f4:
    // 0x1912f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1912f8:
    // 0x1912f8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1912fc:
    // 0x1912fc: 0x24425120  addiu       $v0, $v0, 0x5120
    ctx->pc = 0x1912fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20768));
label_191300:
    // 0x191300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191304:
    // 0x191304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191308:
    // 0x191308: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19130c:
    // 0x19130c: 0x40f809  jalr        $v0
label_191310:
    if (ctx->pc == 0x191310u) {
        ctx->pc = 0x191310u;
            // 0x191310: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
        ctx->pc = 0x191314u;
        goto label_191314;
    }
    ctx->pc = 0x19130Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191314u);
        ctx->pc = 0x191310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19130Cu;
            // 0x191310: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191314u; }
            if (ctx->pc != 0x191314u) { return; }
        }
        }
    }
    ctx->pc = 0x191314u;
label_191314:
    // 0x191314: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_191318:
    // 0x191318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19131c:
    // 0x19131c: 0xc049c86  jal         func_127218
label_191320:
    if (ctx->pc == 0x191320u) {
        ctx->pc = 0x191320u;
            // 0x191320: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x191324u;
        goto label_191324;
    }
    ctx->pc = 0x19131Cu;
    SET_GPR_U32(ctx, 31, 0x191324u);
    ctx->pc = 0x191320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19131Cu;
            // 0x191320: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191324u; }
        if (ctx->pc != 0x191324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191324u; }
        if (ctx->pc != 0x191324u) { return; }
    }
    ctx->pc = 0x191324u;
label_191324:
    // 0x191324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191328:
    // 0x191328: 0xc064240  jal         func_190900
label_19132c:
    if (ctx->pc == 0x19132Cu) {
        ctx->pc = 0x19132Cu;
            // 0x19132c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x191330u;
        goto label_191330;
    }
    ctx->pc = 0x191328u;
    SET_GPR_U32(ctx, 31, 0x191330u);
    ctx->pc = 0x19132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191328u;
            // 0x19132c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191330u; }
        if (ctx->pc != 0x191330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191330u; }
        if (ctx->pc != 0x191330u) { return; }
    }
    ctx->pc = 0x191330u;
label_191330:
    // 0x191330: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191334:
    // 0x191334: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x191334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_191338:
    // 0x191338: 0xc052cf0  jal         func_14B3C0
label_19133c:
    if (ctx->pc == 0x19133Cu) {
        ctx->pc = 0x19133Cu;
            // 0x19133c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x191340u;
        goto label_191340;
    }
    ctx->pc = 0x191338u;
    SET_GPR_U32(ctx, 31, 0x191340u);
    ctx->pc = 0x19133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191338u;
            // 0x19133c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191340u; }
        if (ctx->pc != 0x191340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191340u; }
        if (ctx->pc != 0x191340u) { return; }
    }
    ctx->pc = 0x191340u;
label_191340:
    // 0x191340: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_191344:
    if (ctx->pc == 0x191344u) {
        ctx->pc = 0x191348u;
        goto label_191348;
    }
    ctx->pc = 0x191340u;
    {
        const bool branch_taken_0x191340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191340) {
            ctx->pc = 0x191350u;
            goto label_191350;
        }
    }
    ctx->pc = 0x191348u;
label_191348:
    // 0x191348: 0xc064270  jal         func_1909C0
label_19134c:
    if (ctx->pc == 0x19134Cu) {
        ctx->pc = 0x191350u;
        goto label_191350;
    }
    ctx->pc = 0x191348u;
    SET_GPR_U32(ctx, 31, 0x191350u);
    ctx->pc = 0x1909C0u;
    if (runtime->hasFunction(0x1909C0u)) {
        auto targetFn = runtime->lookupFunction(0x1909C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191350u; }
        if (ctx->pc != 0x191350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cat_start__Fv_0x1909c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191350u; }
        if (ctx->pc != 0x191350u) { return; }
    }
    ctx->pc = 0x191350u;
label_191350:
    // 0x191350: 0x8f828adc  lw          $v0, -0x7524($gp)
    ctx->pc = 0x191350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_191354:
    // 0x191354: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_191358:
    if (ctx->pc == 0x191358u) {
        ctx->pc = 0x19135Cu;
        goto label_19135c;
    }
    ctx->pc = 0x191354u;
    {
        const bool branch_taken_0x191354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191354) {
            ctx->pc = 0x1913E4u;
            goto label_1913e4;
        }
    }
    ctx->pc = 0x19135Cu;
label_19135c:
    // 0x19135c: 0xc064220  jal         func_190880
label_191360:
    if (ctx->pc == 0x191360u) {
        ctx->pc = 0x191364u;
        goto label_191364;
    }
    ctx->pc = 0x19135Cu;
    SET_GPR_U32(ctx, 31, 0x191364u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191364u; }
        if (ctx->pc != 0x191364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191364u; }
        if (ctx->pc != 0x191364u) { return; }
    }
    ctx->pc = 0x191364u;
label_191364:
    // 0x191364: 0xc06421c  jal         func_190870
label_191368:
    if (ctx->pc == 0x191368u) {
        ctx->pc = 0x191368u;
            // 0x191368: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19136Cu;
        goto label_19136c;
    }
    ctx->pc = 0x191364u;
    SET_GPR_U32(ctx, 31, 0x19136Cu);
    ctx->pc = 0x191368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191364u;
            // 0x191368: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19136Cu; }
        if (ctx->pc != 0x19136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19136Cu; }
        if (ctx->pc != 0x19136Cu) { return; }
    }
    ctx->pc = 0x19136Cu;
label_19136c:
    // 0x19136c: 0xc064220  jal         func_190880
label_191370:
    if (ctx->pc == 0x191370u) {
        ctx->pc = 0x191370u;
            // 0x191370: 0xac513040  sw          $s1, 0x3040($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12352), GPR_U32(ctx, 17));
        ctx->pc = 0x191374u;
        goto label_191374;
    }
    ctx->pc = 0x19136Cu;
    SET_GPR_U32(ctx, 31, 0x191374u);
    ctx->pc = 0x191370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19136Cu;
            // 0x191370: 0xac513040  sw          $s1, 0x3040($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12352), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191374u; }
        if (ctx->pc != 0x191374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191374u; }
        if (ctx->pc != 0x191374u) { return; }
    }
    ctx->pc = 0x191374u;
label_191374:
    // 0x191374: 0xc06421c  jal         func_190870
label_191378:
    if (ctx->pc == 0x191378u) {
        ctx->pc = 0x191378u;
            // 0x191378: 0xc4541a10  lwc1        $f20, 0x1A10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x19137Cu;
        goto label_19137c;
    }
    ctx->pc = 0x191374u;
    SET_GPR_U32(ctx, 31, 0x19137Cu);
    ctx->pc = 0x191378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191374u;
            // 0x191378: 0xc4541a10  lwc1        $f20, 0x1A10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19137Cu; }
        if (ctx->pc != 0x19137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19137Cu; }
        if (ctx->pc != 0x19137Cu) { return; }
    }
    ctx->pc = 0x19137Cu;
label_19137c:
    // 0x19137c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191380:
    // 0x191380: 0xc0a1270  jal         func_2849C0
label_191384:
    if (ctx->pc == 0x191384u) {
        ctx->pc = 0x191384u;
            // 0x191384: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x191388u;
        goto label_191388;
    }
    ctx->pc = 0x191380u;
    SET_GPR_U32(ctx, 31, 0x191388u);
    ctx->pc = 0x191384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191380u;
            // 0x191384: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191388u; }
        if (ctx->pc != 0x191388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191388u; }
        if (ctx->pc != 0x191388u) { return; }
    }
    ctx->pc = 0x191388u;
label_191388:
    // 0x191388: 0xc064220  jal         func_190880
label_19138c:
    if (ctx->pc == 0x19138Cu) {
        ctx->pc = 0x191390u;
        goto label_191390;
    }
    ctx->pc = 0x191388u;
    SET_GPR_U32(ctx, 31, 0x191390u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191390u; }
        if (ctx->pc != 0x191390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191390u; }
        if (ctx->pc != 0x191390u) { return; }
    }
    ctx->pc = 0x191390u;
label_191390:
    // 0x191390: 0xc06421c  jal         func_190870
label_191394:
    if (ctx->pc == 0x191394u) {
        ctx->pc = 0x191394u;
            // 0x191394: 0x8c511a14  lw          $s1, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->pc = 0x191398u;
        goto label_191398;
    }
    ctx->pc = 0x191390u;
    SET_GPR_U32(ctx, 31, 0x191398u);
    ctx->pc = 0x191394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191390u;
            // 0x191394: 0x8c511a14  lw          $s1, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191398u; }
        if (ctx->pc != 0x191398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191398u; }
        if (ctx->pc != 0x191398u) { return; }
    }
    ctx->pc = 0x191398u;
label_191398:
    // 0x191398: 0xc064220  jal         func_190880
label_19139c:
    if (ctx->pc == 0x19139Cu) {
        ctx->pc = 0x19139Cu;
            // 0x19139c: 0xac512f68  sw          $s1, 0x2F68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12136), GPR_U32(ctx, 17));
        ctx->pc = 0x1913A0u;
        goto label_1913a0;
    }
    ctx->pc = 0x191398u;
    SET_GPR_U32(ctx, 31, 0x1913A0u);
    ctx->pc = 0x19139Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191398u;
            // 0x19139c: 0xac512f68  sw          $s1, 0x2F68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913A0u; }
        if (ctx->pc != 0x1913A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913A0u; }
        if (ctx->pc != 0x1913A0u) { return; }
    }
    ctx->pc = 0x1913A0u;
label_1913a0:
    // 0x1913a0: 0x8c431a08  lw          $v1, 0x1A08($v0)
    ctx->pc = 0x1913a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_1913a4:
    // 0x1913a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1913a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1913a8:
    // 0x1913a8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1913ac:
    if (ctx->pc == 0x1913ACu) {
        ctx->pc = 0x1913B0u;
        goto label_1913b0;
    }
    ctx->pc = 0x1913A8u;
    {
        const bool branch_taken_0x1913a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1913a8) {
            ctx->pc = 0x1913E4u;
            goto label_1913e4;
        }
    }
    ctx->pc = 0x1913B0u;
label_1913b0:
    // 0x1913b0: 0xc064220  jal         func_190880
label_1913b4:
    if (ctx->pc == 0x1913B4u) {
        ctx->pc = 0x1913B8u;
        goto label_1913b8;
    }
    ctx->pc = 0x1913B0u;
    SET_GPR_U32(ctx, 31, 0x1913B8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913B8u; }
        if (ctx->pc != 0x1913B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913B8u; }
        if (ctx->pc != 0x1913B8u) { return; }
    }
    ctx->pc = 0x1913B8u;
label_1913b8:
    // 0x1913b8: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x1913b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
label_1913bc:
    // 0x1913bc: 0xc06421c  jal         func_190870
label_1913c0:
    if (ctx->pc == 0x1913C0u) {
        ctx->pc = 0x1913C0u;
            // 0x1913c0: 0xac431a10  sw          $v1, 0x1A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 3));
        ctx->pc = 0x1913C4u;
        goto label_1913c4;
    }
    ctx->pc = 0x1913BCu;
    SET_GPR_U32(ctx, 31, 0x1913C4u);
    ctx->pc = 0x1913C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1913BCu;
            // 0x1913c0: 0xac431a10  sw          $v1, 0x1A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913C4u; }
        if (ctx->pc != 0x1913C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913C4u; }
        if (ctx->pc != 0x1913C4u) { return; }
    }
    ctx->pc = 0x1913C4u;
label_1913c4:
    // 0x1913c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1913c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1913c8:
    // 0x1913c8: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_1913cc:
    // 0x1913cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1913ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1913d0:
    // 0x1913d0: 0xc0a1270  jal         func_2849C0
label_1913d4:
    if (ctx->pc == 0x1913D4u) {
        ctx->pc = 0x1913D8u;
        goto label_1913d8;
    }
    ctx->pc = 0x1913D0u;
    SET_GPR_U32(ctx, 31, 0x1913D8u);
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913D8u; }
        if (ctx->pc != 0x1913D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913D8u; }
        if (ctx->pc != 0x1913D8u) { return; }
    }
    ctx->pc = 0x1913D8u;
label_1913d8:
    // 0x1913d8: 0xc06421c  jal         func_190870
label_1913dc:
    if (ctx->pc == 0x1913DCu) {
        ctx->pc = 0x1913E0u;
        goto label_1913e0;
    }
    ctx->pc = 0x1913D8u;
    SET_GPR_U32(ctx, 31, 0x1913E0u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E0u; }
        if (ctx->pc != 0x1913E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E0u; }
        if (ctx->pc != 0x1913E0u) { return; }
    }
    ctx->pc = 0x1913E0u;
label_1913e0:
    // 0x1913e0: 0xac402f74  sw          $zero, 0x2F74($v0)
    ctx->pc = 0x1913e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12148), GPR_U32(ctx, 0));
label_1913e4:
    // 0x1913e4: 0x0  nop
    ctx->pc = 0x1913e4u;
    // NOP
label_1913e8:
    // 0x1913e8: 0xc064220  jal         func_190880
label_1913ec:
    if (ctx->pc == 0x1913ECu) {
        ctx->pc = 0x1913F0u;
        goto label_1913f0;
    }
    ctx->pc = 0x1913E8u;
    SET_GPR_U32(ctx, 31, 0x1913F0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913F0u; }
        if (ctx->pc != 0x1913F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913F0u; }
        if (ctx->pc != 0x1913F0u) { return; }
    }
    ctx->pc = 0x1913F0u;
label_1913f0:
    // 0x1913f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1913f4:
    // 0x1913f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1913f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1913f8:
    // 0x1913f8: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1913f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1913fc:
    // 0x1913fc: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1913fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_191400:
    // 0x191400: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x191400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_191404:
    // 0x191404: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x191404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_191408:
    // 0x191408: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19140c:
    // 0x19140c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_191410:
    // 0x191410: 0xc052d64  jal         func_14B590
label_191414:
    if (ctx->pc == 0x191414u) {
        ctx->pc = 0x191414u;
            // 0x191414: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x191418u;
        goto label_191418;
    }
    ctx->pc = 0x191410u;
    SET_GPR_U32(ctx, 31, 0x191418u);
    ctx->pc = 0x191414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191410u;
            // 0x191414: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B590u;
    if (runtime->hasFunction(0x14B590u)) {
        auto targetFn = runtime->lookupFunction(0x14B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191418u; }
        if (ctx->pc != 0x191418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VibrationEnable__8CGamePadFi_0x14b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191418u; }
        if (ctx->pc != 0x191418u) { return; }
    }
    ctx->pc = 0x191418u;
label_191418:
    // 0x191418: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_19141c:
    // 0x19141c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_191420:
    // 0x191420: 0xc052d1c  jal         func_14B470
label_191424:
    if (ctx->pc == 0x191424u) {
        ctx->pc = 0x191424u;
            // 0x191424: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x191428u;
        goto label_191428;
    }
    ctx->pc = 0x191420u;
    SET_GPR_U32(ctx, 31, 0x191428u);
    ctx->pc = 0x191424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191420u;
            // 0x191424: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191428u; }
        if (ctx->pc != 0x191428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191428u; }
        if (ctx->pc != 0x191428u) { return; }
    }
    ctx->pc = 0x191428u;
label_191428:
    // 0x191428: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19142c:
    if (ctx->pc == 0x19142Cu) {
        ctx->pc = 0x191430u;
        goto label_191430;
    }
    ctx->pc = 0x191428u;
    {
        const bool branch_taken_0x191428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191428) {
            ctx->pc = 0x191444u;
            goto label_191444;
        }
    }
    ctx->pc = 0x191430u;
label_191430:
    // 0x191430: 0x8f828b00  lw          $v0, -0x7500($gp)
    ctx->pc = 0x191430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937344)));
label_191434:
    // 0x191434: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191438:
    // 0x191438: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_19143c:
    // 0x19143c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191440:
    // 0x191440: 0xaf828b00  sw          $v0, -0x7500($gp)
    ctx->pc = 0x191440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937344), GPR_U32(ctx, 2));
label_191444:
    // 0x191444: 0x0  nop
    ctx->pc = 0x191444u;
    // NOP
label_191448:
    // 0x191448: 0xc050478  jal         func_1411E0
label_19144c:
    if (ctx->pc == 0x19144Cu) {
        ctx->pc = 0x19144Cu;
            // 0x19144c: 0x8f848b00  lw          $a0, -0x7500($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937344)));
        ctx->pc = 0x191450u;
        goto label_191450;
    }
    ctx->pc = 0x191448u;
    SET_GPR_U32(ctx, 31, 0x191450u);
    ctx->pc = 0x19144Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191448u;
            // 0x19144c: 0x8f848b00  lw          $a0, -0x7500($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937344)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411E0u;
    if (runtime->hasFunction(0x1411E0u)) {
        auto targetFn = runtime->lookupFunction(0x1411E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191450u; }
        if (ctx->pc != 0x191450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPerformanceMeter__Fi_0x1411e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191450u; }
        if (ctx->pc != 0x191450u) { return; }
    }
    ctx->pc = 0x191450u;
label_191450:
    // 0x191450: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191454:
    // 0x191454: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_191458:
    // 0x191458: 0xc052d1c  jal         func_14B470
label_19145c:
    if (ctx->pc == 0x19145Cu) {
        ctx->pc = 0x19145Cu;
            // 0x19145c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x191460u;
        goto label_191460;
    }
    ctx->pc = 0x191458u;
    SET_GPR_U32(ctx, 31, 0x191460u);
    ctx->pc = 0x19145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191458u;
            // 0x19145c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191460u; }
        if (ctx->pc != 0x191460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191460u; }
        if (ctx->pc != 0x191460u) { return; }
    }
    ctx->pc = 0x191460u;
label_191460:
    // 0x191460: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_191464:
    if (ctx->pc == 0x191464u) {
        ctx->pc = 0x191468u;
        goto label_191468;
    }
    ctx->pc = 0x191460u;
    {
        const bool branch_taken_0x191460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191460) {
            ctx->pc = 0x19147Cu;
            goto label_19147c;
        }
    }
    ctx->pc = 0x191468u;
label_191468:
    // 0x191468: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x191468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_19146c:
    // 0x19146c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19146cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_191470:
    // 0x191470: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_191474:
    // 0x191474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x191474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_191478:
    // 0x191478: 0xaf828ac8  sw          $v0, -0x7538($gp)
    ctx->pc = 0x191478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 2));
label_19147c:
    // 0x19147c: 0x0  nop
    ctx->pc = 0x19147cu;
    // NOP
label_191480:
    // 0x191480: 0xc050878  jal         func_1421E0
label_191484:
    if (ctx->pc == 0x191484u) {
        ctx->pc = 0x191484u;
            // 0x191484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191488u;
        goto label_191488;
    }
    ctx->pc = 0x191480u;
    SET_GPR_U32(ctx, 31, 0x191488u);
    ctx->pc = 0x191484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191480u;
            // 0x191484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191488u; }
        if (ctx->pc != 0x191488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191488u; }
        if (ctx->pc != 0x191488u) { return; }
    }
    ctx->pc = 0x191488u;
label_191488:
    // 0x191488: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x191488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_19148c:
    // 0x19148c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_191490:
    // 0x191490: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x191490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
label_191494:
    // 0x191494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191498:
    // 0x191498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19149c:
    // 0x19149c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1914a0:
    // 0x1914a0: 0x40f809  jalr        $v0
label_1914a4:
    if (ctx->pc == 0x1914A4u) {
        ctx->pc = 0x1914A8u;
        goto label_1914a8;
    }
    ctx->pc = 0x1914A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1914A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1914A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1914A8u; }
            if (ctx->pc != 0x1914A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1914A8u;
label_1914a8:
    // 0x1914a8: 0xc050874  jal         func_1421D0
label_1914ac:
    if (ctx->pc == 0x1914ACu) {
        ctx->pc = 0x1914ACu;
            // 0x1914ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1914B0u;
        goto label_1914b0;
    }
    ctx->pc = 0x1914A8u;
    SET_GPR_U32(ctx, 31, 0x1914B0u);
    ctx->pc = 0x1914ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914A8u;
            // 0x1914ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (runtime->hasFunction(0x1421D0u)) {
        auto targetFn = runtime->lookupFunction(0x1421D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914B0u; }
        if (ctx->pc != 0x1914B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetNowFrameRate__Fv_0x1421d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914B0u; }
        if (ctx->pc != 0x1914B0u) { return; }
    }
    ctx->pc = 0x1914B0u;
label_1914b0:
    // 0x1914b0: 0xc063594  jal         func_18D650
label_1914b4:
    if (ctx->pc == 0x1914B4u) {
        ctx->pc = 0x1914B4u;
            // 0x1914b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1914B8u;
        goto label_1914b8;
    }
    ctx->pc = 0x1914B0u;
    SET_GPR_U32(ctx, 31, 0x1914B8u);
    ctx->pc = 0x1914B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914B0u;
            // 0x1914b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914B8u; }
        if (ctx->pc != 0x1914B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914B8u; }
        if (ctx->pc != 0x1914B8u) { return; }
    }
    ctx->pc = 0x1914B8u;
label_1914b8:
    // 0x1914b8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_1914bc:
    // 0x1914bc: 0xc0a9e50  jal         func_2A7940
label_1914c0:
    if (ctx->pc == 0x1914C0u) {
        ctx->pc = 0x1914C0u;
            // 0x1914c0: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->pc = 0x1914C4u;
        goto label_1914c4;
    }
    ctx->pc = 0x1914BCu;
    SET_GPR_U32(ctx, 31, 0x1914C4u);
    ctx->pc = 0x1914C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914BCu;
            // 0x1914c0: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (runtime->hasFunction(0x2A7940u)) {
        auto targetFn = runtime->lookupFunction(0x2A7940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914C4u; }
        if (ctx->pc != 0x1914C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepSnd__6CSceneFv_0x2a7940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914C4u; }
        if (ctx->pc != 0x1914C4u) { return; }
    }
    ctx->pc = 0x1914C4u;
label_1914c4:
    // 0x1914c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1914c8:
    // 0x1914c8: 0xc052a4c  jal         func_14A930
label_1914cc:
    if (ctx->pc == 0x1914CCu) {
        ctx->pc = 0x1914CCu;
            // 0x1914cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1914D0u;
        goto label_1914d0;
    }
    ctx->pc = 0x1914C8u;
    SET_GPR_U32(ctx, 31, 0x1914D0u);
    ctx->pc = 0x1914CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914C8u;
            // 0x1914cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914D0u; }
        if (ctx->pc != 0x1914D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914D0u; }
        if (ctx->pc != 0x1914D0u) { return; }
    }
    ctx->pc = 0x1914D0u;
label_1914d0:
    // 0x1914d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1914d4:
    // 0x1914d4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_1914d8:
    // 0x1914d8: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1914dc:
    // 0x1914dc: 0xc0bb554  jal         func_2ED550
label_1914e0:
    if (ctx->pc == 0x1914E0u) {
        ctx->pc = 0x1914E0u;
            // 0x1914e0: 0x24a576e0  addiu       $a1, $a1, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30432));
        ctx->pc = 0x1914E4u;
        goto label_1914e4;
    }
    ctx->pc = 0x1914DCu;
    SET_GPR_U32(ctx, 31, 0x1914E4u);
    ctx->pc = 0x1914E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914DCu;
            // 0x1914e0: 0x24a576e0  addiu       $a1, $a1, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED550u;
    if (runtime->hasFunction(0x2ED550u)) {
        auto targetFn = runtime->lookupFunction(0x2ED550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914E4u; }
        if (ctx->pc != 0x1914E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Update__11CPadControlFP8CGamePad_0x2ed550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914E4u; }
        if (ctx->pc != 0x1914E4u) { return; }
    }
    ctx->pc = 0x1914E4u;
label_1914e4:
    // 0x1914e4: 0xc04d0e8  jal         func_1343A0
label_1914e8:
    if (ctx->pc == 0x1914E8u) {
        ctx->pc = 0x1914E8u;
            // 0x1914e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1914ECu;
        goto label_1914ec;
    }
    ctx->pc = 0x1914E4u;
    SET_GPR_U32(ctx, 31, 0x1914ECu);
    ctx->pc = 0x1914E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914E4u;
            // 0x1914e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914ECu; }
        if (ctx->pc != 0x1914ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914ECu; }
        if (ctx->pc != 0x1914ECu) { return; }
    }
    ctx->pc = 0x1914ECu;
label_1914ec:
    // 0x1914ec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1914ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1914f0:
    // 0x1914f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1914f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1914f4:
    // 0x1914f4: 0xc04d104  jal         func_134410
label_1914f8:
    if (ctx->pc == 0x1914F8u) {
        ctx->pc = 0x1914F8u;
            // 0x1914f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1914FCu;
        goto label_1914fc;
    }
    ctx->pc = 0x1914F4u;
    SET_GPR_U32(ctx, 31, 0x1914FCu);
    ctx->pc = 0x1914F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914F4u;
            // 0x1914f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914FCu; }
        if (ctx->pc != 0x1914FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914FCu; }
        if (ctx->pc != 0x1914FCu) { return; }
    }
    ctx->pc = 0x1914FCu;
label_1914fc:
    // 0x1914fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191500:
    // 0x191500: 0xc04d3e4  jal         func_134F90
label_191504:
    if (ctx->pc == 0x191504u) {
        ctx->pc = 0x191504u;
            // 0x191504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191508u;
        goto label_191508;
    }
    ctx->pc = 0x191500u;
    SET_GPR_U32(ctx, 31, 0x191508u);
    ctx->pc = 0x191504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191500u;
            // 0x191504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191508u; }
        if (ctx->pc != 0x191508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191508u; }
        if (ctx->pc != 0x191508u) { return; }
    }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19150c:
    // 0x19150c: 0xc04d3bc  jal         func_134EF0
label_191510:
    if (ctx->pc == 0x191510u) {
        ctx->pc = 0x191510u;
            // 0x191510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191514u;
        goto label_191514;
    }
    ctx->pc = 0x19150Cu;
    SET_GPR_U32(ctx, 31, 0x191514u);
    ctx->pc = 0x191510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19150Cu;
            // 0x191510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191514u; }
        if (ctx->pc != 0x191514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191514u; }
        if (ctx->pc != 0x191514u) { return; }
    }
    ctx->pc = 0x191514u;
label_191514:
    // 0x191514: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191518:
    // 0x191518: 0xc04d3b0  jal         func_134EC0
label_19151c:
    if (ctx->pc == 0x19151Cu) {
        ctx->pc = 0x19151Cu;
            // 0x19151c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191520u;
        goto label_191520;
    }
    ctx->pc = 0x191518u;
    SET_GPR_U32(ctx, 31, 0x191520u);
    ctx->pc = 0x19151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191518u;
            // 0x19151c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191520u; }
        if (ctx->pc != 0x191520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191520u; }
        if (ctx->pc != 0x191520u) { return; }
    }
    ctx->pc = 0x191520u;
label_191520:
    // 0x191520: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191524:
    // 0x191524: 0xc04d428  jal         func_1350A0
label_191528:
    if (ctx->pc == 0x191528u) {
        ctx->pc = 0x191528u;
            // 0x191528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19152Cu;
        goto label_19152c;
    }
    ctx->pc = 0x191524u;
    SET_GPR_U32(ctx, 31, 0x19152Cu);
    ctx->pc = 0x191528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191524u;
            // 0x191528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19152Cu; }
        if (ctx->pc != 0x19152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19152Cu; }
        if (ctx->pc != 0x19152Cu) { return; }
    }
    ctx->pc = 0x19152Cu;
label_19152c:
    // 0x19152c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191530:
    // 0x191530: 0xc04d424  jal         func_135090
label_191534:
    if (ctx->pc == 0x191534u) {
        ctx->pc = 0x191534u;
            // 0x191534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x191538u;
        goto label_191538;
    }
    ctx->pc = 0x191530u;
    SET_GPR_U32(ctx, 31, 0x191538u);
    ctx->pc = 0x191534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191530u;
            // 0x191534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191538u; }
        if (ctx->pc != 0x191538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191538u; }
        if (ctx->pc != 0x191538u) { return; }
    }
    ctx->pc = 0x191538u;
label_191538:
    // 0x191538: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19153c:
    // 0x19153c: 0xc04d128  jal         func_1344A0
label_191540:
    if (ctx->pc == 0x191540u) {
        ctx->pc = 0x191540u;
            // 0x191540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x191544u;
        goto label_191544;
    }
    ctx->pc = 0x19153Cu;
    SET_GPR_U32(ctx, 31, 0x191544u);
    ctx->pc = 0x191540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19153Cu;
            // 0x191540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191544u; }
        if (ctx->pc != 0x191544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191544u; }
        if (ctx->pc != 0x191544u) { return; }
    }
    ctx->pc = 0x191544u;
label_191544:
    // 0x191544: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191548:
    // 0x191548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19154c:
    // 0x19154c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19154cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191550:
    // 0x191550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191554:
    // 0x191554: 0xc04d320  jal         func_134C80
label_191558:
    if (ctx->pc == 0x191558u) {
        ctx->pc = 0x191558u;
            // 0x191558: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x19155Cu;
        goto label_19155c;
    }
    ctx->pc = 0x191554u;
    SET_GPR_U32(ctx, 31, 0x19155Cu);
    ctx->pc = 0x191558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191554u;
            // 0x191558: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19155Cu; }
        if (ctx->pc != 0x19155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19155Cu; }
        if (ctx->pc != 0x19155Cu) { return; }
    }
    ctx->pc = 0x19155Cu;
label_19155c:
    // 0x19155c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191560:
    // 0x191560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191564:
    // 0x191564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191568:
    // 0x191568: 0xc04d2c8  jal         func_134B20
label_19156c:
    if (ctx->pc == 0x19156Cu) {
        ctx->pc = 0x19156Cu;
            // 0x19156c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191570u;
        goto label_191570;
    }
    ctx->pc = 0x191568u;
    SET_GPR_U32(ctx, 31, 0x191570u);
    ctx->pc = 0x19156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191568u;
            // 0x19156c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191570u; }
        if (ctx->pc != 0x191570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191570u; }
        if (ctx->pc != 0x191570u) { return; }
    }
    ctx->pc = 0x191570u;
label_191570:
    // 0x191570: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_191574:
    // 0x191574: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191578:
    // 0x191578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19157c:
    // 0x19157c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19157cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191580:
    // 0x191580: 0xc04d2c8  jal         func_134B20
label_191584:
    if (ctx->pc == 0x191584u) {
        ctx->pc = 0x191584u;
            // 0x191584: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x191588u;
        goto label_191588;
    }
    ctx->pc = 0x191580u;
    SET_GPR_U32(ctx, 31, 0x191588u);
    ctx->pc = 0x191584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191580u;
            // 0x191584: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191588u; }
        if (ctx->pc != 0x191588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191588u; }
        if (ctx->pc != 0x191588u) { return; }
    }
    ctx->pc = 0x191588u;
label_191588:
    // 0x191588: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_19158c:
    // 0x19158c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_191590:
    // 0x191590: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x191590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_191594:
    // 0x191594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191598:
    // 0x191598: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x191598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19159c:
    // 0x19159c: 0xc04d2c8  jal         func_134B20
label_1915a0:
    if (ctx->pc == 0x1915A0u) {
        ctx->pc = 0x1915A0u;
            // 0x1915a0: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1915A4u;
        goto label_1915a4;
    }
    ctx->pc = 0x19159Cu;
    SET_GPR_U32(ctx, 31, 0x1915A4u);
    ctx->pc = 0x1915A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19159Cu;
            // 0x1915a0: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915A4u; }
        if (ctx->pc != 0x1915A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915A4u; }
        if (ctx->pc != 0x1915A4u) { return; }
    }
    ctx->pc = 0x1915A4u;
label_1915a4:
    // 0x1915a4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1915a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1915a8:
    // 0x1915a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1915a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1915ac:
    // 0x1915ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1915acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915b0:
    // 0x1915b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1915b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915b4:
    // 0x1915b4: 0xc04d2c8  jal         func_134B20
label_1915b8:
    if (ctx->pc == 0x1915B8u) {
        ctx->pc = 0x1915B8u;
            // 0x1915b8: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1915BCu;
        goto label_1915bc;
    }
    ctx->pc = 0x1915B4u;
    SET_GPR_U32(ctx, 31, 0x1915BCu);
    ctx->pc = 0x1915B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1915B4u;
            // 0x1915b8: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915BCu; }
        if (ctx->pc != 0x1915BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915BCu; }
        if (ctx->pc != 0x1915BCu) { return; }
    }
    ctx->pc = 0x1915BCu;
label_1915bc:
    // 0x1915bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1915bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1915c0:
    // 0x1915c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1915c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915c4:
    // 0x1915c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1915c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1915c8:
    // 0x1915c8: 0xc04d2c8  jal         func_134B20
label_1915cc:
    if (ctx->pc == 0x1915CCu) {
        ctx->pc = 0x1915CCu;
            // 0x1915cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1915D0u;
        goto label_1915d0;
    }
    ctx->pc = 0x1915C8u;
    SET_GPR_U32(ctx, 31, 0x1915D0u);
    ctx->pc = 0x1915CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1915C8u;
            // 0x1915cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D0u; }
        if (ctx->pc != 0x1915D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D0u; }
        if (ctx->pc != 0x1915D0u) { return; }
    }
    ctx->pc = 0x1915D0u;
label_1915d0:
    // 0x1915d0: 0xc04d1a4  jal         func_134690
label_1915d4:
    if (ctx->pc == 0x1915D4u) {
        ctx->pc = 0x1915D4u;
            // 0x1915d4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1915D8u;
        goto label_1915d8;
    }
    ctx->pc = 0x1915D0u;
    SET_GPR_U32(ctx, 31, 0x1915D8u);
    ctx->pc = 0x1915D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1915D0u;
            // 0x1915d4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D8u; }
        if (ctx->pc != 0x1915D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D8u; }
        if (ctx->pc != 0x1915D8u) { return; }
    }
    ctx->pc = 0x1915D8u;
label_1915d8:
    // 0x1915d8: 0xc05096c  jal         func_1425B0
label_1915dc:
    if (ctx->pc == 0x1915DCu) {
        ctx->pc = 0x1915DCu;
            // 0x1915dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        goto label_1915e0;
    }
    ctx->pc = 0x1915D8u;
    SET_GPR_U32(ctx, 31, 0x1915E0u);
    ctx->pc = 0x1915DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1915D8u;
            // 0x1915dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915E0u; }
        if (ctx->pc != 0x1915E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915E0u; }
        if (ctx->pc != 0x1915E0u) { return; }
    }
    ctx->pc = 0x1915E0u;
label_1915e0:
    // 0x1915e0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1915e4:
    if (ctx->pc == 0x1915E4u) {
        ctx->pc = 0x1915E8u;
        goto label_1915e8;
    }
    ctx->pc = 0x1915E0u;
    {
        const bool branch_taken_0x1915e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1915e0) {
            ctx->pc = 0x1915F8u;
            goto label_1915f8;
        }
    }
    ctx->pc = 0x1915E8u;
label_1915e8:
    // 0x1915e8: 0xc0c2740  jal         func_309D00
label_1915ec:
    if (ctx->pc == 0x1915ECu) {
        ctx->pc = 0x1915F0u;
        goto label_1915f0;
    }
    ctx->pc = 0x1915E8u;
    SET_GPR_U32(ctx, 31, 0x1915F0u);
    ctx->pc = 0x309D00u;
    if (runtime->hasFunction(0x309D00u)) {
        auto targetFn = runtime->lookupFunction(0x309D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915F0u; }
        if (ctx->pc != 0x1915F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseCancel__Fv_0x309d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915F0u; }
        if (ctx->pc != 0x1915F0u) { return; }
    }
    ctx->pc = 0x1915F0u;
label_1915f0:
    // 0x1915f0: 0x10000057  b           . + 4 + (0x57 << 2)
label_1915f4:
    if (ctx->pc == 0x1915F4u) {
        ctx->pc = 0x1915F8u;
        goto label_1915f8;
    }
    ctx->pc = 0x1915F0u;
    {
        const bool branch_taken_0x1915f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1915f0) {
            ctx->pc = 0x191750u;
            goto label_191750;
        }
    }
    ctx->pc = 0x1915F8u;
label_1915f8:
    // 0x1915f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1915f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1915fc:
    // 0x1915fc: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1915fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_191600:
    // 0x191600: 0xc052cf0  jal         func_14B3C0
label_191604:
    if (ctx->pc == 0x191604u) {
        ctx->pc = 0x191604u;
            // 0x191604: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x191608u;
        goto label_191608;
    }
    ctx->pc = 0x191600u;
    SET_GPR_U32(ctx, 31, 0x191608u);
    ctx->pc = 0x191604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191600u;
            // 0x191604: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191608u; }
        if (ctx->pc != 0x191608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191608u; }
        if (ctx->pc != 0x191608u) { return; }
    }
    ctx->pc = 0x191608u;
label_191608:
    // 0x191608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19160c:
    if (ctx->pc == 0x19160Cu) {
        ctx->pc = 0x191610u;
        goto label_191610;
    }
    ctx->pc = 0x191608u;
    {
        const bool branch_taken_0x191608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191608) {
            ctx->pc = 0x191618u;
            goto label_191618;
        }
    }
    ctx->pc = 0x191610u;
label_191610:
    // 0x191610: 0xc064274  jal         func_1909D0
label_191614:
    if (ctx->pc == 0x191614u) {
        ctx->pc = 0x191618u;
        goto label_191618;
    }
    ctx->pc = 0x191610u;
    SET_GPR_U32(ctx, 31, 0x191618u);
    ctx->pc = 0x1909D0u;
    if (runtime->hasFunction(0x1909D0u)) {
        auto targetFn = runtime->lookupFunction(0x1909D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191618u; }
        if (ctx->pc != 0x191618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cat_end__Fv_0x1909d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191618u; }
        if (ctx->pc != 0x191618u) { return; }
    }
    ctx->pc = 0x191618u;
label_191618:
    // 0x191618: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x191618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_19161c:
    // 0x19161c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_191620:
    // 0x191620: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_191624:
    if (ctx->pc == 0x191624u) {
        ctx->pc = 0x191624u;
            // 0x191624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x191628u;
        goto label_191628;
    }
    ctx->pc = 0x191620u;
    {
        const bool branch_taken_0x191620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191620u;
            // 0x191624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191620) {
            ctx->pc = 0x191640u;
            goto label_191640;
        }
    }
    ctx->pc = 0x191628u;
label_191628:
    // 0x191628: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_19162c:
    if (ctx->pc == 0x19162Cu) {
        ctx->pc = 0x19162Cu;
            // 0x19162c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x191630u;
        goto label_191630;
    }
    ctx->pc = 0x191628u;
    {
        const bool branch_taken_0x191628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19162Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191628u;
            // 0x19162c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191628) {
            ctx->pc = 0x191640u;
            goto label_191640;
        }
    }
    ctx->pc = 0x191630u;
label_191630:
    // 0x191630: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_191634:
    if (ctx->pc == 0x191634u) {
        ctx->pc = 0x191638u;
        goto label_191638;
    }
    ctx->pc = 0x191630u;
    {
        const bool branch_taken_0x191630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191630) {
            ctx->pc = 0x191640u;
            goto label_191640;
        }
    }
    ctx->pc = 0x191638u;
label_191638:
    // 0x191638: 0x10000038  b           . + 4 + (0x38 << 2)
label_19163c:
    if (ctx->pc == 0x19163Cu) {
        ctx->pc = 0x191640u;
        goto label_191640;
    }
    ctx->pc = 0x191638u;
    {
        const bool branch_taken_0x191638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191638) {
            ctx->pc = 0x19171Cu;
            goto label_19171c;
        }
    }
    ctx->pc = 0x191640u;
label_191640:
    // 0x191640: 0x83828b0c  lb          $v0, -0x74F4($gp)
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937356)));
label_191644:
    // 0x191644: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_191648:
    if (ctx->pc == 0x191648u) {
        ctx->pc = 0x191648u;
            // 0x191648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19164Cu;
        goto label_19164c;
    }
    ctx->pc = 0x191644u;
    {
        const bool branch_taken_0x191644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191644u;
            // 0x191648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191644) {
            ctx->pc = 0x191654u;
            goto label_191654;
        }
    }
    ctx->pc = 0x19164Cu;
label_19164c:
    // 0x19164c: 0xaf808b08  sw          $zero, -0x74F8($gp)
    ctx->pc = 0x19164cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 0));
label_191650:
    // 0x191650: 0xa3828b0c  sb          $v0, -0x74F4($gp)
    ctx->pc = 0x191650u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937356), (uint8_t)GPR_U32(ctx, 2));
label_191654:
    // 0x191654: 0x0  nop
    ctx->pc = 0x191654u;
    // NOP
label_191658:
    // 0x191658: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_19165c:
    // 0x19165c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x19165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_191660:
    // 0x191660: 0xc052d1c  jal         func_14B470
label_191664:
    if (ctx->pc == 0x191664u) {
        ctx->pc = 0x191664u;
            // 0x191664: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x191668u;
        goto label_191668;
    }
    ctx->pc = 0x191660u;
    SET_GPR_U32(ctx, 31, 0x191668u);
    ctx->pc = 0x191664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191660u;
            // 0x191664: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191668u; }
        if (ctx->pc != 0x191668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191668u; }
        if (ctx->pc != 0x191668u) { return; }
    }
    ctx->pc = 0x191668u;
label_191668:
    // 0x191668: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_19166c:
    if (ctx->pc == 0x19166Cu) {
        ctx->pc = 0x19166Cu;
            // 0x19166c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x191670u;
        goto label_191670;
    }
    ctx->pc = 0x191668u;
    {
        const bool branch_taken_0x191668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191668u;
            // 0x19166c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191668) {
            ctx->pc = 0x19170Cu;
            goto label_19170c;
        }
    }
    ctx->pc = 0x191670u;
label_191670:
    // 0x191670: 0x10000026  b           . + 4 + (0x26 << 2)
label_191674:
    if (ctx->pc == 0x191674u) {
        ctx->pc = 0x191674u;
            // 0x191674: 0xaf828b08  sw          $v0, -0x74F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 2));
        ctx->pc = 0x191678u;
        goto label_191678;
    }
    ctx->pc = 0x191670u;
    {
        const bool branch_taken_0x191670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191670u;
            // 0x191674: 0xaf828b08  sw          $v0, -0x74F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191670) {
            ctx->pc = 0x19170Cu;
            goto label_19170c;
        }
    }
    ctx->pc = 0x191678u;
label_191678:
    // 0x191678: 0xc040cc0  jal         func_103300
label_19167c:
    if (ctx->pc == 0x19167Cu) {
        ctx->pc = 0x19167Cu;
            // 0x19167c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191680u;
        goto label_191680;
    }
    ctx->pc = 0x191678u;
    SET_GPR_U32(ctx, 31, 0x191680u);
    ctx->pc = 0x19167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191678u;
            // 0x19167c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191680u; }
        if (ctx->pc != 0x191680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191680u; }
        if (ctx->pc != 0x191680u) { return; }
    }
    ctx->pc = 0x191680u;
label_191680:
    // 0x191680: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191684:
    // 0x191684: 0xc052a4c  jal         func_14A930
label_191688:
    if (ctx->pc == 0x191688u) {
        ctx->pc = 0x191688u;
            // 0x191688: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x19168Cu;
        goto label_19168c;
    }
    ctx->pc = 0x191684u;
    SET_GPR_U32(ctx, 31, 0x19168Cu);
    ctx->pc = 0x191688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191684u;
            // 0x191688: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19168Cu; }
        if (ctx->pc != 0x19168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19168Cu; }
        if (ctx->pc != 0x19168Cu) { return; }
    }
    ctx->pc = 0x19168Cu;
label_19168c:
    // 0x19168c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x19168cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191690:
    // 0x191690: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x191690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_191694:
    // 0x191694: 0xc052d0c  jal         func_14B430
label_191698:
    if (ctx->pc == 0x191698u) {
        ctx->pc = 0x191698u;
            // 0x191698: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x19169Cu;
        goto label_19169c;
    }
    ctx->pc = 0x191694u;
    SET_GPR_U32(ctx, 31, 0x19169Cu);
    ctx->pc = 0x191698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191694u;
            // 0x191698: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19169Cu; }
        if (ctx->pc != 0x19169Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19169Cu; }
        if (ctx->pc != 0x19169Cu) { return; }
    }
    ctx->pc = 0x19169Cu;
label_19169c:
    // 0x19169c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1916a0:
    if (ctx->pc == 0x1916A0u) {
        ctx->pc = 0x1916A0u;
            // 0x1916a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1916A4u;
        goto label_1916a4;
    }
    ctx->pc = 0x19169Cu;
    {
        const bool branch_taken_0x19169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1916A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19169Cu;
            // 0x1916a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19169c) {
            ctx->pc = 0x1916B8u;
            goto label_1916b8;
        }
    }
    ctx->pc = 0x1916A4u;
label_1916a4:
    // 0x1916a4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1916a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1916a8:
    // 0x1916a8: 0xc052d1c  jal         func_14B470
label_1916ac:
    if (ctx->pc == 0x1916ACu) {
        ctx->pc = 0x1916ACu;
            // 0x1916ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1916B0u;
        goto label_1916b0;
    }
    ctx->pc = 0x1916A8u;
    SET_GPR_U32(ctx, 31, 0x1916B0u);
    ctx->pc = 0x1916ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916A8u;
            // 0x1916ac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916B0u; }
        if (ctx->pc != 0x1916B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916B0u; }
        if (ctx->pc != 0x1916B0u) { return; }
    }
    ctx->pc = 0x1916B0u;
label_1916b0:
    // 0x1916b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1916b4:
    if (ctx->pc == 0x1916B4u) {
        ctx->pc = 0x1916B8u;
        goto label_1916b8;
    }
    ctx->pc = 0x1916B0u;
    {
        const bool branch_taken_0x1916b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1916b0) {
            ctx->pc = 0x1916C0u;
            goto label_1916c0;
        }
    }
    ctx->pc = 0x1916B8u;
label_1916b8:
    // 0x1916b8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1916bc:
    if (ctx->pc == 0x1916BCu) {
        ctx->pc = 0x1916BCu;
            // 0x1916bc: 0xaf808b08  sw          $zero, -0x74F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 0));
        ctx->pc = 0x1916C0u;
        goto label_1916c0;
    }
    ctx->pc = 0x1916B8u;
    {
        const bool branch_taken_0x1916b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1916BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916B8u;
            // 0x1916bc: 0xaf808b08  sw          $zero, -0x74F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916b8) {
            ctx->pc = 0x19171Cu;
            goto label_19171c;
        }
    }
    ctx->pc = 0x1916C0u;
label_1916c0:
    // 0x1916c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1916c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1916c4:
    // 0x1916c4: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1916c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1916c8:
    // 0x1916c8: 0xc052d1c  jal         func_14B470
label_1916cc:
    if (ctx->pc == 0x1916CCu) {
        ctx->pc = 0x1916CCu;
            // 0x1916cc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x1916D0u;
        goto label_1916d0;
    }
    ctx->pc = 0x1916C8u;
    SET_GPR_U32(ctx, 31, 0x1916D0u);
    ctx->pc = 0x1916CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916C8u;
            // 0x1916cc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916D0u; }
        if (ctx->pc != 0x1916D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916D0u; }
        if (ctx->pc != 0x1916D0u) { return; }
    }
    ctx->pc = 0x1916D0u;
label_1916d0:
    // 0x1916d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1916d4:
    if (ctx->pc == 0x1916D4u) {
        ctx->pc = 0x1916D8u;
        goto label_1916d8;
    }
    ctx->pc = 0x1916D0u;
    {
        const bool branch_taken_0x1916d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1916d0) {
            ctx->pc = 0x1916E0u;
            goto label_1916e0;
        }
    }
    ctx->pc = 0x1916D8u;
label_1916d8:
    // 0x1916d8: 0xc050968  jal         func_1425A0
label_1916dc:
    if (ctx->pc == 0x1916DCu) {
        ctx->pc = 0x1916E0u;
        goto label_1916e0;
    }
    ctx->pc = 0x1916D8u;
    SET_GPR_U32(ctx, 31, 0x1916E0u);
    ctx->pc = 0x1425A0u;
    if (runtime->hasFunction(0x1425A0u)) {
        auto targetFn = runtime->lookupFunction(0x1425A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916E0u; }
        if (ctx->pc != 0x1916E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreFrameImage__Fv_0x1425a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916E0u; }
        if (ctx->pc != 0x1916E0u) { return; }
    }
    ctx->pc = 0x1916E0u;
label_1916e0:
    // 0x1916e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1916e4:
    // 0x1916e4: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1916e8:
    // 0x1916e8: 0xc052d0c  jal         func_14B430
label_1916ec:
    if (ctx->pc == 0x1916ECu) {
        ctx->pc = 0x1916ECu;
            // 0x1916ec: 0x24052020  addiu       $a1, $zero, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
        ctx->pc = 0x1916F0u;
        goto label_1916f0;
    }
    ctx->pc = 0x1916E8u;
    SET_GPR_U32(ctx, 31, 0x1916F0u);
    ctx->pc = 0x1916ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916E8u;
            // 0x1916ec: 0x24052020  addiu       $a1, $zero, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916F0u; }
        if (ctx->pc != 0x1916F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916F0u; }
        if (ctx->pc != 0x1916F0u) { return; }
    }
    ctx->pc = 0x1916F0u;
label_1916f0:
    // 0x1916f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1916f4:
    if (ctx->pc == 0x1916F4u) {
        ctx->pc = 0x1916F4u;
            // 0x1916f4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1916F8u;
        goto label_1916f8;
    }
    ctx->pc = 0x1916F0u;
    {
        const bool branch_taken_0x1916f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1916F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916F0u;
            // 0x1916f4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916f0) {
            ctx->pc = 0x19171Cu;
            goto label_19171c;
        }
    }
    ctx->pc = 0x1916F8u;
label_1916f8:
    // 0x1916f8: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1916f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1916fc:
    // 0x1916fc: 0xc052d1c  jal         func_14B470
label_191700:
    if (ctx->pc == 0x191700u) {
        ctx->pc = 0x191700u;
            // 0x191700: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x191704u;
        goto label_191704;
    }
    ctx->pc = 0x1916FCu;
    SET_GPR_U32(ctx, 31, 0x191704u);
    ctx->pc = 0x191700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916FCu;
            // 0x191700: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191704u; }
        if (ctx->pc != 0x191704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191704u; }
        if (ctx->pc != 0x191704u) { return; }
    }
    ctx->pc = 0x191704u;
label_191704:
    // 0x191704: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_191708:
    if (ctx->pc == 0x191708u) {
        ctx->pc = 0x19170Cu;
        goto label_19170c;
    }
    ctx->pc = 0x191704u;
    {
        const bool branch_taken_0x191704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191704) {
            ctx->pc = 0x19171Cu;
            goto label_19171c;
        }
    }
    ctx->pc = 0x19170Cu;
label_19170c:
    // 0x19170c: 0x0  nop
    ctx->pc = 0x19170cu;
    // NOP
label_191710:
    // 0x191710: 0x8f828b08  lw          $v0, -0x74F8($gp)
    ctx->pc = 0x191710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937352)));
label_191714:
    // 0x191714: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_191718:
    if (ctx->pc == 0x191718u) {
        ctx->pc = 0x19171Cu;
        goto label_19171c;
    }
    ctx->pc = 0x191714u;
    {
        const bool branch_taken_0x191714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191714) {
            ctx->pc = 0x191678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_191678;
        }
    }
    ctx->pc = 0x19171Cu;
label_19171c:
    // 0x19171c: 0x0  nop
    ctx->pc = 0x19171cu;
    // NOP
label_191720:
    // 0x191720: 0xc0c2778  jal         func_309DE0
label_191724:
    if (ctx->pc == 0x191724u) {
        ctx->pc = 0x191728u;
        goto label_191728;
    }
    ctx->pc = 0x191720u;
    SET_GPR_U32(ctx, 31, 0x191728u);
    ctx->pc = 0x309DE0u;
    if (runtime->hasFunction(0x309DE0u)) {
        auto targetFn = runtime->lookupFunction(0x309DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191728u; }
        if (ctx->pc != 0x191728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseLoop__Fv_0x309de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191728u; }
        if (ctx->pc != 0x191728u) { return; }
    }
    ctx->pc = 0x191728u;
label_191728:
    // 0x191728: 0x0  nop
    ctx->pc = 0x191728u;
    // NOP
label_19172c:
    // 0x19172c: 0x0  nop
    ctx->pc = 0x19172cu;
    // NOP
label_191730:
    // 0x191730: 0x0  nop
    ctx->pc = 0x191730u;
    // NOP
label_191734:
    // 0x191734: 0x0  nop
    ctx->pc = 0x191734u;
    // NOP
label_191738:
    // 0x191738: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_19173c:
    if (ctx->pc == 0x19173Cu) {
        ctx->pc = 0x191740u;
        goto label_191740;
    }
    ctx->pc = 0x191738u;
    {
        const bool branch_taken_0x191738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191738) {
            ctx->pc = 0x19171Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19171c;
        }
    }
    ctx->pc = 0x191740u;
label_191740:
    // 0x191740: 0xc0c2898  jal         func_30A260
label_191744:
    if (ctx->pc == 0x191744u) {
        ctx->pc = 0x191748u;
        goto label_191748;
    }
    ctx->pc = 0x191740u;
    SET_GPR_U32(ctx, 31, 0x191748u);
    ctx->pc = 0x30A260u;
    if (runtime->hasFunction(0x30A260u)) {
        auto targetFn = runtime->lookupFunction(0x30A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191748u; }
        if (ctx->pc != 0x191748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseCount__Fv_0x30a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191748u; }
        if (ctx->pc != 0x191748u) { return; }
    }
    ctx->pc = 0x191748u;
label_191748:
    // 0x191748: 0x1000fef9  b           . + 4 + (-0x107 << 2)
label_19174c:
    if (ctx->pc == 0x19174Cu) {
        ctx->pc = 0x191750u;
        goto label_191750;
    }
    ctx->pc = 0x191748u;
    {
        const bool branch_taken_0x191748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191748) {
            ctx->pc = 0x191330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_191330;
        }
    }
    ctx->pc = 0x191750u;
label_191750:
    // 0x191750: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_191754:
    // 0x191754: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x191754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_191758:
    // 0x191758: 0x24425180  addiu       $v0, $v0, 0x5180
    ctx->pc = 0x191758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
label_19175c:
    // 0x19175c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19175cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191760:
    // 0x191760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191764:
    // 0x191764: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191768:
    // 0x191768: 0x40f809  jalr        $v0
label_19176c:
    if (ctx->pc == 0x19176Cu) {
        ctx->pc = 0x191770u;
        goto label_191770;
    }
    ctx->pc = 0x191768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191770u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x191770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191770u; }
            if (ctx->pc != 0x191770u) { return; }
        }
        }
    }
    ctx->pc = 0x191770u;
label_191770:
    // 0x191770: 0x8f828adc  lw          $v0, -0x7524($gp)
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_191774:
    // 0x191774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_191778:
    if (ctx->pc == 0x191778u) {
        ctx->pc = 0x19177Cu;
        goto label_19177c;
    }
    ctx->pc = 0x191774u;
    {
        const bool branch_taken_0x191774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191774) {
            ctx->pc = 0x191794u;
            goto label_191794;
        }
    }
    ctx->pc = 0x19177Cu;
label_19177c:
    // 0x19177c: 0x8f828ae8  lw          $v0, -0x7518($gp)
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
label_191780:
    // 0x191780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_191784:
    if (ctx->pc == 0x191784u) {
        ctx->pc = 0x191784u;
            // 0x191784: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x191788u;
        goto label_191788;
    }
    ctx->pc = 0x191780u;
    {
        const bool branch_taken_0x191780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191780u;
            // 0x191784: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191780) {
            ctx->pc = 0x191790u;
            goto label_191790;
        }
    }
    ctx->pc = 0x191788u;
label_191788:
    // 0x191788: 0xc052dc0  jal         func_14B700
label_19178c:
    if (ctx->pc == 0x19178Cu) {
        ctx->pc = 0x19178Cu;
            // 0x19178c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x191790u;
        goto label_191790;
    }
    ctx->pc = 0x191788u;
    SET_GPR_U32(ctx, 31, 0x191790u);
    ctx->pc = 0x19178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191788u;
            // 0x19178c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B700u;
    if (runtime->hasFunction(0x14B700u)) {
        auto targetFn = runtime->lookupFunction(0x14B700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191790u; }
        if (ctx->pc != 0x191790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveCapture__8CGamePadFv_0x14b700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191790u; }
        if (ctx->pc != 0x191790u) { return; }
    }
    ctx->pc = 0x191790u;
label_191790:
    // 0x191790: 0xaf808ae8  sw          $zero, -0x7518($gp)
    ctx->pc = 0x191790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 0));
label_191794:
    // 0x191794: 0x0  nop
    ctx->pc = 0x191794u;
    // NOP
label_191798:
    // 0x191798: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_19179c:
    // 0x19179c: 0x8c228140  lw          $v0, -0x7EC0($at)
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934848)));
label_1917a0:
    // 0x1917a0: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_1917a4:
    // 0x1917a4: 0x8f838adc  lw          $v1, -0x7524($gp)
    ctx->pc = 0x1917a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_1917a8:
    // 0x1917a8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1917a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_1917ac:
    // 0x1917ac: 0x24c68144  addiu       $a2, $a2, -0x7EBC
    ctx->pc = 0x1917acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934852));
label_1917b0:
    // 0x1917b0: 0x24a581e4  addiu       $a1, $a1, -0x7E1C
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935012));
label_1917b4:
    // 0x1917b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1917b8:
    // 0x1917b8: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1917bc:
    // 0x1917bc: 0xaf838ae4  sw          $v1, -0x751C($gp)
    ctx->pc = 0x1917bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937316), GPR_U32(ctx, 3));
label_1917c0:
    // 0x1917c0: 0xac2281e0  sw          $v0, -0x7E20($at)
    ctx->pc = 0x1917c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935008), GPR_U32(ctx, 2));
label_1917c4:
    // 0x1917c4: 0x0  nop
    ctx->pc = 0x1917c4u;
    // NOP
label_1917c8:
    // 0x1917c8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1917c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1917cc:
    // 0x1917cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1917ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1917d0:
    // 0x1917d0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1917d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1917d4:
    // 0x1917d4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1917d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1917d8:
    // 0x1917d8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1917dc:
    // 0x1917dc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1917dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1917e0:
    // 0x1917e0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1917e4:
    if (ctx->pc == 0x1917E4u) {
        ctx->pc = 0x1917E4u;
            // 0x1917e4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1917E8u;
        goto label_1917e8;
    }
    ctx->pc = 0x1917E0u;
    {
        const bool branch_taken_0x1917e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1917E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1917E0u;
            // 0x1917e4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917e0) {
            ctx->pc = 0x1917C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1917c8;
        }
    }
    ctx->pc = 0x1917E8u;
label_1917e8:
    // 0x1917e8: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1917e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1917ec:
    // 0x1917ec: 0x8f838ae0  lw          $v1, -0x7520($gp)
    ctx->pc = 0x1917ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937312)));
label_1917f0:
    // 0x1917f0: 0x8c298184  lw          $t1, -0x7E7C($at)
    ctx->pc = 0x1917f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934916)));
label_1917f4:
    // 0x1917f4: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1917f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_1917f8:
    // 0x1917f8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1917f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_1917fc:
    // 0x1917fc: 0x24c68194  addiu       $a2, $a2, -0x7E6C
    ctx->pc = 0x1917fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934932));
label_191800:
    // 0x191800: 0x24a58144  addiu       $a1, $a1, -0x7EBC
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934852));
label_191804:
    // 0x191804: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x191804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_191808:
    // 0x191808: 0xaf838adc  sw          $v1, -0x7524($gp)
    ctx->pc = 0x191808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937308), GPR_U32(ctx, 3));
label_19180c:
    // 0x19180c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x19180cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191810:
    // 0x191810: 0x8c288188  lw          $t0, -0x7E78($at)
    ctx->pc = 0x191810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934920)));
label_191814:
    // 0x191814: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191818:
    // 0x191818: 0x8c27818c  lw          $a3, -0x7E74($at)
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934924)));
label_19181c:
    // 0x19181c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191820:
    // 0x191820: 0x8c228190  lw          $v0, -0x7E70($at)
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934928)));
label_191824:
    // 0x191824: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191828:
    // 0x191828: 0xac298224  sw          $t1, -0x7DDC($at)
    ctx->pc = 0x191828u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935076), GPR_U32(ctx, 9));
label_19182c:
    // 0x19182c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191830:
    // 0x191830: 0xac288228  sw          $t0, -0x7DD8($at)
    ctx->pc = 0x191830u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935080), GPR_U32(ctx, 8));
label_191834:
    // 0x191834: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191838:
    // 0x191838: 0xac27822c  sw          $a3, -0x7DD4($at)
    ctx->pc = 0x191838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935084), GPR_U32(ctx, 7));
label_19183c:
    // 0x19183c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191840:
    // 0x191840: 0xac228140  sw          $v0, -0x7EC0($at)
    ctx->pc = 0x191840u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934848), GPR_U32(ctx, 2));
label_191844:
    // 0x191844: 0x0  nop
    ctx->pc = 0x191844u;
    // NOP
label_191848:
    // 0x191848: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x191848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_19184c:
    // 0x19184c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_191850:
    // 0x191850: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x191850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_191854:
    // 0x191854: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x191854u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_191858:
    // 0x191858: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x191858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_19185c:
    // 0x19185c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x19185cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_191860:
    // 0x191860: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_191864:
    if (ctx->pc == 0x191864u) {
        ctx->pc = 0x191864u;
            // 0x191864: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x191868u;
        goto label_191868;
    }
    ctx->pc = 0x191860u;
    {
        const bool branch_taken_0x191860 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x191864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191860u;
            // 0x191864: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191860) {
            ctx->pc = 0x191848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_191848;
        }
    }
    ctx->pc = 0x191868u;
label_191868:
    // 0x191868: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_19186c:
    // 0x19186c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x19186cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191870:
    // 0x191870: 0x8c2581d4  lw          $a1, -0x7E2C($at)
    ctx->pc = 0x191870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934996)));
label_191874:
    // 0x191874: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x191874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_191878:
    // 0x191878: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_19187c:
    // 0x19187c: 0x8c2381d8  lw          $v1, -0x7E28($at)
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294935000)));
label_191880:
    // 0x191880: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191884:
    // 0x191884: 0x8c2281dc  lw          $v0, -0x7E24($at)
    ctx->pc = 0x191884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294935004)));
label_191888:
    // 0x191888: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_19188c:
    // 0x19188c: 0xac258184  sw          $a1, -0x7E7C($at)
    ctx->pc = 0x19188cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934916), GPR_U32(ctx, 5));
label_191890:
    // 0x191890: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_191894:
    // 0x191894: 0xac238188  sw          $v1, -0x7E78($at)
    ctx->pc = 0x191894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934920), GPR_U32(ctx, 3));
label_191898:
    // 0x191898: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x191898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_19189c:
    // 0x19189c: 0xc052d80  jal         func_14B600
label_1918a0:
    if (ctx->pc == 0x1918A0u) {
        ctx->pc = 0x1918A0u;
            // 0x1918a0: 0xac22818c  sw          $v0, -0x7E74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934924), GPR_U32(ctx, 2));
        ctx->pc = 0x1918A4u;
        goto label_1918a4;
    }
    ctx->pc = 0x19189Cu;
    SET_GPR_U32(ctx, 31, 0x1918A4u);
    ctx->pc = 0x1918A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19189Cu;
            // 0x1918a0: 0xac22818c  sw          $v0, -0x7E74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B600u;
    if (runtime->hasFunction(0x14B600u)) {
        auto targetFn = runtime->lookupFunction(0x14B600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918A4u; }
        if (ctx->pc != 0x1918A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureEnd__8CGamePadFv_0x14b600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918A4u; }
        if (ctx->pc != 0x1918A4u) { return; }
    }
    ctx->pc = 0x1918A4u;
label_1918a4:
    // 0x1918a4: 0xc040cc0  jal         func_103300
label_1918a8:
    if (ctx->pc == 0x1918A8u) {
        ctx->pc = 0x1918A8u;
            // 0x1918a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1918ACu;
        goto label_1918ac;
    }
    ctx->pc = 0x1918A4u;
    SET_GPR_U32(ctx, 31, 0x1918ACu);
    ctx->pc = 0x1918A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918A4u;
            // 0x1918a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918ACu; }
        if (ctx->pc != 0x1918ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918ACu; }
        if (ctx->pc != 0x1918ACu) { return; }
    }
    ctx->pc = 0x1918ACu;
label_1918ac:
    // 0x1918ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1918acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1918b0:
    // 0x1918b0: 0xc052a4c  jal         func_14A930
label_1918b4:
    if (ctx->pc == 0x1918B4u) {
        ctx->pc = 0x1918B4u;
            // 0x1918b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1918B8u;
        goto label_1918b8;
    }
    ctx->pc = 0x1918B0u;
    SET_GPR_U32(ctx, 31, 0x1918B8u);
    ctx->pc = 0x1918B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918B0u;
            // 0x1918b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918B8u; }
        if (ctx->pc != 0x1918B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918B8u; }
        if (ctx->pc != 0x1918B8u) { return; }
    }
    ctx->pc = 0x1918B8u;
label_1918b8:
    // 0x1918b8: 0xc040cc0  jal         func_103300
label_1918bc:
    if (ctx->pc == 0x1918BCu) {
        ctx->pc = 0x1918BCu;
            // 0x1918bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1918C0u;
        goto label_1918c0;
    }
    ctx->pc = 0x1918B8u;
    SET_GPR_U32(ctx, 31, 0x1918C0u);
    ctx->pc = 0x1918BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918B8u;
            // 0x1918bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918C0u; }
        if (ctx->pc != 0x1918C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918C0u; }
        if (ctx->pc != 0x1918C0u) { return; }
    }
    ctx->pc = 0x1918C0u;
label_1918c0:
    // 0x1918c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1918c4:
    // 0x1918c4: 0xc052a4c  jal         func_14A930
label_1918c8:
    if (ctx->pc == 0x1918C8u) {
        ctx->pc = 0x1918C8u;
            // 0x1918c8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1918CCu;
        goto label_1918cc;
    }
    ctx->pc = 0x1918C4u;
    SET_GPR_U32(ctx, 31, 0x1918CCu);
    ctx->pc = 0x1918C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918C4u;
            // 0x1918c8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A930u;
    if (runtime->hasFunction(0x14A930u)) {
        auto targetFn = runtime->lookupFunction(0x14A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918CCu; }
        if (ctx->pc != 0x1918CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDate__8CGamePadFv_0x14a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918CCu; }
        if (ctx->pc != 0x1918CCu) { return; }
    }
    ctx->pc = 0x1918CCu;
label_1918cc:
    // 0x1918cc: 0x0  nop
    ctx->pc = 0x1918ccu;
    // NOP
label_1918d0:
    // 0x1918d0: 0xc040cc0  jal         func_103300
label_1918d4:
    if (ctx->pc == 0x1918D4u) {
        ctx->pc = 0x1918D4u;
            // 0x1918d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1918D8u;
        goto label_1918d8;
    }
    ctx->pc = 0x1918D0u;
    SET_GPR_U32(ctx, 31, 0x1918D8u);
    ctx->pc = 0x1918D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918D0u;
            // 0x1918d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918D8u; }
        if (ctx->pc != 0x1918D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918D8u; }
        if (ctx->pc != 0x1918D8u) { return; }
    }
    ctx->pc = 0x1918D8u;
label_1918d8:
    // 0x1918d8: 0x0  nop
    ctx->pc = 0x1918d8u;
    // NOP
label_1918dc:
    // 0x1918dc: 0x0  nop
    ctx->pc = 0x1918dcu;
    // NOP
label_1918e0:
    // 0x1918e0: 0x0  nop
    ctx->pc = 0x1918e0u;
    // NOP
label_1918e4:
    // 0x1918e4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1918e8:
    if (ctx->pc == 0x1918E8u) {
        ctx->pc = 0x1918ECu;
        goto label_1918ec;
    }
    ctx->pc = 0x1918E4u;
    {
        const bool branch_taken_0x1918e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1918e4) {
            ctx->pc = 0x1918CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1918cc;
        }
    }
    ctx->pc = 0x1918ECu;
label_1918ec:
    // 0x1918ec: 0x1000fe09  b           . + 4 + (-0x1F7 << 2)
label_1918f0:
    if (ctx->pc == 0x1918F0u) {
        ctx->pc = 0x1918F0u;
            // 0x1918f0: 0x8f838adc  lw          $v1, -0x7524($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
        ctx->pc = 0x1918F4u;
        goto label_1918f4;
    }
    ctx->pc = 0x1918ECu;
    {
        const bool branch_taken_0x1918ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1918ECu;
            // 0x1918f0: 0x8f838adc  lw          $v1, -0x7524($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918ec) {
            ctx->pc = 0x191114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_191114;
        }
    }
    ctx->pc = 0x1918F4u;
label_1918f4:
    // 0x1918f4: 0x0  nop
    ctx->pc = 0x1918f4u;
    // NOP
label_1918f8:
    // 0x1918f8: 0xc0635f0  jal         func_18D7C0
label_1918fc:
    if (ctx->pc == 0x1918FCu) {
        ctx->pc = 0x1918FCu;
            // 0x1918fc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x191900u;
        goto label_191900;
    }
    ctx->pc = 0x1918F8u;
    SET_GPR_U32(ctx, 31, 0x191900u);
    ctx->pc = 0x1918FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918F8u;
            // 0x1918fc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191900u; }
        if (ctx->pc != 0x191900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191900u; }
        if (ctx->pc != 0x191900u) { return; }
    }
    ctx->pc = 0x191900u;
label_191900:
    // 0x191900: 0xc0633f8  jal         func_18CFE0
label_191904:
    if (ctx->pc == 0x191904u) {
        ctx->pc = 0x191904u;
            // 0x191904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191908u;
        goto label_191908;
    }
    ctx->pc = 0x191900u;
    SET_GPR_U32(ctx, 31, 0x191908u);
    ctx->pc = 0x191904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191900u;
            // 0x191904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191908u; }
        if (ctx->pc != 0x191908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191908u; }
        if (ctx->pc != 0x191908u) { return; }
    }
    ctx->pc = 0x191908u;
label_191908:
    // 0x191908: 0xc0633f8  jal         func_18CFE0
label_19190c:
    if (ctx->pc == 0x19190Cu) {
        ctx->pc = 0x19190Cu;
            // 0x19190c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x191910u;
        goto label_191910;
    }
    ctx->pc = 0x191908u;
    SET_GPR_U32(ctx, 31, 0x191910u);
    ctx->pc = 0x19190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191908u;
            // 0x19190c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191910u; }
        if (ctx->pc != 0x191910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191910u; }
        if (ctx->pc != 0x191910u) { return; }
    }
    ctx->pc = 0x191910u;
label_191910:
    // 0x191910: 0xc040cc0  jal         func_103300
label_191914:
    if (ctx->pc == 0x191914u) {
        ctx->pc = 0x191914u;
            // 0x191914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191918u;
        goto label_191918;
    }
    ctx->pc = 0x191910u;
    SET_GPR_U32(ctx, 31, 0x191918u);
    ctx->pc = 0x191914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191910u;
            // 0x191914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191918u; }
        if (ctx->pc != 0x191918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191918u; }
        if (ctx->pc != 0x191918u) { return; }
    }
    ctx->pc = 0x191918u;
label_191918:
    // 0x191918: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x191918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19191c:
    // 0x19191c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19191cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_191920:
    // 0x191920: 0xc063594  jal         func_18D650
label_191924:
    if (ctx->pc == 0x191924u) {
        ctx->pc = 0x191928u;
        goto label_191928;
    }
    ctx->pc = 0x191920u;
    SET_GPR_U32(ctx, 31, 0x191928u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191928u; }
        if (ctx->pc != 0x191928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191928u; }
        if (ctx->pc != 0x191928u) { return; }
    }
    ctx->pc = 0x191928u;
label_191928:
    // 0x191928: 0xc040cc0  jal         func_103300
label_19192c:
    if (ctx->pc == 0x19192Cu) {
        ctx->pc = 0x19192Cu;
            // 0x19192c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191930u;
        goto label_191930;
    }
    ctx->pc = 0x191928u;
    SET_GPR_U32(ctx, 31, 0x191930u);
    ctx->pc = 0x19192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191928u;
            // 0x19192c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191930u; }
        if (ctx->pc != 0x191930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191930u; }
        if (ctx->pc != 0x191930u) { return; }
    }
    ctx->pc = 0x191930u;
label_191930:
    // 0x191930: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x191930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_191934:
    // 0x191934: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x191934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_191938:
    // 0x191938: 0xc063594  jal         func_18D650
label_19193c:
    if (ctx->pc == 0x19193Cu) {
        ctx->pc = 0x191940u;
        goto label_191940;
    }
    ctx->pc = 0x191938u;
    SET_GPR_U32(ctx, 31, 0x191940u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191940u; }
        if (ctx->pc != 0x191940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191940u; }
        if (ctx->pc != 0x191940u) { return; }
    }
    ctx->pc = 0x191940u;
label_191940:
    // 0x191940: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_191944:
    // 0x191944: 0xc0528e4  jal         func_14A390
label_191948:
    if (ctx->pc == 0x191948u) {
        ctx->pc = 0x191948u;
            // 0x191948: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x19194Cu;
        goto label_19194c;
    }
    ctx->pc = 0x191944u;
    SET_GPR_U32(ctx, 31, 0x19194Cu);
    ctx->pc = 0x191948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191944u;
            // 0x191948: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A390u;
    if (runtime->hasFunction(0x14A390u)) {
        auto targetFn = runtime->lookupFunction(0x14A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19194Cu; }
        if (ctx->pc != 0x19194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Close__8CGamePadFv_0x14a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19194Cu; }
        if (ctx->pc != 0x19194Cu) { return; }
    }
    ctx->pc = 0x19194Cu;
label_19194c:
    // 0x19194c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19194cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_191950:
    // 0x191950: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x191950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_191954:
    // 0x191954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x191954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_191958:
    // 0x191958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19195c:
    // 0x19195c: 0x3e00008  jr          $ra
label_191960:
    if (ctx->pc == 0x191960u) {
        ctx->pc = 0x191960u;
            // 0x191960: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x191964u;
        goto label_fallthrough_0x19195c;
    }
    ctx->pc = 0x19195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19195Cu;
            // 0x191960: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x19195c:
    ctx->pc = 0x191964u;
}
