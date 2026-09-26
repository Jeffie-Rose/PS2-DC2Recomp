#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditMoveChara__FP6CScenePfP17EditMoveCharaInfo
// Address: 0x1a4370 - 0x1a4e78
void EditMoveChara__FP6CScenePfP17EditMoveCharaInfo_0x1a4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditMoveChara__FP6CScenePfP17EditMoveCharaInfo_0x1a4370");
#endif

    switch (ctx->pc) {
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        case 0x1a46b0u: goto label_1a46b0;
        case 0x1a46b4u: goto label_1a46b4;
        case 0x1a46b8u: goto label_1a46b8;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46c0u: goto label_1a46c0;
        case 0x1a46c4u: goto label_1a46c4;
        case 0x1a46c8u: goto label_1a46c8;
        case 0x1a46ccu: goto label_1a46cc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        case 0x1a4748u: goto label_1a4748;
        case 0x1a474cu: goto label_1a474c;
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4754u: goto label_1a4754;
        case 0x1a4758u: goto label_1a4758;
        case 0x1a475cu: goto label_1a475c;
        case 0x1a4760u: goto label_1a4760;
        case 0x1a4764u: goto label_1a4764;
        case 0x1a4768u: goto label_1a4768;
        case 0x1a476cu: goto label_1a476c;
        case 0x1a4770u: goto label_1a4770;
        case 0x1a4774u: goto label_1a4774;
        case 0x1a4778u: goto label_1a4778;
        case 0x1a477cu: goto label_1a477c;
        case 0x1a4780u: goto label_1a4780;
        case 0x1a4784u: goto label_1a4784;
        case 0x1a4788u: goto label_1a4788;
        case 0x1a478cu: goto label_1a478c;
        case 0x1a4790u: goto label_1a4790;
        case 0x1a4794u: goto label_1a4794;
        case 0x1a4798u: goto label_1a4798;
        case 0x1a479cu: goto label_1a479c;
        case 0x1a47a0u: goto label_1a47a0;
        case 0x1a47a4u: goto label_1a47a4;
        case 0x1a47a8u: goto label_1a47a8;
        case 0x1a47acu: goto label_1a47ac;
        case 0x1a47b0u: goto label_1a47b0;
        case 0x1a47b4u: goto label_1a47b4;
        case 0x1a47b8u: goto label_1a47b8;
        case 0x1a47bcu: goto label_1a47bc;
        case 0x1a47c0u: goto label_1a47c0;
        case 0x1a47c4u: goto label_1a47c4;
        case 0x1a47c8u: goto label_1a47c8;
        case 0x1a47ccu: goto label_1a47cc;
        case 0x1a47d0u: goto label_1a47d0;
        case 0x1a47d4u: goto label_1a47d4;
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a47fcu: goto label_1a47fc;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4804u: goto label_1a4804;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4810u: goto label_1a4810;
        case 0x1a4814u: goto label_1a4814;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a481cu: goto label_1a481c;
        case 0x1a4820u: goto label_1a4820;
        case 0x1a4824u: goto label_1a4824;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a482cu: goto label_1a482c;
        case 0x1a4830u: goto label_1a4830;
        case 0x1a4834u: goto label_1a4834;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a483cu: goto label_1a483c;
        case 0x1a4840u: goto label_1a4840;
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4848u: goto label_1a4848;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4850u: goto label_1a4850;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4858u: goto label_1a4858;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a486cu: goto label_1a486c;
        case 0x1a4870u: goto label_1a4870;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        case 0x1a4890u: goto label_1a4890;
        case 0x1a4894u: goto label_1a4894;
        case 0x1a4898u: goto label_1a4898;
        case 0x1a489cu: goto label_1a489c;
        case 0x1a48a0u: goto label_1a48a0;
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48a8u: goto label_1a48a8;
        case 0x1a48acu: goto label_1a48ac;
        case 0x1a48b0u: goto label_1a48b0;
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48b8u: goto label_1a48b8;
        case 0x1a48bcu: goto label_1a48bc;
        case 0x1a48c0u: goto label_1a48c0;
        case 0x1a48c4u: goto label_1a48c4;
        case 0x1a48c8u: goto label_1a48c8;
        case 0x1a48ccu: goto label_1a48cc;
        case 0x1a48d0u: goto label_1a48d0;
        case 0x1a48d4u: goto label_1a48d4;
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a48dcu: goto label_1a48dc;
        case 0x1a48e0u: goto label_1a48e0;
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a48e8u: goto label_1a48e8;
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48f0u: goto label_1a48f0;
        case 0x1a48f4u: goto label_1a48f4;
        case 0x1a48f8u: goto label_1a48f8;
        case 0x1a48fcu: goto label_1a48fc;
        case 0x1a4900u: goto label_1a4900;
        case 0x1a4904u: goto label_1a4904;
        case 0x1a4908u: goto label_1a4908;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a4914u: goto label_1a4914;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a491cu: goto label_1a491c;
        case 0x1a4920u: goto label_1a4920;
        case 0x1a4924u: goto label_1a4924;
        case 0x1a4928u: goto label_1a4928;
        case 0x1a492cu: goto label_1a492c;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        case 0x1a4a70u: goto label_1a4a70;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4a80u: goto label_1a4a80;
        case 0x1a4a84u: goto label_1a4a84;
        case 0x1a4a88u: goto label_1a4a88;
        case 0x1a4a8cu: goto label_1a4a8c;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4a94u: goto label_1a4a94;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4a9cu: goto label_1a4a9c;
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4aa4u: goto label_1a4aa4;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ab0u: goto label_1a4ab0;
        case 0x1a4ab4u: goto label_1a4ab4;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4abcu: goto label_1a4abc;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ac4u: goto label_1a4ac4;
        case 0x1a4ac8u: goto label_1a4ac8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad0u: goto label_1a4ad0;
        case 0x1a4ad4u: goto label_1a4ad4;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4ae8u: goto label_1a4ae8;
        case 0x1a4aecu: goto label_1a4aec;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4af8u: goto label_1a4af8;
        case 0x1a4afcu: goto label_1a4afc;
        case 0x1a4b00u: goto label_1a4b00;
        case 0x1a4b04u: goto label_1a4b04;
        case 0x1a4b08u: goto label_1a4b08;
        case 0x1a4b0cu: goto label_1a4b0c;
        case 0x1a4b10u: goto label_1a4b10;
        case 0x1a4b14u: goto label_1a4b14;
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        case 0x1a4b5cu: goto label_1a4b5c;
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        case 0x1a4c3cu: goto label_1a4c3c;
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        case 0x1a4c88u: goto label_1a4c88;
        case 0x1a4c8cu: goto label_1a4c8c;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4c98u: goto label_1a4c98;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4ca0u: goto label_1a4ca0;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cacu: goto label_1a4cac;
        case 0x1a4cb0u: goto label_1a4cb0;
        case 0x1a4cb4u: goto label_1a4cb4;
        case 0x1a4cb8u: goto label_1a4cb8;
        case 0x1a4cbcu: goto label_1a4cbc;
        case 0x1a4cc0u: goto label_1a4cc0;
        case 0x1a4cc4u: goto label_1a4cc4;
        case 0x1a4cc8u: goto label_1a4cc8;
        case 0x1a4cccu: goto label_1a4ccc;
        case 0x1a4cd0u: goto label_1a4cd0;
        case 0x1a4cd4u: goto label_1a4cd4;
        case 0x1a4cd8u: goto label_1a4cd8;
        case 0x1a4cdcu: goto label_1a4cdc;
        case 0x1a4ce0u: goto label_1a4ce0;
        case 0x1a4ce4u: goto label_1a4ce4;
        case 0x1a4ce8u: goto label_1a4ce8;
        case 0x1a4cecu: goto label_1a4cec;
        case 0x1a4cf0u: goto label_1a4cf0;
        case 0x1a4cf4u: goto label_1a4cf4;
        case 0x1a4cf8u: goto label_1a4cf8;
        case 0x1a4cfcu: goto label_1a4cfc;
        case 0x1a4d00u: goto label_1a4d00;
        case 0x1a4d04u: goto label_1a4d04;
        case 0x1a4d08u: goto label_1a4d08;
        case 0x1a4d0cu: goto label_1a4d0c;
        case 0x1a4d10u: goto label_1a4d10;
        case 0x1a4d14u: goto label_1a4d14;
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d1cu: goto label_1a4d1c;
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d24u: goto label_1a4d24;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4d30u: goto label_1a4d30;
        case 0x1a4d34u: goto label_1a4d34;
        case 0x1a4d38u: goto label_1a4d38;
        case 0x1a4d3cu: goto label_1a4d3c;
        case 0x1a4d40u: goto label_1a4d40;
        case 0x1a4d44u: goto label_1a4d44;
        case 0x1a4d48u: goto label_1a4d48;
        case 0x1a4d4cu: goto label_1a4d4c;
        case 0x1a4d50u: goto label_1a4d50;
        case 0x1a4d54u: goto label_1a4d54;
        case 0x1a4d58u: goto label_1a4d58;
        case 0x1a4d5cu: goto label_1a4d5c;
        case 0x1a4d60u: goto label_1a4d60;
        case 0x1a4d64u: goto label_1a4d64;
        case 0x1a4d68u: goto label_1a4d68;
        case 0x1a4d6cu: goto label_1a4d6c;
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d74u: goto label_1a4d74;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d7cu: goto label_1a4d7c;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d84u: goto label_1a4d84;
        case 0x1a4d88u: goto label_1a4d88;
        case 0x1a4d8cu: goto label_1a4d8c;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4d94u: goto label_1a4d94;
        case 0x1a4d98u: goto label_1a4d98;
        case 0x1a4d9cu: goto label_1a4d9c;
        case 0x1a4da0u: goto label_1a4da0;
        case 0x1a4da4u: goto label_1a4da4;
        case 0x1a4da8u: goto label_1a4da8;
        case 0x1a4dacu: goto label_1a4dac;
        case 0x1a4db0u: goto label_1a4db0;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4db8u: goto label_1a4db8;
        case 0x1a4dbcu: goto label_1a4dbc;
        case 0x1a4dc0u: goto label_1a4dc0;
        case 0x1a4dc4u: goto label_1a4dc4;
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4dccu: goto label_1a4dcc;
        case 0x1a4dd0u: goto label_1a4dd0;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4dd8u: goto label_1a4dd8;
        case 0x1a4ddcu: goto label_1a4ddc;
        case 0x1a4de0u: goto label_1a4de0;
        case 0x1a4de4u: goto label_1a4de4;
        case 0x1a4de8u: goto label_1a4de8;
        case 0x1a4decu: goto label_1a4dec;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4df4u: goto label_1a4df4;
        case 0x1a4df8u: goto label_1a4df8;
        case 0x1a4dfcu: goto label_1a4dfc;
        case 0x1a4e00u: goto label_1a4e00;
        case 0x1a4e04u: goto label_1a4e04;
        case 0x1a4e08u: goto label_1a4e08;
        case 0x1a4e0cu: goto label_1a4e0c;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e5cu: goto label_1a4e5c;
        case 0x1a4e60u: goto label_1a4e60;
        case 0x1a4e64u: goto label_1a4e64;
        case 0x1a4e68u: goto label_1a4e68;
        case 0x1a4e6cu: goto label_1a4e6c;
        case 0x1a4e70u: goto label_1a4e70;
        case 0x1a4e74u: goto label_1a4e74;
        default: break;
    }

    ctx->pc = 0x1a4370u;

label_1a4370:
    // 0x1a4370: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
label_1a4374:
    // 0x1a4374: 0x3421be30  ori         $at, $at, 0xBE30
    ctx->pc = 0x1a4374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48688);
label_1a4378:
    // 0x1a4378: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1a4378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a437c:
    // 0x1a437c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a4380:
    // 0x1a4380: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a4380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a4384:
    // 0x1a4384: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a4384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a4388:
    // 0x1a4388: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a4388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a438c:
    // 0x1a438c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a4390:
    // 0x1a4390: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a4394:
    // 0x1a4394: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a4398:
    // 0x1a4398: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a4398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a439c:
    // 0x1a439c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a43a0:
    // 0x1a43a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a43a4:
    // 0x1a43a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a43a8:
    // 0x1a43a8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1a43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_1a43ac:
    // 0x1a43ac: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1a43acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_1a43b0:
    // 0x1a43b0: 0xc0a0ed8  jal         func_283B60
label_1a43b4:
    if (ctx->pc == 0x1A43B4u) {
        ctx->pc = 0x1A43B4u;
            // 0x1a43b4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A43B8u;
        goto label_1a43b8;
    }
    ctx->pc = 0x1A43B0u;
    SET_GPR_U32(ctx, 31, 0x1A43B8u);
    ctx->pc = 0x1A43B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43B0u;
            // 0x1a43b4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43B8u; }
        if (ctx->pc != 0x1A43B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43B8u; }
        if (ctx->pc != 0x1A43B8u) { return; }
    }
    ctx->pc = 0x1A43B8u;
label_1a43b8:
    // 0x1a43b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a43b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a43bc:
    // 0x1a43bc: 0x13c002a0  beqz        $fp, . + 4 + (0x2A0 << 2)
label_1a43c0:
    if (ctx->pc == 0x1A43C0u) {
        ctx->pc = 0x1A43C0u;
            // 0x1a43c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A43C4u;
        goto label_1a43c4;
    }
    ctx->pc = 0x1A43BCu;
    {
        const bool branch_taken_0x1a43bc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43BCu;
            // 0x1a43c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43bc) {
            ctx->pc = 0x1A4E40u;
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A43C4u;
label_1a43c4:
    // 0x1a43c4: 0xc0a1150  jal         func_284540
label_1a43c8:
    if (ctx->pc == 0x1A43C8u) {
        ctx->pc = 0x1A43C8u;
            // 0x1a43c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A43CCu;
        goto label_1a43cc;
    }
    ctx->pc = 0x1A43C4u;
    SET_GPR_U32(ctx, 31, 0x1A43CCu);
    ctx->pc = 0x1A43C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43C4u;
            // 0x1a43c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43CCu; }
        if (ctx->pc != 0x1A43CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43CCu; }
        if (ctx->pc != 0x1A43CCu) { return; }
    }
    ctx->pc = 0x1A43CCu;
label_1a43cc:
    // 0x1a43cc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1a43d0:
    // 0x1a43d0: 0x8e852e54  lw          $a1, 0x2E54($s4)
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11860)));
label_1a43d4:
    // 0x1a43d4: 0xc0a0e30  jal         func_2838C0
label_1a43d8:
    if (ctx->pc == 0x1A43D8u) {
        ctx->pc = 0x1A43D8u;
            // 0x1a43d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A43DCu;
        goto label_1a43dc;
    }
    ctx->pc = 0x1A43D4u;
    SET_GPR_U32(ctx, 31, 0x1A43DCu);
    ctx->pc = 0x1A43D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43D4u;
            // 0x1a43d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43DCu; }
        if (ctx->pc != 0x1A43DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43DCu; }
        if (ctx->pc != 0x1A43DCu) { return; }
    }
    ctx->pc = 0x1A43DCu;
label_1a43dc:
    // 0x1a43dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a43dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a43e0:
    // 0x1a43e0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1a43e4:
    if (ctx->pc == 0x1A43E4u) {
        ctx->pc = 0x1A43E4u;
            // 0x1a43e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A43E8u;
        goto label_1a43e8;
    }
    ctx->pc = 0x1A43E0u;
    {
        const bool branch_taken_0x1a43e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43E0u;
            // 0x1a43e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43e0) {
            ctx->pc = 0x1A4408u;
            goto label_1a4408;
        }
    }
    ctx->pc = 0x1A43E8u;
label_1a43e8:
    // 0x1a43e8: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x1a43e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a43ec:
    // 0x1a43ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a43ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a43f0:
    // 0x1a43f0: 0x320f809  jalr        $t9
label_1a43f4:
    if (ctx->pc == 0x1A43F4u) {
        ctx->pc = 0x1A43F4u;
            // 0x1a43f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A43F8u;
        goto label_1a43f8;
    }
    ctx->pc = 0x1A43F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A43F8u);
        ctx->pc = 0x1A43F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43F0u;
            // 0x1a43f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A43F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A43F8u; }
            if (ctx->pc != 0x1A43F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A43F8u;
label_1a43f8:
    // 0x1a43f8: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1a43fc:
    // 0x1a43fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1a4400:
    if (ctx->pc == 0x1A4400u) {
        ctx->pc = 0x1A4404u;
        goto label_1a4404;
    }
    ctx->pc = 0x1A43FCu;
    {
        const bool branch_taken_0x1a43fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a43fc) {
            ctx->pc = 0x1A4408u;
            goto label_1a4408;
        }
    }
    ctx->pc = 0x1A4404u;
label_1a4404:
    // 0x1a4404: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a4404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4408:
    // 0x1a4408: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_1a440c:
    if (ctx->pc == 0x1A440Cu) {
        ctx->pc = 0x1A4410u;
        goto label_1a4410;
    }
    ctx->pc = 0x1A4408u;
    {
        const bool branch_taken_0x1a4408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4408) {
            ctx->pc = 0x1A4454u;
            goto label_1a4454;
        }
    }
    ctx->pc = 0x1A4410u;
label_1a4410:
    // 0x1a4410: 0xc04c000  jal         func_130000
label_1a4414:
    if (ctx->pc == 0x1A4414u) {
        ctx->pc = 0x1A4414u;
            // 0x1a4414: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1A4418u;
        goto label_1a4418;
    }
    ctx->pc = 0x1A4410u;
    SET_GPR_U32(ctx, 31, 0x1A4418u);
    ctx->pc = 0x1A4414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4410u;
            // 0x1a4414: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4418u; }
        if (ctx->pc != 0x1A4418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4418u; }
        if (ctx->pc != 0x1A4418u) { return; }
    }
    ctx->pc = 0x1A4418u;
label_1a4418:
    // 0x1a4418: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1a441c:
    // 0x1a441c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a4420:
    // 0x1a4420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4424:
    // 0x1a4424: 0x0  nop
    ctx->pc = 0x1a4424u;
    // NOP
label_1a4428:
    // 0x1a4428: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a4428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a442c:
    // 0x1a442c: 0x0  nop
    ctx->pc = 0x1a442cu;
    // NOP
label_1a4430:
    // 0x1a4430: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1a4434:
    if (ctx->pc == 0x1A4434u) {
        ctx->pc = 0x1A4434u;
            // 0x1a4434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4438u;
        goto label_1a4438;
    }
    ctx->pc = 0x1A4430u;
    {
        const bool branch_taken_0x1a4430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4430u;
            // 0x1a4434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4430) {
            ctx->pc = 0x1A444Cu;
            goto label_1a444c;
        }
    }
    ctx->pc = 0x1A4438u;
label_1a4438:
    // 0x1a4438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a443c:
    // 0x1a443c: 0xc0baffc  jal         func_2EBFF0
label_1a4440:
    if (ctx->pc == 0x1A4440u) {
        ctx->pc = 0x1A4440u;
            // 0x1a4440: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1A4444u;
        goto label_1a4444;
    }
    ctx->pc = 0x1A443Cu;
    SET_GPR_U32(ctx, 31, 0x1A4444u);
    ctx->pc = 0x1A4440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A443Cu;
            // 0x1a4440: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFF0u;
    if (runtime->hasFunction(0x2EBFF0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4444u; }
        if (ctx->pc != 0x1A4444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BitResetRotCameraCancel__14CCameraControlFi_0x2ebff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4444u; }
        if (ctx->pc != 0x1A4444u) { return; }
    }
    ctx->pc = 0x1A4444u;
label_1a4444:
    // 0x1a4444: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a4448:
    if (ctx->pc == 0x1A4448u) {
        ctx->pc = 0x1A4448u;
            // 0x1a4448: 0x8fd90000  lw          $t9, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x1A444Cu;
        goto label_1a444c;
    }
    ctx->pc = 0x1A4444u;
    {
        const bool branch_taken_0x1a4444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4444u;
            // 0x1a4448: 0x8fd90000  lw          $t9, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4444) {
            ctx->pc = 0x1A4458u;
            goto label_1a4458;
        }
    }
    ctx->pc = 0x1A444Cu;
label_1a444c:
    // 0x1a444c: 0xc0baff8  jal         func_2EBFE0
label_1a4450:
    if (ctx->pc == 0x1A4450u) {
        ctx->pc = 0x1A4450u;
            // 0x1a4450: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1A4454u;
        goto label_1a4454;
    }
    ctx->pc = 0x1A444Cu;
    SET_GPR_U32(ctx, 31, 0x1A4454u);
    ctx->pc = 0x1A4450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A444Cu;
            // 0x1a4450: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFE0u;
    if (runtime->hasFunction(0x2EBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4454u; }
        if (ctx->pc != 0x1A4454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BitSetRotCameraCancel__14CCameraControlFi_0x2ebfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4454u; }
        if (ctx->pc != 0x1A4454u) { return; }
    }
    ctx->pc = 0x1A4454u;
label_1a4454:
    // 0x1a4454: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x1a4454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1a4458:
    // 0x1a4458: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a4458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a445c:
    // 0x1a445c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a445cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a4460:
    // 0x1a4460: 0x320f809  jalr        $t9
label_1a4464:
    if (ctx->pc == 0x1A4464u) {
        ctx->pc = 0x1A4464u;
            // 0x1a4464: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A4468u;
        goto label_1a4468;
    }
    ctx->pc = 0x1A4460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4468u);
        ctx->pc = 0x1A4464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4460u;
            // 0x1a4464: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4468u; }
            if (ctx->pc != 0x1A4468u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4468u;
label_1a4468:
    // 0x1a4468: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1a446c:
    // 0x1a446c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4470:
    // 0x1a4470: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a4470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a4474:
    // 0x1a4474: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a4474u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4478:
    // 0x1a4478: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a447c:
    // 0x1a447c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a447cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a4480:
    // 0x1a4480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a4480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a4484:
    // 0x1a4484: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a4484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a4488:
    // 0x1a4488: 0xac2240ec  sw          $v0, 0x40EC($at)
    ctx->pc = 0x1a4488u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16620), GPR_U32(ctx, 2));
label_1a448c:
    // 0x1a448c: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x1a448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4490:
    // 0x1a4490: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4494:
    // 0x1a4494: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x1a4494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a4498:
    // 0x1a4498: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a4498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a449c:
    // 0x1a449c: 0xac2240fc  sw          $v0, 0x40FC($at)
    ctx->pc = 0x1a449cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16636), GPR_U32(ctx, 2));
label_1a44a0:
    // 0x1a44a0: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1a44a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a44a4:
    // 0x1a44a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a44a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a44a8:
    // 0x1a44a8: 0x34214100  ori         $at, $at, 0x4100
    ctx->pc = 0x1a44a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16640);
label_1a44ac:
    // 0x1a44ac: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a44acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a44b0:
    // 0x1a44b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a44b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a44b4:
    // 0x1a44b4: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1a44b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a44b8:
    // 0x1a44b8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a44bc:
    // 0x1a44bc: 0xe42040e0  swc1        $f0, 0x40E0($at)
    ctx->pc = 0x1a44bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16608), bits); }
label_1a44c0:
    // 0x1a44c0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1a44c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1a44c4:
    // 0x1a44c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a44c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a44c8:
    // 0x1a44c8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a44cc:
    // 0x1a44cc: 0xe42040f0  swc1        $f0, 0x40F0($at)
    ctx->pc = 0x1a44ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16624), bits); }
label_1a44d0:
    // 0x1a44d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a44d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a44d4:
    // 0x1a44d4: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x1a44d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1a44d8:
    // 0x1a44d8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a44d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a44dc:
    // 0x1a44dc: 0xe42040e4  swc1        $f0, 0x40E4($at)
    ctx->pc = 0x1a44dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16612), bits); }
label_1a44e0:
    // 0x1a44e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a44e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a44e4:
    // 0x1a44e4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1a44e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1a44e8:
    // 0x1a44e8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a44e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a44ec:
    // 0x1a44ec: 0xe42040f4  swc1        $f0, 0x40F4($at)
    ctx->pc = 0x1a44ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16628), bits); }
label_1a44f0:
    // 0x1a44f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a44f4:
    // 0x1a44f4: 0x46041040  add.s       $f1, $f2, $f4
    ctx->pc = 0x1a44f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1a44f8:
    // 0x1a44f8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a44f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a44fc:
    // 0x1a44fc: 0xe42140e8  swc1        $f1, 0x40E8($at)
    ctx->pc = 0x1a44fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16616), bits); }
label_1a4500:
    // 0x1a4500: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4504:
    // 0x1a4504: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x1a4504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1a4508:
    // 0x1a4508: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a4508u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a450c:
    // 0x1a450c: 0xc0a1214  jal         func_284850
label_1a4510:
    if (ctx->pc == 0x1A4510u) {
        ctx->pc = 0x1A4510u;
            // 0x1a4510: 0xe42040f8  swc1        $f0, 0x40F8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16632), bits); }
        ctx->pc = 0x1A4514u;
        goto label_1a4514;
    }
    ctx->pc = 0x1A450Cu;
    SET_GPR_U32(ctx, 31, 0x1A4514u);
    ctx->pc = 0x1A4510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A450Cu;
            // 0x1a4510: 0xe42040f8  swc1        $f0, 0x40F8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4514u; }
        if (ctx->pc != 0x1A4514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4514u; }
        if (ctx->pc != 0x1A4514u) { return; }
    }
    ctx->pc = 0x1A4514u;
label_1a4514:
    // 0x1a4514: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4518:
    // 0x1a4518: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1a451c:
    // 0x1a451c: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x1a451cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
label_1a4520:
    // 0x1a4520: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a4520u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4524:
    // 0x1a4524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a4524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a4528:
    // 0x1a4528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a4528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a452c:
    // 0x1a452c: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1a452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4530:
    // 0x1a4530: 0xc0b1ed4  jal         func_2C7B50
label_1a4534:
    if (ctx->pc == 0x1A4534u) {
        ctx->pc = 0x1A4534u;
            // 0x1a4534: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4538u;
        goto label_1a4538;
    }
    ctx->pc = 0x1A4530u;
    SET_GPR_U32(ctx, 31, 0x1A4538u);
    ctx->pc = 0x1A4534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4530u;
            // 0x1a4534: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4538u; }
        if (ctx->pc != 0x1A4538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4538u; }
        if (ctx->pc != 0x1A4538u) { return; }
    }
    ctx->pc = 0x1A4538u;
label_1a4538:
    // 0x1a4538: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a4538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a453c:
    // 0x1a453c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4540:
    // 0x1a4540: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a4540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4544:
    // 0x1a4544: 0x2158023  subu        $s0, $s0, $s5
    ctx->pc = 0x1a4544u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_1a4548:
    // 0x1a4548: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a4548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a454c:
    // 0x1a454c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a454cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4550:
    // 0x1a4550: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1a4550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4554:
    // 0x1a4554: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_1a4558:
    // 0x1a4558: 0xc0b22dc  jal         func_2C8B70
label_1a455c:
    if (ctx->pc == 0x1A455Cu) {
        ctx->pc = 0x1A455Cu;
            // 0x1a455c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4560u;
        goto label_1a4560;
    }
    ctx->pc = 0x1A4558u;
    SET_GPR_U32(ctx, 31, 0x1A4560u);
    ctx->pc = 0x1A455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4558u;
            // 0x1a455c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4560u; }
        if (ctx->pc != 0x1A4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4560u; }
        if (ctx->pc != 0x1A4560u) { return; }
    }
    ctx->pc = 0x1A4560u;
label_1a4560:
    // 0x1a4560: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1a4564:
    if (ctx->pc == 0x1A4564u) {
        ctx->pc = 0x1A4564u;
            // 0x1a4564: 0x26c50008  addiu       $a1, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->pc = 0x1A4568u;
        goto label_1a4568;
    }
    ctx->pc = 0x1A4560u;
    {
        const bool branch_taken_0x1a4560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4560u;
            // 0x1a4564: 0x26c50008  addiu       $a1, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4560) {
            ctx->pc = 0x1A4610u;
            goto label_1a4610;
        }
    }
    ctx->pc = 0x1A4568u;
label_1a4568:
    // 0x1a4568: 0xc0a0ed8  jal         func_283B60
label_1a456c:
    if (ctx->pc == 0x1A456Cu) {
        ctx->pc = 0x1A456Cu;
            // 0x1a456c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4570u;
        goto label_1a4570;
    }
    ctx->pc = 0x1A4568u;
    SET_GPR_U32(ctx, 31, 0x1A4570u);
    ctx->pc = 0x1A456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4568u;
            // 0x1a456c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4570u; }
        if (ctx->pc != 0x1A4570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4570u; }
        if (ctx->pc != 0x1A4570u) { return; }
    }
    ctx->pc = 0x1A4570u;
label_1a4570:
    // 0x1a4570: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a4570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4574:
    // 0x1a4574: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
label_1a4578:
    if (ctx->pc == 0x1A4578u) {
        ctx->pc = 0x1A457Cu;
        goto label_1a457c;
    }
    ctx->pc = 0x1A4574u;
    {
        const bool branch_taken_0x1a4574 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4574) {
            ctx->pc = 0x1A4610u;
            goto label_1a4610;
        }
    }
    ctx->pc = 0x1A457Cu;
label_1a457c:
    // 0x1a457c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a457cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a4580:
    // 0x1a4580: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_1a4584:
    // 0x1a4584: 0x320f809  jalr        $t9
label_1a4588:
    if (ctx->pc == 0x1A4588u) {
        ctx->pc = 0x1A4588u;
            // 0x1a4588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A458Cu;
        goto label_1a458c;
    }
    ctx->pc = 0x1A4584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A458Cu);
        ctx->pc = 0x1A4588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4584u;
            // 0x1a4588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A458Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A458Cu; }
            if (ctx->pc != 0x1A458Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A458Cu;
label_1a458c:
    // 0x1a458c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a4590:
    if (ctx->pc == 0x1A4590u) {
        ctx->pc = 0x1A4594u;
        goto label_1a4594;
    }
    ctx->pc = 0x1A458Cu;
    {
        const bool branch_taken_0x1a458c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a458c) {
            ctx->pc = 0x1A4610u;
            goto label_1a4610;
        }
    }
    ctx->pc = 0x1A4594u;
label_1a4594:
    // 0x1a4594: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1a4594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a4598:
    // 0x1a4598: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a459c:
    // 0x1a459c: 0x34214120  ori         $at, $at, 0x4120
    ctx->pc = 0x1a459cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16672);
label_1a45a0:
    // 0x1a45a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a45a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a45a4:
    // 0x1a45a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a45a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a45a8:
    // 0x1a45a8: 0x320f809  jalr        $t9
label_1a45ac:
    if (ctx->pc == 0x1A45ACu) {
        ctx->pc = 0x1A45ACu;
            // 0x1a45ac: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1A45B0u;
        goto label_1a45b0;
    }
    ctx->pc = 0x1A45A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A45B0u);
        ctx->pc = 0x1A45ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45A8u;
            // 0x1a45ac: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A45B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A45B0u; }
            if (ctx->pc != 0x1A45B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A45B0u;
label_1a45b0:
    // 0x1a45b0: 0xc64c010c  lwc1        $f12, 0x10C($s2)
    ctx->pc = 0x1a45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a45b4:
    // 0x1a45b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a45b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a45b8:
    // 0x1a45b8: 0x0  nop
    ctx->pc = 0x1a45b8u;
    // NOP
label_1a45bc:
    // 0x1a45bc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1a45bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a45c0:
    // 0x1a45c0: 0x0  nop
    ctx->pc = 0x1a45c0u;
    // NOP
label_1a45c4:
    // 0x1a45c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a45c8:
    if (ctx->pc == 0x1A45C8u) {
        ctx->pc = 0x1A45C8u;
            // 0x1a45c8: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x1A45CCu;
        goto label_1a45cc;
    }
    ctx->pc = 0x1A45C4u;
    {
        const bool branch_taken_0x1a45c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45C4u;
            // 0x1a45c8: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45c4) {
            ctx->pc = 0x1A45D0u;
            goto label_1a45d0;
        }
    }
    ctx->pc = 0x1A45CCu;
label_1a45cc:
    // 0x1a45cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a45ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a45d0:
    // 0x1a45d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1a45d4:
    // 0x1a45d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a45d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a45d8:
    // 0x1a45d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a45d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a45dc:
    // 0x1a45dc: 0x34214120  ori         $at, $at, 0x4120
    ctx->pc = 0x1a45dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16672);
label_1a45e0:
    // 0x1a45e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a45e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a45e4:
    // 0x1a45e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a45e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a45e8:
    // 0x1a45e8: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1a45e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a45ec:
    // 0x1a45ec: 0xc05437c  jal         func_150DF0
label_1a45f0:
    if (ctx->pc == 0x1A45F0u) {
        ctx->pc = 0x1A45F0u;
            // 0x1a45f0: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A45F4u;
        goto label_1a45f4;
    }
    ctx->pc = 0x1A45ECu;
    SET_GPR_U32(ctx, 31, 0x1A45F4u);
    ctx->pc = 0x1A45F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45ECu;
            // 0x1a45f0: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150DF0u;
    if (runtime->hasFunction(0x150DF0u)) {
        auto targetFn = runtime->lookupFunction(0x150DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45F4u; }
        if (ctx->pc != 0x1A45F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateCharaCPoly__FP6CCPolyiPfPfff_0x150df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45F4u; }
        if (ctx->pc != 0x1A45F4u) { return; }
    }
    ctx->pc = 0x1A45F4u;
label_1a45f4:
    // 0x1a45f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a45f8:
    // 0x1a45f8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x1a45f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a45fc:
    // 0x1a45fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4600:
    // 0x1a4600: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1a4600u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a4604:
    // 0x1a4604: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a4604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a4608:
    // 0x1a4608: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_1a460c:
    if (ctx->pc == 0x1A460Cu) {
        ctx->pc = 0x1A460Cu;
            // 0x1a460c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A4610u;
        goto label_1a4610;
    }
    ctx->pc = 0x1A4608u;
    {
        const bool branch_taken_0x1a4608 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4608u;
            // 0x1a460c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4608) {
            ctx->pc = 0x1A4620u;
            goto label_1a4620;
        }
    }
    ctx->pc = 0x1A4610u;
label_1a4610:
    // 0x1a4610: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a4614:
    // 0x1a4614: 0x2ac20038  slti        $v0, $s6, 0x38
    ctx->pc = 0x1a4614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)56) ? 1 : 0);
label_1a4618:
    // 0x1a4618: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_1a461c:
    if (ctx->pc == 0x1A461Cu) {
        ctx->pc = 0x1A461Cu;
            // 0x1a461c: 0x26c50008  addiu       $a1, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->pc = 0x1A4620u;
        goto label_1a4620;
    }
    ctx->pc = 0x1A4618u;
    {
        const bool branch_taken_0x1a4618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4618u;
            // 0x1a461c: 0x26c50008  addiu       $a1, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4618) {
            ctx->pc = 0x1A4558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4558;
        }
    }
    ctx->pc = 0x1A4620u;
label_1a4620:
    // 0x1a4620: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1a4620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1a4624:
    // 0x1a4624: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1a4628:
    if (ctx->pc == 0x1A4628u) {
        ctx->pc = 0x1A4628u;
            // 0x1a4628: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A462Cu;
        goto label_1a462c;
    }
    ctx->pc = 0x1A4624u;
    {
        const bool branch_taken_0x1a4624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4624u;
            // 0x1a4628: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4624) {
            ctx->pc = 0x1A4678u;
            goto label_1a4678;
        }
    }
    ctx->pc = 0x1A462Cu;
label_1a462c:
    // 0x1a462c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a462cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4630:
    // 0x1a4630: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x1a4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_1a4634:
    // 0x1a4634: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4638:
    // 0x1a4638: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1a4638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1a463c:
    // 0x1a463c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4640:
    // 0x1a4640: 0x8c244100  lw          $a0, 0x4100($at)
    ctx->pc = 0x1a4640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16640)));
label_1a4644:
    // 0x1a4644: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1a4644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a4648:
    // 0x1a4648: 0xc057cb0  jal         func_15F2C0
label_1a464c:
    if (ctx->pc == 0x1A464Cu) {
        ctx->pc = 0x1A464Cu;
            // 0x1a464c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4650u;
        goto label_1a4650;
    }
    ctx->pc = 0x1A4648u;
    SET_GPR_U32(ctx, 31, 0x1A4650u);
    ctx->pc = 0x1A464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4648u;
            // 0x1a464c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F2C0u;
    if (runtime->hasFunction(0x15F2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15F2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4650u; }
        if (ctx->pc != 0x1A4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTrBoxColPoly__4CMapFP6CCPolyPfi_0x15f2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4650u; }
        if (ctx->pc != 0x1A4650u) { return; }
    }
    ctx->pc = 0x1A4650u;
label_1a4650:
    // 0x1a4650: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4654:
    // 0x1a4654: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x1a4654u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a4658:
    // 0x1a4658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a465c:
    // 0x1a465c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1a465cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a4660:
    // 0x1a4660: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a4660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a4664:
    // 0x1a4664: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a4664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a4668:
    // 0x1a4668: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1a4668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a466c:
    // 0x1a466c: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x1a466cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1a4670:
    // 0x1a4670: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1a4674:
    if (ctx->pc == 0x1A4674u) {
        ctx->pc = 0x1A4674u;
            // 0x1a4674: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x1A4678u;
        goto label_1a4678;
    }
    ctx->pc = 0x1A4670u;
    {
        const bool branch_taken_0x1a4670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4670u;
            // 0x1a4674: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4670) {
            ctx->pc = 0x1A4630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4630;
        }
    }
    ctx->pc = 0x1A4678u;
label_1a4678:
    // 0x1a4678: 0x26822f90  addiu       $v0, $s4, 0x2F90
    ctx->pc = 0x1a4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12176));
label_1a467c:
    // 0x1a467c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a4680:
    if (ctx->pc == 0x1A4680u) {
        ctx->pc = 0x1A4684u;
        goto label_1a4684;
    }
    ctx->pc = 0x1A467Cu;
    {
        const bool branch_taken_0x1a467c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a467c) {
            ctx->pc = 0x1A46C0u;
            goto label_1a46c0;
        }
    }
    ctx->pc = 0x1A4684u;
label_1a4684:
    // 0x1a4684: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1a4688:
    // 0x1a4688: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1a468c:
    if (ctx->pc == 0x1A468Cu) {
        ctx->pc = 0x1A468Cu;
            // 0x1a468c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1A4690u;
        goto label_1a4690;
    }
    ctx->pc = 0x1A4688u;
    {
        const bool branch_taken_0x1a4688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4688u;
            // 0x1a468c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4688) {
            ctx->pc = 0x1A46C0u;
            goto label_1a46c0;
        }
    }
    ctx->pc = 0x1A4690u;
label_1a4690:
    // 0x1a4690: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a4690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a4694:
    // 0x1a4694: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x1a4694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
label_1a4698:
    // 0x1a4698: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a469c:
    // 0x1a469c: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x1a469cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a46a0:
    // 0x1a46a0: 0xc0a3248  jal         func_28C920
label_1a46a4:
    if (ctx->pc == 0x1A46A4u) {
        ctx->pc = 0x1A46A4u;
            // 0x1a46a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A46A8u;
        goto label_1a46a8;
    }
    ctx->pc = 0x1A46A0u;
    SET_GPR_U32(ctx, 31, 0x1A46A8u);
    ctx->pc = 0x1A46A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46A0u;
            // 0x1a46a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (runtime->hasFunction(0x28C920u)) {
        auto targetFn = runtime->lookupFunction(0x28C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46A8u; }
        if (ctx->pc != 0x1A46A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46A8u; }
        if (ctx->pc != 0x1A46A8u) { return; }
    }
    ctx->pc = 0x1A46A8u;
label_1a46a8:
    // 0x1a46a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a46ac:
    // 0x1a46ac: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x1a46acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a46b0:
    // 0x1a46b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a46b4:
    // 0x1a46b4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1a46b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a46b8:
    // 0x1a46b8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a46bc:
    // 0x1a46bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1a46bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a46c0:
    // 0x1a46c0: 0xc0ba55c  jal         func_2E9570
label_1a46c4:
    if (ctx->pc == 0x1A46C4u) {
        ctx->pc = 0x1A46C8u;
        goto label_1a46c8;
    }
    ctx->pc = 0x1A46C0u;
    SET_GPR_U32(ctx, 31, 0x1A46C8u);
    ctx->pc = 0x2E9570u;
    if (runtime->hasFunction(0x2E9570u)) {
        auto targetFn = runtime->lookupFunction(0x2E9570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46C8u; }
        if (ctx->pc != 0x1A46C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaPtr__Fv_0x2e9570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46C8u; }
        if (ctx->pc != 0x1A46C8u) { return; }
    }
    ctx->pc = 0x1A46C8u;
label_1a46c8:
    // 0x1a46c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1a46cc:
    if (ctx->pc == 0x1A46CCu) {
        ctx->pc = 0x1A46CCu;
            // 0x1a46cc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1A46D0u;
        goto label_1a46d0;
    }
    ctx->pc = 0x1A46C8u;
    {
        const bool branch_taken_0x1a46c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46C8u;
            // 0x1a46cc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46c8) {
            ctx->pc = 0x1A4704u;
            goto label_1a4704;
        }
    }
    ctx->pc = 0x1A46D0u;
label_1a46d0:
    // 0x1a46d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a46d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a46d4:
    // 0x1a46d4: 0x342140e0  ori         $at, $at, 0x40E0
    ctx->pc = 0x1a46d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16608);
label_1a46d8:
    // 0x1a46d8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a46d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a46dc:
    // 0x1a46dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a46dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a46e0:
    // 0x1a46e0: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x1a46e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a46e4:
    // 0x1a46e4: 0xc0baf28  jal         func_2EBCA0
label_1a46e8:
    if (ctx->pc == 0x1A46E8u) {
        ctx->pc = 0x1A46E8u;
            // 0x1a46e8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A46ECu;
        goto label_1a46ec;
    }
    ctx->pc = 0x1A46E4u;
    SET_GPR_U32(ctx, 31, 0x1A46ECu);
    ctx->pc = 0x1A46E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46E4u;
            // 0x1a46e8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBCA0u;
    if (runtime->hasFunction(0x2EBCA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46ECu; }
        if (ctx->pc != 0x1A46ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__7CSphidaFPfP6CCPoly9mgVu0FBOXi_0x2ebca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46ECu; }
        if (ctx->pc != 0x1A46ECu) { return; }
    }
    ctx->pc = 0x1A46ECu;
label_1a46ec:
    // 0x1a46ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a46f0:
    // 0x1a46f0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1a46f4:
    // 0x1a46f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a46f8:
    // 0x1a46f8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1a46f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a46fc:
    // 0x1a46fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a4700:
    // 0x1a4700: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4704:
    // 0x1a4704: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
label_1a4708:
    if (ctx->pc == 0x1A4708u) {
        ctx->pc = 0x1A470Cu;
        goto label_1a470c;
    }
    ctx->pc = 0x1A4704u;
    {
        const bool branch_taken_0x1a4704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4704) {
            ctx->pc = 0x1A47F0u;
            goto label_1a47f0;
        }
    }
    ctx->pc = 0x1A470Cu;
label_1a470c:
    // 0x1a470c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1a470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a4710:
    // 0x1a4710: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1a4714:
    if (ctx->pc == 0x1A4714u) {
        ctx->pc = 0x1A4714u;
            // 0x1a4714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4718u;
        goto label_1a4718;
    }
    ctx->pc = 0x1A4710u;
    {
        const bool branch_taken_0x1a4710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4710u;
            // 0x1a4714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4710) {
            ctx->pc = 0x1A47F0u;
            goto label_1a47f0;
        }
    }
    ctx->pc = 0x1A4718u;
label_1a4718:
    // 0x1a4718: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a471c:
    if (ctx->pc == 0x1A471Cu) {
        ctx->pc = 0x1A471Cu;
            // 0x1a471c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4720u;
        goto label_1a4720;
    }
    ctx->pc = 0x1A4718u;
    {
        const bool branch_taken_0x1a4718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4718u;
            // 0x1a471c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4718) {
            ctx->pc = 0x1A47E0u;
            goto label_1a47e0;
        }
    }
    ctx->pc = 0x1A4720u;
label_1a4720:
    // 0x1a4720: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a4724:
    // 0x1a4724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4728:
    // 0x1a4728: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1a4728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1a472c:
    // 0x1a472c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a472cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a4730:
    // 0x1a4730: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a4730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a4734:
    // 0x1a4734: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a4738:
    // 0x1a4738: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a473c:
    // 0x1a473c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4740:
    // 0x1a4740: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x1a4740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_1a4744:
    // 0x1a4744: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1a4744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4748:
    // 0x1a4748: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a474c:
    // 0x1a474c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4750:
    // 0x1a4750: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1a4750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a4754:
    // 0x1a4754: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1a4754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1a4758:
    // 0x1a4758: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1a4758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1a475c:
    // 0x1a475c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1a475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1a4760:
    // 0x1a4760: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1a4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4764:
    // 0x1a4764: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1a4764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4768:
    // 0x1a4768: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1a4768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a476c:
    // 0x1a476c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1a476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4770:
    // 0x1a4770: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1a4770u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1a4774:
    // 0x1a4774: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1a4774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1a4778:
    // 0x1a4778: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1a4778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1a477c:
    // 0x1a477c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1a477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1a4780:
    // 0x1a4780: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1a4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4784:
    // 0x1a4784: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1a4784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4788:
    // 0x1a4788: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1a4788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a478c:
    // 0x1a478c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1a478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4790:
    // 0x1a4790: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x1a4790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1a4794:
    // 0x1a4794: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1a4794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1a4798:
    // 0x1a4798: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1a4798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1a479c:
    // 0x1a479c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1a479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1a47a0:
    // 0x1a47a0: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x1a47a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a47a4:
    // 0x1a47a4: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x1a47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a47a8:
    // 0x1a47a8: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1a47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a47ac:
    // 0x1a47ac: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1a47acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a47b0:
    // 0x1a47b0: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x1a47b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_1a47b4:
    // 0x1a47b4: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x1a47b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_1a47b8:
    // 0x1a47b8: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x1a47b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1a47bc:
    // 0x1a47bc: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1a47bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1a47c0:
    // 0x1a47c0: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x1a47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a47c4:
    // 0x1a47c4: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x1a47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a47c8:
    // 0x1a47c8: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x1a47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a47cc:
    // 0x1a47cc: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1a47ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a47d0:
    // 0x1a47d0: 0xe4830040  swc1        $f3, 0x40($a0)
    ctx->pc = 0x1a47d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_1a47d4:
    // 0x1a47d4: 0xe4820044  swc1        $f2, 0x44($a0)
    ctx->pc = 0x1a47d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_1a47d8:
    // 0x1a47d8: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x1a47d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_1a47dc:
    // 0x1a47dc: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1a47dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_1a47e0:
    // 0x1a47e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a47e4:
    // 0x1a47e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a47e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a47e8:
    // 0x1a47e8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1a47ec:
    if (ctx->pc == 0x1A47ECu) {
        ctx->pc = 0x1A47F0u;
        goto label_1a47f0;
    }
    ctx->pc = 0x1A47E8u;
    {
        const bool branch_taken_0x1a47e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a47e8) {
            ctx->pc = 0x1A4720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4720;
        }
    }
    ctx->pc = 0x1A47F0u;
label_1a47f0:
    // 0x1a47f0: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x1a47f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
label_1a47f4:
    // 0x1a47f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a47f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a47f8:
    // 0x1a47f8: 0xc0a0f58  jal         func_283D60
label_1a47fc:
    if (ctx->pc == 0x1A47FCu) {
        ctx->pc = 0x1A47FCu;
            // 0x1a47fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A4800u;
        goto label_1a4800;
    }
    ctx->pc = 0x1A47F8u;
    SET_GPR_U32(ctx, 31, 0x1A4800u);
    ctx->pc = 0x1A47FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47F8u;
            // 0x1a47fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4800u; }
        if (ctx->pc != 0x1A4800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4800u; }
        if (ctx->pc != 0x1A4800u) { return; }
    }
    ctx->pc = 0x1A4800u;
label_1a4800:
    // 0x1a4800: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4804:
    // 0x1a4804: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1a4808:
    if (ctx->pc == 0x1A4808u) {
        ctx->pc = 0x1A4808u;
            // 0x1a4808: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A480Cu;
        goto label_1a480c;
    }
    ctx->pc = 0x1A4804u;
    {
        const bool branch_taken_0x1a4804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4804u;
            // 0x1a4808: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4804) {
            ctx->pc = 0x1A4838u;
            goto label_1a4838;
        }
    }
    ctx->pc = 0x1A480Cu;
label_1a480c:
    // 0x1a480c: 0x8e390d00  lw          $t9, 0xD00($s1)
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_1a4810:
    // 0x1a4810: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1a4814:
    // 0x1a4814: 0x320f809  jalr        $t9
label_1a4818:
    if (ctx->pc == 0x1A4818u) {
        ctx->pc = 0x1A4818u;
            // 0x1a4818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A481Cu;
        goto label_1a481c;
    }
    ctx->pc = 0x1A4814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A481Cu);
        ctx->pc = 0x1A4818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4814u;
            // 0x1a4818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A481Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A481Cu; }
            if (ctx->pc != 0x1A481Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A481Cu;
label_1a481c:
    // 0x1a481c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a481cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a4820:
    // 0x1a4820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4824:
    // 0x1a4824: 0xc04a38a  jal         func_128E28
label_1a4828:
    if (ctx->pc == 0x1A4828u) {
        ctx->pc = 0x1A4828u;
            // 0x1a4828: 0x24a55b20  addiu       $a1, $a1, 0x5B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
        ctx->pc = 0x1A482Cu;
        goto label_1a482c;
    }
    ctx->pc = 0x1A4824u;
    SET_GPR_U32(ctx, 31, 0x1A482Cu);
    ctx->pc = 0x1A4828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4824u;
            // 0x1a4828: 0x24a55b20  addiu       $a1, $a1, 0x5B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A482Cu; }
        if (ctx->pc != 0x1A482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A482Cu; }
        if (ctx->pc != 0x1A482Cu) { return; }
    }
    ctx->pc = 0x1A482Cu;
label_1a482c:
    // 0x1a482c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a4830:
    if (ctx->pc == 0x1A4830u) {
        ctx->pc = 0x1A4834u;
        goto label_1a4834;
    }
    ctx->pc = 0x1A482Cu;
    {
        const bool branch_taken_0x1a482c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a482c) {
            ctx->pc = 0x1A4838u;
            goto label_1a4838;
        }
    }
    ctx->pc = 0x1A4834u;
label_1a4834:
    // 0x1a4834: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1a4834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4838:
    // 0x1a4838: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
label_1a483c:
    if (ctx->pc == 0x1A483Cu) {
        ctx->pc = 0x1A483Cu;
            // 0x1a483c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A4840u;
        goto label_1a4840;
    }
    ctx->pc = 0x1A4838u;
    {
        const bool branch_taken_0x1a4838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4838u;
            // 0x1a483c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4838) {
            ctx->pc = 0x1A4940u;
            goto label_1a4940;
        }
    }
    ctx->pc = 0x1A4840u;
label_1a4840:
    // 0x1a4840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4844:
    // 0x1a4844: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1a4844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a4848:
    // 0x1a4848: 0x34214130  ori         $at, $at, 0x4130
    ctx->pc = 0x1a4848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16688);
label_1a484c:
    // 0x1a484c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a484cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4850:
    // 0x1a4850: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4854:
    // 0x1a4854: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1a4854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1a4858:
    // 0x1a4858: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a485c:
    // 0x1a485c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1a485cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4860:
    // 0x1a4860: 0x34214150  ori         $at, $at, 0x4150
    ctx->pc = 0x1a4860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16720);
label_1a4864:
    // 0x1a4864: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a4864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4868:
    // 0x1a4868: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a486c:
    // 0x1a486c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a486cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4870:
    // 0x1a4870: 0x34214140  ori         $at, $at, 0x4140
    ctx->pc = 0x1a4870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16704);
label_1a4874:
    // 0x1a4874: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1a4874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1a4878:
    // 0x1a4878: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a487c:
    // 0x1a487c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a487cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1a4880:
    // 0x1a4880: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4884:
    // 0x1a4884: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4888:
    // 0x1a4888: 0xc4214134  lwc1        $f1, 0x4134($at)
    ctx->pc = 0x1a4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a488c:
    // 0x1a488c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4890:
    // 0x1a4890: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1a4894:
    // 0x1a4894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a4894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4898:
    // 0x1a4898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a489c:
    // 0x1a489c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a489cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a48a0:
    // 0x1a48a0: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a48a4:
    // 0x1a48a4: 0xc053f00  jal         func_14FC00
label_1a48a8:
    if (ctx->pc == 0x1A48A8u) {
        ctx->pc = 0x1A48A8u;
            // 0x1a48a8: 0xe4204134  swc1        $f0, 0x4134($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16692), bits); }
        ctx->pc = 0x1A48ACu;
        goto label_1a48ac;
    }
    ctx->pc = 0x1A48A4u;
    SET_GPR_U32(ctx, 31, 0x1A48ACu);
    ctx->pc = 0x1A48A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48A4u;
            // 0x1a48a8: 0xe4204134  swc1        $f0, 0x4134($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16692), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC00u;
    if (runtime->hasFunction(0x14FC00u)) {
        auto targetFn = runtime->lookupFunction(0x14FC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48ACu; }
        if (ctx->pc != 0x1A48ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFootPoly__FPffP6CCPolyPfP6CCPolyii_0x14fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48ACu; }
        if (ctx->pc != 0x1A48ACu) { return; }
    }
    ctx->pc = 0x1A48ACu;
label_1a48ac:
    // 0x1a48ac: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1a48b0:
    if (ctx->pc == 0x1A48B0u) {
        ctx->pc = 0x1A48B0u;
            // 0x1a48b0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1A48B4u;
        goto label_1a48b4;
    }
    ctx->pc = 0x1A48ACu;
    {
        const bool branch_taken_0x1a48ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48ACu;
            // 0x1a48b0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48ac) {
            ctx->pc = 0x1A493Cu;
            goto label_1a493c;
        }
    }
    ctx->pc = 0x1A48B4u;
label_1a48b4:
    // 0x1a48b4: 0x342141a0  ori         $at, $at, 0x41A0
    ctx->pc = 0x1a48b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16800);
label_1a48b8:
    // 0x1a48b8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a48bc:
    // 0x1a48bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a48bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a48c0:
    // 0x1a48c0: 0x34214180  ori         $at, $at, 0x4180
    ctx->pc = 0x1a48c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16768);
label_1a48c4:
    // 0x1a48c4: 0xc041be0  jal         func_106F80
label_1a48c8:
    if (ctx->pc == 0x1A48C8u) {
        ctx->pc = 0x1A48C8u;
            // 0x1a48c8: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1A48CCu;
        goto label_1a48cc;
    }
    ctx->pc = 0x1A48C4u;
    SET_GPR_U32(ctx, 31, 0x1A48CCu);
    ctx->pc = 0x1A48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48C4u;
            // 0x1a48c8: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48CCu; }
        if (ctx->pc != 0x1A48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48CCu; }
        if (ctx->pc != 0x1A48CCu) { return; }
    }
    ctx->pc = 0x1A48CCu;
label_1a48cc:
    // 0x1a48cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a48ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a48d0:
    // 0x1a48d0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1a48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1a48d4:
    // 0x1a48d4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a48d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a48d8:
    // 0x1a48d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1a48dc:
    // 0x1a48dc: 0xc42141a4  lwc1        $f1, 0x41A4($at)
    ctx->pc = 0x1a48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a48e0:
    // 0x1a48e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a48e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a48e4:
    // 0x1a48e4: 0x0  nop
    ctx->pc = 0x1a48e4u;
    // NOP
label_1a48e8:
    // 0x1a48e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a48e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a48ec:
    // 0x1a48ec: 0x0  nop
    ctx->pc = 0x1a48ecu;
    // NOP
label_1a48f0:
    // 0x1a48f0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_1a48f4:
    if (ctx->pc == 0x1A48F4u) {
        ctx->pc = 0x1A48F4u;
            // 0x1a48f4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1A48F8u;
        goto label_1a48f8;
    }
    ctx->pc = 0x1A48F0u;
    {
        const bool branch_taken_0x1a48f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A48F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48F0u;
            // 0x1a48f4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48f0) {
            ctx->pc = 0x1A493Cu;
            goto label_1a493c;
        }
    }
    ctx->pc = 0x1A48F8u;
label_1a48f8:
    // 0x1a48f8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a48fc:
    // 0x1a48fc: 0x94234198  lhu         $v1, 0x4198($at)
    ctx->pc = 0x1a48fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 16792)));
label_1a4900:
    // 0x1a4900: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1a4900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_1a4904:
    // 0x1a4904: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a4908:
    if (ctx->pc == 0x1A4908u) {
        ctx->pc = 0x1A4908u;
            // 0x1a4908: 0x30650fff  andi        $a1, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->pc = 0x1A490Cu;
        goto label_1a490c;
    }
    ctx->pc = 0x1A4904u;
    {
        const bool branch_taken_0x1a4904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4904u;
            // 0x1a4908: 0x30650fff  andi        $a1, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4904) {
            ctx->pc = 0x1A493Cu;
            goto label_1a493c;
        }
    }
    ctx->pc = 0x1A490Cu;
label_1a490c:
    // 0x1a490c: 0xc06c310  jal         func_1B0C40
label_1a4910:
    if (ctx->pc == 0x1A4910u) {
        ctx->pc = 0x1A4910u;
            // 0x1a4910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4914u;
        goto label_1a4914;
    }
    ctx->pc = 0x1A490Cu;
    SET_GPR_U32(ctx, 31, 0x1A4914u);
    ctx->pc = 0x1A4910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A490Cu;
            // 0x1a4910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4914u; }
        if (ctx->pc != 0x1A4914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4914u; }
        if (ctx->pc != 0x1A4914u) { return; }
    }
    ctx->pc = 0x1A4914u;
label_1a4914:
    // 0x1a4914: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a4918:
    if (ctx->pc == 0x1A4918u) {
        ctx->pc = 0x1A491Cu;
        goto label_1a491c;
    }
    ctx->pc = 0x1A4914u;
    {
        const bool branch_taken_0x1a4914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4914) {
            ctx->pc = 0x1A493Cu;
            goto label_1a493c;
        }
    }
    ctx->pc = 0x1A491Cu;
label_1a491c:
    // 0x1a491c: 0x8c420324  lw          $v0, 0x324($v0)
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
label_1a4920:
    // 0x1a4920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4924:
    if (ctx->pc == 0x1A4924u) {
        ctx->pc = 0x1A4928u;
        goto label_1a4928;
    }
    ctx->pc = 0x1A4920u;
    {
        const bool branch_taken_0x1a4920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4920) {
            ctx->pc = 0x1A493Cu;
            goto label_1a493c;
        }
    }
    ctx->pc = 0x1A4928u;
label_1a4928:
    // 0x1a4928: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a492c:
    // 0x1a492c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1a492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1a4930:
    // 0x1a4930: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a4934:
    if (ctx->pc == 0x1A4934u) {
        ctx->pc = 0x1A4938u;
        goto label_1a4938;
    }
    ctx->pc = 0x1A4930u;
    {
        const bool branch_taken_0x1a4930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4930) {
            ctx->pc = 0x1A493Cu;
            goto label_1a493c;
        }
    }
    ctx->pc = 0x1A4938u;
label_1a4938:
    // 0x1a4938: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a493c:
    // 0x1a493c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4940:
    // 0x1a4940: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
label_1a4944:
    // 0x1a4944: 0xafc20580  sw          $v0, 0x580($fp)
    ctx->pc = 0x1a4944u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1408), GPR_U32(ctx, 2));
label_1a4948:
    // 0x1a4948: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1a4948u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a494c:
    // 0x1a494c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4950:
    // 0x1a4950: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x1a4950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_1a4954:
    // 0x1a4954: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4958:
    // 0x1a4958: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1a4958u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a495c:
    // 0x1a495c: 0xac22b1c0  sw          $v0, -0x4E40($at)
    ctx->pc = 0x1a495cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947264), GPR_U32(ctx, 2));
label_1a4960:
    // 0x1a4960: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a4960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a4964:
    // 0x1a4964: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1a4964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1a4968:
    // 0x1a4968: 0x24e7b1c0  addiu       $a3, $a3, -0x4E40
    ctx->pc = 0x1a4968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947264));
label_1a496c:
    // 0x1a496c: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1a4970:
    // 0x1a4970: 0xc053d7c  jal         func_14F5F0
label_1a4974:
    if (ctx->pc == 0x1A4974u) {
        ctx->pc = 0x1A4974u;
            // 0x1a4974: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4978u;
        goto label_1a4978;
    }
    ctx->pc = 0x1A4970u;
    SET_GPR_U32(ctx, 31, 0x1A4978u);
    ctx->pc = 0x1A4974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4970u;
            // 0x1a4974: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (runtime->hasFunction(0x14F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4978u; }
        if (ctx->pc != 0x1A4978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4978u; }
        if (ctx->pc != 0x1A4978u) { return; }
    }
    ctx->pc = 0x1A4978u;
label_1a4978:
    // 0x1a4978: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a497c:
    // 0x1a497c: 0x8c22b1c8  lw          $v0, -0x4E38($at)
    ctx->pc = 0x1a497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947272)));
label_1a4980:
    // 0x1a4980: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a4984:
    if (ctx->pc == 0x1A4984u) {
        ctx->pc = 0x1A4988u;
        goto label_1a4988;
    }
    ctx->pc = 0x1A4980u;
    {
        const bool branch_taken_0x1a4980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4980) {
            ctx->pc = 0x1A49E4u;
            goto label_1a49e4;
        }
    }
    ctx->pc = 0x1A4988u;
label_1a4988:
    // 0x1a4988: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a498c:
    // 0x1a498c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4990:
    // 0x1a4990: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1a4990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_1a4994:
    // 0x1a4994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4998:
    // 0x1a4998: 0x0  nop
    ctx->pc = 0x1a4998u;
    // NOP
label_1a499c:
    // 0x1a499c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a499cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a49a0:
    // 0x1a49a0: 0x0  nop
    ctx->pc = 0x1a49a0u;
    // NOP
label_1a49a4:
    // 0x1a49a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a49a8:
    if (ctx->pc == 0x1A49A8u) {
        ctx->pc = 0x1A49ACu;
        goto label_1a49ac;
    }
    ctx->pc = 0x1A49A4u;
    {
        const bool branch_taken_0x1a49a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a49a4) {
            ctx->pc = 0x1A49B0u;
            goto label_1a49b0;
        }
    }
    ctx->pc = 0x1A49ACu;
label_1a49ac:
    // 0x1a49ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a49acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a49b0:
    // 0x1a49b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a49b4:
    // 0x1a49b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1a49b8:
    // 0x1a49b8: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
label_1a49bc:
    // 0x1a49bc: 0xc0a0f58  jal         func_283D60
label_1a49c0:
    if (ctx->pc == 0x1A49C0u) {
        ctx->pc = 0x1A49C0u;
            // 0x1a49c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C4u;
        goto label_1a49c4;
    }
    ctx->pc = 0x1A49BCu;
    SET_GPR_U32(ctx, 31, 0x1A49C4u);
    ctx->pc = 0x1A49C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49BCu;
            // 0x1a49c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49C4u; }
        if (ctx->pc != 0x1A49C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49C4u; }
        if (ctx->pc != 0x1A49C4u) { return; }
    }
    ctx->pc = 0x1A49C4u;
label_1a49c4:
    // 0x1a49c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a49c8:
    if (ctx->pc == 0x1A49C8u) {
        ctx->pc = 0x1A49C8u;
            // 0x1a49c8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A49CCu;
        goto label_1a49cc;
    }
    ctx->pc = 0x1A49C4u;
    {
        const bool branch_taken_0x1a49c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49C4u;
            // 0x1a49c8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49c4) {
            ctx->pc = 0x1A49E4u;
            goto label_1a49e4;
        }
    }
    ctx->pc = 0x1A49CCu;
label_1a49cc:
    // 0x1a49cc: 0x8423b212  lh          $v1, -0x4DEE($at)
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294947346)));
label_1a49d0:
    // 0x1a49d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a49d4:
    if (ctx->pc == 0x1A49D4u) {
        ctx->pc = 0x1A49D8u;
        goto label_1a49d8;
    }
    ctx->pc = 0x1A49D0u;
    {
        const bool branch_taken_0x1a49d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a49d0) {
            ctx->pc = 0x1A49E0u;
            goto label_1a49e0;
        }
    }
    ctx->pc = 0x1A49D8u;
label_1a49d8:
    // 0x1a49d8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1a49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1a49dc:
    // 0x1a49dc: 0x0  nop
    ctx->pc = 0x1a49dcu;
    // NOP
label_1a49e0:
    // 0x1a49e0: 0xafc30580  sw          $v1, 0x580($fp)
    ctx->pc = 0x1a49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1408), GPR_U32(ctx, 3));
label_1a49e4:
    // 0x1a49e4: 0x1260004f  beqz        $s3, . + 4 + (0x4F << 2)
label_1a49e8:
    if (ctx->pc == 0x1A49E8u) {
        ctx->pc = 0x1A49E8u;
            // 0x1a49e8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A49ECu;
        goto label_1a49ec;
    }
    ctx->pc = 0x1A49E4u;
    {
        const bool branch_taken_0x1a49e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49E4u;
            // 0x1a49e8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49e4) {
            ctx->pc = 0x1A4B24u;
            goto label_1a4b24;
        }
    }
    ctx->pc = 0x1A49ECu;
label_1a49ec:
    // 0x1a49ec: 0x3c0a01ea  lui         $t2, 0x1EA
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)490 << 16));
label_1a49f0:
    // 0x1a49f0: 0xc420b1c0  lwc1        $f0, -0x4E40($at)
    ctx->pc = 0x1a49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a49f4:
    // 0x1a49f4: 0x3c0901ea  lui         $t1, 0x1EA
    ctx->pc = 0x1a49f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)490 << 16));
label_1a49f8:
    // 0x1a49f8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1a49fc:
    // 0x1a49fc: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1a49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1a4a00:
    // 0x1a4a00: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1a4a04:
    // 0x1a4a04: 0x254ab1d0  addiu       $t2, $t2, -0x4E30
    ctx->pc = 0x1a4a04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294947280));
label_1a4a08:
    // 0x1a4a08: 0x2529b230  addiu       $t1, $t1, -0x4DD0
    ctx->pc = 0x1a4a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947376));
label_1a4a0c:
    // 0x1a4a0c: 0x2484b280  addiu       $a0, $a0, -0x4D80
    ctx->pc = 0x1a4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
label_1a4a10:
    // 0x1a4a10: 0x2463b2a0  addiu       $v1, $v1, -0x4D60
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947488));
label_1a4a14:
    // 0x1a4a14: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x1a4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
label_1a4a18:
    // 0x1a4a18: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1a4a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_1a4a1c:
    // 0x1a4a1c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4a20:
    // 0x1a4a20: 0x8c25b1c4  lw          $a1, -0x4E3C($at)
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947268)));
label_1a4a24:
    // 0x1a4a24: 0xae650014  sw          $a1, 0x14($s3)
    ctx->pc = 0x1a4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 5));
label_1a4a28:
    // 0x1a4a28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4a2c:
    // 0x1a4a2c: 0x8c25b1c8  lw          $a1, -0x4E38($at)
    ctx->pc = 0x1a4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947272)));
label_1a4a30:
    // 0x1a4a30: 0xae650018  sw          $a1, 0x18($s3)
    ctx->pc = 0x1a4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
label_1a4a34:
    // 0x1a4a34: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4a38:
    // 0x1a4a38: 0x79480000  lq          $t0, 0x0($t2)
    ctx->pc = 0x1a4a38u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1a4a3c:
    // 0x1a4a3c: 0x79470010  lq          $a3, 0x10($t2)
    ctx->pc = 0x1a4a3cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_1a4a40:
    // 0x1a4a40: 0x79460020  lq          $a2, 0x20($t2)
    ctx->pc = 0x1a4a40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_1a4a44:
    // 0x1a4a44: 0x79450030  lq          $a1, 0x30($t2)
    ctx->pc = 0x1a4a44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_1a4a48:
    // 0x1a4a48: 0x7e680020  sq          $t0, 0x20($s3)
    ctx->pc = 0x1a4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 8));
label_1a4a4c:
    // 0x1a4a4c: 0x7e670030  sq          $a3, 0x30($s3)
    ctx->pc = 0x1a4a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 7));
label_1a4a50:
    // 0x1a4a50: 0x7e660040  sq          $a2, 0x40($s3)
    ctx->pc = 0x1a4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 6));
label_1a4a54:
    // 0x1a4a54: 0x7e650050  sq          $a1, 0x50($s3)
    ctx->pc = 0x1a4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 5));
label_1a4a58:
    // 0x1a4a58: 0x79450040  lq          $a1, 0x40($t2)
    ctx->pc = 0x1a4a58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 64)));
label_1a4a5c:
    // 0x1a4a5c: 0x7e650060  sq          $a1, 0x60($s3)
    ctx->pc = 0x1a4a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), GPR_VEC(ctx, 5));
label_1a4a60:
    // 0x1a4a60: 0x8c25b220  lw          $a1, -0x4DE0($at)
    ctx->pc = 0x1a4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947360)));
label_1a4a64:
    // 0x1a4a64: 0xae650070  sw          $a1, 0x70($s3)
    ctx->pc = 0x1a4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 5));
label_1a4a68:
    // 0x1a4a68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4a6c:
    // 0x1a4a6c: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x1a4a6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_1a4a70:
    // 0x1a4a70: 0x79270010  lq          $a3, 0x10($t1)
    ctx->pc = 0x1a4a70u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 16)));
label_1a4a74:
    // 0x1a4a74: 0x79260020  lq          $a2, 0x20($t1)
    ctx->pc = 0x1a4a74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 32)));
label_1a4a78:
    // 0x1a4a78: 0x79250030  lq          $a1, 0x30($t1)
    ctx->pc = 0x1a4a78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 48)));
label_1a4a7c:
    // 0x1a4a7c: 0x7e680080  sq          $t0, 0x80($s3)
    ctx->pc = 0x1a4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 8));
label_1a4a80:
    // 0x1a4a80: 0x7e670090  sq          $a3, 0x90($s3)
    ctx->pc = 0x1a4a80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 144), GPR_VEC(ctx, 7));
label_1a4a84:
    // 0x1a4a84: 0x7e6600a0  sq          $a2, 0xA0($s3)
    ctx->pc = 0x1a4a84u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 160), GPR_VEC(ctx, 6));
label_1a4a88:
    // 0x1a4a88: 0x7e6500b0  sq          $a1, 0xB0($s3)
    ctx->pc = 0x1a4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 5));
label_1a4a8c:
    // 0x1a4a8c: 0x79250040  lq          $a1, 0x40($t1)
    ctx->pc = 0x1a4a8cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 64)));
label_1a4a90:
    // 0x1a4a90: 0x7e6500c0  sq          $a1, 0xC0($s3)
    ctx->pc = 0x1a4a90u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 5));
label_1a4a94:
    // 0x1a4a94: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1a4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4a98:
    // 0x1a4a98: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1a4a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4a9c:
    // 0x1a4a9c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1a4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4aa0:
    // 0x1a4aa0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1a4aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4aa4:
    // 0x1a4aa4: 0xe66300d0  swc1        $f3, 0xD0($s3)
    ctx->pc = 0x1a4aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_1a4aa8:
    // 0x1a4aa8: 0xe66200d4  swc1        $f2, 0xD4($s3)
    ctx->pc = 0x1a4aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1a4aac:
    // 0x1a4aac: 0xe66100d8  swc1        $f1, 0xD8($s3)
    ctx->pc = 0x1a4aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
label_1a4ab0:
    // 0x1a4ab0: 0xe66000dc  swc1        $f0, 0xDC($s3)
    ctx->pc = 0x1a4ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
label_1a4ab4:
    // 0x1a4ab4: 0x8c24b290  lw          $a0, -0x4D70($at)
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947472)));
label_1a4ab8:
    // 0x1a4ab8: 0xae6400e0  sw          $a0, 0xE0($s3)
    ctx->pc = 0x1a4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 4));
label_1a4abc:
    // 0x1a4abc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4ac0:
    // 0x1a4ac0: 0x8c24b294  lw          $a0, -0x4D6C($at)
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947476)));
label_1a4ac4:
    // 0x1a4ac4: 0xae6400e4  sw          $a0, 0xE4($s3)
    ctx->pc = 0x1a4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 4));
label_1a4ac8:
    // 0x1a4ac8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4acc:
    // 0x1a4acc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1a4accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4ad0:
    // 0x1a4ad0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1a4ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4ad4:
    // 0x1a4ad4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a4ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4ad8:
    // 0x1a4ad8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4adc:
    // 0x1a4adc: 0xe66300f0  swc1        $f3, 0xF0($s3)
    ctx->pc = 0x1a4adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 240), bits); }
label_1a4ae0:
    // 0x1a4ae0: 0xe66200f4  swc1        $f2, 0xF4($s3)
    ctx->pc = 0x1a4ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 244), bits); }
label_1a4ae4:
    // 0x1a4ae4: 0xe66100f8  swc1        $f1, 0xF8($s3)
    ctx->pc = 0x1a4ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 248), bits); }
label_1a4ae8:
    // 0x1a4ae8: 0xe66000fc  swc1        $f0, 0xFC($s3)
    ctx->pc = 0x1a4ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 252), bits); }
label_1a4aec:
    // 0x1a4aec: 0x8c23b2b0  lw          $v1, -0x4D50($at)
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947504)));
label_1a4af0:
    // 0x1a4af0: 0xae630100  sw          $v1, 0x100($s3)
    ctx->pc = 0x1a4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 3));
label_1a4af4:
    // 0x1a4af4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4af8:
    // 0x1a4af8: 0xc420b2b4  lwc1        $f0, -0x4D4C($at)
    ctx->pc = 0x1a4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4afc:
    // 0x1a4afc: 0xe6600104  swc1        $f0, 0x104($s3)
    ctx->pc = 0x1a4afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
label_1a4b00:
    // 0x1a4b00: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4b04:
    // 0x1a4b04: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1a4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4b08:
    // 0x1a4b08: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4b0c:
    // 0x1a4b0c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4b10:
    // 0x1a4b10: 0xe6630110  swc1        $f3, 0x110($s3)
    ctx->pc = 0x1a4b10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
label_1a4b14:
    // 0x1a4b14: 0xe6620114  swc1        $f2, 0x114($s3)
    ctx->pc = 0x1a4b14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
label_1a4b18:
    // 0x1a4b18: 0xe6610118  swc1        $f1, 0x118($s3)
    ctx->pc = 0x1a4b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
label_1a4b1c:
    // 0x1a4b1c: 0xe660011c  swc1        $f0, 0x11C($s3)
    ctx->pc = 0x1a4b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
label_1a4b20:
    // 0x1a4b20: 0xae700120  sw          $s0, 0x120($s3)
    ctx->pc = 0x1a4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 16));
label_1a4b24:
    // 0x1a4b24: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4b28:
    // 0x1a4b28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4b2c:
    // 0x1a4b2c: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1a4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_1a4b30:
    // 0x1a4b30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b34:
    // 0x1a4b34: 0x0  nop
    ctx->pc = 0x1a4b34u;
    // NOP
label_1a4b38:
    // 0x1a4b38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a4b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4b3c:
    // 0x1a4b3c: 0x0  nop
    ctx->pc = 0x1a4b3cu;
    // NOP
label_1a4b40:
    // 0x1a4b40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a4b44:
    if (ctx->pc == 0x1A4B44u) {
        ctx->pc = 0x1A4B44u;
            // 0x1a4b44: 0x27a300d4  addiu       $v1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->pc = 0x1A4B48u;
        goto label_1a4b48;
    }
    ctx->pc = 0x1A4B40u;
    {
        const bool branch_taken_0x1a4b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B40u;
            // 0x1a4b44: 0x27a300d4  addiu       $v1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b40) {
            ctx->pc = 0x1A4B50u;
            goto label_1a4b50;
        }
    }
    ctx->pc = 0x1A4B48u;
label_1a4b48:
    // 0x1a4b48: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4b4c:
    // 0x1a4b4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a4b50:
    // 0x1a4b50: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1a4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_1a4b54:
    // 0x1a4b54: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4b58:
    // 0x1a4b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4b5c:
    // 0x1a4b5c: 0x0  nop
    ctx->pc = 0x1a4b5cu;
    // NOP
label_1a4b60:
    // 0x1a4b60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4b64:
    // 0x1a4b64: 0x0  nop
    ctx->pc = 0x1a4b64u;
    // NOP
label_1a4b68:
    // 0x1a4b68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a4b6c:
    if (ctx->pc == 0x1A4B6Cu) {
        ctx->pc = 0x1A4B6Cu;
            // 0x1a4b6c: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->pc = 0x1A4B70u;
        goto label_1a4b70;
    }
    ctx->pc = 0x1A4B68u;
    {
        const bool branch_taken_0x1a4b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B68u;
            // 0x1a4b6c: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b68) {
            ctx->pc = 0x1A4B74u;
            goto label_1a4b74;
        }
    }
    ctx->pc = 0x1A4B70u;
label_1a4b70:
    // 0x1a4b70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a4b74:
    // 0x1a4b74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4b78:
    // 0x1a4b78: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x1a4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_1a4b7c:
    // 0x1a4b7c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1a4b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_1a4b80:
    // 0x1a4b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b84:
    // 0x1a4b84: 0x0  nop
    ctx->pc = 0x1a4b84u;
    // NOP
label_1a4b88:
    // 0x1a4b88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4b8c:
    // 0x1a4b8c: 0x0  nop
    ctx->pc = 0x1a4b8cu;
    // NOP
label_1a4b90:
    // 0x1a4b90: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a4b94:
    if (ctx->pc == 0x1A4B94u) {
        ctx->pc = 0x1A4B98u;
        goto label_1a4b98;
    }
    ctx->pc = 0x1A4B90u;
    {
        const bool branch_taken_0x1a4b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4b90) {
            ctx->pc = 0x1A4BA4u;
            goto label_1a4ba4;
        }
    }
    ctx->pc = 0x1A4B98u;
label_1a4b98:
    // 0x1a4b98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4b9c:
    // 0x1a4b9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1a4ba0:
    // 0x1a4ba0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1a4ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a4ba4:
    // 0x1a4ba4: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x1a4ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1a4ba8:
    // 0x1a4ba8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a4ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a4bac:
    // 0x1a4bac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1a4bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1a4bb0:
    // 0x1a4bb0: 0x320f809  jalr        $t9
label_1a4bb4:
    if (ctx->pc == 0x1A4BB4u) {
        ctx->pc = 0x1A4BB4u;
            // 0x1a4bb4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1A4BB8u;
        goto label_1a4bb8;
    }
    ctx->pc = 0x1A4BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BB8u);
        ctx->pc = 0x1A4BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BB0u;
            // 0x1a4bb4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4BB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BB8u; }
            if (ctx->pc != 0x1A4BB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4BB8u;
label_1a4bb8:
    // 0x1a4bb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4bbc:
    // 0x1a4bbc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a4bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4bc0:
    // 0x1a4bc0: 0x7fc20080  sq          $v0, 0x80($fp)
    ctx->pc = 0x1a4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 128), GPR_VEC(ctx, 2));
label_1a4bc4:
    // 0x1a4bc4: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x1a4bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1a4bc8:
    // 0x1a4bc8: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x1a4bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_1a4bcc:
    // 0x1a4bcc: 0x320f809  jalr        $t9
label_1a4bd0:
    if (ctx->pc == 0x1A4BD0u) {
        ctx->pc = 0x1A4BD0u;
            // 0x1a4bd0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BD4u;
        goto label_1a4bd4;
    }
    ctx->pc = 0x1A4BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BD4u);
        ctx->pc = 0x1A4BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BCCu;
            // 0x1a4bd0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BD4u; }
            if (ctx->pc != 0x1A4BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4BD4u;
label_1a4bd4:
    // 0x1a4bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4bd8:
    // 0x1a4bd8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a4bdc:
    if (ctx->pc == 0x1A4BDCu) {
        ctx->pc = 0x1A4BDCu;
            // 0x1a4bdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BE0u;
        goto label_1a4be0;
    }
    ctx->pc = 0x1A4BD8u;
    {
        const bool branch_taken_0x1a4bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BD8u;
            // 0x1a4bdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bd8) {
            ctx->pc = 0x1A4BF8u;
            goto label_1a4bf8;
        }
    }
    ctx->pc = 0x1A4BE0u;
label_1a4be0:
    // 0x1a4be0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a4be4:
    // 0x1a4be4: 0xc04a5ce  jal         func_129738
label_1a4be8:
    if (ctx->pc == 0x1A4BE8u) {
        ctx->pc = 0x1A4BE8u;
            // 0x1a4be8: 0x24a55b30  addiu       $a1, $a1, 0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
        ctx->pc = 0x1A4BECu;
        goto label_1a4bec;
    }
    ctx->pc = 0x1A4BE4u;
    SET_GPR_U32(ctx, 31, 0x1A4BECu);
    ctx->pc = 0x1A4BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BE4u;
            // 0x1a4be8: 0x24a55b30  addiu       $a1, $a1, 0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129738u;
    if (runtime->hasFunction(0x129738u)) {
        auto targetFn = runtime->lookupFunction(0x129738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BECu; }
        if (ctx->pc != 0x1A4BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strstr_0x129738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BECu; }
        if (ctx->pc != 0x1A4BECu) { return; }
    }
    ctx->pc = 0x1A4BECu;
label_1a4bec:
    // 0x1a4bec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a4bf0:
    if (ctx->pc == 0x1A4BF0u) {
        ctx->pc = 0x1A4BF4u;
        goto label_1a4bf4;
    }
    ctx->pc = 0x1A4BECu;
    {
        const bool branch_taken_0x1a4bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bec) {
            ctx->pc = 0x1A4BF8u;
            goto label_1a4bf8;
        }
    }
    ctx->pc = 0x1A4BF4u;
label_1a4bf4:
    // 0x1a4bf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a4bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4bf8:
    // 0x1a4bf8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1a4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4bfc:
    // 0x1a4bfc: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
label_1a4c00:
    if (ctx->pc == 0x1A4C00u) {
        ctx->pc = 0x1A4C04u;
        goto label_1a4c04;
    }
    ctx->pc = 0x1A4BFCu;
    {
        const bool branch_taken_0x1a4bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bfc) {
            ctx->pc = 0x1A4E40u;
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A4C04u;
label_1a4c04:
    // 0x1a4c04: 0xc069058  jal         func_1A4160
label_1a4c08:
    if (ctx->pc == 0x1A4C08u) {
        ctx->pc = 0x1A4C0Cu;
        goto label_1a4c0c;
    }
    ctx->pc = 0x1A4C04u;
    SET_GPR_U32(ctx, 31, 0x1A4C0Cu);
    ctx->pc = 0x1A4160u;
    if (runtime->hasFunction(0x1A4160u)) {
        auto targetFn = runtime->lookupFunction(0x1A4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C0Cu; }
        if (ctx->pc != 0x1A4C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWalkMode__Fv_0x1a4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C0Cu; }
        if (ctx->pc != 0x1A4C0Cu) { return; }
    }
    ctx->pc = 0x1A4C0Cu;
label_1a4c0c:
    // 0x1a4c0c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_1a4c10:
    if (ctx->pc == 0x1A4C10u) {
        ctx->pc = 0x1A4C14u;
        goto label_1a4c14;
    }
    ctx->pc = 0x1A4C0Cu;
    {
        const bool branch_taken_0x1a4c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c0c) {
            ctx->pc = 0x1A4E40u;
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A4C14u;
label_1a4c14:
    // 0x1a4c14: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x1a4c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1a4c18:
    // 0x1a4c18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4c1c:
    // 0x1a4c1c: 0x342141b0  ori         $at, $at, 0x41B0
    ctx->pc = 0x1a4c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16816);
label_1a4c20:
    // 0x1a4c20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a4c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c24:
    // 0x1a4c24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a4c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a4c28:
    // 0x1a4c28: 0x320f809  jalr        $t9
label_1a4c2c:
    if (ctx->pc == 0x1A4C2Cu) {
        ctx->pc = 0x1A4C2Cu;
            // 0x1a4c2c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1A4C30u;
        goto label_1a4c30;
    }
    ctx->pc = 0x1A4C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4C30u);
        ctx->pc = 0x1A4C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C28u;
            // 0x1a4c2c: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C30u; }
            if (ctx->pc != 0x1A4C30u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4C30u;
label_1a4c30:
    // 0x1a4c30: 0x83828be0  lb          $v0, -0x7420($gp)
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937568)));
label_1a4c34:
    // 0x1a4c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a4c38:
    if (ctx->pc == 0x1A4C38u) {
        ctx->pc = 0x1A4C38u;
            // 0x1a4c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A4C3Cu;
        goto label_1a4c3c;
    }
    ctx->pc = 0x1A4C34u;
    {
        const bool branch_taken_0x1a4c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C34u;
            // 0x1a4c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c34) {
            ctx->pc = 0x1A4C44u;
            goto label_1a4c44;
        }
    }
    ctx->pc = 0x1A4C3Cu;
label_1a4c3c:
    // 0x1a4c3c: 0xaf808bdc  sw          $zero, -0x7424($gp)
    ctx->pc = 0x1a4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 0));
label_1a4c40:
    // 0x1a4c40: 0xa3828be0  sb          $v0, -0x7420($gp)
    ctx->pc = 0x1a4c40u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937568), (uint8_t)GPR_U32(ctx, 2));
label_1a4c44:
    // 0x1a4c44: 0xc7818bdc  lwc1        $f1, -0x7424($gp)
    ctx->pc = 0x1a4c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4c48:
    // 0x1a4c48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a4c4c:
    // 0x1a4c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4c50:
    // 0x1a4c50: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4c54:
    // 0x1a4c54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4c58:
    // 0x1a4c58: 0xc04c000  jal         func_130000
label_1a4c5c:
    if (ctx->pc == 0x1A4C5Cu) {
        ctx->pc = 0x1A4C5Cu;
            // 0x1a4c5c: 0xe7808bdc  swc1        $f0, -0x7424($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), bits); }
        ctx->pc = 0x1A4C60u;
        goto label_1a4c60;
    }
    ctx->pc = 0x1A4C58u;
    SET_GPR_U32(ctx, 31, 0x1A4C60u);
    ctx->pc = 0x1A4C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C58u;
            // 0x1a4c5c: 0xe7808bdc  swc1        $f0, -0x7424($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C60u; }
        if (ctx->pc != 0x1A4C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C60u; }
        if (ctx->pc != 0x1A4C60u) { return; }
    }
    ctx->pc = 0x1A4C60u;
label_1a4c60:
    // 0x1a4c60: 0xc7818bdc  lwc1        $f1, -0x7424($gp)
    ctx->pc = 0x1a4c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4c64:
    // 0x1a4c64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4c68:
    // 0x1a4c68: 0x8c23b294  lw          $v1, -0x4D6C($at)
    ctx->pc = 0x1a4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947476)));
label_1a4c6c:
    // 0x1a4c6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4c70:
    // 0x1a4c70: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1a4c74:
    if (ctx->pc == 0x1A4C74u) {
        ctx->pc = 0x1A4C74u;
            // 0x1a4c74: 0xe7808bdc  swc1        $f0, -0x7424($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), bits); }
        ctx->pc = 0x1A4C78u;
        goto label_1a4c78;
    }
    ctx->pc = 0x1A4C70u;
    {
        const bool branch_taken_0x1a4c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C70u;
            // 0x1a4c74: 0xe7808bdc  swc1        $f0, -0x7424($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c70) {
            ctx->pc = 0x1A4D3Cu;
            goto label_1a4d3c;
        }
    }
    ctx->pc = 0x1A4C78u;
label_1a4c78:
    // 0x1a4c78: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a4c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1a4c7c:
    // 0x1a4c7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4c80:
    // 0x1a4c80: 0x24636700  addiu       $v1, $v1, 0x6700
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26368));
label_1a4c84:
    // 0x1a4c84: 0x342141c0  ori         $at, $at, 0x41C0
    ctx->pc = 0x1a4c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16832);
label_1a4c88:
    // 0x1a4c88: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1a4c88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a4c8c:
    // 0x1a4c8c: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4c90:
    // 0x1a4c90: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1a4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_1a4c94:
    // 0x1a4c94: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1a4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1a4c98:
    // 0x1a4c98: 0xc7818bdc  lwc1        $f1, -0x7424($gp)
    ctx->pc = 0x1a4c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4c9c:
    // 0x1a4c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4ca0:
    // 0x1a4ca0: 0x0  nop
    ctx->pc = 0x1a4ca0u;
    // NOP
label_1a4ca4:
    // 0x1a4ca4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4ca8:
    // 0x1a4ca8: 0x0  nop
    ctx->pc = 0x1a4ca8u;
    // NOP
label_1a4cac:
    // 0x1a4cac: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_1a4cb0:
    if (ctx->pc == 0x1A4CB0u) {
        ctx->pc = 0x1A4CB4u;
        goto label_1a4cb4;
    }
    ctx->pc = 0x1A4CACu;
    {
        const bool branch_taken_0x1a4cac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4cac) {
            ctx->pc = 0x1A4D04u;
            goto label_1a4d04;
        }
    }
    ctx->pc = 0x1A4CB4u;
label_1a4cb4:
    // 0x1a4cb4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4cb8:
    // 0x1a4cb8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a4cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a4cbc:
    // 0x1a4cbc: 0x24a55b38  addiu       $a1, $a1, 0x5B38
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23352));
label_1a4cc0:
    // 0x1a4cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4cc4:
    // 0x1a4cc4: 0xc0b8498  jal         func_2E1260
label_1a4cc8:
    if (ctx->pc == 0x1A4CC8u) {
        ctx->pc = 0x1A4CC8u;
            // 0x1a4cc8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A4CCCu;
        goto label_1a4ccc;
    }
    ctx->pc = 0x1A4CC4u;
    SET_GPR_U32(ctx, 31, 0x1A4CCCu);
    ctx->pc = 0x1A4CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CC4u;
            // 0x1a4cc8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CCCu; }
        if (ctx->pc != 0x1A4CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CCCu; }
        if (ctx->pc != 0x1A4CCCu) { return; }
    }
    ctx->pc = 0x1A4CCCu;
label_1a4ccc:
    // 0x1a4ccc: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4cd0:
    // 0x1a4cd0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a4cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1a4cd4:
    // 0x1a4cd4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4cd8:
    // 0x1a4cd8: 0x24a5b2a0  addiu       $a1, $a1, -0x4D60
    ctx->pc = 0x1a4cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947488));
label_1a4cdc:
    // 0x1a4cdc: 0xc0b8894  jal         func_2E2250
label_1a4ce0:
    if (ctx->pc == 0x1A4CE0u) {
        ctx->pc = 0x1A4CE0u;
            // 0x1a4ce0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CE4u;
        goto label_1a4ce4;
    }
    ctx->pc = 0x1A4CDCu;
    SET_GPR_U32(ctx, 31, 0x1A4CE4u);
    ctx->pc = 0x1A4CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CDCu;
            // 0x1a4ce0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CE4u; }
        if (ctx->pc != 0x1A4CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CE4u; }
        if (ctx->pc != 0x1A4CE4u) { return; }
    }
    ctx->pc = 0x1A4CE4u;
label_1a4ce4:
    // 0x1a4ce4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4ce8:
    // 0x1a4ce8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4cec:
    // 0x1a4cec: 0x342141c0  ori         $at, $at, 0x41C0
    ctx->pc = 0x1a4cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16832);
label_1a4cf0:
    // 0x1a4cf0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4cf4:
    // 0x1a4cf4: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4cf8:
    // 0x1a4cf8: 0xc0b88d8  jal         func_2E2360
label_1a4cfc:
    if (ctx->pc == 0x1A4CFCu) {
        ctx->pc = 0x1A4CFCu;
            // 0x1a4cfc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D00u;
        goto label_1a4d00;
    }
    ctx->pc = 0x1A4CF8u;
    SET_GPR_U32(ctx, 31, 0x1A4D00u);
    ctx->pc = 0x1A4CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CF8u;
            // 0x1a4cfc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D00u; }
        if (ctx->pc != 0x1A4D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D00u; }
        if (ctx->pc != 0x1A4D00u) { return; }
    }
    ctx->pc = 0x1A4D00u;
label_1a4d00:
    // 0x1a4d00: 0xaf808bdc  sw          $zero, -0x7424($gp)
    ctx->pc = 0x1a4d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 0));
label_1a4d04:
    // 0x1a4d04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4d08:
    // 0x1a4d08: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1a4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1a4d0c:
    // 0x1a4d0c: 0xc422b2a4  lwc1        $f2, -0x4D5C($at)
    ctx->pc = 0x1a4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4d10:
    // 0x1a4d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4d14:
    // 0x1a4d14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4d18:
    // 0x1a4d18: 0x342141b4  ori         $at, $at, 0x41B4
    ctx->pc = 0x1a4d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16820);
label_1a4d1c:
    // 0x1a4d1c: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1a4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4d20:
    // 0x1a4d20: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a4d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4d24:
    // 0x1a4d24: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1a4d24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a4d28:
    // 0x1a4d28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4d2c:
    // 0x1a4d2c: 0x0  nop
    ctx->pc = 0x1a4d2cu;
    // NOP
label_1a4d30:
    // 0x1a4d30: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a4d34:
    if (ctx->pc == 0x1A4D34u) {
        ctx->pc = 0x1A4D38u;
        goto label_1a4d38;
    }
    ctx->pc = 0x1A4D30u;
    {
        const bool branch_taken_0x1a4d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4d30) {
            ctx->pc = 0x1A4D3Cu;
            goto label_1a4d3c;
        }
    }
    ctx->pc = 0x1A4D38u;
label_1a4d38:
    // 0x1a4d38: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1a4d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a4d3c:
    // 0x1a4d3c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_1a4d40:
    if (ctx->pc == 0x1A4D40u) {
        ctx->pc = 0x1A4D44u;
        goto label_1a4d44;
    }
    ctx->pc = 0x1A4D3Cu;
    {
        const bool branch_taken_0x1a4d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d3c) {
            ctx->pc = 0x1A4DDCu;
            goto label_1a4ddc;
        }
    }
    ctx->pc = 0x1A4D44u;
label_1a4d44:
    // 0x1a4d44: 0xc05cef0  jal         func_173BC0
label_1a4d48:
    if (ctx->pc == 0x1A4D48u) {
        ctx->pc = 0x1A4D48u;
            // 0x1a4d48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D4Cu;
        goto label_1a4d4c;
    }
    ctx->pc = 0x1A4D44u;
    SET_GPR_U32(ctx, 31, 0x1A4D4Cu);
    ctx->pc = 0x1A4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D44u;
            // 0x1a4d48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173BC0u;
    if (runtime->hasFunction(0x173BC0u)) {
        auto targetFn = runtime->lookupFunction(0x173BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D4Cu; }
        if (ctx->pc != 0x1A4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFootEffect__11CCharacter2Fv_0x173bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D4Cu; }
        if (ctx->pc != 0x1A4D4Cu) { return; }
    }
    ctx->pc = 0x1A4D4Cu;
label_1a4d4c:
    // 0x1a4d4c: 0xc0690c8  jal         func_1A4320
label_1a4d50:
    if (ctx->pc == 0x1A4D50u) {
        ctx->pc = 0x1A4D50u;
            // 0x1a4d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D54u;
        goto label_1a4d54;
    }
    ctx->pc = 0x1A4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D54u);
    ctx->pc = 0x1A4D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D4Cu;
            // 0x1a4d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4320u;
    if (runtime->hasFunction(0x1A4320u)) {
        auto targetFn = runtime->lookupFunction(0x1A4320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D54u; }
        if (ctx->pc != 0x1A4D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFootEffName__Fi_0x1a4320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D54u; }
        if (ctx->pc != 0x1A4D54u) { return; }
    }
    ctx->pc = 0x1A4D54u;
label_1a4d54:
    // 0x1a4d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d58:
    // 0x1a4d58: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_1a4d5c:
    if (ctx->pc == 0x1A4D5Cu) {
        ctx->pc = 0x1A4D60u;
        goto label_1a4d60;
    }
    ctx->pc = 0x1A4D58u;
    {
        const bool branch_taken_0x1a4d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d58) {
            ctx->pc = 0x1A4DDCu;
            goto label_1a4ddc;
        }
    }
    ctx->pc = 0x1A4D60u;
label_1a4d60:
    // 0x1a4d60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a4d64:
    // 0x1a4d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d68:
    // 0x1a4d68: 0xc04a38a  jal         func_128E28
label_1a4d6c:
    if (ctx->pc == 0x1A4D6Cu) {
        ctx->pc = 0x1A4D6Cu;
            // 0x1a4d6c: 0x24a55b18  addiu       $a1, $a1, 0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23320));
        ctx->pc = 0x1A4D70u;
        goto label_1a4d70;
    }
    ctx->pc = 0x1A4D68u;
    SET_GPR_U32(ctx, 31, 0x1A4D70u);
    ctx->pc = 0x1A4D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D68u;
            // 0x1a4d6c: 0x24a55b18  addiu       $a1, $a1, 0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D70u; }
        if (ctx->pc != 0x1A4D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D70u; }
        if (ctx->pc != 0x1A4D70u) { return; }
    }
    ctx->pc = 0x1A4D70u;
label_1a4d70:
    // 0x1a4d70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a4d74:
    if (ctx->pc == 0x1A4D74u) {
        ctx->pc = 0x1A4D78u;
        goto label_1a4d78;
    }
    ctx->pc = 0x1A4D70u;
    {
        const bool branch_taken_0x1a4d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d70) {
            ctx->pc = 0x1A4DACu;
            goto label_1a4dac;
        }
    }
    ctx->pc = 0x1A4D78u;
label_1a4d78:
    // 0x1a4d78: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4d7c:
    // 0x1a4d7c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a4d80:
    // 0x1a4d80: 0x24a55b00  addiu       $a1, $a1, 0x5B00
    ctx->pc = 0x1a4d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
label_1a4d84:
    // 0x1a4d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d88:
    // 0x1a4d88: 0xc0b8498  jal         func_2E1260
label_1a4d8c:
    if (ctx->pc == 0x1A4D8Cu) {
        ctx->pc = 0x1A4D8Cu;
            // 0x1a4d8c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A4D90u;
        goto label_1a4d90;
    }
    ctx->pc = 0x1A4D88u;
    SET_GPR_U32(ctx, 31, 0x1A4D90u);
    ctx->pc = 0x1A4D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D88u;
            // 0x1a4d8c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D90u; }
        if (ctx->pc != 0x1A4D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D90u; }
        if (ctx->pc != 0x1A4D90u) { return; }
    }
    ctx->pc = 0x1A4D90u;
label_1a4d90:
    // 0x1a4d90: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4d94:
    // 0x1a4d94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4d98:
    // 0x1a4d98: 0x342141b0  ori         $at, $at, 0x41B0
    ctx->pc = 0x1a4d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16816);
label_1a4d9c:
    // 0x1a4d9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4da0:
    // 0x1a4da0: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4da4:
    // 0x1a4da4: 0xc0b8894  jal         func_2E2250
label_1a4da8:
    if (ctx->pc == 0x1A4DA8u) {
        ctx->pc = 0x1A4DA8u;
            // 0x1a4da8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DACu;
        goto label_1a4dac;
    }
    ctx->pc = 0x1A4DA4u;
    SET_GPR_U32(ctx, 31, 0x1A4DACu);
    ctx->pc = 0x1A4DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DA4u;
            // 0x1a4da8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DACu; }
        if (ctx->pc != 0x1A4DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DACu; }
        if (ctx->pc != 0x1A4DACu) { return; }
    }
    ctx->pc = 0x1A4DACu;
label_1a4dac:
    // 0x1a4dac: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4db0:
    // 0x1a4db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4db4:
    // 0x1a4db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4db8:
    // 0x1a4db8: 0xc0b8498  jal         func_2E1260
label_1a4dbc:
    if (ctx->pc == 0x1A4DBCu) {
        ctx->pc = 0x1A4DBCu;
            // 0x1a4dbc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A4DC0u;
        goto label_1a4dc0;
    }
    ctx->pc = 0x1A4DB8u;
    SET_GPR_U32(ctx, 31, 0x1A4DC0u);
    ctx->pc = 0x1A4DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DB8u;
            // 0x1a4dbc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DC0u; }
        if (ctx->pc != 0x1A4DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DC0u; }
        if (ctx->pc != 0x1A4DC0u) { return; }
    }
    ctx->pc = 0x1A4DC0u;
label_1a4dc0:
    // 0x1a4dc0: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4dc4:
    // 0x1a4dc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4dc8:
    // 0x1a4dc8: 0x342141b0  ori         $at, $at, 0x41B0
    ctx->pc = 0x1a4dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16816);
label_1a4dcc:
    // 0x1a4dcc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4dd0:
    // 0x1a4dd0: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a4dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4dd4:
    // 0x1a4dd4: 0xc0b8894  jal         func_2E2250
label_1a4dd8:
    if (ctx->pc == 0x1A4DD8u) {
        ctx->pc = 0x1A4DD8u;
            // 0x1a4dd8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DDCu;
        goto label_1a4ddc;
    }
    ctx->pc = 0x1A4DD4u;
    SET_GPR_U32(ctx, 31, 0x1A4DDCu);
    ctx->pc = 0x1A4DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DD4u;
            // 0x1a4dd8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DDCu; }
        if (ctx->pc != 0x1A4DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DDCu; }
        if (ctx->pc != 0x1A4DDCu) { return; }
    }
    ctx->pc = 0x1A4DDCu;
label_1a4ddc:
    // 0x1a4ddc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a4ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1a4de0:
    // 0x1a4de0: 0x8c23b2b0  lw          $v1, -0x4D50($at)
    ctx->pc = 0x1a4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947504)));
label_1a4de4:
    // 0x1a4de4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1a4de8:
    if (ctx->pc == 0x1A4DE8u) {
        ctx->pc = 0x1A4DE8u;
            // 0x1a4de8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1A4DECu;
        goto label_1a4dec;
    }
    ctx->pc = 0x1A4DE4u;
    {
        const bool branch_taken_0x1a4de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DE4u;
            // 0x1a4de8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4de4) {
            ctx->pc = 0x1A4E40u;
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A4DECu;
label_1a4dec:
    // 0x1a4dec: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1a4df0:
    // 0x1a4df0: 0xc421b2b4  lwc1        $f1, -0x4D4C($at)
    ctx->pc = 0x1a4df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4df4:
    // 0x1a4df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4df8:
    // 0x1a4df8: 0x0  nop
    ctx->pc = 0x1a4df8u;
    // NOP
label_1a4dfc:
    // 0x1a4dfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4e00:
    // 0x1a4e00: 0x0  nop
    ctx->pc = 0x1a4e00u;
    // NOP
label_1a4e04:
    // 0x1a4e04: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1a4e08:
    if (ctx->pc == 0x1A4E08u) {
        ctx->pc = 0x1A4E0Cu;
        goto label_1a4e0c;
    }
    ctx->pc = 0x1A4E04u;
    {
        const bool branch_taken_0x1a4e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4e04) {
            ctx->pc = 0x1A4E40u;
            goto label_1a4e40;
        }
    }
    ctx->pc = 0x1A4E0Cu;
label_1a4e0c:
    // 0x1a4e0c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4e10:
    // 0x1a4e10: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a4e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a4e14:
    // 0x1a4e14: 0x24a55b08  addiu       $a1, $a1, 0x5B08
    ctx->pc = 0x1a4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23304));
label_1a4e18:
    // 0x1a4e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e1c:
    // 0x1a4e1c: 0xc0b8498  jal         func_2E1260
label_1a4e20:
    if (ctx->pc == 0x1A4E20u) {
        ctx->pc = 0x1A4E20u;
            // 0x1a4e20: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A4E24u;
        goto label_1a4e24;
    }
    ctx->pc = 0x1A4E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E24u);
    ctx->pc = 0x1A4E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E1Cu;
            // 0x1a4e20: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E24u; }
        if (ctx->pc != 0x1A4E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E24u; }
        if (ctx->pc != 0x1A4E24u) { return; }
    }
    ctx->pc = 0x1A4E24u;
label_1a4e24:
    // 0x1a4e24: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1a4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a4e28:
    // 0x1a4e28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4e2c:
    // 0x1a4e2c: 0x342141b0  ori         $at, $at, 0x41B0
    ctx->pc = 0x1a4e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16816);
label_1a4e30:
    // 0x1a4e30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4e34:
    // 0x1a4e34: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_1a4e38:
    // 0x1a4e38: 0xc0b8894  jal         func_2E2250
label_1a4e3c:
    if (ctx->pc == 0x1A4E3Cu) {
        ctx->pc = 0x1A4E3Cu;
            // 0x1a4e3c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E40u;
        goto label_1a4e40;
    }
    ctx->pc = 0x1A4E38u;
    SET_GPR_U32(ctx, 31, 0x1A4E40u);
    ctx->pc = 0x1A4E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E38u;
            // 0x1a4e3c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E40u; }
        if (ctx->pc != 0x1A4E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E40u; }
        if (ctx->pc != 0x1A4E40u) { return; }
    }
    ctx->pc = 0x1A4E40u;
label_1a4e40:
    // 0x1a4e40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a4e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a4e44:
    // 0x1a4e44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a4e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1a4e48:
    // 0x1a4e48: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a4e48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a4e4c:
    // 0x1a4e4c: 0x342141d0  ori         $at, $at, 0x41D0
    ctx->pc = 0x1a4e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16848);
label_1a4e50:
    // 0x1a4e50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a4e50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a4e54:
    // 0x1a4e54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a4e54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4e58:
    // 0x1a4e58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a4e58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4e5c:
    // 0x1a4e5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a4e5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4e60:
    // 0x1a4e60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4e64:
    // 0x1a4e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4e68:
    // 0x1a4e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4e6c:
    // 0x1a4e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4e70:
    // 0x1a4e70: 0x3e00008  jr          $ra
label_1a4e74:
    if (ctx->pc == 0x1A4E74u) {
        ctx->pc = 0x1A4E74u;
            // 0x1a4e74: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x1A4E78u;
        goto label_fallthrough_0x1a4e70;
    }
    ctx->pc = 0x1A4E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E70u;
            // 0x1a4e74: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a4e70:
    ctx->pc = 0x1A4E78u;
}
