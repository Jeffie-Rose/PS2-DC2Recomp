#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMainCharaBG__FiP9mgCMemoryi
// Address: 0x2bb7b0 - 0x2bbc74
void InitMainCharaBG__FiP9mgCMemoryi_0x2bb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMainCharaBG__FiP9mgCMemoryi_0x2bb7b0");
#endif

    switch (ctx->pc) {
        case 0x2bb7b0u: goto label_2bb7b0;
        case 0x2bb7b4u: goto label_2bb7b4;
        case 0x2bb7b8u: goto label_2bb7b8;
        case 0x2bb7bcu: goto label_2bb7bc;
        case 0x2bb7c0u: goto label_2bb7c0;
        case 0x2bb7c4u: goto label_2bb7c4;
        case 0x2bb7c8u: goto label_2bb7c8;
        case 0x2bb7ccu: goto label_2bb7cc;
        case 0x2bb7d0u: goto label_2bb7d0;
        case 0x2bb7d4u: goto label_2bb7d4;
        case 0x2bb7d8u: goto label_2bb7d8;
        case 0x2bb7dcu: goto label_2bb7dc;
        case 0x2bb7e0u: goto label_2bb7e0;
        case 0x2bb7e4u: goto label_2bb7e4;
        case 0x2bb7e8u: goto label_2bb7e8;
        case 0x2bb7ecu: goto label_2bb7ec;
        case 0x2bb7f0u: goto label_2bb7f0;
        case 0x2bb7f4u: goto label_2bb7f4;
        case 0x2bb7f8u: goto label_2bb7f8;
        case 0x2bb7fcu: goto label_2bb7fc;
        case 0x2bb800u: goto label_2bb800;
        case 0x2bb804u: goto label_2bb804;
        case 0x2bb808u: goto label_2bb808;
        case 0x2bb80cu: goto label_2bb80c;
        case 0x2bb810u: goto label_2bb810;
        case 0x2bb814u: goto label_2bb814;
        case 0x2bb818u: goto label_2bb818;
        case 0x2bb81cu: goto label_2bb81c;
        case 0x2bb820u: goto label_2bb820;
        case 0x2bb824u: goto label_2bb824;
        case 0x2bb828u: goto label_2bb828;
        case 0x2bb82cu: goto label_2bb82c;
        case 0x2bb830u: goto label_2bb830;
        case 0x2bb834u: goto label_2bb834;
        case 0x2bb838u: goto label_2bb838;
        case 0x2bb83cu: goto label_2bb83c;
        case 0x2bb840u: goto label_2bb840;
        case 0x2bb844u: goto label_2bb844;
        case 0x2bb848u: goto label_2bb848;
        case 0x2bb84cu: goto label_2bb84c;
        case 0x2bb850u: goto label_2bb850;
        case 0x2bb854u: goto label_2bb854;
        case 0x2bb858u: goto label_2bb858;
        case 0x2bb85cu: goto label_2bb85c;
        case 0x2bb860u: goto label_2bb860;
        case 0x2bb864u: goto label_2bb864;
        case 0x2bb868u: goto label_2bb868;
        case 0x2bb86cu: goto label_2bb86c;
        case 0x2bb870u: goto label_2bb870;
        case 0x2bb874u: goto label_2bb874;
        case 0x2bb878u: goto label_2bb878;
        case 0x2bb87cu: goto label_2bb87c;
        case 0x2bb880u: goto label_2bb880;
        case 0x2bb884u: goto label_2bb884;
        case 0x2bb888u: goto label_2bb888;
        case 0x2bb88cu: goto label_2bb88c;
        case 0x2bb890u: goto label_2bb890;
        case 0x2bb894u: goto label_2bb894;
        case 0x2bb898u: goto label_2bb898;
        case 0x2bb89cu: goto label_2bb89c;
        case 0x2bb8a0u: goto label_2bb8a0;
        case 0x2bb8a4u: goto label_2bb8a4;
        case 0x2bb8a8u: goto label_2bb8a8;
        case 0x2bb8acu: goto label_2bb8ac;
        case 0x2bb8b0u: goto label_2bb8b0;
        case 0x2bb8b4u: goto label_2bb8b4;
        case 0x2bb8b8u: goto label_2bb8b8;
        case 0x2bb8bcu: goto label_2bb8bc;
        case 0x2bb8c0u: goto label_2bb8c0;
        case 0x2bb8c4u: goto label_2bb8c4;
        case 0x2bb8c8u: goto label_2bb8c8;
        case 0x2bb8ccu: goto label_2bb8cc;
        case 0x2bb8d0u: goto label_2bb8d0;
        case 0x2bb8d4u: goto label_2bb8d4;
        case 0x2bb8d8u: goto label_2bb8d8;
        case 0x2bb8dcu: goto label_2bb8dc;
        case 0x2bb8e0u: goto label_2bb8e0;
        case 0x2bb8e4u: goto label_2bb8e4;
        case 0x2bb8e8u: goto label_2bb8e8;
        case 0x2bb8ecu: goto label_2bb8ec;
        case 0x2bb8f0u: goto label_2bb8f0;
        case 0x2bb8f4u: goto label_2bb8f4;
        case 0x2bb8f8u: goto label_2bb8f8;
        case 0x2bb8fcu: goto label_2bb8fc;
        case 0x2bb900u: goto label_2bb900;
        case 0x2bb904u: goto label_2bb904;
        case 0x2bb908u: goto label_2bb908;
        case 0x2bb90cu: goto label_2bb90c;
        case 0x2bb910u: goto label_2bb910;
        case 0x2bb914u: goto label_2bb914;
        case 0x2bb918u: goto label_2bb918;
        case 0x2bb91cu: goto label_2bb91c;
        case 0x2bb920u: goto label_2bb920;
        case 0x2bb924u: goto label_2bb924;
        case 0x2bb928u: goto label_2bb928;
        case 0x2bb92cu: goto label_2bb92c;
        case 0x2bb930u: goto label_2bb930;
        case 0x2bb934u: goto label_2bb934;
        case 0x2bb938u: goto label_2bb938;
        case 0x2bb93cu: goto label_2bb93c;
        case 0x2bb940u: goto label_2bb940;
        case 0x2bb944u: goto label_2bb944;
        case 0x2bb948u: goto label_2bb948;
        case 0x2bb94cu: goto label_2bb94c;
        case 0x2bb950u: goto label_2bb950;
        case 0x2bb954u: goto label_2bb954;
        case 0x2bb958u: goto label_2bb958;
        case 0x2bb95cu: goto label_2bb95c;
        case 0x2bb960u: goto label_2bb960;
        case 0x2bb964u: goto label_2bb964;
        case 0x2bb968u: goto label_2bb968;
        case 0x2bb96cu: goto label_2bb96c;
        case 0x2bb970u: goto label_2bb970;
        case 0x2bb974u: goto label_2bb974;
        case 0x2bb978u: goto label_2bb978;
        case 0x2bb97cu: goto label_2bb97c;
        case 0x2bb980u: goto label_2bb980;
        case 0x2bb984u: goto label_2bb984;
        case 0x2bb988u: goto label_2bb988;
        case 0x2bb98cu: goto label_2bb98c;
        case 0x2bb990u: goto label_2bb990;
        case 0x2bb994u: goto label_2bb994;
        case 0x2bb998u: goto label_2bb998;
        case 0x2bb99cu: goto label_2bb99c;
        case 0x2bb9a0u: goto label_2bb9a0;
        case 0x2bb9a4u: goto label_2bb9a4;
        case 0x2bb9a8u: goto label_2bb9a8;
        case 0x2bb9acu: goto label_2bb9ac;
        case 0x2bb9b0u: goto label_2bb9b0;
        case 0x2bb9b4u: goto label_2bb9b4;
        case 0x2bb9b8u: goto label_2bb9b8;
        case 0x2bb9bcu: goto label_2bb9bc;
        case 0x2bb9c0u: goto label_2bb9c0;
        case 0x2bb9c4u: goto label_2bb9c4;
        case 0x2bb9c8u: goto label_2bb9c8;
        case 0x2bb9ccu: goto label_2bb9cc;
        case 0x2bb9d0u: goto label_2bb9d0;
        case 0x2bb9d4u: goto label_2bb9d4;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bb9dcu: goto label_2bb9dc;
        case 0x2bb9e0u: goto label_2bb9e0;
        case 0x2bb9e4u: goto label_2bb9e4;
        case 0x2bb9e8u: goto label_2bb9e8;
        case 0x2bb9ecu: goto label_2bb9ec;
        case 0x2bb9f0u: goto label_2bb9f0;
        case 0x2bb9f4u: goto label_2bb9f4;
        case 0x2bb9f8u: goto label_2bb9f8;
        case 0x2bb9fcu: goto label_2bb9fc;
        case 0x2bba00u: goto label_2bba00;
        case 0x2bba04u: goto label_2bba04;
        case 0x2bba08u: goto label_2bba08;
        case 0x2bba0cu: goto label_2bba0c;
        case 0x2bba10u: goto label_2bba10;
        case 0x2bba14u: goto label_2bba14;
        case 0x2bba18u: goto label_2bba18;
        case 0x2bba1cu: goto label_2bba1c;
        case 0x2bba20u: goto label_2bba20;
        case 0x2bba24u: goto label_2bba24;
        case 0x2bba28u: goto label_2bba28;
        case 0x2bba2cu: goto label_2bba2c;
        case 0x2bba30u: goto label_2bba30;
        case 0x2bba34u: goto label_2bba34;
        case 0x2bba38u: goto label_2bba38;
        case 0x2bba3cu: goto label_2bba3c;
        case 0x2bba40u: goto label_2bba40;
        case 0x2bba44u: goto label_2bba44;
        case 0x2bba48u: goto label_2bba48;
        case 0x2bba4cu: goto label_2bba4c;
        case 0x2bba50u: goto label_2bba50;
        case 0x2bba54u: goto label_2bba54;
        case 0x2bba58u: goto label_2bba58;
        case 0x2bba5cu: goto label_2bba5c;
        case 0x2bba60u: goto label_2bba60;
        case 0x2bba64u: goto label_2bba64;
        case 0x2bba68u: goto label_2bba68;
        case 0x2bba6cu: goto label_2bba6c;
        case 0x2bba70u: goto label_2bba70;
        case 0x2bba74u: goto label_2bba74;
        case 0x2bba78u: goto label_2bba78;
        case 0x2bba7cu: goto label_2bba7c;
        case 0x2bba80u: goto label_2bba80;
        case 0x2bba84u: goto label_2bba84;
        case 0x2bba88u: goto label_2bba88;
        case 0x2bba8cu: goto label_2bba8c;
        case 0x2bba90u: goto label_2bba90;
        case 0x2bba94u: goto label_2bba94;
        case 0x2bba98u: goto label_2bba98;
        case 0x2bba9cu: goto label_2bba9c;
        case 0x2bbaa0u: goto label_2bbaa0;
        case 0x2bbaa4u: goto label_2bbaa4;
        case 0x2bbaa8u: goto label_2bbaa8;
        case 0x2bbaacu: goto label_2bbaac;
        case 0x2bbab0u: goto label_2bbab0;
        case 0x2bbab4u: goto label_2bbab4;
        case 0x2bbab8u: goto label_2bbab8;
        case 0x2bbabcu: goto label_2bbabc;
        case 0x2bbac0u: goto label_2bbac0;
        case 0x2bbac4u: goto label_2bbac4;
        case 0x2bbac8u: goto label_2bbac8;
        case 0x2bbaccu: goto label_2bbacc;
        case 0x2bbad0u: goto label_2bbad0;
        case 0x2bbad4u: goto label_2bbad4;
        case 0x2bbad8u: goto label_2bbad8;
        case 0x2bbadcu: goto label_2bbadc;
        case 0x2bbae0u: goto label_2bbae0;
        case 0x2bbae4u: goto label_2bbae4;
        case 0x2bbae8u: goto label_2bbae8;
        case 0x2bbaecu: goto label_2bbaec;
        case 0x2bbaf0u: goto label_2bbaf0;
        case 0x2bbaf4u: goto label_2bbaf4;
        case 0x2bbaf8u: goto label_2bbaf8;
        case 0x2bbafcu: goto label_2bbafc;
        case 0x2bbb00u: goto label_2bbb00;
        case 0x2bbb04u: goto label_2bbb04;
        case 0x2bbb08u: goto label_2bbb08;
        case 0x2bbb0cu: goto label_2bbb0c;
        case 0x2bbb10u: goto label_2bbb10;
        case 0x2bbb14u: goto label_2bbb14;
        case 0x2bbb18u: goto label_2bbb18;
        case 0x2bbb1cu: goto label_2bbb1c;
        case 0x2bbb20u: goto label_2bbb20;
        case 0x2bbb24u: goto label_2bbb24;
        case 0x2bbb28u: goto label_2bbb28;
        case 0x2bbb2cu: goto label_2bbb2c;
        case 0x2bbb30u: goto label_2bbb30;
        case 0x2bbb34u: goto label_2bbb34;
        case 0x2bbb38u: goto label_2bbb38;
        case 0x2bbb3cu: goto label_2bbb3c;
        case 0x2bbb40u: goto label_2bbb40;
        case 0x2bbb44u: goto label_2bbb44;
        case 0x2bbb48u: goto label_2bbb48;
        case 0x2bbb4cu: goto label_2bbb4c;
        case 0x2bbb50u: goto label_2bbb50;
        case 0x2bbb54u: goto label_2bbb54;
        case 0x2bbb58u: goto label_2bbb58;
        case 0x2bbb5cu: goto label_2bbb5c;
        case 0x2bbb60u: goto label_2bbb60;
        case 0x2bbb64u: goto label_2bbb64;
        case 0x2bbb68u: goto label_2bbb68;
        case 0x2bbb6cu: goto label_2bbb6c;
        case 0x2bbb70u: goto label_2bbb70;
        case 0x2bbb74u: goto label_2bbb74;
        case 0x2bbb78u: goto label_2bbb78;
        case 0x2bbb7cu: goto label_2bbb7c;
        case 0x2bbb80u: goto label_2bbb80;
        case 0x2bbb84u: goto label_2bbb84;
        case 0x2bbb88u: goto label_2bbb88;
        case 0x2bbb8cu: goto label_2bbb8c;
        case 0x2bbb90u: goto label_2bbb90;
        case 0x2bbb94u: goto label_2bbb94;
        case 0x2bbb98u: goto label_2bbb98;
        case 0x2bbb9cu: goto label_2bbb9c;
        case 0x2bbba0u: goto label_2bbba0;
        case 0x2bbba4u: goto label_2bbba4;
        case 0x2bbba8u: goto label_2bbba8;
        case 0x2bbbacu: goto label_2bbbac;
        case 0x2bbbb0u: goto label_2bbbb0;
        case 0x2bbbb4u: goto label_2bbbb4;
        case 0x2bbbb8u: goto label_2bbbb8;
        case 0x2bbbbcu: goto label_2bbbbc;
        case 0x2bbbc0u: goto label_2bbbc0;
        case 0x2bbbc4u: goto label_2bbbc4;
        case 0x2bbbc8u: goto label_2bbbc8;
        case 0x2bbbccu: goto label_2bbbcc;
        case 0x2bbbd0u: goto label_2bbbd0;
        case 0x2bbbd4u: goto label_2bbbd4;
        case 0x2bbbd8u: goto label_2bbbd8;
        case 0x2bbbdcu: goto label_2bbbdc;
        case 0x2bbbe0u: goto label_2bbbe0;
        case 0x2bbbe4u: goto label_2bbbe4;
        case 0x2bbbe8u: goto label_2bbbe8;
        case 0x2bbbecu: goto label_2bbbec;
        case 0x2bbbf0u: goto label_2bbbf0;
        case 0x2bbbf4u: goto label_2bbbf4;
        case 0x2bbbf8u: goto label_2bbbf8;
        case 0x2bbbfcu: goto label_2bbbfc;
        case 0x2bbc00u: goto label_2bbc00;
        case 0x2bbc04u: goto label_2bbc04;
        case 0x2bbc08u: goto label_2bbc08;
        case 0x2bbc0cu: goto label_2bbc0c;
        case 0x2bbc10u: goto label_2bbc10;
        case 0x2bbc14u: goto label_2bbc14;
        case 0x2bbc18u: goto label_2bbc18;
        case 0x2bbc1cu: goto label_2bbc1c;
        case 0x2bbc20u: goto label_2bbc20;
        case 0x2bbc24u: goto label_2bbc24;
        case 0x2bbc28u: goto label_2bbc28;
        case 0x2bbc2cu: goto label_2bbc2c;
        case 0x2bbc30u: goto label_2bbc30;
        case 0x2bbc34u: goto label_2bbc34;
        case 0x2bbc38u: goto label_2bbc38;
        case 0x2bbc3cu: goto label_2bbc3c;
        case 0x2bbc40u: goto label_2bbc40;
        case 0x2bbc44u: goto label_2bbc44;
        case 0x2bbc48u: goto label_2bbc48;
        case 0x2bbc4cu: goto label_2bbc4c;
        case 0x2bbc50u: goto label_2bbc50;
        case 0x2bbc54u: goto label_2bbc54;
        case 0x2bbc58u: goto label_2bbc58;
        case 0x2bbc5cu: goto label_2bbc5c;
        case 0x2bbc60u: goto label_2bbc60;
        case 0x2bbc64u: goto label_2bbc64;
        case 0x2bbc68u: goto label_2bbc68;
        case 0x2bbc6cu: goto label_2bbc6c;
        case 0x2bbc70u: goto label_2bbc70;
        default: break;
    }

    ctx->pc = 0x2bb7b0u;

label_2bb7b0:
    // 0x2bb7b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2bb7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2bb7b4:
    // 0x2bb7b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bb7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2bb7b8:
    // 0x2bb7b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bb7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2bb7bc:
    // 0x2bb7bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bb7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2bb7c0:
    // 0x2bb7c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bb7c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7c4:
    // 0x2bb7c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bb7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2bb7c8:
    // 0x2bb7c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bb7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7cc:
    // 0x2bb7cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bb7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2bb7d0:
    // 0x2bb7d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bb7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7d4:
    // 0x2bb7d4: 0x1260011f  beqz        $s3, . + 4 + (0x11F << 2)
label_2bb7d8:
    if (ctx->pc == 0x2BB7D8u) {
        ctx->pc = 0x2BB7D8u;
            // 0x2bb7d8: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->pc = 0x2BB7DCu;
        goto label_2bb7dc;
    }
    ctx->pc = 0x2BB7D4u;
    {
        const bool branch_taken_0x2bb7d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB7D4u;
            // 0x2bb7d8: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7d4) {
            ctx->pc = 0x2BBC54u;
            goto label_2bbc54;
        }
    }
    ctx->pc = 0x2BB7DCu;
label_2bb7dc:
    // 0x2bb7dc: 0xc065af8  jal         func_196BE0
label_2bb7e0:
    if (ctx->pc == 0x2BB7E0u) {
        ctx->pc = 0x2BB7E4u;
        goto label_2bb7e4;
    }
    ctx->pc = 0x2BB7DCu;
    SET_GPR_U32(ctx, 31, 0x2BB7E4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7E4u; }
        if (ctx->pc != 0x2BB7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7E4u; }
        if (ctx->pc != 0x2BB7E4u) { return; }
    }
    ctx->pc = 0x2BB7E4u;
label_2bb7e4:
    // 0x2bb7e4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2bb7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2bb7e8:
    // 0x2bb7e8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2bb7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2bb7ec:
    // 0x2bb7ec: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2bb7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2bb7f0:
    // 0x2bb7f0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2bb7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_2bb7f4:
    // 0x2bb7f4: 0x84314d96  lh          $s1, 0x4D96($at)
    ctx->pc = 0x2bb7f4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_2bb7f8:
    // 0x2bb7f8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bb7fc:
    // 0x2bb7fc: 0xa79484ec  sh          $s4, -0x7B14($gp)
    ctx->pc = 0x2bb7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935788), (uint16_t)GPR_U32(ctx, 20));
label_2bb800:
    // 0x2bb800: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2bb800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2bb804:
    // 0x2bb804: 0xc04b950  jal         func_12E540
label_2bb808:
    if (ctx->pc == 0x2BB808u) {
        ctx->pc = 0x2BB808u;
            // 0x2bb808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB80Cu;
        goto label_2bb80c;
    }
    ctx->pc = 0x2BB804u;
    SET_GPR_U32(ctx, 31, 0x2BB80Cu);
    ctx->pc = 0x2BB808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB804u;
            // 0x2bb808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB80Cu; }
        if (ctx->pc != 0x2BB80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB80Cu; }
        if (ctx->pc != 0x2BB80Cu) { return; }
    }
    ctx->pc = 0x2BB80Cu;
label_2bb80c:
    // 0x2bb80c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2bb80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2bb810:
    // 0x2bb810: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2bb810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2bb814:
    // 0x2bb814: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x2bb814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_2bb818:
    // 0x2bb818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb81c:
    // 0x2bb81c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2bb81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bb820:
    // 0x2bb820: 0x24c6f558  addiu       $a2, $a2, -0xAA8
    ctx->pc = 0x2bb820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964568));
label_2bb824:
    // 0x2bb824: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2bb824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_2bb828:
    // 0x2bb828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb82c:
    // 0x2bb82c: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x2bb82cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_2bb830:
    // 0x2bb830: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2bb830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2bb834:
    // 0x2bb834: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2bb834u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb838:
    // 0x2bb838: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2bb838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2bb83c:
    // 0x2bb83c: 0xc04b450  jal         func_12D140
label_2bb840:
    if (ctx->pc == 0x2BB840u) {
        ctx->pc = 0x2BB840u;
            // 0x2bb840: 0x24490080  addiu       $t1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x2BB844u;
        goto label_2bb844;
    }
    ctx->pc = 0x2BB83Cu;
    SET_GPR_U32(ctx, 31, 0x2BB844u);
    ctx->pc = 0x2BB840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB83Cu;
            // 0x2bb840: 0x24490080  addiu       $t1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB844u; }
        if (ctx->pc != 0x2BB844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB844u; }
        if (ctx->pc != 0x2BB844u) { return; }
    }
    ctx->pc = 0x2BB844u;
label_2bb844:
    // 0x2bb844: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2bb844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2bb848:
    // 0x2bb848: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2bb848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2bb84c:
    // 0x2bb84c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x2bb84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_2bb850:
    // 0x2bb850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb854:
    // 0x2bb854: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bb854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bb858:
    // 0x2bb858: 0x24c6f568  addiu       $a2, $a2, -0xA98
    ctx->pc = 0x2bb858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964584));
label_2bb85c:
    // 0x2bb85c: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x2bb85cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_2bb860:
    // 0x2bb860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb864:
    // 0x2bb864: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x2bb864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_2bb868:
    // 0x2bb868: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x2bb868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2bb86c:
    // 0x2bb86c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2bb86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2bb870:
    // 0x2bb870: 0xc04b450  jal         func_12D140
label_2bb874:
    if (ctx->pc == 0x2BB874u) {
        ctx->pc = 0x2BB874u;
            // 0x2bb874: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB878u;
        goto label_2bb878;
    }
    ctx->pc = 0x2BB870u;
    SET_GPR_U32(ctx, 31, 0x2BB878u);
    ctx->pc = 0x2BB874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB870u;
            // 0x2bb874: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB878u; }
        if (ctx->pc != 0x2BB878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB878u; }
        if (ctx->pc != 0x2BB878u) { return; }
    }
    ctx->pc = 0x2BB878u;
label_2bb878:
    // 0x2bb878: 0xaf829c14  sw          $v0, -0x63EC($gp)
    ctx->pc = 0x2bb878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941716), GPR_U32(ctx, 2));
label_2bb87c:
    // 0x2bb87c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bb87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bb880:
    // 0x2bb880: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bb880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bb884:
    // 0x2bb884: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2bb884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2bb888:
    // 0x2bb888: 0xc08b3d4  jal         func_22CF50
label_2bb88c:
    if (ctx->pc == 0x2BB88Cu) {
        ctx->pc = 0x2BB88Cu;
            // 0x2bb88c: 0x24a5f568  addiu       $a1, $a1, -0xA98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964584));
        ctx->pc = 0x2BB890u;
        goto label_2bb890;
    }
    ctx->pc = 0x2BB888u;
    SET_GPR_U32(ctx, 31, 0x2BB890u);
    ctx->pc = 0x2BB88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB888u;
            // 0x2bb88c: 0x24a5f568  addiu       $a1, $a1, -0xA98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CF50u;
    if (runtime->hasFunction(0x22CF50u)) {
        auto targetFn = runtime->lookupFunction(0x22CF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB890u; }
        if (ctx->pc != 0x2BB890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBGFrameForMenu__FiPc_0x22cf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB890u; }
        if (ctx->pc != 0x2BB890u) { return; }
    }
    ctx->pc = 0x2BB890u;
label_2bb890:
    // 0x2bb890: 0xc08ad38  jal         func_22B4E0
label_2bb894:
    if (ctx->pc == 0x2BB894u) {
        ctx->pc = 0x2BB894u;
            // 0x2bb894: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x2BB898u;
        goto label_2bb898;
    }
    ctx->pc = 0x2BB890u;
    SET_GPR_U32(ctx, 31, 0x2BB898u);
    ctx->pc = 0x2BB894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB890u;
            // 0x2bb894: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB898u; }
        if (ctx->pc != 0x2BB898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB898u; }
        if (ctx->pc != 0x2BB898u) { return; }
    }
    ctx->pc = 0x2BB898u;
label_2bb898:
    // 0x2bb898: 0xc065af8  jal         func_196BE0
label_2bb89c:
    if (ctx->pc == 0x2BB89Cu) {
        ctx->pc = 0x2BB8A0u;
        goto label_2bb8a0;
    }
    ctx->pc = 0x2BB898u;
    SET_GPR_U32(ctx, 31, 0x2BB8A0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8A0u; }
        if (ctx->pc != 0x2BB8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8A0u; }
        if (ctx->pc != 0x2BB8A0u) { return; }
    }
    ctx->pc = 0x2BB8A0u;
label_2bb8a0:
    // 0x2bb8a0: 0x878584ec  lh          $a1, -0x7B14($gp)
    ctx->pc = 0x2bb8a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bb8a4:
    // 0x2bb8a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb8a8:
    // 0x2bb8a8: 0xc066f48  jal         func_19BD20
label_2bb8ac:
    if (ctx->pc == 0x2BB8ACu) {
        ctx->pc = 0x2BB8ACu;
            // 0x2bb8ac: 0x27a600cc  addiu       $a2, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->pc = 0x2BB8B0u;
        goto label_2bb8b0;
    }
    ctx->pc = 0x2BB8A8u;
    SET_GPR_U32(ctx, 31, 0x2BB8B0u);
    ctx->pc = 0x2BB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB8A8u;
            // 0x2bb8ac: 0x27a600cc  addiu       $a2, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8B0u; }
        if (ctx->pc != 0x2BB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8B0u; }
        if (ctx->pc != 0x2BB8B0u) { return; }
    }
    ctx->pc = 0x2BB8B0u;
label_2bb8b0:
    // 0x2bb8b0: 0xa7829c18  sh          $v0, -0x63E8($gp)
    ctx->pc = 0x2bb8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941720), (uint16_t)GPR_U32(ctx, 2));
label_2bb8b4:
    // 0x2bb8b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb8b8:
    // 0x2bb8b8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bb8bc:
    // 0x2bb8bc: 0xa7809c00  sh          $zero, -0x6400($gp)
    ctx->pc = 0x2bb8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 0));
label_2bb8c0:
    // 0x2bb8c0: 0xaf809c04  sw          $zero, -0x63FC($gp)
    ctx->pc = 0x2bb8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941700), GPR_U32(ctx, 0));
label_2bb8c4:
    // 0x2bb8c4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2bb8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2bb8c8:
    // 0x2bb8c8: 0x87829c18  lh          $v0, -0x63E8($gp)
    ctx->pc = 0x2bb8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941720)));
label_2bb8cc:
    // 0x2bb8cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bb8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2bb8d0:
    // 0x2bb8d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2bb8d4:
    if (ctx->pc == 0x2BB8D4u) {
        ctx->pc = 0x2BB8D4u;
            // 0x2bb8d4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BB8D8u;
        goto label_2bb8d8;
    }
    ctx->pc = 0x2BB8D0u;
    {
        const bool branch_taken_0x2bb8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB8D0u;
            // 0x2bb8d4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb8d0) {
            ctx->pc = 0x2BB910u;
            goto label_2bb910;
        }
    }
    ctx->pc = 0x2BB8D8u;
label_2bb8d8:
    // 0x2bb8d8: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2bb8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bb8dc:
    // 0x2bb8dc: 0xc0874e8  jal         func_21D3A0
label_2bb8e0:
    if (ctx->pc == 0x2BB8E0u) {
        ctx->pc = 0x2BB8E0u;
            // 0x2bb8e0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2BB8E4u;
        goto label_2bb8e4;
    }
    ctx->pc = 0x2BB8DCu;
    SET_GPR_U32(ctx, 31, 0x2BB8E4u);
    ctx->pc = 0x2BB8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB8DCu;
            // 0x2bb8e0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8E4u; }
        if (ctx->pc != 0x2BB8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8E4u; }
        if (ctx->pc != 0x2BB8E4u) { return; }
    }
    ctx->pc = 0x2BB8E4u;
label_2bb8e4:
    // 0x2bb8e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bb8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bb8e8:
    // 0x2bb8e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2bb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2bb8ec:
    // 0x2bb8ec: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2bb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bb8f0:
    // 0x2bb8f0: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2bb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
label_2bb8f4:
    // 0x2bb8f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bb8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bb8f8:
    // 0x2bb8f8: 0x878284ec  lh          $v0, -0x7B14($gp)
    ctx->pc = 0x2bb8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bb8fc:
    // 0x2bb8fc: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bb900:
    // 0x2bb900: 0xc0877e0  jal         func_21DF80
label_2bb904:
    if (ctx->pc == 0x2BB904u) {
        ctx->pc = 0x2BB904u;
            // 0x2bb904: 0x244501a5  addiu       $a1, $v0, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 421));
        ctx->pc = 0x2BB908u;
        goto label_2bb908;
    }
    ctx->pc = 0x2BB900u;
    SET_GPR_U32(ctx, 31, 0x2BB908u);
    ctx->pc = 0x2BB904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB900u;
            // 0x2bb904: 0x244501a5  addiu       $a1, $v0, 0x1A5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 421));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB908u; }
        if (ctx->pc != 0x2BB908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB908u; }
        if (ctx->pc != 0x2BB908u) { return; }
    }
    ctx->pc = 0x2BB908u;
label_2bb908:
    // 0x2bb908: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2bb90c:
    if (ctx->pc == 0x2BB90Cu) {
        ctx->pc = 0x2BB90Cu;
            // 0x2bb90c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2BB910u;
        goto label_2bb910;
    }
    ctx->pc = 0x2BB908u;
    {
        const bool branch_taken_0x2bb908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB908u;
            // 0x2bb90c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb908) {
            ctx->pc = 0x2BBC58u;
            goto label_2bbc58;
        }
    }
    ctx->pc = 0x2BB910u;
label_2bb910:
    // 0x2bb910: 0xc065af8  jal         func_196BE0
label_2bb914:
    if (ctx->pc == 0x2BB914u) {
        ctx->pc = 0x2BB918u;
        goto label_2bb918;
    }
    ctx->pc = 0x2BB910u;
    SET_GPR_U32(ctx, 31, 0x2BB918u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB918u; }
        if (ctx->pc != 0x2BB918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB918u; }
        if (ctx->pc != 0x2BB918u) { return; }
    }
    ctx->pc = 0x2BB918u;
label_2bb918:
    // 0x2bb918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb91c:
    // 0x2bb91c: 0xc0670f4  jal         func_19C3D0
label_2bb920:
    if (ctx->pc == 0x2BB920u) {
        ctx->pc = 0x2BB920u;
            // 0x2bb920: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB924u;
        goto label_2bb924;
    }
    ctx->pc = 0x2BB91Cu;
    SET_GPR_U32(ctx, 31, 0x2BB924u);
    ctx->pc = 0x2BB920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB91Cu;
            // 0x2bb920: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB924u; }
        if (ctx->pc != 0x2BB924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB924u; }
        if (ctx->pc != 0x2BB924u) { return; }
    }
    ctx->pc = 0x2BB924u;
label_2bb924:
    // 0x2bb924: 0xc04e640  jal         func_139900
label_2bb928:
    if (ctx->pc == 0x2BB928u) {
        ctx->pc = 0x2BB928u;
            // 0x2bb928: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BB92Cu;
        goto label_2bb92c;
    }
    ctx->pc = 0x2BB924u;
    SET_GPR_U32(ctx, 31, 0x2BB92Cu);
    ctx->pc = 0x2BB928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB924u;
            // 0x2bb928: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB92Cu; }
        if (ctx->pc != 0x2BB92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB92Cu; }
        if (ctx->pc != 0x2BB92Cu) { return; }
    }
    ctx->pc = 0x2BB92Cu;
label_2bb92c:
    // 0x2bb92c: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2bb930:
    // 0x2bb930: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bb930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bb934:
    // 0x2bb934: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x2bb934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2bb938:
    // 0x2bb938: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2bb938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2bb93c:
    // 0x2bb93c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2bb93cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bb940:
    // 0x2bb940: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2bb940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2bb944:
    // 0x2bb944: 0xc04e79c  jal         func_139E70
label_2bb948:
    if (ctx->pc == 0x2BB948u) {
        ctx->pc = 0x2BB948u;
            // 0x2bb948: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2BB94Cu;
        goto label_2bb94c;
    }
    ctx->pc = 0x2BB944u;
    SET_GPR_U32(ctx, 31, 0x2BB94Cu);
    ctx->pc = 0x2BB948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB944u;
            // 0x2bb948: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB94Cu; }
        if (ctx->pc != 0x2BB94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB94Cu; }
        if (ctx->pc != 0x2BB94Cu) { return; }
    }
    ctx->pc = 0x2BB94Cu;
label_2bb94c:
    // 0x2bb94c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2bb94cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2bb950:
    // 0x2bb950: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2bb950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2bb954:
    // 0x2bb954: 0x24c64ca0  addiu       $a2, $a2, 0x4CA0
    ctx->pc = 0x2bb954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19616));
label_2bb958:
    // 0x2bb958: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bb958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bb95c:
    // 0x2bb95c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2bb95cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2bb960:
    // 0x2bb960: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2bb960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bb964:
    // 0x2bb964: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2bb964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_2bb968:
    // 0x2bb968: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2bb968u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2bb96c:
    // 0x2bb96c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2bb96cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_2bb970:
    // 0x2bb970: 0xc0abf24  jal         func_2AFC90
label_2bb974:
    if (ctx->pc == 0x2BB974u) {
        ctx->pc = 0x2BB974u;
            // 0x2bb974: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->pc = 0x2BB978u;
        goto label_2bb978;
    }
    ctx->pc = 0x2BB970u;
    SET_GPR_U32(ctx, 31, 0x2BB978u);
    ctx->pc = 0x2BB974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB970u;
            // 0x2bb974: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC90u;
    if (runtime->hasFunction(0x2AFC90u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB978u; }
        if (ctx->pc != 0x2BB978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB978u; }
        if (ctx->pc != 0x2BB978u) { return; }
    }
    ctx->pc = 0x2BB978u;
label_2bb978:
    // 0x2bb978: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bb978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bb97c:
    // 0x2bb97c: 0xc04e748  jal         func_139D20
label_2bb980:
    if (ctx->pc == 0x2BB980u) {
        ctx->pc = 0x2BB980u;
            // 0x2bb980: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2BB984u;
        goto label_2bb984;
    }
    ctx->pc = 0x2BB97Cu;
    SET_GPR_U32(ctx, 31, 0x2BB984u);
    ctx->pc = 0x2BB980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB97Cu;
            // 0x2bb980: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB984u; }
        if (ctx->pc != 0x2BB984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB984u; }
        if (ctx->pc != 0x2BB984u) { return; }
    }
    ctx->pc = 0x2BB984u;
label_2bb984:
    // 0x2bb984: 0xc04e780  jal         func_139E00
label_2bb988:
    if (ctx->pc == 0x2BB988u) {
        ctx->pc = 0x2BB988u;
            // 0x2bb988: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2BB98Cu;
        goto label_2bb98c;
    }
    ctx->pc = 0x2BB984u;
    SET_GPR_U32(ctx, 31, 0x2BB98Cu);
    ctx->pc = 0x2BB988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB984u;
            // 0x2bb988: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB98Cu; }
        if (ctx->pc != 0x2BB98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB98Cu; }
        if (ctx->pc != 0x2BB98Cu) { return; }
    }
    ctx->pc = 0x2BB98Cu;
label_2bb98c:
    // 0x2bb98c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2bb98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2bb990:
    // 0x2bb990: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bb990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bb994:
    // 0x2bb994: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x2bb994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2bb998:
    // 0x2bb998: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bb998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bb99c:
    // 0x2bb99c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2bb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb9a0:
    // 0x2bb9a0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2bb9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2bb9a4:
    // 0x2bb9a4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2bb9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2bb9a8:
    // 0x2bb9a8: 0xc04e79c  jal         func_139E70
label_2bb9ac:
    if (ctx->pc == 0x2BB9ACu) {
        ctx->pc = 0x2BB9ACu;
            // 0x2bb9ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2BB9B0u;
        goto label_2bb9b0;
    }
    ctx->pc = 0x2BB9A8u;
    SET_GPR_U32(ctx, 31, 0x2BB9B0u);
    ctx->pc = 0x2BB9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9A8u;
            // 0x2bb9ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9B0u; }
        if (ctx->pc != 0x2BB9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9B0u; }
        if (ctx->pc != 0x2BB9B0u) { return; }
    }
    ctx->pc = 0x2BB9B0u;
label_2bb9b0:
    // 0x2bb9b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bb9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bb9b4:
    // 0x2bb9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb9b8:
    // 0x2bb9b8: 0x24a5f578  addiu       $a1, $a1, -0xA88
    ctx->pc = 0x2bb9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964600));
label_2bb9bc:
    // 0x2bb9bc: 0xc04b414  jal         func_12D050
label_2bb9c0:
    if (ctx->pc == 0x2BB9C0u) {
        ctx->pc = 0x2BB9C0u;
            // 0x2bb9c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BB9C4u;
        goto label_2bb9c4;
    }
    ctx->pc = 0x2BB9BCu;
    SET_GPR_U32(ctx, 31, 0x2BB9C4u);
    ctx->pc = 0x2BB9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9BCu;
            // 0x2bb9c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9C4u; }
        if (ctx->pc != 0x2BB9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9C4u; }
        if (ctx->pc != 0x2BB9C4u) { return; }
    }
    ctx->pc = 0x2BB9C4u;
label_2bb9c4:
    // 0x2bb9c4: 0xaf829c08  sw          $v0, -0x63F8($gp)
    ctx->pc = 0x2bb9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941704), GPR_U32(ctx, 2));
label_2bb9c8:
    // 0x2bb9c8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x2bb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_2bb9cc:
    // 0x2bb9cc: 0xaf809c10  sw          $zero, -0x63F0($gp)
    ctx->pc = 0x2bb9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941712), GPR_U32(ctx, 0));
label_2bb9d0:
    // 0x2bb9d0: 0xc06421c  jal         func_190870
label_2bb9d4:
    if (ctx->pc == 0x2BB9D4u) {
        ctx->pc = 0x2BB9D4u;
            // 0x2bb9d4: 0xaf829c0c  sw          $v0, -0x63F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 2));
        ctx->pc = 0x2BB9D8u;
        goto label_2bb9d8;
    }
    ctx->pc = 0x2BB9D0u;
    SET_GPR_U32(ctx, 31, 0x2BB9D8u);
    ctx->pc = 0x2BB9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9D0u;
            // 0x2bb9d4: 0xaf829c0c  sw          $v0, -0x63F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9D8u; }
        if (ctx->pc != 0x2BB9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9D8u; }
        if (ctx->pc != 0x2BB9D8u) { return; }
    }
    ctx->pc = 0x2BB9D8u;
label_2bb9d8:
    // 0x2bb9d8: 0x838384ec  lb          $v1, -0x7B14($gp)
    ctx->pc = 0x2bb9d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bb9dc:
    // 0x2bb9dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bb9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bb9e0:
    // 0x2bb9e0: 0xaf8294a4  sw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2bb9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939812), GPR_U32(ctx, 2));
label_2bb9e4:
    // 0x2bb9e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bb9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb9e8:
    // 0x2bb9e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bb9ec:
    // 0x2bb9ec: 0x8c27d5f8  lw          $a3, -0x2A08($at)
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956536)));
label_2bb9f0:
    // 0x2bb9f0: 0xa3829b70  sb          $v0, -0x6490($gp)
    ctx->pc = 0x2bb9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 2));
label_2bb9f4:
    // 0x2bb9f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb9f8:
    // 0x2bb9f8: 0xa3869b72  sb          $a2, -0x648E($gp)
    ctx->pc = 0x2bb9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 6));
label_2bb9fc:
    // 0x2bb9fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bba00:
    // 0x2bba00: 0xa3929b71  sb          $s2, -0x648F($gp)
    ctx->pc = 0x2bba00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 18));
label_2bba04:
    // 0x2bba04: 0xa3839b73  sb          $v1, -0x648D($gp)
    ctx->pc = 0x2bba04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 3));
label_2bba08:
    // 0x2bba08: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2bba08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2bba0c:
    // 0x2bba0c: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x2bba0cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_2bba10:
    // 0x2bba10: 0xa3809b76  sb          $zero, -0x648A($gp)
    ctx->pc = 0x2bba10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941558), (uint8_t)GPR_U32(ctx, 0));
label_2bba14:
    // 0x2bba14: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2bba14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2bba18:
    // 0x2bba18: 0xaf879b6c  sw          $a3, -0x6494($gp)
    ctx->pc = 0x2bba18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941548), GPR_U32(ctx, 7));
label_2bba1c:
    // 0x2bba1c: 0xc0a0ed8  jal         func_283B60
label_2bba20:
    if (ctx->pc == 0x2BBA20u) {
        ctx->pc = 0x2BBA20u;
            // 0x2bba20: 0xa3869b77  sb          $a2, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2BBA24u;
        goto label_2bba24;
    }
    ctx->pc = 0x2BBA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA24u);
    ctx->pc = 0x2BBA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA1Cu;
            // 0x2bba20: 0xa3869b77  sb          $a2, -0x6489($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA24u; }
        if (ctx->pc != 0x2BBA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA24u; }
        if (ctx->pc != 0x2BBA24u) { return; }
    }
    ctx->pc = 0x2BBA24u;
label_2bba24:
    // 0x2bba24: 0xaf829c04  sw          $v0, -0x63FC($gp)
    ctx->pc = 0x2bba24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941700), GPR_U32(ctx, 2));
label_2bba28:
    // 0x2bba28: 0x8f849c04  lw          $a0, -0x63FC($gp)
    ctx->pc = 0x2bba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bba2c:
    // 0x2bba2c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2bba30:
    if (ctx->pc == 0x2BBA30u) {
        ctx->pc = 0x2BBA34u;
        goto label_2bba34;
    }
    ctx->pc = 0x2BBA2Cu;
    {
        const bool branch_taken_0x2bba2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bba2c) {
            ctx->pc = 0x2BBA60u;
            goto label_2bba60;
        }
    }
    ctx->pc = 0x2BBA34u;
label_2bba34:
    // 0x2bba34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bba34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bba38:
    // 0x2bba38: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bba38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bba3c:
    // 0x2bba3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2bba3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2bba40:
    // 0x2bba40: 0x320f809  jalr        $t9
label_2bba44:
    if (ctx->pc == 0x2BBA44u) {
        ctx->pc = 0x2BBA44u;
            // 0x2bba44: 0x24a5d150  addiu       $a1, $a1, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
        ctx->pc = 0x2BBA48u;
        goto label_2bba48;
    }
    ctx->pc = 0x2BBA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBA48u);
        ctx->pc = 0x2BBA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA40u;
            // 0x2bba44: 0x24a5d150  addiu       $a1, $a1, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA48u; }
            if (ctx->pc != 0x2BBA48u) { return; }
        }
        }
    }
    ctx->pc = 0x2BBA48u;
label_2bba48:
    // 0x2bba48: 0x8f849c04  lw          $a0, -0x63FC($gp)
    ctx->pc = 0x2bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bba4c:
    // 0x2bba4c: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bba50:
    // 0x2bba50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bba50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bba54:
    // 0x2bba54: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bba54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bba58:
    // 0x2bba58: 0x320f809  jalr        $t9
label_2bba5c:
    if (ctx->pc == 0x2BBA5Cu) {
        ctx->pc = 0x2BBA5Cu;
            // 0x2bba5c: 0x24a5d160  addiu       $a1, $a1, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955360));
        ctx->pc = 0x2BBA60u;
        goto label_2bba60;
    }
    ctx->pc = 0x2BBA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBA60u);
        ctx->pc = 0x2BBA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA58u;
            // 0x2bba5c: 0x24a5d160  addiu       $a1, $a1, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955360));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBA60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA60u; }
            if (ctx->pc != 0x2BBA60u) { return; }
        }
        }
    }
    ctx->pc = 0x2BBA60u;
label_2bba60:
    // 0x2bba60: 0xc065af8  jal         func_196BE0
label_2bba64:
    if (ctx->pc == 0x2BBA64u) {
        ctx->pc = 0x2BBA68u;
        goto label_2bba68;
    }
    ctx->pc = 0x2BBA60u;
    SET_GPR_U32(ctx, 31, 0x2BBA68u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA68u; }
        if (ctx->pc != 0x2BBA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA68u; }
        if (ctx->pc != 0x2BBA68u) { return; }
    }
    ctx->pc = 0x2BBA68u;
label_2bba68:
    // 0x2bba68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bba6c:
    // 0x2bba6c: 0xc066d24  jal         func_19B490
label_2bba70:
    if (ctx->pc == 0x2BBA70u) {
        ctx->pc = 0x2BBA70u;
            // 0x2bba70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA74u;
        goto label_2bba74;
    }
    ctx->pc = 0x2BBA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA74u);
    ctx->pc = 0x2BBA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA6Cu;
            // 0x2bba70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA74u; }
        if (ctx->pc != 0x2BBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA74u; }
        if (ctx->pc != 0x2BBA74u) { return; }
    }
    ctx->pc = 0x2BBA74u;
label_2bba74:
    // 0x2bba74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bba74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bba78:
    // 0x2bba78: 0xc065af8  jal         func_196BE0
label_2bba7c:
    if (ctx->pc == 0x2BBA7Cu) {
        ctx->pc = 0x2BBA7Cu;
            // 0x2bba7c: 0xac22d8c0  sw          $v0, -0x2740($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957248), GPR_U32(ctx, 2));
        ctx->pc = 0x2BBA80u;
        goto label_2bba80;
    }
    ctx->pc = 0x2BBA78u;
    SET_GPR_U32(ctx, 31, 0x2BBA80u);
    ctx->pc = 0x2BBA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA78u;
            // 0x2bba7c: 0xac22d8c0  sw          $v0, -0x2740($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA80u; }
        if (ctx->pc != 0x2BBA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA80u; }
        if (ctx->pc != 0x2BBA80u) { return; }
    }
    ctx->pc = 0x2BBA80u;
label_2bba80:
    // 0x2bba80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bba84:
    // 0x2bba84: 0xc066d24  jal         func_19B490
label_2bba88:
    if (ctx->pc == 0x2BBA88u) {
        ctx->pc = 0x2BBA88u;
            // 0x2bba88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBA8Cu;
        goto label_2bba8c;
    }
    ctx->pc = 0x2BBA84u;
    SET_GPR_U32(ctx, 31, 0x2BBA8Cu);
    ctx->pc = 0x2BBA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA84u;
            // 0x2bba88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA8Cu; }
        if (ctx->pc != 0x2BBA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA8Cu; }
        if (ctx->pc != 0x2BBA8Cu) { return; }
    }
    ctx->pc = 0x2BBA8Cu;
label_2bba8c:
    // 0x2bba8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bba8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bba90:
    // 0x2bba90: 0xc065af8  jal         func_196BE0
label_2bba94:
    if (ctx->pc == 0x2BBA94u) {
        ctx->pc = 0x2BBA94u;
            // 0x2bba94: 0xac22d8c4  sw          $v0, -0x273C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957252), GPR_U32(ctx, 2));
        ctx->pc = 0x2BBA98u;
        goto label_2bba98;
    }
    ctx->pc = 0x2BBA90u;
    SET_GPR_U32(ctx, 31, 0x2BBA98u);
    ctx->pc = 0x2BBA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA90u;
            // 0x2bba94: 0xac22d8c4  sw          $v0, -0x273C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA98u; }
        if (ctx->pc != 0x2BBA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA98u; }
        if (ctx->pc != 0x2BBA98u) { return; }
    }
    ctx->pc = 0x2BBA98u;
label_2bba98:
    // 0x2bba98: 0x878384ec  lh          $v1, -0x7B14($gp)
    ctx->pc = 0x2bba98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bba9c:
    // 0x2bba9c: 0x24424660  addiu       $v0, $v0, 0x4660
    ctx->pc = 0x2bba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
label_2bbaa0:
    // 0x2bbaa0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbaa4:
    // 0x2bbaa4: 0xac22d8c8  sw          $v0, -0x2738($at)
    ctx->pc = 0x2bbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957256), GPR_U32(ctx, 2));
label_2bbaa8:
    // 0x2bbaa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbaac:
    // 0x2bbaac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2bbab0:
    if (ctx->pc == 0x2BBAB0u) {
        ctx->pc = 0x2BBAB0u;
            // 0x2bbab0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BBAB4u;
        goto label_2bbab4;
    }
    ctx->pc = 0x2BBAACu;
    {
        const bool branch_taken_0x2bbaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBAACu;
            // 0x2bbab0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbaac) {
            ctx->pc = 0x2BBAC4u;
            goto label_2bbac4;
        }
    }
    ctx->pc = 0x2BBAB4u;
label_2bbab4:
    // 0x2bbab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbab8:
    // 0x2bbab8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_2bbabc:
    if (ctx->pc == 0x2BBABCu) {
        ctx->pc = 0x2BBAC0u;
        goto label_2bbac0;
    }
    ctx->pc = 0x2BBAB8u;
    {
        const bool branch_taken_0x2bbab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbab8) {
            ctx->pc = 0x2BBACCu;
            goto label_2bbacc;
        }
    }
    ctx->pc = 0x2BBAC0u;
label_2bbac0:
    // 0x2bbac0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbac4:
    // 0x2bbac4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2bbac8:
    if (ctx->pc == 0x2BBAC8u) {
        ctx->pc = 0x2BBACCu;
        goto label_2bbacc;
    }
    ctx->pc = 0x2BBAC4u;
    {
        const bool branch_taken_0x2bbac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbac4) {
            ctx->pc = 0x2BBAD4u;
            goto label_2bbad4;
        }
    }
    ctx->pc = 0x2BBACCu;
label_2bbacc:
    // 0x2bbacc: 0xc0ac064  jal         func_2B0190
label_2bbad0:
    if (ctx->pc == 0x2BBAD0u) {
        ctx->pc = 0x2BBAD4u;
        goto label_2bbad4;
    }
    ctx->pc = 0x2BBACCu;
    SET_GPR_U32(ctx, 31, 0x2BBAD4u);
    ctx->pc = 0x2B0190u;
    if (runtime->hasFunction(0x2B0190u)) {
        auto targetFn = runtime->lookupFunction(0x2B0190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBAD4u; }
        if (ctx->pc != 0x2BBAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMonsterEffect__Fv_0x2b0190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBAD4u; }
        if (ctx->pc != 0x2BBAD4u) { return; }
    }
    ctx->pc = 0x2BBAD4u;
label_2bbad4:
    // 0x2bbad4: 0xc065b88  jal         func_196E20
label_2bbad8:
    if (ctx->pc == 0x2BBAD8u) {
        ctx->pc = 0x2BBADCu;
        goto label_2bbadc;
    }
    ctx->pc = 0x2BBAD4u;
    SET_GPR_U32(ctx, 31, 0x2BBADCu);
    ctx->pc = 0x196E20u;
    if (runtime->hasFunction(0x196E20u)) {
        auto targetFn = runtime->lookupFunction(0x196E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBADCu; }
        if (ctx->pc != 0x2BBADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReEquipFishingGameWeapon__Fv_0x196e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBADCu; }
        if (ctx->pc != 0x2BBADCu) { return; }
    }
    ctx->pc = 0x2BBADCu;
label_2bbadc:
    // 0x2bbadc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bbadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbae0:
    // 0x2bbae0: 0x16470008  bne         $s2, $a3, . + 4 + (0x8 << 2)
label_2bbae4:
    if (ctx->pc == 0x2BBAE4u) {
        ctx->pc = 0x2BBAE4u;
            // 0x2bbae4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBAE8u;
        goto label_2bbae8;
    }
    ctx->pc = 0x2BBAE0u;
    {
        const bool branch_taken_0x2bbae0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BBAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBAE0u;
            // 0x2bbae4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbae0) {
            ctx->pc = 0x2BBB04u;
            goto label_2bbb04;
        }
    }
    ctx->pc = 0x2BBAE8u;
label_2bbae8:
    // 0x2bbae8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbaec:
    // 0x2bbaec: 0x8c24d5f4  lw          $a0, -0x2A0C($at)
    ctx->pc = 0x2bbaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2bbaf0:
    // 0x2bbaf0: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2bbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2bbaf4:
    // 0x2bbaf4: 0xc07a6f8  jal         func_1E9BE0
label_2bbaf8:
    if (ctx->pc == 0x2BBAF8u) {
        ctx->pc = 0x2BBAF8u;
            // 0x2bbaf8: 0x878684ec  lh          $a2, -0x7B14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
        ctx->pc = 0x2BBAFCu;
        goto label_2bbafc;
    }
    ctx->pc = 0x2BBAF4u;
    SET_GPR_U32(ctx, 31, 0x2BBAFCu);
    ctx->pc = 0x2BBAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBAF4u;
            // 0x2bbaf8: 0x878684ec  lh          $a2, -0x7B14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBAFCu; }
        if (ctx->pc != 0x2BBAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBAFCu; }
        if (ctx->pc != 0x2BBAFCu) { return; }
    }
    ctx->pc = 0x2BBAFCu;
label_2bbafc:
    // 0x2bbafc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bbb00:
    if (ctx->pc == 0x2BBB00u) {
        ctx->pc = 0x2BBB00u;
            // 0x2bbb00: 0x878484ec  lh          $a0, -0x7B14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
        ctx->pc = 0x2BBB04u;
        goto label_2bbb04;
    }
    ctx->pc = 0x2BBAFCu;
    {
        const bool branch_taken_0x2bbafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBAFCu;
            // 0x2bbb00: 0x878484ec  lh          $a0, -0x7B14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbafc) {
            ctx->pc = 0x2BBB1Cu;
            goto label_2bbb1c;
        }
    }
    ctx->pc = 0x2BBB04u;
label_2bbb04:
    // 0x2bbb04: 0x878684ec  lh          $a2, -0x7B14($gp)
    ctx->pc = 0x2bbb04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbb08:
    // 0x2bbb08: 0x8c24d5f4  lw          $a0, -0x2A0C($at)
    ctx->pc = 0x2bbb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2bbb0c:
    // 0x2bbb0c: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2bbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2bbb10:
    // 0x2bbb10: 0xc07a6f8  jal         func_1E9BE0
label_2bbb14:
    if (ctx->pc == 0x2BBB14u) {
        ctx->pc = 0x2BBB14u;
            // 0x2bbb14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB18u;
        goto label_2bbb18;
    }
    ctx->pc = 0x2BBB10u;
    SET_GPR_U32(ctx, 31, 0x2BBB18u);
    ctx->pc = 0x2BBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB10u;
            // 0x2bbb14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB18u; }
        if (ctx->pc != 0x2BBB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB18u; }
        if (ctx->pc != 0x2BBB18u) { return; }
    }
    ctx->pc = 0x2BBB18u;
label_2bbb18:
    // 0x2bbb18: 0x878484ec  lh          $a0, -0x7B14($gp)
    ctx->pc = 0x2bbb18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbb1c:
    // 0x2bbb1c: 0xc0abf6c  jal         func_2AFDB0
label_2bbb20:
    if (ctx->pc == 0x2BBB20u) {
        ctx->pc = 0x2BBB24u;
        goto label_2bbb24;
    }
    ctx->pc = 0x2BBB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BBB24u);
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB24u; }
        if (ctx->pc != 0x2BBB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB24u; }
        if (ctx->pc != 0x2BBB24u) { return; }
    }
    ctx->pc = 0x2BBB24u;
label_2bbb24:
    // 0x2bbb24: 0x878484ec  lh          $a0, -0x7B14($gp)
    ctx->pc = 0x2bbb24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbb28:
    // 0x2bbb28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbb2c:
    // 0x2bbb2c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_2bbb30:
    if (ctx->pc == 0x2BBB30u) {
        ctx->pc = 0x2BBB30u;
            // 0x2bbb30: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BBB34u;
        goto label_2bbb34;
    }
    ctx->pc = 0x2BBB2Cu;
    {
        const bool branch_taken_0x2bbb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB2Cu;
            // 0x2bbb30: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb2c) {
            ctx->pc = 0x2BBBB8u;
            goto label_2bbbb8;
        }
    }
    ctx->pc = 0x2BBB34u;
label_2bbb34:
    // 0x2bbb34: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_2bbb38:
    if (ctx->pc == 0x2BBB38u) {
        ctx->pc = 0x2BBB38u;
            // 0x2bbb38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBB3Cu;
        goto label_2bbb3c;
    }
    ctx->pc = 0x2BBB34u;
    {
        const bool branch_taken_0x2bbb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB34u;
            // 0x2bbb38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb34) {
            ctx->pc = 0x2BBB98u;
            goto label_2bbb98;
        }
    }
    ctx->pc = 0x2BBB3Cu;
label_2bbb3c:
    // 0x2bbb3c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2bbb40:
    if (ctx->pc == 0x2BBB40u) {
        ctx->pc = 0x2BBB44u;
        goto label_2bbb44;
    }
    ctx->pc = 0x2BBB3Cu;
    {
        const bool branch_taken_0x2bbb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bbb3c) {
            ctx->pc = 0x2BBB54u;
            goto label_2bbb54;
        }
    }
    ctx->pc = 0x2BBB44u;
label_2bbb44:
    // 0x2bbb44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bbb48:
    if (ctx->pc == 0x2BBB48u) {
        ctx->pc = 0x2BBB4Cu;
        goto label_2bbb4c;
    }
    ctx->pc = 0x2BBB44u;
    {
        const bool branch_taken_0x2bbb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb44) {
            ctx->pc = 0x2BBB54u;
            goto label_2bbb54;
        }
    }
    ctx->pc = 0x2BBB4Cu;
label_2bbb4c:
    // 0x2bbb4c: 0x10000041  b           . + 4 + (0x41 << 2)
label_2bbb50:
    if (ctx->pc == 0x2BBB50u) {
        ctx->pc = 0x2BBB54u;
        goto label_2bbb54;
    }
    ctx->pc = 0x2BBB4Cu;
    {
        const bool branch_taken_0x2bbb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb4c) {
            ctx->pc = 0x2BBC54u;
            goto label_2bbc54;
        }
    }
    ctx->pc = 0x2BBB54u;
label_2bbb54:
    // 0x2bbb54: 0x83839b71  lb          $v1, -0x648F($gp)
    ctx->pc = 0x2bbb54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2bbb58:
    // 0x2bbb58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbb5c:
    // 0x2bbb5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2bbb60:
    if (ctx->pc == 0x2BBB60u) {
        ctx->pc = 0x2BBB64u;
        goto label_2bbb64;
    }
    ctx->pc = 0x2BBB5Cu;
    {
        const bool branch_taken_0x2bbb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbb5c) {
            ctx->pc = 0x2BBB6Cu;
            goto label_2bbb6c;
        }
    }
    ctx->pc = 0x2BBB64u;
label_2bbb64:
    // 0x2bbb64: 0xc0ac4a8  jal         func_2B12A0
label_2bbb68:
    if (ctx->pc == 0x2BBB68u) {
        ctx->pc = 0x2BBB6Cu;
        goto label_2bbb6c;
    }
    ctx->pc = 0x2BBB64u;
    SET_GPR_U32(ctx, 31, 0x2BBB6Cu);
    ctx->pc = 0x2B12A0u;
    if (runtime->hasFunction(0x2B12A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB6Cu; }
        if (ctx->pc != 0x2BBB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCharaPrepare__Fv_0x2b12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB6Cu; }
        if (ctx->pc != 0x2BBB6Cu) { return; }
    }
    ctx->pc = 0x2BBB6Cu;
label_2bbb6c:
    // 0x2bbb6c: 0x878584ec  lh          $a1, -0x7B14($gp)
    ctx->pc = 0x2bbb6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbb70:
    // 0x2bbb70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bbb74:
    // 0x2bbb74: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bbb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bbb78:
    // 0x2bbb78: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bbb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bbb7c:
    // 0x2bbb7c: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2bbb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2bbb80:
    // 0x2bbb80: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bbb84:
    // 0x2bbb84: 0x24c6ca80  addiu       $a2, $a2, -0x3580
    ctx->pc = 0x2bbb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
label_2bbb88:
    // 0x2bbb88: 0xc0ae434  jal         func_2B90D0
label_2bbb8c:
    if (ctx->pc == 0x2BBB8Cu) {
        ctx->pc = 0x2BBB8Cu;
            // 0x2bbb8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBB90u;
        goto label_2bbb90;
    }
    ctx->pc = 0x2BBB88u;
    SET_GPR_U32(ctx, 31, 0x2BBB90u);
    ctx->pc = 0x2BBB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB88u;
            // 0x2bbb8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB90u; }
        if (ctx->pc != 0x2BBB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB90u; }
        if (ctx->pc != 0x2BBB90u) { return; }
    }
    ctx->pc = 0x2BBB90u;
label_2bbb90:
    // 0x2bbb90: 0x10000030  b           . + 4 + (0x30 << 2)
label_2bbb94:
    if (ctx->pc == 0x2BBB94u) {
        ctx->pc = 0x2BBB98u;
        goto label_2bbb98;
    }
    ctx->pc = 0x2BBB90u;
    {
        const bool branch_taken_0x2bbb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb90) {
            ctx->pc = 0x2BBC54u;
            goto label_2bbc54;
        }
    }
    ctx->pc = 0x2BBB98u;
label_2bbb98:
    // 0x2bbb98: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bbb9c:
    // 0x2bbb9c: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bbb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bbba0:
    // 0x2bbba0: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bbba4:
    // 0x2bbba4: 0x24a5ca80  addiu       $a1, $a1, -0x3580
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
label_2bbba8:
    // 0x2bbba8: 0xc0ae8c0  jal         func_2BA300
label_2bbbac:
    if (ctx->pc == 0x2BBBACu) {
        ctx->pc = 0x2BBBACu;
            // 0x2bbbac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBBB0u;
        goto label_2bbbb0;
    }
    ctx->pc = 0x2BBBA8u;
    SET_GPR_U32(ctx, 31, 0x2BBBB0u);
    ctx->pc = 0x2BBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBA8u;
            // 0x2bbbac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (runtime->hasFunction(0x2BA300u)) {
        auto targetFn = runtime->lookupFunction(0x2BA300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBB0u; }
        if (ctx->pc != 0x2BBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i_0x2ba300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBB0u; }
        if (ctx->pc != 0x2BBBB0u) { return; }
    }
    ctx->pc = 0x2BBBB0u;
label_2bbbb0:
    // 0x2bbbb0: 0x10000028  b           . + 4 + (0x28 << 2)
label_2bbbb4:
    if (ctx->pc == 0x2BBBB4u) {
        ctx->pc = 0x2BBBB8u;
        goto label_2bbbb8;
    }
    ctx->pc = 0x2BBBB0u;
    {
        const bool branch_taken_0x2bbbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbbb0) {
            ctx->pc = 0x2BBC54u;
            goto label_2bbc54;
        }
    }
    ctx->pc = 0x2BBBB8u;
label_2bbbb8:
    // 0x2bbbb8: 0xc065af8  jal         func_196BE0
label_2bbbbc:
    if (ctx->pc == 0x2BBBBCu) {
        ctx->pc = 0x2BBBC0u;
        goto label_2bbbc0;
    }
    ctx->pc = 0x2BBBB8u;
    SET_GPR_U32(ctx, 31, 0x2BBBC0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBC0u; }
        if (ctx->pc != 0x2BBBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBC0u; }
        if (ctx->pc != 0x2BBBC0u) { return; }
    }
    ctx->pc = 0x2BBBC0u;
label_2bbbc0:
    // 0x2bbbc0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2bbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2bbbc4:
    // 0x2bbbc4: 0x34634d98  ori         $v1, $v1, 0x4D98
    ctx->pc = 0x2bbbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19864);
label_2bbbc8:
    // 0x2bbbc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bbbcc:
    // 0x2bbbcc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2bbbd0:
    // 0x2bbbd0: 0xa78284f0  sh          $v0, -0x7B10($gp)
    ctx->pc = 0x2bbbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935792), (uint16_t)GPR_U32(ctx, 2));
label_2bbbd4:
    // 0x2bbbd4: 0x878284f0  lh          $v0, -0x7B10($gp)
    ctx->pc = 0x2bbbd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935792)));
label_2bbbd8:
    // 0x2bbbd8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_2bbbdc:
    if (ctx->pc == 0x2BBBDCu) {
        ctx->pc = 0x2BBBDCu;
            // 0x2bbbdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBBE0u;
        goto label_2bbbe0;
    }
    ctx->pc = 0x2BBBD8u;
    {
        const bool branch_taken_0x2bbbd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BBBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBD8u;
            // 0x2bbbdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbd8) {
            ctx->pc = 0x2BBC00u;
            goto label_2bbc00;
        }
    }
    ctx->pc = 0x2BBBE0u;
label_2bbbe0:
    // 0x2bbbe0: 0xc065af8  jal         func_196BE0
label_2bbbe4:
    if (ctx->pc == 0x2BBBE4u) {
        ctx->pc = 0x2BBBE8u;
        goto label_2bbbe8;
    }
    ctx->pc = 0x2BBBE0u;
    SET_GPR_U32(ctx, 31, 0x2BBBE8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBE8u; }
        if (ctx->pc != 0x2BBBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBE8u; }
        if (ctx->pc != 0x2BBBE8u) { return; }
    }
    ctx->pc = 0x2BBBE8u;
label_2bbbe8:
    // 0x2bbbe8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2bbbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2bbbec:
    // 0x2bbbec: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x2bbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2bbbf0:
    // 0x2bbbf0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2bbbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2bbbf4:
    // 0x2bbbf4: 0xa4234d98  sh          $v1, 0x4D98($at)
    ctx->pc = 0x2bbbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19864), (uint16_t)GPR_U32(ctx, 3));
label_2bbbf8:
    // 0x2bbbf8: 0xa78384f0  sh          $v1, -0x7B10($gp)
    ctx->pc = 0x2bbbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935792), (uint16_t)GPR_U32(ctx, 3));
label_2bbbfc:
    // 0x2bbbfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbc00:
    // 0x2bbc00: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2bbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2bbc04:
    // 0x2bbc04: 0xc0a0ed8  jal         func_283B60
label_2bbc08:
    if (ctx->pc == 0x2BBC08u) {
        ctx->pc = 0x2BBC08u;
            // 0x2bbc08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC0Cu;
        goto label_2bbc0c;
    }
    ctx->pc = 0x2BBC04u;
    SET_GPR_U32(ctx, 31, 0x2BBC0Cu);
    ctx->pc = 0x2BBC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC04u;
            // 0x2bbc08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC0Cu; }
        if (ctx->pc != 0x2BBC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC0Cu; }
        if (ctx->pc != 0x2BBC0Cu) { return; }
    }
    ctx->pc = 0x2BBC0Cu;
label_2bbc0c:
    // 0x2bbc0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bbc10:
    if (ctx->pc == 0x2BBC10u) {
        ctx->pc = 0x2BBC14u;
        goto label_2bbc14;
    }
    ctx->pc = 0x2BBC0Cu;
    {
        const bool branch_taken_0x2bbc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc0c) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BBC14u;
label_2bbc14:
    // 0x2bbc14: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2bbc14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bbc18:
    // 0x2bbc18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc1c:
    // 0x2bbc1c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bbc1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bbc20:
    // 0x2bbc20: 0x320f809  jalr        $t9
label_2bbc24:
    if (ctx->pc == 0x2BBC24u) {
        ctx->pc = 0x2BBC24u;
            // 0x2bbc24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC28u;
        goto label_2bbc28;
    }
    ctx->pc = 0x2BBC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBC28u);
        ctx->pc = 0x2BBC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC20u;
            // 0x2bbc24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBC28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC28u; }
            if (ctx->pc != 0x2BBC28u) { return; }
        }
        }
    }
    ctx->pc = 0x2BBC28u;
label_2bbc28:
    // 0x2bbc28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2bbc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2bbc2c:
    // 0x2bbc2c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2bbc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_2bbc30:
    // 0x2bbc30: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2bbc34:
    if (ctx->pc == 0x2BBC34u) {
        ctx->pc = 0x2BBC38u;
        goto label_2bbc38;
    }
    ctx->pc = 0x2BBC30u;
    {
        const bool branch_taken_0x2bbc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc30) {
            ctx->pc = 0x2BBC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bbc00;
        }
    }
    ctx->pc = 0x2BBC38u;
label_2bbc38:
    // 0x2bbc38: 0x878684f0  lh          $a2, -0x7B10($gp)
    ctx->pc = 0x2bbc38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935792)));
label_2bbc3c:
    // 0x2bbc3c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bbc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bbc40:
    // 0x2bbc40: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bbc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bbc44:
    // 0x2bbc44: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bbc48:
    // 0x2bbc48: 0x24a5ca80  addiu       $a1, $a1, -0x3580
    ctx->pc = 0x2bbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
label_2bbc4c:
    // 0x2bbc4c: 0xc0aebc4  jal         func_2BAF10
label_2bbc50:
    if (ctx->pc == 0x2BBC50u) {
        ctx->pc = 0x2BBC50u;
            // 0x2bbc50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBC54u;
        goto label_2bbc54;
    }
    ctx->pc = 0x2BBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBC54u);
    ctx->pc = 0x2BBC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC4Cu;
            // 0x2bbc50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF10u;
    if (runtime->hasFunction(0x2BAF10u)) {
        auto targetFn = runtime->lookupFunction(0x2BAF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC54u; }
        if (ctx->pc != 0x2BBC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii_0x2baf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC54u; }
        if (ctx->pc != 0x2BBC54u) { return; }
    }
    ctx->pc = 0x2BBC54u;
label_2bbc54:
    // 0x2bbc54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bbc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bbc58:
    // 0x2bbc58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bbc58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bbc5c:
    // 0x2bbc5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bbc5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bbc60:
    // 0x2bbc60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bbc60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bbc64:
    // 0x2bbc64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bbc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbc68:
    // 0x2bbc68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bbc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbc6c:
    // 0x2bbc6c: 0x3e00008  jr          $ra
label_2bbc70:
    if (ctx->pc == 0x2BBC70u) {
        ctx->pc = 0x2BBC70u;
            // 0x2bbc70: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2BBC74u;
        goto label_fallthrough_0x2bbc6c;
    }
    ctx->pc = 0x2BBC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC6Cu;
            // 0x2bbc70: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bbc6c:
    ctx->pc = 0x2BBC74u;
}
