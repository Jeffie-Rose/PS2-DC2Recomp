#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFOPP10CEditPartsi
// Address: 0x2ed990 - 0x2edf60
void CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFOPP10CEditPartsi_0x2ed990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFOPP10CEditPartsi_0x2ed990");
#endif

    switch (ctx->pc) {
        case 0x2ed990u: goto label_2ed990;
        case 0x2ed994u: goto label_2ed994;
        case 0x2ed998u: goto label_2ed998;
        case 0x2ed99cu: goto label_2ed99c;
        case 0x2ed9a0u: goto label_2ed9a0;
        case 0x2ed9a4u: goto label_2ed9a4;
        case 0x2ed9a8u: goto label_2ed9a8;
        case 0x2ed9acu: goto label_2ed9ac;
        case 0x2ed9b0u: goto label_2ed9b0;
        case 0x2ed9b4u: goto label_2ed9b4;
        case 0x2ed9b8u: goto label_2ed9b8;
        case 0x2ed9bcu: goto label_2ed9bc;
        case 0x2ed9c0u: goto label_2ed9c0;
        case 0x2ed9c4u: goto label_2ed9c4;
        case 0x2ed9c8u: goto label_2ed9c8;
        case 0x2ed9ccu: goto label_2ed9cc;
        case 0x2ed9d0u: goto label_2ed9d0;
        case 0x2ed9d4u: goto label_2ed9d4;
        case 0x2ed9d8u: goto label_2ed9d8;
        case 0x2ed9dcu: goto label_2ed9dc;
        case 0x2ed9e0u: goto label_2ed9e0;
        case 0x2ed9e4u: goto label_2ed9e4;
        case 0x2ed9e8u: goto label_2ed9e8;
        case 0x2ed9ecu: goto label_2ed9ec;
        case 0x2ed9f0u: goto label_2ed9f0;
        case 0x2ed9f4u: goto label_2ed9f4;
        case 0x2ed9f8u: goto label_2ed9f8;
        case 0x2ed9fcu: goto label_2ed9fc;
        case 0x2eda00u: goto label_2eda00;
        case 0x2eda04u: goto label_2eda04;
        case 0x2eda08u: goto label_2eda08;
        case 0x2eda0cu: goto label_2eda0c;
        case 0x2eda10u: goto label_2eda10;
        case 0x2eda14u: goto label_2eda14;
        case 0x2eda18u: goto label_2eda18;
        case 0x2eda1cu: goto label_2eda1c;
        case 0x2eda20u: goto label_2eda20;
        case 0x2eda24u: goto label_2eda24;
        case 0x2eda28u: goto label_2eda28;
        case 0x2eda2cu: goto label_2eda2c;
        case 0x2eda30u: goto label_2eda30;
        case 0x2eda34u: goto label_2eda34;
        case 0x2eda38u: goto label_2eda38;
        case 0x2eda3cu: goto label_2eda3c;
        case 0x2eda40u: goto label_2eda40;
        case 0x2eda44u: goto label_2eda44;
        case 0x2eda48u: goto label_2eda48;
        case 0x2eda4cu: goto label_2eda4c;
        case 0x2eda50u: goto label_2eda50;
        case 0x2eda54u: goto label_2eda54;
        case 0x2eda58u: goto label_2eda58;
        case 0x2eda5cu: goto label_2eda5c;
        case 0x2eda60u: goto label_2eda60;
        case 0x2eda64u: goto label_2eda64;
        case 0x2eda68u: goto label_2eda68;
        case 0x2eda6cu: goto label_2eda6c;
        case 0x2eda70u: goto label_2eda70;
        case 0x2eda74u: goto label_2eda74;
        case 0x2eda78u: goto label_2eda78;
        case 0x2eda7cu: goto label_2eda7c;
        case 0x2eda80u: goto label_2eda80;
        case 0x2eda84u: goto label_2eda84;
        case 0x2eda88u: goto label_2eda88;
        case 0x2eda8cu: goto label_2eda8c;
        case 0x2eda90u: goto label_2eda90;
        case 0x2eda94u: goto label_2eda94;
        case 0x2eda98u: goto label_2eda98;
        case 0x2eda9cu: goto label_2eda9c;
        case 0x2edaa0u: goto label_2edaa0;
        case 0x2edaa4u: goto label_2edaa4;
        case 0x2edaa8u: goto label_2edaa8;
        case 0x2edaacu: goto label_2edaac;
        case 0x2edab0u: goto label_2edab0;
        case 0x2edab4u: goto label_2edab4;
        case 0x2edab8u: goto label_2edab8;
        case 0x2edabcu: goto label_2edabc;
        case 0x2edac0u: goto label_2edac0;
        case 0x2edac4u: goto label_2edac4;
        case 0x2edac8u: goto label_2edac8;
        case 0x2edaccu: goto label_2edacc;
        case 0x2edad0u: goto label_2edad0;
        case 0x2edad4u: goto label_2edad4;
        case 0x2edad8u: goto label_2edad8;
        case 0x2edadcu: goto label_2edadc;
        case 0x2edae0u: goto label_2edae0;
        case 0x2edae4u: goto label_2edae4;
        case 0x2edae8u: goto label_2edae8;
        case 0x2edaecu: goto label_2edaec;
        case 0x2edaf0u: goto label_2edaf0;
        case 0x2edaf4u: goto label_2edaf4;
        case 0x2edaf8u: goto label_2edaf8;
        case 0x2edafcu: goto label_2edafc;
        case 0x2edb00u: goto label_2edb00;
        case 0x2edb04u: goto label_2edb04;
        case 0x2edb08u: goto label_2edb08;
        case 0x2edb0cu: goto label_2edb0c;
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb14u: goto label_2edb14;
        case 0x2edb18u: goto label_2edb18;
        case 0x2edb1cu: goto label_2edb1c;
        case 0x2edb20u: goto label_2edb20;
        case 0x2edb24u: goto label_2edb24;
        case 0x2edb28u: goto label_2edb28;
        case 0x2edb2cu: goto label_2edb2c;
        case 0x2edb30u: goto label_2edb30;
        case 0x2edb34u: goto label_2edb34;
        case 0x2edb38u: goto label_2edb38;
        case 0x2edb3cu: goto label_2edb3c;
        case 0x2edb40u: goto label_2edb40;
        case 0x2edb44u: goto label_2edb44;
        case 0x2edb48u: goto label_2edb48;
        case 0x2edb4cu: goto label_2edb4c;
        case 0x2edb50u: goto label_2edb50;
        case 0x2edb54u: goto label_2edb54;
        case 0x2edb58u: goto label_2edb58;
        case 0x2edb5cu: goto label_2edb5c;
        case 0x2edb60u: goto label_2edb60;
        case 0x2edb64u: goto label_2edb64;
        case 0x2edb68u: goto label_2edb68;
        case 0x2edb6cu: goto label_2edb6c;
        case 0x2edb70u: goto label_2edb70;
        case 0x2edb74u: goto label_2edb74;
        case 0x2edb78u: goto label_2edb78;
        case 0x2edb7cu: goto label_2edb7c;
        case 0x2edb80u: goto label_2edb80;
        case 0x2edb84u: goto label_2edb84;
        case 0x2edb88u: goto label_2edb88;
        case 0x2edb8cu: goto label_2edb8c;
        case 0x2edb90u: goto label_2edb90;
        case 0x2edb94u: goto label_2edb94;
        case 0x2edb98u: goto label_2edb98;
        case 0x2edb9cu: goto label_2edb9c;
        case 0x2edba0u: goto label_2edba0;
        case 0x2edba4u: goto label_2edba4;
        case 0x2edba8u: goto label_2edba8;
        case 0x2edbacu: goto label_2edbac;
        case 0x2edbb0u: goto label_2edbb0;
        case 0x2edbb4u: goto label_2edbb4;
        case 0x2edbb8u: goto label_2edbb8;
        case 0x2edbbcu: goto label_2edbbc;
        case 0x2edbc0u: goto label_2edbc0;
        case 0x2edbc4u: goto label_2edbc4;
        case 0x2edbc8u: goto label_2edbc8;
        case 0x2edbccu: goto label_2edbcc;
        case 0x2edbd0u: goto label_2edbd0;
        case 0x2edbd4u: goto label_2edbd4;
        case 0x2edbd8u: goto label_2edbd8;
        case 0x2edbdcu: goto label_2edbdc;
        case 0x2edbe0u: goto label_2edbe0;
        case 0x2edbe4u: goto label_2edbe4;
        case 0x2edbe8u: goto label_2edbe8;
        case 0x2edbecu: goto label_2edbec;
        case 0x2edbf0u: goto label_2edbf0;
        case 0x2edbf4u: goto label_2edbf4;
        case 0x2edbf8u: goto label_2edbf8;
        case 0x2edbfcu: goto label_2edbfc;
        case 0x2edc00u: goto label_2edc00;
        case 0x2edc04u: goto label_2edc04;
        case 0x2edc08u: goto label_2edc08;
        case 0x2edc0cu: goto label_2edc0c;
        case 0x2edc10u: goto label_2edc10;
        case 0x2edc14u: goto label_2edc14;
        case 0x2edc18u: goto label_2edc18;
        case 0x2edc1cu: goto label_2edc1c;
        case 0x2edc20u: goto label_2edc20;
        case 0x2edc24u: goto label_2edc24;
        case 0x2edc28u: goto label_2edc28;
        case 0x2edc2cu: goto label_2edc2c;
        case 0x2edc30u: goto label_2edc30;
        case 0x2edc34u: goto label_2edc34;
        case 0x2edc38u: goto label_2edc38;
        case 0x2edc3cu: goto label_2edc3c;
        case 0x2edc40u: goto label_2edc40;
        case 0x2edc44u: goto label_2edc44;
        case 0x2edc48u: goto label_2edc48;
        case 0x2edc4cu: goto label_2edc4c;
        case 0x2edc50u: goto label_2edc50;
        case 0x2edc54u: goto label_2edc54;
        case 0x2edc58u: goto label_2edc58;
        case 0x2edc5cu: goto label_2edc5c;
        case 0x2edc60u: goto label_2edc60;
        case 0x2edc64u: goto label_2edc64;
        case 0x2edc68u: goto label_2edc68;
        case 0x2edc6cu: goto label_2edc6c;
        case 0x2edc70u: goto label_2edc70;
        case 0x2edc74u: goto label_2edc74;
        case 0x2edc78u: goto label_2edc78;
        case 0x2edc7cu: goto label_2edc7c;
        case 0x2edc80u: goto label_2edc80;
        case 0x2edc84u: goto label_2edc84;
        case 0x2edc88u: goto label_2edc88;
        case 0x2edc8cu: goto label_2edc8c;
        case 0x2edc90u: goto label_2edc90;
        case 0x2edc94u: goto label_2edc94;
        case 0x2edc98u: goto label_2edc98;
        case 0x2edc9cu: goto label_2edc9c;
        case 0x2edca0u: goto label_2edca0;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edca8u: goto label_2edca8;
        case 0x2edcacu: goto label_2edcac;
        case 0x2edcb0u: goto label_2edcb0;
        case 0x2edcb4u: goto label_2edcb4;
        case 0x2edcb8u: goto label_2edcb8;
        case 0x2edcbcu: goto label_2edcbc;
        case 0x2edcc0u: goto label_2edcc0;
        case 0x2edcc4u: goto label_2edcc4;
        case 0x2edcc8u: goto label_2edcc8;
        case 0x2edcccu: goto label_2edccc;
        case 0x2edcd0u: goto label_2edcd0;
        case 0x2edcd4u: goto label_2edcd4;
        case 0x2edcd8u: goto label_2edcd8;
        case 0x2edcdcu: goto label_2edcdc;
        case 0x2edce0u: goto label_2edce0;
        case 0x2edce4u: goto label_2edce4;
        case 0x2edce8u: goto label_2edce8;
        case 0x2edcecu: goto label_2edcec;
        case 0x2edcf0u: goto label_2edcf0;
        case 0x2edcf4u: goto label_2edcf4;
        case 0x2edcf8u: goto label_2edcf8;
        case 0x2edcfcu: goto label_2edcfc;
        case 0x2edd00u: goto label_2edd00;
        case 0x2edd04u: goto label_2edd04;
        case 0x2edd08u: goto label_2edd08;
        case 0x2edd0cu: goto label_2edd0c;
        case 0x2edd10u: goto label_2edd10;
        case 0x2edd14u: goto label_2edd14;
        case 0x2edd18u: goto label_2edd18;
        case 0x2edd1cu: goto label_2edd1c;
        case 0x2edd20u: goto label_2edd20;
        case 0x2edd24u: goto label_2edd24;
        case 0x2edd28u: goto label_2edd28;
        case 0x2edd2cu: goto label_2edd2c;
        case 0x2edd30u: goto label_2edd30;
        case 0x2edd34u: goto label_2edd34;
        case 0x2edd38u: goto label_2edd38;
        case 0x2edd3cu: goto label_2edd3c;
        case 0x2edd40u: goto label_2edd40;
        case 0x2edd44u: goto label_2edd44;
        case 0x2edd48u: goto label_2edd48;
        case 0x2edd4cu: goto label_2edd4c;
        case 0x2edd50u: goto label_2edd50;
        case 0x2edd54u: goto label_2edd54;
        case 0x2edd58u: goto label_2edd58;
        case 0x2edd5cu: goto label_2edd5c;
        case 0x2edd60u: goto label_2edd60;
        case 0x2edd64u: goto label_2edd64;
        case 0x2edd68u: goto label_2edd68;
        case 0x2edd6cu: goto label_2edd6c;
        case 0x2edd70u: goto label_2edd70;
        case 0x2edd74u: goto label_2edd74;
        case 0x2edd78u: goto label_2edd78;
        case 0x2edd7cu: goto label_2edd7c;
        case 0x2edd80u: goto label_2edd80;
        case 0x2edd84u: goto label_2edd84;
        case 0x2edd88u: goto label_2edd88;
        case 0x2edd8cu: goto label_2edd8c;
        case 0x2edd90u: goto label_2edd90;
        case 0x2edd94u: goto label_2edd94;
        case 0x2edd98u: goto label_2edd98;
        case 0x2edd9cu: goto label_2edd9c;
        case 0x2edda0u: goto label_2edda0;
        case 0x2edda4u: goto label_2edda4;
        case 0x2edda8u: goto label_2edda8;
        case 0x2eddacu: goto label_2eddac;
        case 0x2eddb0u: goto label_2eddb0;
        case 0x2eddb4u: goto label_2eddb4;
        case 0x2eddb8u: goto label_2eddb8;
        case 0x2eddbcu: goto label_2eddbc;
        case 0x2eddc0u: goto label_2eddc0;
        case 0x2eddc4u: goto label_2eddc4;
        case 0x2eddc8u: goto label_2eddc8;
        case 0x2eddccu: goto label_2eddcc;
        case 0x2eddd0u: goto label_2eddd0;
        case 0x2eddd4u: goto label_2eddd4;
        case 0x2eddd8u: goto label_2eddd8;
        case 0x2edddcu: goto label_2edddc;
        case 0x2edde0u: goto label_2edde0;
        case 0x2edde4u: goto label_2edde4;
        case 0x2edde8u: goto label_2edde8;
        case 0x2eddecu: goto label_2eddec;
        case 0x2eddf0u: goto label_2eddf0;
        case 0x2eddf4u: goto label_2eddf4;
        case 0x2eddf8u: goto label_2eddf8;
        case 0x2eddfcu: goto label_2eddfc;
        case 0x2ede00u: goto label_2ede00;
        case 0x2ede04u: goto label_2ede04;
        case 0x2ede08u: goto label_2ede08;
        case 0x2ede0cu: goto label_2ede0c;
        case 0x2ede10u: goto label_2ede10;
        case 0x2ede14u: goto label_2ede14;
        case 0x2ede18u: goto label_2ede18;
        case 0x2ede1cu: goto label_2ede1c;
        case 0x2ede20u: goto label_2ede20;
        case 0x2ede24u: goto label_2ede24;
        case 0x2ede28u: goto label_2ede28;
        case 0x2ede2cu: goto label_2ede2c;
        case 0x2ede30u: goto label_2ede30;
        case 0x2ede34u: goto label_2ede34;
        case 0x2ede38u: goto label_2ede38;
        case 0x2ede3cu: goto label_2ede3c;
        case 0x2ede40u: goto label_2ede40;
        case 0x2ede44u: goto label_2ede44;
        case 0x2ede48u: goto label_2ede48;
        case 0x2ede4cu: goto label_2ede4c;
        case 0x2ede50u: goto label_2ede50;
        case 0x2ede54u: goto label_2ede54;
        case 0x2ede58u: goto label_2ede58;
        case 0x2ede5cu: goto label_2ede5c;
        case 0x2ede60u: goto label_2ede60;
        case 0x2ede64u: goto label_2ede64;
        case 0x2ede68u: goto label_2ede68;
        case 0x2ede6cu: goto label_2ede6c;
        case 0x2ede70u: goto label_2ede70;
        case 0x2ede74u: goto label_2ede74;
        case 0x2ede78u: goto label_2ede78;
        case 0x2ede7cu: goto label_2ede7c;
        case 0x2ede80u: goto label_2ede80;
        case 0x2ede84u: goto label_2ede84;
        case 0x2ede88u: goto label_2ede88;
        case 0x2ede8cu: goto label_2ede8c;
        case 0x2ede90u: goto label_2ede90;
        case 0x2ede94u: goto label_2ede94;
        case 0x2ede98u: goto label_2ede98;
        case 0x2ede9cu: goto label_2ede9c;
        case 0x2edea0u: goto label_2edea0;
        case 0x2edea4u: goto label_2edea4;
        case 0x2edea8u: goto label_2edea8;
        case 0x2edeacu: goto label_2edeac;
        case 0x2edeb0u: goto label_2edeb0;
        case 0x2edeb4u: goto label_2edeb4;
        case 0x2edeb8u: goto label_2edeb8;
        case 0x2edebcu: goto label_2edebc;
        case 0x2edec0u: goto label_2edec0;
        case 0x2edec4u: goto label_2edec4;
        case 0x2edec8u: goto label_2edec8;
        case 0x2edeccu: goto label_2edecc;
        case 0x2eded0u: goto label_2eded0;
        case 0x2eded4u: goto label_2eded4;
        case 0x2eded8u: goto label_2eded8;
        case 0x2ededcu: goto label_2ededc;
        case 0x2edee0u: goto label_2edee0;
        case 0x2edee4u: goto label_2edee4;
        case 0x2edee8u: goto label_2edee8;
        case 0x2edeecu: goto label_2edeec;
        case 0x2edef0u: goto label_2edef0;
        case 0x2edef4u: goto label_2edef4;
        case 0x2edef8u: goto label_2edef8;
        case 0x2edefcu: goto label_2edefc;
        case 0x2edf00u: goto label_2edf00;
        case 0x2edf04u: goto label_2edf04;
        case 0x2edf08u: goto label_2edf08;
        case 0x2edf0cu: goto label_2edf0c;
        case 0x2edf10u: goto label_2edf10;
        case 0x2edf14u: goto label_2edf14;
        case 0x2edf18u: goto label_2edf18;
        case 0x2edf1cu: goto label_2edf1c;
        case 0x2edf20u: goto label_2edf20;
        case 0x2edf24u: goto label_2edf24;
        case 0x2edf28u: goto label_2edf28;
        case 0x2edf2cu: goto label_2edf2c;
        case 0x2edf30u: goto label_2edf30;
        case 0x2edf34u: goto label_2edf34;
        case 0x2edf38u: goto label_2edf38;
        case 0x2edf3cu: goto label_2edf3c;
        case 0x2edf40u: goto label_2edf40;
        case 0x2edf44u: goto label_2edf44;
        case 0x2edf48u: goto label_2edf48;
        case 0x2edf4cu: goto label_2edf4c;
        case 0x2edf50u: goto label_2edf50;
        case 0x2edf54u: goto label_2edf54;
        case 0x2edf58u: goto label_2edf58;
        case 0x2edf5cu: goto label_2edf5c;
        default: break;
    }

    ctx->pc = 0x2ed990u;

label_2ed990:
    // 0x2ed990: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2ed990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_2ed994:
    // 0x2ed994: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ed994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2ed998:
    // 0x2ed998: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ed998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2ed99c:
    // 0x2ed99c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ed99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2ed9a0:
    // 0x2ed9a0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2ed9a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9a4:
    // 0x2ed9a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ed9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2ed9a8:
    // 0x2ed9a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ed9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2ed9ac:
    // 0x2ed9ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ed9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ed9b0:
    // 0x2ed9b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ed9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ed9b4:
    // 0x2ed9b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ed9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ed9b8:
    // 0x2ed9b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ed9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9bc:
    // 0x2ed9bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ed9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ed9c0:
    // 0x2ed9c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ed9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9c4:
    // 0x2ed9c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ed9c8:
    // 0x2ed9c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ed9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9cc:
    // 0x2ed9cc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2ed9ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ed9d0:
    // 0x2ed9d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ed9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9d4:
    // 0x2ed9d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2ed9d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2ed9d8:
    // 0x2ed9d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ed9d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ed9dc:
    // 0x2ed9dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ed9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ed9e0:
    // 0x2ed9e0: 0xafa800bc  sw          $t0, 0xBC($sp)
    ctx->pc = 0x2ed9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
label_2ed9e4:
    // 0x2ed9e4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2ed9e8:
    if (ctx->pc == 0x2ED9E8u) {
        ctx->pc = 0x2ED9E8u;
            // 0x2ed9e8: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2ED9ECu;
        goto label_2ed9ec;
    }
    ctx->pc = 0x2ED9E4u;
    {
        const bool branch_taken_0x2ed9e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9E4u;
            // 0x2ed9e8: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9e4) {
            ctx->pc = 0x2ED9F4u;
            goto label_2ed9f4;
        }
    }
    ctx->pc = 0x2ED9ECu;
label_2ed9ec:
    // 0x2ed9ec: 0x1000014c  b           . + 4 + (0x14C << 2)
label_2ed9f0:
    if (ctx->pc == 0x2ED9F0u) {
        ctx->pc = 0x2ED9F0u;
            // 0x2ed9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9F4u;
        goto label_2ed9f4;
    }
    ctx->pc = 0x2ED9ECu;
    {
        const bool branch_taken_0x2ed9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9ECu;
            // 0x2ed9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9ec) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2ED9F4u;
label_2ed9f4:
    // 0x2ed9f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ed9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ed9f8:
    // 0x2ed9f8: 0xc06c3d4  jal         func_1B0F50
label_2ed9fc:
    if (ctx->pc == 0x2ED9FCu) {
        ctx->pc = 0x2ED9FCu;
            // 0x2ed9fc: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x2EDA00u;
        goto label_2eda00;
    }
    ctx->pc = 0x2ED9F8u;
    SET_GPR_U32(ctx, 31, 0x2EDA00u);
    ctx->pc = 0x2ED9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9F8u;
            // 0x2ed9fc: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA00u; }
        if (ctx->pc != 0x2EDA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA00u; }
        if (ctx->pc != 0x2EDA00u) { return; }
    }
    ctx->pc = 0x2EDA00u;
label_2eda00:
    // 0x2eda00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2eda00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eda04:
    // 0x2eda04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eda04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eda08:
    // 0x2eda08: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2eda08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2eda0c:
    // 0x2eda0c: 0xc06c4d8  jal         func_1B1360
label_2eda10:
    if (ctx->pc == 0x2EDA10u) {
        ctx->pc = 0x2EDA10u;
            // 0x2eda10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA14u;
        goto label_2eda14;
    }
    ctx->pc = 0x2EDA0Cu;
    SET_GPR_U32(ctx, 31, 0x2EDA14u);
    ctx->pc = 0x2EDA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA0Cu;
            // 0x2eda10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA14u; }
        if (ctx->pc != 0x2EDA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA14u; }
        if (ctx->pc != 0x2EDA14u) { return; }
    }
    ctx->pc = 0x2EDA14u;
label_2eda14:
    // 0x2eda14: 0x7a4301c0  lq          $v1, 0x1C0($s2)
    ctx->pc = 0x2eda14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 448)));
label_2eda18:
    // 0x2eda18: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2eda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2eda1c:
    // 0x2eda1c: 0x7a4201d0  lq          $v0, 0x1D0($s2)
    ctx->pc = 0x2eda1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 464)));
label_2eda20:
    // 0x2eda20: 0x26450210  addiu       $a1, $s2, 0x210
    ctx->pc = 0x2eda20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
label_2eda24:
    // 0x2eda24: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2eda24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2eda28:
    // 0x2eda28: 0xc04bd50  jal         func_12F540
label_2eda2c:
    if (ctx->pc == 0x2EDA2Cu) {
        ctx->pc = 0x2EDA2Cu;
            // 0x2eda2c: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x2EDA30u;
        goto label_2eda30;
    }
    ctx->pc = 0x2EDA28u;
    SET_GPR_U32(ctx, 31, 0x2EDA30u);
    ctx->pc = 0x2EDA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA28u;
            // 0x2eda2c: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F540u;
    if (runtime->hasFunction(0x12F540u)) {
        auto targetFn = runtime->lookupFunction(0x12F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA30u; }
        if (ctx->pc != 0x2EDA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX_0x12f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA30u; }
        if (ctx->pc != 0x2EDA30u) { return; }
    }
    ctx->pc = 0x2EDA30u;
label_2eda30:
    // 0x2eda30: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2eda30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2eda34:
    // 0x2eda34: 0xc068d24  jal         func_1A3490
label_2eda38:
    if (ctx->pc == 0x2EDA38u) {
        ctx->pc = 0x2EDA38u;
            // 0x2eda38: 0x264400c0  addiu       $a0, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->pc = 0x2EDA3Cu;
        goto label_2eda3c;
    }
    ctx->pc = 0x2EDA34u;
    SET_GPR_U32(ctx, 31, 0x2EDA3Cu);
    ctx->pc = 0x2EDA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA34u;
            // 0x2eda38: 0x264400c0  addiu       $a0, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA3Cu; }
        if (ctx->pc != 0x2EDA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA3Cu; }
        if (ctx->pc != 0x2EDA3Cu) { return; }
    }
    ctx->pc = 0x2EDA3Cu;
label_2eda3c:
    // 0x2eda3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2eda3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2eda40:
    // 0x2eda40: 0xc068d24  jal         func_1A3490
label_2eda44:
    if (ctx->pc == 0x2EDA44u) {
        ctx->pc = 0x2EDA44u;
            // 0x2eda44: 0x26440200  addiu       $a0, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->pc = 0x2EDA48u;
        goto label_2eda48;
    }
    ctx->pc = 0x2EDA40u;
    SET_GPR_U32(ctx, 31, 0x2EDA48u);
    ctx->pc = 0x2EDA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA40u;
            // 0x2eda44: 0x26440200  addiu       $a0, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA48u; }
        if (ctx->pc != 0x2EDA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDA48u; }
        if (ctx->pc != 0x2EDA48u) { return; }
    }
    ctx->pc = 0x2EDA48u;
label_2eda48:
    // 0x2eda48: 0x83829edc  lb          $v0, -0x6124($gp)
    ctx->pc = 0x2eda48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942428)));
label_2eda4c:
    // 0x2eda4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2eda50:
    if (ctx->pc == 0x2EDA50u) {
        ctx->pc = 0x2EDA50u;
            // 0x2eda50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2EDA54u;
        goto label_2eda54;
    }
    ctx->pc = 0x2EDA4Cu;
    {
        const bool branch_taken_0x2eda4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA4Cu;
            // 0x2eda50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda4c) {
            ctx->pc = 0x2EDA5Cu;
            goto label_2eda5c;
        }
    }
    ctx->pc = 0x2EDA54u;
label_2eda54:
    // 0x2eda54: 0xaf809ed8  sw          $zero, -0x6128($gp)
    ctx->pc = 0x2eda54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942424), GPR_U32(ctx, 0));
label_2eda58:
    // 0x2eda58: 0xa3829edc  sb          $v0, -0x6124($gp)
    ctx->pc = 0x2eda58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942428), (uint8_t)GPR_U32(ctx, 2));
label_2eda5c:
    // 0x2eda5c: 0x8f839ed8  lw          $v1, -0x6128($gp)
    ctx->pc = 0x2eda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942424)));
label_2eda60:
    // 0x2eda60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2eda60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2eda64:
    // 0x2eda64: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x2eda64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2eda68:
    // 0x2eda68: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2eda68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eda6c:
    // 0x2eda6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2eda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2eda70:
    // 0x2eda70: 0xaf839ed8  sw          $v1, -0x6128($gp)
    ctx->pc = 0x2eda70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942424), GPR_U32(ctx, 3));
label_2eda74:
    // 0x2eda74: 0x8f839ed8  lw          $v1, -0x6128($gp)
    ctx->pc = 0x2eda74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942424)));
label_2eda78:
    // 0x2eda78: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2eda78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2eda7c:
    // 0x2eda7c: 0x0  nop
    ctx->pc = 0x2eda7cu;
    // NOP
label_2eda80:
    // 0x2eda80: 0x0  nop
    ctx->pc = 0x2eda80u;
    // NOP
label_2eda84:
    // 0x2eda84: 0x1010  mfhi        $v0
    ctx->pc = 0x2eda84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2eda88:
    // 0x2eda88: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
label_2eda8c:
    if (ctx->pc == 0x2EDA8Cu) {
        ctx->pc = 0x2EDA8Cu;
            // 0x2eda8c: 0xaf829ed8  sw          $v0, -0x6128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942424), GPR_U32(ctx, 2));
        ctx->pc = 0x2EDA90u;
        goto label_2eda90;
    }
    ctx->pc = 0x2EDA88u;
    {
        const bool branch_taken_0x2eda88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDA88u;
            // 0x2eda8c: 0xaf829ed8  sw          $v0, -0x6128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda88) {
            ctx->pc = 0x2EDD40u;
            goto label_2edd40;
        }
    }
    ctx->pc = 0x2EDA90u;
label_2eda90:
    // 0x2eda90: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2eda90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eda94:
    // 0x2eda94: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2eda94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2eda98:
    // 0x2eda98: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2eda98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2eda9c:
    // 0x2eda9c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2eda9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2edaa0:
    // 0x2edaa0: 0x82820070  lb          $v0, 0x70($s4)
    ctx->pc = 0x2edaa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 112)));
label_2edaa4:
    // 0x2edaa4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2edaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_2edaa8:
    // 0x2edaa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2edaa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2edaac:
    // 0x2edaac: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
label_2edab0:
    if (ctx->pc == 0x2EDAB0u) {
        ctx->pc = 0x2EDAB4u;
        goto label_2edab4;
    }
    ctx->pc = 0x2EDAACu;
    {
        const bool branch_taken_0x2edaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edaac) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDAB4u;
label_2edab4:
    // 0x2edab4: 0x8e950324  lw          $s5, 0x324($s4)
    ctx->pc = 0x2edab4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_2edab8:
    // 0x2edab8: 0x12a0009c  beqz        $s5, . + 4 + (0x9C << 2)
label_2edabc:
    if (ctx->pc == 0x2EDABCu) {
        ctx->pc = 0x2EDAC0u;
        goto label_2edac0;
    }
    ctx->pc = 0x2EDAB8u;
    {
        const bool branch_taken_0x2edab8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edab8) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDAC0u;
label_2edac0:
    // 0x2edac0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2edac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2edac4:
    // 0x2edac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2edac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2edac8:
    // 0x2edac8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2edac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2edacc:
    // 0x2edacc: 0x320f809  jalr        $t9
label_2edad0:
    if (ctx->pc == 0x2EDAD0u) {
        ctx->pc = 0x2EDAD0u;
            // 0x2edad0: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2EDAD4u;
        goto label_2edad4;
    }
    ctx->pc = 0x2EDACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EDAD4u);
        ctx->pc = 0x2EDAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDACCu;
            // 0x2edad0: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EDAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EDAD4u; }
            if (ctx->pc != 0x2EDAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2EDAD4u;
label_2edad4:
    // 0x2edad4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2edad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2edad8:
    // 0x2edad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2edad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2edadc:
    // 0x2edadc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2edadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2edae0:
    // 0x2edae0: 0x320f809  jalr        $t9
label_2edae4:
    if (ctx->pc == 0x2EDAE4u) {
        ctx->pc = 0x2EDAE4u;
            // 0x2edae4: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x2EDAE8u;
        goto label_2edae8;
    }
    ctx->pc = 0x2EDAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EDAE8u);
        ctx->pc = 0x2EDAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDAE0u;
            // 0x2edae4: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EDAE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EDAE8u; }
            if (ctx->pc != 0x2EDAE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2EDAE8u;
label_2edae8:
    // 0x2edae8: 0x27a201e4  addiu       $v0, $sp, 0x1E4
    ctx->pc = 0x2edae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_2edaec:
    // 0x2edaec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2edaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2edaf0:
    // 0x2edaf0: 0xc06c3d4  jal         func_1B0F50
label_2edaf4:
    if (ctx->pc == 0x2EDAF4u) {
        ctx->pc = 0x2EDAF4u;
            // 0x2edaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAF8u;
        goto label_2edaf8;
    }
    ctx->pc = 0x2EDAF0u;
    SET_GPR_U32(ctx, 31, 0x2EDAF8u);
    ctx->pc = 0x2EDAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDAF0u;
            // 0x2edaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDAF8u; }
        if (ctx->pc != 0x2EDAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDAF8u; }
        if (ctx->pc != 0x2EDAF8u) { return; }
    }
    ctx->pc = 0x2EDAF8u;
label_2edaf8:
    // 0x2edaf8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2edaf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edafc:
    // 0x2edafc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2edb00:
    // 0x2edb00: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2edb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2edb04:
    // 0x2edb04: 0xc06c4d8  jal         func_1B1360
label_2edb08:
    if (ctx->pc == 0x2EDB08u) {
        ctx->pc = 0x2EDB08u;
            // 0x2edb08: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2EDB0Cu;
        goto label_2edb0c;
    }
    ctx->pc = 0x2EDB04u;
    SET_GPR_U32(ctx, 31, 0x2EDB0Cu);
    ctx->pc = 0x2EDB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB04u;
            // 0x2edb08: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB0Cu; }
        if (ctx->pc != 0x2EDB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB0Cu; }
        if (ctx->pc != 0x2EDB0Cu) { return; }
    }
    ctx->pc = 0x2EDB0Cu;
label_2edb0c:
    // 0x2edb0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2edb10:
    // 0x2edb10: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2edb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2edb14:
    // 0x2edb14: 0xc06c4ec  jal         func_1B13B0
label_2edb18:
    if (ctx->pc == 0x2EDB18u) {
        ctx->pc = 0x2EDB18u;
            // 0x2edb18: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2EDB1Cu;
        goto label_2edb1c;
    }
    ctx->pc = 0x2EDB14u;
    SET_GPR_U32(ctx, 31, 0x2EDB1Cu);
    ctx->pc = 0x2EDB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB14u;
            // 0x2edb18: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (runtime->hasFunction(0x1B13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB1Cu; }
        if (ctx->pc != 0x2EDB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB1Cu; }
        if (ctx->pc != 0x2EDB1Cu) { return; }
    }
    ctx->pc = 0x2EDB1Cu;
label_2edb1c:
    // 0x2edb1c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2edb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2edb20:
    // 0x2edb20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2edb24:
    // 0x2edb24: 0xc041c3e  jal         func_1070F8
label_2edb28:
    if (ctx->pc == 0x2EDB28u) {
        ctx->pc = 0x2EDB28u;
            // 0x2edb28: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2EDB2Cu;
        goto label_2edb2c;
    }
    ctx->pc = 0x2EDB24u;
    SET_GPR_U32(ctx, 31, 0x2EDB2Cu);
    ctx->pc = 0x2EDB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB24u;
            // 0x2edb28: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB2Cu; }
        if (ctx->pc != 0x2EDB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB2Cu; }
        if (ctx->pc != 0x2EDB2Cu) { return; }
    }
    ctx->pc = 0x2EDB2Cu;
label_2edb2c:
    // 0x2edb2c: 0x27a201e4  addiu       $v0, $sp, 0x1E4
    ctx->pc = 0x2edb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_2edb30:
    // 0x2edb30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2edb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edb34:
    // 0x2edb34: 0xc04c374  jal         func_130DD0
label_2edb38:
    if (ctx->pc == 0x2EDB38u) {
        ctx->pc = 0x2EDB38u;
            // 0x2edb38: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x2EDB3Cu;
        goto label_2edb3c;
    }
    ctx->pc = 0x2EDB34u;
    SET_GPR_U32(ctx, 31, 0x2EDB3Cu);
    ctx->pc = 0x2EDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB34u;
            // 0x2edb38: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB3Cu; }
        if (ctx->pc != 0x2EDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB3Cu; }
        if (ctx->pc != 0x2EDB3Cu) { return; }
    }
    ctx->pc = 0x2EDB3Cu;
label_2edb3c:
    // 0x2edb3c: 0x7aa301c0  lq          $v1, 0x1C0($s5)
    ctx->pc = 0x2edb3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 448)));
label_2edb40:
    // 0x2edb40: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x2edb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2edb44:
    // 0x2edb44: 0x7aa201d0  lq          $v0, 0x1D0($s5)
    ctx->pc = 0x2edb44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 464)));
label_2edb48:
    // 0x2edb48: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2edb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2edb4c:
    // 0x2edb4c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2edb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2edb50:
    // 0x2edb50: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2edb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2edb54:
    // 0x2edb54: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2edb54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_2edb58:
    // 0x2edb58: 0xc04c094  jal         func_130250
label_2edb5c:
    if (ctx->pc == 0x2EDB5Cu) {
        ctx->pc = 0x2EDB5Cu;
            // 0x2edb5c: 0x7ce20010  sq          $v0, 0x10($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x2EDB60u;
        goto label_2edb60;
    }
    ctx->pc = 0x2EDB58u;
    SET_GPR_U32(ctx, 31, 0x2EDB60u);
    ctx->pc = 0x2EDB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDB58u;
            // 0x2edb5c: 0x7ce20010  sq          $v0, 0x10($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB60u; }
        if (ctx->pc != 0x2EDB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDB60u; }
        if (ctx->pc != 0x2EDB60u) { return; }
    }
    ctx->pc = 0x2EDB60u;
label_2edb60:
    // 0x2edb60: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2edb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2edb64:
    // 0x2edb64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2edb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edb68:
    // 0x2edb68: 0x0  nop
    ctx->pc = 0x2edb68u;
    // NOP
label_2edb6c:
    // 0x2edb6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2edb6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edb70:
    // 0x2edb70: 0x0  nop
    ctx->pc = 0x2edb70u;
    // NOP
label_2edb74:
    // 0x2edb74: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_2edb78:
    if (ctx->pc == 0x2EDB78u) {
        ctx->pc = 0x2EDB7Cu;
        goto label_2edb7c;
    }
    ctx->pc = 0x2EDB74u;
    {
        const bool branch_taken_0x2edb74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edb74) {
            ctx->pc = 0x2EDC90u;
            goto label_2edc90;
        }
    }
    ctx->pc = 0x2EDB7Cu;
label_2edb7c:
    // 0x2edb7c: 0xc7a201d4  lwc1        $f2, 0x1D4($sp)
    ctx->pc = 0x2edb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2edb80:
    // 0x2edb80: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x2edb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edb84:
    // 0x2edb84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2edb84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2edb88:
    // 0x2edb88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2edb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edb8c:
    // 0x2edb8c: 0x0  nop
    ctx->pc = 0x2edb8cu;
    // NOP
label_2edb90:
    // 0x2edb90: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_2edb94:
    if (ctx->pc == 0x2EDB94u) {
        ctx->pc = 0x2EDB98u;
        goto label_2edb98;
    }
    ctx->pc = 0x2EDB90u;
    {
        const bool branch_taken_0x2edb90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edb90) {
            ctx->pc = 0x2EDC90u;
            goto label_2edc90;
        }
    }
    ctx->pc = 0x2EDB98u;
label_2edb98:
    // 0x2edb98: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2edb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2edb9c:
    // 0x2edb9c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2edb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edba0:
    // 0x2edba0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2edba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2edba4:
    // 0x2edba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2edba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edba8:
    // 0x2edba8: 0x0  nop
    ctx->pc = 0x2edba8u;
    // NOP
label_2edbac:
    // 0x2edbac: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_2edbb0:
    if (ctx->pc == 0x2EDBB0u) {
        ctx->pc = 0x2EDBB0u;
            // 0x2edbb0: 0x26a401b0  addiu       $a0, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->pc = 0x2EDBB4u;
        goto label_2edbb4;
    }
    ctx->pc = 0x2EDBACu;
    {
        const bool branch_taken_0x2edbac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBACu;
            // 0x2edbb0: 0x26a401b0  addiu       $a0, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbac) {
            ctx->pc = 0x2EDC90u;
            goto label_2edc90;
        }
    }
    ctx->pc = 0x2EDBB4u;
label_2edbb4:
    // 0x2edbb4: 0x264501b0  addiu       $a1, $s2, 0x1B0
    ctx->pc = 0x2edbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_2edbb8:
    // 0x2edbb8: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2edbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2edbbc:
    // 0x2edbbc: 0xc068dc8  jal         func_1A3720
label_2edbc0:
    if (ctx->pc == 0x2EDBC0u) {
        ctx->pc = 0x2EDBC0u;
            // 0x2edbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBC4u;
        goto label_2edbc4;
    }
    ctx->pc = 0x2EDBBCu;
    SET_GPR_U32(ctx, 31, 0x2EDBC4u);
    ctx->pc = 0x2EDBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBBCu;
            // 0x2edbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDBC4u; }
        if (ctx->pc != 0x2EDBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDBC4u; }
        if (ctx->pc != 0x2EDBC4u) { return; }
    }
    ctx->pc = 0x2EDBC4u;
label_2edbc4:
    // 0x2edbc4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2edbc4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2edbc8:
    // 0x2edbc8: 0xc068d24  jal         func_1A3490
label_2edbcc:
    if (ctx->pc == 0x2EDBCCu) {
        ctx->pc = 0x2EDBCCu;
            // 0x2edbcc: 0x26a401b0  addiu       $a0, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->pc = 0x2EDBD0u;
        goto label_2edbd0;
    }
    ctx->pc = 0x2EDBC8u;
    SET_GPR_U32(ctx, 31, 0x2EDBD0u);
    ctx->pc = 0x2EDBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBC8u;
            // 0x2edbcc: 0x26a401b0  addiu       $a0, $s5, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDBD0u; }
        if (ctx->pc != 0x2EDBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDBD0u; }
        if (ctx->pc != 0x2EDBD0u) { return; }
    }
    ctx->pc = 0x2EDBD0u;
label_2edbd0:
    // 0x2edbd0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2edbd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edbd4:
    // 0x2edbd4: 0x0  nop
    ctx->pc = 0x2edbd4u;
    // NOP
label_2edbd8:
    // 0x2edbd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2edbdc:
    if (ctx->pc == 0x2EDBDCu) {
        ctx->pc = 0x2EDBE0u;
        goto label_2edbe0;
    }
    ctx->pc = 0x2EDBD8u;
    {
        const bool branch_taken_0x2edbd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edbd8) {
            ctx->pc = 0x2EDBE8u;
            goto label_2edbe8;
        }
    }
    ctx->pc = 0x2EDBE0u;
label_2edbe0:
    // 0x2edbe0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2edbe4:
    if (ctx->pc == 0x2EDBE4u) {
        ctx->pc = 0x2EDBE4u;
            // 0x2edbe4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x2EDBE8u;
        goto label_2edbe8;
    }
    ctx->pc = 0x2EDBE0u;
    {
        const bool branch_taken_0x2edbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDBE0u;
            // 0x2edbe4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbe0) {
            ctx->pc = 0x2EDBF0u;
            goto label_2edbf0;
        }
    }
    ctx->pc = 0x2EDBE8u;
label_2edbe8:
    // 0x2edbe8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2edbe8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2edbec:
    // 0x2edbec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2edbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2edbf0:
    // 0x2edbf0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2edbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2edbf4:
    // 0x2edbf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2edbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2edbf8:
    // 0x2edbf8: 0x0  nop
    ctx->pc = 0x2edbf8u;
    // NOP
label_2edbfc:
    // 0x2edbfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2edbfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edc00:
    // 0x2edc00: 0x0  nop
    ctx->pc = 0x2edc00u;
    // NOP
label_2edc04:
    // 0x2edc04: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_2edc08:
    if (ctx->pc == 0x2EDC08u) {
        ctx->pc = 0x2EDC0Cu;
        goto label_2edc0c;
    }
    ctx->pc = 0x2EDC04u;
    {
        const bool branch_taken_0x2edc04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edc04) {
            ctx->pc = 0x2EDC90u;
            goto label_2edc90;
        }
    }
    ctx->pc = 0x2EDC0Cu;
label_2edc0c:
    // 0x2edc0c: 0x0  nop
    ctx->pc = 0x2edc0cu;
    // NOP
label_2edc10:
    // 0x2edc10: 0x0  nop
    ctx->pc = 0x2edc10u;
    // NOP
label_2edc14:
    // 0x2edc14: 0x4600b843  div.s       $f1, $f23, $f0
    ctx->pc = 0x2edc14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
label_2edc18:
    // 0x2edc18: 0x0  nop
    ctx->pc = 0x2edc18u;
    // NOP
label_2edc1c:
    // 0x2edc1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2edc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edc20:
    // 0x2edc20: 0x0  nop
    ctx->pc = 0x2edc20u;
    // NOP
label_2edc24:
    // 0x2edc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2edc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edc28:
    // 0x2edc28: 0x0  nop
    ctx->pc = 0x2edc28u;
    // NOP
label_2edc2c:
    // 0x2edc2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2edc30:
    if (ctx->pc == 0x2EDC30u) {
        ctx->pc = 0x2EDC34u;
        goto label_2edc34;
    }
    ctx->pc = 0x2EDC2Cu;
    {
        const bool branch_taken_0x2edc2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edc2c) {
            ctx->pc = 0x2EDC38u;
            goto label_2edc38;
        }
    }
    ctx->pc = 0x2EDC34u;
label_2edc34:
    // 0x2edc34: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2edc34u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2edc38:
    // 0x2edc38: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2edc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2edc3c:
    // 0x2edc3c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2edc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2edc40:
    // 0x2edc40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edc44:
    // 0x2edc44: 0x0  nop
    ctx->pc = 0x2edc44u;
    // NOP
label_2edc48:
    // 0x2edc48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2edc48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edc4c:
    // 0x2edc4c: 0x0  nop
    ctx->pc = 0x2edc4cu;
    // NOP
label_2edc50:
    // 0x2edc50: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_2edc54:
    if (ctx->pc == 0x2EDC54u) {
        ctx->pc = 0x2EDC58u;
        goto label_2edc58;
    }
    ctx->pc = 0x2EDC50u;
    {
        const bool branch_taken_0x2edc50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edc50) {
            ctx->pc = 0x2EDC90u;
            goto label_2edc90;
        }
    }
    ctx->pc = 0x2EDC58u;
label_2edc58:
    // 0x2edc58: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2edc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2edc5c:
    // 0x2edc5c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2edc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2edc60:
    // 0x2edc60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2edc64:
    if (ctx->pc == 0x2EDC64u) {
        ctx->pc = 0x2EDC64u;
            // 0x2edc64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2EDC68u;
        goto label_2edc68;
    }
    ctx->pc = 0x2EDC60u;
    {
        const bool branch_taken_0x2edc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC60u;
            // 0x2edc64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc60) {
            ctx->pc = 0x2EDC80u;
            goto label_2edc80;
        }
    }
    ctx->pc = 0x2EDC68u;
label_2edc68:
    // 0x2edc68: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2edc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2edc6c:
    // 0x2edc6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2edc70:
    if (ctx->pc == 0x2EDC70u) {
        ctx->pc = 0x2EDC70u;
            // 0x2edc70: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x2EDC74u;
        goto label_2edc74;
    }
    ctx->pc = 0x2EDC6Cu;
    {
        const bool branch_taken_0x2edc6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC6Cu;
            // 0x2edc70: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc6c) {
            ctx->pc = 0x2EDC7Cu;
            goto label_2edc7c;
        }
    }
    ctx->pc = 0x2EDC74u;
label_2edc74:
    // 0x2edc74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2edc78:
    if (ctx->pc == 0x2EDC78u) {
        ctx->pc = 0x2EDC78u;
            // 0x2edc78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC7Cu;
        goto label_2edc7c;
    }
    ctx->pc = 0x2EDC74u;
    {
        const bool branch_taken_0x2edc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC74u;
            // 0x2edc78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc74) {
            ctx->pc = 0x2EDC88u;
            goto label_2edc88;
        }
    }
    ctx->pc = 0x2EDC7Cu;
label_2edc7c:
    // 0x2edc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edc80:
    // 0x2edc80: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2edc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2edc84:
    // 0x2edc84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2edc84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edc88:
    // 0x2edc88: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_2edc8c:
    if (ctx->pc == 0x2EDC8Cu) {
        ctx->pc = 0x2EDC8Cu;
            // 0x2edc8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2EDC90u;
        goto label_2edc90;
    }
    ctx->pc = 0x2EDC88u;
    {
        const bool branch_taken_0x2edc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDC88u;
            // 0x2edc8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc88) {
            ctx->pc = 0x2EDF24u;
            goto label_2edf24;
        }
    }
    ctx->pc = 0x2EDC90u;
label_2edc90:
    // 0x2edc90: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2edc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2edc94:
    // 0x2edc94: 0xc6a00124  lwc1        $f0, 0x124($s5)
    ctx->pc = 0x2edc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edc98:
    // 0x2edc98: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x2edc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2edc9c:
    // 0x2edc9c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2edc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2edca0:
    // 0x2edca0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2edca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2edca4:
    // 0x2edca4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2edca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edca8:
    // 0x2edca8: 0x0  nop
    ctx->pc = 0x2edca8u;
    // NOP
label_2edcac:
    // 0x2edcac: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_2edcb0:
    if (ctx->pc == 0x2EDCB0u) {
        ctx->pc = 0x2EDCB0u;
            // 0x2edcb0: 0x46011040  add.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x2EDCB4u;
        goto label_2edcb4;
    }
    ctx->pc = 0x2EDCACu;
    {
        const bool branch_taken_0x2edcac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDCACu;
            // 0x2edcb0: 0x46011040  add.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edcac) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDCB4u;
label_2edcb4:
    // 0x2edcb4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2edcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edcb8:
    // 0x2edcb8: 0x0  nop
    ctx->pc = 0x2edcb8u;
    // NOP
label_2edcbc:
    // 0x2edcbc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_2edcc0:
    if (ctx->pc == 0x2EDCC0u) {
        ctx->pc = 0x2EDCC0u;
            // 0x2edcc0: 0x26a40110  addiu       $a0, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->pc = 0x2EDCC4u;
        goto label_2edcc4;
    }
    ctx->pc = 0x2EDCBCu;
    {
        const bool branch_taken_0x2edcbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDCBCu;
            // 0x2edcc0: 0x26a40110  addiu       $a0, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edcbc) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDCC4u;
label_2edcc4:
    // 0x2edcc4: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x2edcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_2edcc8:
    // 0x2edcc8: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2edcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2edccc:
    // 0x2edccc: 0xc068dc8  jal         func_1A3720
label_2edcd0:
    if (ctx->pc == 0x2EDCD0u) {
        ctx->pc = 0x2EDCD0u;
            // 0x2edcd0: 0x27a701a0  addiu       $a3, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x2EDCD4u;
        goto label_2edcd4;
    }
    ctx->pc = 0x2EDCCCu;
    SET_GPR_U32(ctx, 31, 0x2EDCD4u);
    ctx->pc = 0x2EDCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDCCCu;
            // 0x2edcd0: 0x27a701a0  addiu       $a3, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDCD4u; }
        if (ctx->pc != 0x2EDCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDCD4u; }
        if (ctx->pc != 0x2EDCD4u) { return; }
    }
    ctx->pc = 0x2EDCD4u;
label_2edcd4:
    // 0x2edcd4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2edcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2edcd8:
    // 0x2edcd8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2edcd8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2edcdc:
    // 0x2edcdc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2edcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2edce0:
    // 0x2edce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edce4:
    // 0x2edce4: 0x0  nop
    ctx->pc = 0x2edce4u;
    // NOP
label_2edce8:
    // 0x2edce8: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2edce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edcec:
    // 0x2edcec: 0x0  nop
    ctx->pc = 0x2edcecu;
    // NOP
label_2edcf0:
    // 0x2edcf0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_2edcf4:
    if (ctx->pc == 0x2EDCF4u) {
        ctx->pc = 0x2EDCF8u;
        goto label_2edcf8;
    }
    ctx->pc = 0x2EDCF0u;
    {
        const bool branch_taken_0x2edcf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edcf0) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDCF8u;
label_2edcf8:
    // 0x2edcf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2edcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2edcfc:
    // 0x2edcfc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x2edcfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_2edd00:
    // 0x2edd00: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2edd04:
    if (ctx->pc == 0x2EDD04u) {
        ctx->pc = 0x2EDD04u;
            // 0x2edd04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD08u;
        goto label_2edd08;
    }
    ctx->pc = 0x2EDD00u;
    {
        const bool branch_taken_0x2edd00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD00u;
            // 0x2edd04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd00) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDD08u;
label_2edd08:
    // 0x2edd08: 0xc06c4f0  jal         func_1B13C0
label_2edd0c:
    if (ctx->pc == 0x2EDD0Cu) {
        ctx->pc = 0x2EDD0Cu;
            // 0x2edd0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD10u;
        goto label_2edd10;
    }
    ctx->pc = 0x2EDD08u;
    SET_GPR_U32(ctx, 31, 0x2EDD10u);
    ctx->pc = 0x2EDD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD08u;
            // 0x2edd0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13C0u;
    if (runtime->hasFunction(0x1B13C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDD10u; }
        if (ctx->pc != 0x2EDD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertParts__8CEditMapFP10CEditParts_0x1b13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDD10u; }
        if (ctx->pc != 0x2EDD10u) { return; }
    }
    ctx->pc = 0x2EDD10u;
label_2edd10:
    // 0x2edd10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2edd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2edd14:
    // 0x2edd14: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x2edd14u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_2edd18:
    // 0x2edd18: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2edd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2edd1c:
    // 0x2edd1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2edd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2edd20:
    // 0x2edd20: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2edd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2edd24:
    // 0x2edd24: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2edd28:
    // 0x2edd28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2edd28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2edd2c:
    // 0x2edd2c: 0x0  nop
    ctx->pc = 0x2edd2cu;
    // NOP
label_2edd30:
    // 0x2edd30: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2edd30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2edd34:
    // 0x2edd34: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x2edd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2edd38:
    // 0x2edd38: 0x1440ff56  bnez        $v0, . + 4 + (-0xAA << 2)
label_2edd3c:
    if (ctx->pc == 0x2EDD3Cu) {
        ctx->pc = 0x2EDD3Cu;
            // 0x2edd3c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x2EDD40u;
        goto label_2edd40;
    }
    ctx->pc = 0x2EDD38u;
    {
        const bool branch_taken_0x2edd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD38u;
            // 0x2edd3c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd38) {
            ctx->pc = 0x2EDA94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eda94;
        }
    }
    ctx->pc = 0x2EDD40u;
label_2edd40:
    // 0x2edd40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2edd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2edd44:
    // 0x2edd44: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2edd44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2edd48:
    // 0x2edd48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2edd4c:
    // 0x2edd4c: 0xc0bb7d8  jal         func_2EDF60
label_2edd50:
    if (ctx->pc == 0x2EDD50u) {
        ctx->pc = 0x2EDD50u;
            // 0x2edd50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD54u;
        goto label_2edd54;
    }
    ctx->pc = 0x2EDD4Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD54u);
    ctx->pc = 0x2EDD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD4Cu;
            // 0x2edd50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF60u;
    if (runtime->hasFunction(0x2EDF60u)) {
        auto targetFn = runtime->lookupFunction(0x2EDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDD54u; }
        if (ctx->pc != 0x2EDD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditPartsOnRiver__8CEditMapFP14CEditPartsInfoPff_0x2edf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDD54u; }
        if (ctx->pc != 0x2EDD54u) { return; }
    }
    ctx->pc = 0x2EDD54u;
label_2edd54:
    // 0x2edd54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2edd58:
    if (ctx->pc == 0x2EDD58u) {
        ctx->pc = 0x2EDD58u;
            // 0x2edd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD5Cu;
        goto label_2edd5c;
    }
    ctx->pc = 0x2EDD54u;
    {
        const bool branch_taken_0x2edd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD54u;
            // 0x2edd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd54) {
            ctx->pc = 0x2EDD64u;
            goto label_2edd64;
        }
    }
    ctx->pc = 0x2EDD5Cu;
label_2edd5c:
    // 0x2edd5c: 0x10000070  b           . + 4 + (0x70 << 2)
label_2edd60:
    if (ctx->pc == 0x2EDD60u) {
        ctx->pc = 0x2EDD64u;
        goto label_2edd64;
    }
    ctx->pc = 0x2EDD5Cu;
    {
        const bool branch_taken_0x2edd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd5c) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDD64u;
label_2edd64:
    // 0x2edd64: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2edd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2edd68:
    // 0x2edd68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2edd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2edd6c:
    // 0x2edd6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2edd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2edd70:
    // 0x2edd70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2edd74:
    if (ctx->pc == 0x2EDD74u) {
        ctx->pc = 0x2EDD74u;
            // 0x2edd74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD78u;
        goto label_2edd78;
    }
    ctx->pc = 0x2EDD70u;
    {
        const bool branch_taken_0x2edd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD70u;
            // 0x2edd74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd70) {
            ctx->pc = 0x2EDDD8u;
            goto label_2eddd8;
        }
    }
    ctx->pc = 0x2EDD78u;
label_2edd78:
    // 0x2edd78: 0x10000012  b           . + 4 + (0x12 << 2)
label_2edd7c:
    if (ctx->pc == 0x2EDD7Cu) {
        ctx->pc = 0x2EDD7Cu;
            // 0x2edd7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD80u;
        goto label_2edd80;
    }
    ctx->pc = 0x2EDD78u;
    {
        const bool branch_taken_0x2edd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD78u;
            // 0x2edd7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd78) {
            ctx->pc = 0x2EDDC4u;
            goto label_2eddc4;
        }
    }
    ctx->pc = 0x2EDD80u;
label_2edd80:
    // 0x2edd80: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2edd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2edd84:
    // 0x2edd84: 0xc06c310  jal         func_1B0C40
label_2edd88:
    if (ctx->pc == 0x2EDD88u) {
        ctx->pc = 0x2EDD88u;
            // 0x2edd88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD8Cu;
        goto label_2edd8c;
    }
    ctx->pc = 0x2EDD84u;
    SET_GPR_U32(ctx, 31, 0x2EDD8Cu);
    ctx->pc = 0x2EDD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDD84u;
            // 0x2edd88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDD8Cu; }
        if (ctx->pc != 0x2EDD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDD8Cu; }
        if (ctx->pc != 0x2EDD8Cu) { return; }
    }
    ctx->pc = 0x2EDD8Cu;
label_2edd8c:
    // 0x2edd8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2edd90:
    if (ctx->pc == 0x2EDD90u) {
        ctx->pc = 0x2EDD94u;
        goto label_2edd94;
    }
    ctx->pc = 0x2EDD8Cu;
    {
        const bool branch_taken_0x2edd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd8c) {
            ctx->pc = 0x2EDDBCu;
            goto label_2eddbc;
        }
    }
    ctx->pc = 0x2EDD94u;
label_2edd94:
    // 0x2edd94: 0x8c420324  lw          $v0, 0x324($v0)
    ctx->pc = 0x2edd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
label_2edd98:
    // 0x2edd98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2edd9c:
    if (ctx->pc == 0x2EDD9Cu) {
        ctx->pc = 0x2EDDA0u;
        goto label_2edda0;
    }
    ctx->pc = 0x2EDD98u;
    {
        const bool branch_taken_0x2edd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edd98) {
            ctx->pc = 0x2EDDBCu;
            goto label_2eddbc;
        }
    }
    ctx->pc = 0x2EDDA0u;
label_2edda0:
    // 0x2edda0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2edda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2edda4:
    // 0x2edda4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2edda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2edda8:
    // 0x2edda8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2edda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2eddac:
    // 0x2eddac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2eddb0:
    if (ctx->pc == 0x2EDDB0u) {
        ctx->pc = 0x2EDDB0u;
            // 0x2eddb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDB4u;
        goto label_2eddb4;
    }
    ctx->pc = 0x2EDDACu;
    {
        const bool branch_taken_0x2eddac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDDACu;
            // 0x2eddb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddac) {
            ctx->pc = 0x2EDDBCu;
            goto label_2eddbc;
        }
    }
    ctx->pc = 0x2EDDB4u;
label_2eddb4:
    // 0x2eddb4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2eddb8:
    if (ctx->pc == 0x2EDDB8u) {
        ctx->pc = 0x2EDDBCu;
        goto label_2eddbc;
    }
    ctx->pc = 0x2EDDB4u;
    {
        const bool branch_taken_0x2eddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eddb4) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDDBCu;
label_2eddbc:
    // 0x2eddbc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2eddbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2eddc0:
    // 0x2eddc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eddc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2eddc4:
    // 0x2eddc4: 0x0  nop
    ctx->pc = 0x2eddc4u;
    // NOP
label_2eddc8:
    // 0x2eddc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eddcc:
    // 0x2eddcc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2eddccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2eddd0:
    // 0x2eddd0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2eddd4:
    if (ctx->pc == 0x2EDDD4u) {
        ctx->pc = 0x2EDDD4u;
            // 0x2eddd4: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->pc = 0x2EDDD8u;
        goto label_2eddd8;
    }
    ctx->pc = 0x2EDDD0u;
    {
        const bool branch_taken_0x2eddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDDD0u;
            // 0x2eddd4: 0x2141021  addu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddd0) {
            ctx->pc = 0x2EDD80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2edd80;
        }
    }
    ctx->pc = 0x2EDDD8u;
label_2eddd8:
    // 0x2eddd8: 0x8e630f80  lw          $v1, 0xF80($s3)
    ctx->pc = 0x2eddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3968)));
label_2edddc:
    // 0x2edddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2edddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2edde0:
    // 0x2edde0: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_2edde4:
    if (ctx->pc == 0x2EDDE4u) {
        ctx->pc = 0x2EDDE8u;
        goto label_2edde8;
    }
    ctx->pc = 0x2EDDE0u;
    {
        const bool branch_taken_0x2edde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2edde0) {
            ctx->pc = 0x2EDE8Cu;
            goto label_2ede8c;
        }
    }
    ctx->pc = 0x2EDDE8u;
label_2edde8:
    // 0x2edde8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2edde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2eddec:
    // 0x2eddec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2eddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2eddf0:
    // 0x2eddf0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2eddf4:
    if (ctx->pc == 0x2EDDF4u) {
        ctx->pc = 0x2EDDF8u;
        goto label_2eddf8;
    }
    ctx->pc = 0x2EDDF0u;
    {
        const bool branch_taken_0x2eddf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eddf0) {
            ctx->pc = 0x2EDE34u;
            goto label_2ede34;
        }
    }
    ctx->pc = 0x2EDDF8u;
label_2eddf8:
    // 0x2eddf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2eddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eddfc:
    // 0x2eddfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede00:
    // 0x2ede00: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ede04:
    if (ctx->pc == 0x2EDE04u) {
        ctx->pc = 0x2EDE04u;
            // 0x2ede04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE08u;
        goto label_2ede08;
    }
    ctx->pc = 0x2EDE00u;
    {
        const bool branch_taken_0x2ede00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE00u;
            // 0x2ede04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede00) {
            ctx->pc = 0x2EDE24u;
            goto label_2ede24;
        }
    }
    ctx->pc = 0x2EDE08u;
label_2ede08:
    // 0x2ede08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ede08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ede0c:
    // 0x2ede0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ede10:
    if (ctx->pc == 0x2EDE10u) {
        ctx->pc = 0x2EDE10u;
            // 0x2ede10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE14u;
        goto label_2ede14;
    }
    ctx->pc = 0x2EDE0Cu;
    {
        const bool branch_taken_0x2ede0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE0Cu;
            // 0x2ede10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede0c) {
            ctx->pc = 0x2EDE1Cu;
            goto label_2ede1c;
        }
    }
    ctx->pc = 0x2EDE14u;
label_2ede14:
    // 0x2ede14: 0x10000042  b           . + 4 + (0x42 << 2)
label_2ede18:
    if (ctx->pc == 0x2EDE18u) {
        ctx->pc = 0x2EDE1Cu;
        goto label_2ede1c;
    }
    ctx->pc = 0x2EDE14u;
    {
        const bool branch_taken_0x2ede14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede14) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDE1Cu;
label_2ede1c:
    // 0x2ede1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ede1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2ede20:
    // 0x2ede20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ede20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ede24:
    // 0x2ede24: 0x0  nop
    ctx->pc = 0x2ede24u;
    // NOP
label_2ede28:
    // 0x2ede28: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ede28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ede2c:
    // 0x2ede2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2ede30:
    if (ctx->pc == 0x2EDE30u) {
        ctx->pc = 0x2EDE30u;
            // 0x2ede30: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x2EDE34u;
        goto label_2ede34;
    }
    ctx->pc = 0x2EDE2Cu;
    {
        const bool branch_taken_0x2ede2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE2Cu;
            // 0x2ede30: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede2c) {
            ctx->pc = 0x2EDE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ede08;
        }
    }
    ctx->pc = 0x2EDE34u;
label_2ede34:
    // 0x2ede34: 0x0  nop
    ctx->pc = 0x2ede34u;
    // NOP
label_2ede38:
    // 0x2ede38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ede38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ede3c:
    // 0x2ede3c: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x2ede3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_2ede40:
    // 0x2ede40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2ede44:
    if (ctx->pc == 0x2EDE44u) {
        ctx->pc = 0x2EDE44u;
            // 0x2ede44: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->pc = 0x2EDE48u;
        goto label_2ede48;
    }
    ctx->pc = 0x2EDE40u;
    {
        const bool branch_taken_0x2ede40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE40u;
            // 0x2ede44: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede40) {
            ctx->pc = 0x2EDE50u;
            goto label_2ede50;
        }
    }
    ctx->pc = 0x2EDE48u;
label_2ede48:
    // 0x2ede48: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_2ede4c:
    if (ctx->pc == 0x2EDE4Cu) {
        ctx->pc = 0x2EDE50u;
        goto label_2ede50;
    }
    ctx->pc = 0x2EDE48u;
    {
        const bool branch_taken_0x2ede48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ede48) {
            ctx->pc = 0x2EDE8Cu;
            goto label_2ede8c;
        }
    }
    ctx->pc = 0x2EDE50u;
label_2ede50:
    // 0x2ede50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ede50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ede54:
    // 0x2ede54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ede54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede58:
    // 0x2ede58: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ede5c:
    if (ctx->pc == 0x2EDE5Cu) {
        ctx->pc = 0x2EDE5Cu;
            // 0x2ede5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE60u;
        goto label_2ede60;
    }
    ctx->pc = 0x2EDE58u;
    {
        const bool branch_taken_0x2ede58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE58u;
            // 0x2ede5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede58) {
            ctx->pc = 0x2EDE7Cu;
            goto label_2ede7c;
        }
    }
    ctx->pc = 0x2EDE60u;
label_2ede60:
    // 0x2ede60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ede60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ede64:
    // 0x2ede64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ede68:
    if (ctx->pc == 0x2EDE68u) {
        ctx->pc = 0x2EDE68u;
            // 0x2ede68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE6Cu;
        goto label_2ede6c;
    }
    ctx->pc = 0x2EDE64u;
    {
        const bool branch_taken_0x2ede64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE64u;
            // 0x2ede68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede64) {
            ctx->pc = 0x2EDE74u;
            goto label_2ede74;
        }
    }
    ctx->pc = 0x2EDE6Cu;
label_2ede6c:
    // 0x2ede6c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2ede70:
    if (ctx->pc == 0x2EDE70u) {
        ctx->pc = 0x2EDE74u;
        goto label_2ede74;
    }
    ctx->pc = 0x2EDE6Cu;
    {
        const bool branch_taken_0x2ede6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede6c) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDE74u;
label_2ede74:
    // 0x2ede74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ede74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2ede78:
    // 0x2ede78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ede78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ede7c:
    // 0x2ede7c: 0x0  nop
    ctx->pc = 0x2ede7cu;
    // NOP
label_2ede80:
    // 0x2ede80: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ede80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ede84:
    // 0x2ede84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2ede88:
    if (ctx->pc == 0x2EDE88u) {
        ctx->pc = 0x2EDE88u;
            // 0x2ede88: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x2EDE8Cu;
        goto label_2ede8c;
    }
    ctx->pc = 0x2EDE84u;
    {
        const bool branch_taken_0x2ede84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDE84u;
            // 0x2ede88: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede84) {
            ctx->pc = 0x2EDE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ede60;
        }
    }
    ctx->pc = 0x2EDE8Cu;
label_2ede8c:
    // 0x2ede8c: 0x0  nop
    ctx->pc = 0x2ede8cu;
    // NOP
label_2ede90:
    // 0x2ede90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ede90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ede94:
    // 0x2ede94: 0x0  nop
    ctx->pc = 0x2ede94u;
    // NOP
label_2ede98:
    // 0x2ede98: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2ede98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ede9c:
    // 0x2ede9c: 0x0  nop
    ctx->pc = 0x2ede9cu;
    // NOP
label_2edea0:
    // 0x2edea0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2edea4:
    if (ctx->pc == 0x2EDEA4u) {
        ctx->pc = 0x2EDEA4u;
            // 0x2edea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2EDEA8u;
        goto label_2edea8;
    }
    ctx->pc = 0x2EDEA0u;
    {
        const bool branch_taken_0x2edea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDEA0u;
            // 0x2edea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edea0) {
            ctx->pc = 0x2EDEB0u;
            goto label_2edeb0;
        }
    }
    ctx->pc = 0x2EDEA8u;
label_2edea8:
    // 0x2edea8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2edeac:
    if (ctx->pc == 0x2EDEACu) {
        ctx->pc = 0x2EDEB0u;
        goto label_2edeb0;
    }
    ctx->pc = 0x2EDEA8u;
    {
        const bool branch_taken_0x2edea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edea8) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDEB0u;
label_2edeb0:
    // 0x2edeb0: 0x0  nop
    ctx->pc = 0x2edeb0u;
    // NOP
label_2edeb4:
    // 0x2edeb4: 0x0  nop
    ctx->pc = 0x2edeb4u;
    // NOP
label_2edeb8:
    // 0x2edeb8: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x2edeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
label_2edebc:
    // 0x2edebc: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x2edebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
label_2edec0:
    // 0x2edec0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x2edec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2edec4:
    // 0x2edec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edec8:
    // 0x2edec8: 0x0  nop
    ctx->pc = 0x2edec8u;
    // NOP
label_2edecc:
    // 0x2edecc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2edeccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eded0:
    // 0x2eded0: 0x0  nop
    ctx->pc = 0x2eded0u;
    // NOP
label_2eded4:
    // 0x2eded4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2eded8:
    if (ctx->pc == 0x2EDED8u) {
        ctx->pc = 0x2EDED8u;
            // 0x2eded8: 0x4614a843  div.s       $f1, $f21, $f20 (Delay Slot)
        { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
        ctx->pc = 0x2EDEDCu;
        goto label_2ededc;
    }
    ctx->pc = 0x2EDED4u;
    {
        const bool branch_taken_0x2eded4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDED4u;
            // 0x2eded8: 0x4614a843  div.s       $f1, $f21, $f20 (Delay Slot)
        { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eded4) {
            ctx->pc = 0x2EDEE8u;
            goto label_2edee8;
        }
    }
    ctx->pc = 0x2EDEDCu;
label_2ededc:
    // 0x2ededc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ededcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_2edee0:
    // 0x2edee0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2edee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_2edee4:
    // 0x2edee4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2edee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2edee8:
    // 0x2edee8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2edee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2edeec:
    // 0x2edeec: 0x0  nop
    ctx->pc = 0x2edeecu;
    // NOP
label_2edef0:
    // 0x2edef0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2edef4:
    if (ctx->pc == 0x2EDEF4u) {
        ctx->pc = 0x2EDEF4u;
            // 0x2edef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEF8u;
        goto label_2edef8;
    }
    ctx->pc = 0x2EDEF0u;
    {
        const bool branch_taken_0x2edef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDEF0u;
            // 0x2edef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edef0) {
            ctx->pc = 0x2EDF00u;
            goto label_2edf00;
        }
    }
    ctx->pc = 0x2EDEF8u;
label_2edef8:
    // 0x2edef8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2edefc:
    if (ctx->pc == 0x2EDEFCu) {
        ctx->pc = 0x2EDF00u;
        goto label_2edf00;
    }
    ctx->pc = 0x2EDEF8u;
    {
        const bool branch_taken_0x2edef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edef8) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDF00u;
label_2edf00:
    // 0x2edf00: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2edf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2edf04:
    // 0x2edf04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2edf08:
    // 0x2edf08: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2edf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edf0c:
    // 0x2edf0c: 0xc64d0250  lwc1        $f13, 0x250($s2)
    ctx->pc = 0x2edf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2edf10:
    // 0x2edf10: 0xc06c474  jal         func_1B11D0
label_2edf14:
    if (ctx->pc == 0x2EDF14u) {
        ctx->pc = 0x2EDF14u;
            // 0x2edf14: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2EDF18u;
        goto label_2edf18;
    }
    ctx->pc = 0x2EDF10u;
    SET_GPR_U32(ctx, 31, 0x2EDF18u);
    ctx->pc = 0x2EDF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDF10u;
            // 0x2edf14: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B11D0u;
    if (runtime->hasFunction(0x1B11D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B11D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDF18u; }
        if (ctx->pc != 0x2EDF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CmpEditAlt__8CEditMapFff_0x1b11d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDF18u; }
        if (ctx->pc != 0x2EDF18u) { return; }
    }
    ctx->pc = 0x2EDF18u;
label_2edf18:
    // 0x2edf18: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x2edf18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2edf1c:
    // 0x2edf1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2edf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2edf20:
    // 0x2edf20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2edf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2edf24:
    // 0x2edf24: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2edf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2edf28:
    // 0x2edf28: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2edf28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2edf2c:
    // 0x2edf2c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2edf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2edf30:
    // 0x2edf30: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2edf30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2edf34:
    // 0x2edf34: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2edf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2edf38:
    // 0x2edf38: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2edf38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2edf3c:
    // 0x2edf3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2edf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2edf40:
    // 0x2edf40: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2edf40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2edf44:
    // 0x2edf44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2edf44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2edf48:
    // 0x2edf48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2edf48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2edf4c:
    // 0x2edf4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2edf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2edf50:
    // 0x2edf50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2edf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2edf54:
    // 0x2edf54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2edf54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2edf58:
    // 0x2edf58: 0x3e00008  jr          $ra
label_2edf5c:
    if (ctx->pc == 0x2EDF5Cu) {
        ctx->pc = 0x2EDF5Cu;
            // 0x2edf5c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x2EDF60u;
        goto label_fallthrough_0x2edf58;
    }
    ctx->pc = 0x2EDF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDF58u;
            // 0x2edf5c: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2edf58:
    ctx->pc = 0x2EDF60u;
}
