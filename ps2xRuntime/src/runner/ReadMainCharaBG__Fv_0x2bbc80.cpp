#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReadMainCharaBG__Fv
// Address: 0x2bbc80 - 0x2bc150
void ReadMainCharaBG__Fv_0x2bbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadMainCharaBG__Fv_0x2bbc80");
#endif

    switch (ctx->pc) {
        case 0x2bbc80u: goto label_2bbc80;
        case 0x2bbc84u: goto label_2bbc84;
        case 0x2bbc88u: goto label_2bbc88;
        case 0x2bbc8cu: goto label_2bbc8c;
        case 0x2bbc90u: goto label_2bbc90;
        case 0x2bbc94u: goto label_2bbc94;
        case 0x2bbc98u: goto label_2bbc98;
        case 0x2bbc9cu: goto label_2bbc9c;
        case 0x2bbca0u: goto label_2bbca0;
        case 0x2bbca4u: goto label_2bbca4;
        case 0x2bbca8u: goto label_2bbca8;
        case 0x2bbcacu: goto label_2bbcac;
        case 0x2bbcb0u: goto label_2bbcb0;
        case 0x2bbcb4u: goto label_2bbcb4;
        case 0x2bbcb8u: goto label_2bbcb8;
        case 0x2bbcbcu: goto label_2bbcbc;
        case 0x2bbcc0u: goto label_2bbcc0;
        case 0x2bbcc4u: goto label_2bbcc4;
        case 0x2bbcc8u: goto label_2bbcc8;
        case 0x2bbcccu: goto label_2bbccc;
        case 0x2bbcd0u: goto label_2bbcd0;
        case 0x2bbcd4u: goto label_2bbcd4;
        case 0x2bbcd8u: goto label_2bbcd8;
        case 0x2bbcdcu: goto label_2bbcdc;
        case 0x2bbce0u: goto label_2bbce0;
        case 0x2bbce4u: goto label_2bbce4;
        case 0x2bbce8u: goto label_2bbce8;
        case 0x2bbcecu: goto label_2bbcec;
        case 0x2bbcf0u: goto label_2bbcf0;
        case 0x2bbcf4u: goto label_2bbcf4;
        case 0x2bbcf8u: goto label_2bbcf8;
        case 0x2bbcfcu: goto label_2bbcfc;
        case 0x2bbd00u: goto label_2bbd00;
        case 0x2bbd04u: goto label_2bbd04;
        case 0x2bbd08u: goto label_2bbd08;
        case 0x2bbd0cu: goto label_2bbd0c;
        case 0x2bbd10u: goto label_2bbd10;
        case 0x2bbd14u: goto label_2bbd14;
        case 0x2bbd18u: goto label_2bbd18;
        case 0x2bbd1cu: goto label_2bbd1c;
        case 0x2bbd20u: goto label_2bbd20;
        case 0x2bbd24u: goto label_2bbd24;
        case 0x2bbd28u: goto label_2bbd28;
        case 0x2bbd2cu: goto label_2bbd2c;
        case 0x2bbd30u: goto label_2bbd30;
        case 0x2bbd34u: goto label_2bbd34;
        case 0x2bbd38u: goto label_2bbd38;
        case 0x2bbd3cu: goto label_2bbd3c;
        case 0x2bbd40u: goto label_2bbd40;
        case 0x2bbd44u: goto label_2bbd44;
        case 0x2bbd48u: goto label_2bbd48;
        case 0x2bbd4cu: goto label_2bbd4c;
        case 0x2bbd50u: goto label_2bbd50;
        case 0x2bbd54u: goto label_2bbd54;
        case 0x2bbd58u: goto label_2bbd58;
        case 0x2bbd5cu: goto label_2bbd5c;
        case 0x2bbd60u: goto label_2bbd60;
        case 0x2bbd64u: goto label_2bbd64;
        case 0x2bbd68u: goto label_2bbd68;
        case 0x2bbd6cu: goto label_2bbd6c;
        case 0x2bbd70u: goto label_2bbd70;
        case 0x2bbd74u: goto label_2bbd74;
        case 0x2bbd78u: goto label_2bbd78;
        case 0x2bbd7cu: goto label_2bbd7c;
        case 0x2bbd80u: goto label_2bbd80;
        case 0x2bbd84u: goto label_2bbd84;
        case 0x2bbd88u: goto label_2bbd88;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbd90u: goto label_2bbd90;
        case 0x2bbd94u: goto label_2bbd94;
        case 0x2bbd98u: goto label_2bbd98;
        case 0x2bbd9cu: goto label_2bbd9c;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbda4u: goto label_2bbda4;
        case 0x2bbda8u: goto label_2bbda8;
        case 0x2bbdacu: goto label_2bbdac;
        case 0x2bbdb0u: goto label_2bbdb0;
        case 0x2bbdb4u: goto label_2bbdb4;
        case 0x2bbdb8u: goto label_2bbdb8;
        case 0x2bbdbcu: goto label_2bbdbc;
        case 0x2bbdc0u: goto label_2bbdc0;
        case 0x2bbdc4u: goto label_2bbdc4;
        case 0x2bbdc8u: goto label_2bbdc8;
        case 0x2bbdccu: goto label_2bbdcc;
        case 0x2bbdd0u: goto label_2bbdd0;
        case 0x2bbdd4u: goto label_2bbdd4;
        case 0x2bbdd8u: goto label_2bbdd8;
        case 0x2bbddcu: goto label_2bbddc;
        case 0x2bbde0u: goto label_2bbde0;
        case 0x2bbde4u: goto label_2bbde4;
        case 0x2bbde8u: goto label_2bbde8;
        case 0x2bbdecu: goto label_2bbdec;
        case 0x2bbdf0u: goto label_2bbdf0;
        case 0x2bbdf4u: goto label_2bbdf4;
        case 0x2bbdf8u: goto label_2bbdf8;
        case 0x2bbdfcu: goto label_2bbdfc;
        case 0x2bbe00u: goto label_2bbe00;
        case 0x2bbe04u: goto label_2bbe04;
        case 0x2bbe08u: goto label_2bbe08;
        case 0x2bbe0cu: goto label_2bbe0c;
        case 0x2bbe10u: goto label_2bbe10;
        case 0x2bbe14u: goto label_2bbe14;
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe1cu: goto label_2bbe1c;
        case 0x2bbe20u: goto label_2bbe20;
        case 0x2bbe24u: goto label_2bbe24;
        case 0x2bbe28u: goto label_2bbe28;
        case 0x2bbe2cu: goto label_2bbe2c;
        case 0x2bbe30u: goto label_2bbe30;
        case 0x2bbe34u: goto label_2bbe34;
        case 0x2bbe38u: goto label_2bbe38;
        case 0x2bbe3cu: goto label_2bbe3c;
        case 0x2bbe40u: goto label_2bbe40;
        case 0x2bbe44u: goto label_2bbe44;
        case 0x2bbe48u: goto label_2bbe48;
        case 0x2bbe4cu: goto label_2bbe4c;
        case 0x2bbe50u: goto label_2bbe50;
        case 0x2bbe54u: goto label_2bbe54;
        case 0x2bbe58u: goto label_2bbe58;
        case 0x2bbe5cu: goto label_2bbe5c;
        case 0x2bbe60u: goto label_2bbe60;
        case 0x2bbe64u: goto label_2bbe64;
        case 0x2bbe68u: goto label_2bbe68;
        case 0x2bbe6cu: goto label_2bbe6c;
        case 0x2bbe70u: goto label_2bbe70;
        case 0x2bbe74u: goto label_2bbe74;
        case 0x2bbe78u: goto label_2bbe78;
        case 0x2bbe7cu: goto label_2bbe7c;
        case 0x2bbe80u: goto label_2bbe80;
        case 0x2bbe84u: goto label_2bbe84;
        case 0x2bbe88u: goto label_2bbe88;
        case 0x2bbe8cu: goto label_2bbe8c;
        case 0x2bbe90u: goto label_2bbe90;
        case 0x2bbe94u: goto label_2bbe94;
        case 0x2bbe98u: goto label_2bbe98;
        case 0x2bbe9cu: goto label_2bbe9c;
        case 0x2bbea0u: goto label_2bbea0;
        case 0x2bbea4u: goto label_2bbea4;
        case 0x2bbea8u: goto label_2bbea8;
        case 0x2bbeacu: goto label_2bbeac;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbeb4u: goto label_2bbeb4;
        case 0x2bbeb8u: goto label_2bbeb8;
        case 0x2bbebcu: goto label_2bbebc;
        case 0x2bbec0u: goto label_2bbec0;
        case 0x2bbec4u: goto label_2bbec4;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbeccu: goto label_2bbecc;
        case 0x2bbed0u: goto label_2bbed0;
        case 0x2bbed4u: goto label_2bbed4;
        case 0x2bbed8u: goto label_2bbed8;
        case 0x2bbedcu: goto label_2bbedc;
        case 0x2bbee0u: goto label_2bbee0;
        case 0x2bbee4u: goto label_2bbee4;
        case 0x2bbee8u: goto label_2bbee8;
        case 0x2bbeecu: goto label_2bbeec;
        case 0x2bbef0u: goto label_2bbef0;
        case 0x2bbef4u: goto label_2bbef4;
        case 0x2bbef8u: goto label_2bbef8;
        case 0x2bbefcu: goto label_2bbefc;
        case 0x2bbf00u: goto label_2bbf00;
        case 0x2bbf04u: goto label_2bbf04;
        case 0x2bbf08u: goto label_2bbf08;
        case 0x2bbf0cu: goto label_2bbf0c;
        case 0x2bbf10u: goto label_2bbf10;
        case 0x2bbf14u: goto label_2bbf14;
        case 0x2bbf18u: goto label_2bbf18;
        case 0x2bbf1cu: goto label_2bbf1c;
        case 0x2bbf20u: goto label_2bbf20;
        case 0x2bbf24u: goto label_2bbf24;
        case 0x2bbf28u: goto label_2bbf28;
        case 0x2bbf2cu: goto label_2bbf2c;
        case 0x2bbf30u: goto label_2bbf30;
        case 0x2bbf34u: goto label_2bbf34;
        case 0x2bbf38u: goto label_2bbf38;
        case 0x2bbf3cu: goto label_2bbf3c;
        case 0x2bbf40u: goto label_2bbf40;
        case 0x2bbf44u: goto label_2bbf44;
        case 0x2bbf48u: goto label_2bbf48;
        case 0x2bbf4cu: goto label_2bbf4c;
        case 0x2bbf50u: goto label_2bbf50;
        case 0x2bbf54u: goto label_2bbf54;
        case 0x2bbf58u: goto label_2bbf58;
        case 0x2bbf5cu: goto label_2bbf5c;
        case 0x2bbf60u: goto label_2bbf60;
        case 0x2bbf64u: goto label_2bbf64;
        case 0x2bbf68u: goto label_2bbf68;
        case 0x2bbf6cu: goto label_2bbf6c;
        case 0x2bbf70u: goto label_2bbf70;
        case 0x2bbf74u: goto label_2bbf74;
        case 0x2bbf78u: goto label_2bbf78;
        case 0x2bbf7cu: goto label_2bbf7c;
        case 0x2bbf80u: goto label_2bbf80;
        case 0x2bbf84u: goto label_2bbf84;
        case 0x2bbf88u: goto label_2bbf88;
        case 0x2bbf8cu: goto label_2bbf8c;
        case 0x2bbf90u: goto label_2bbf90;
        case 0x2bbf94u: goto label_2bbf94;
        case 0x2bbf98u: goto label_2bbf98;
        case 0x2bbf9cu: goto label_2bbf9c;
        case 0x2bbfa0u: goto label_2bbfa0;
        case 0x2bbfa4u: goto label_2bbfa4;
        case 0x2bbfa8u: goto label_2bbfa8;
        case 0x2bbfacu: goto label_2bbfac;
        case 0x2bbfb0u: goto label_2bbfb0;
        case 0x2bbfb4u: goto label_2bbfb4;
        case 0x2bbfb8u: goto label_2bbfb8;
        case 0x2bbfbcu: goto label_2bbfbc;
        case 0x2bbfc0u: goto label_2bbfc0;
        case 0x2bbfc4u: goto label_2bbfc4;
        case 0x2bbfc8u: goto label_2bbfc8;
        case 0x2bbfccu: goto label_2bbfcc;
        case 0x2bbfd0u: goto label_2bbfd0;
        case 0x2bbfd4u: goto label_2bbfd4;
        case 0x2bbfd8u: goto label_2bbfd8;
        case 0x2bbfdcu: goto label_2bbfdc;
        case 0x2bbfe0u: goto label_2bbfe0;
        case 0x2bbfe4u: goto label_2bbfe4;
        case 0x2bbfe8u: goto label_2bbfe8;
        case 0x2bbfecu: goto label_2bbfec;
        case 0x2bbff0u: goto label_2bbff0;
        case 0x2bbff4u: goto label_2bbff4;
        case 0x2bbff8u: goto label_2bbff8;
        case 0x2bbffcu: goto label_2bbffc;
        case 0x2bc000u: goto label_2bc000;
        case 0x2bc004u: goto label_2bc004;
        case 0x2bc008u: goto label_2bc008;
        case 0x2bc00cu: goto label_2bc00c;
        case 0x2bc010u: goto label_2bc010;
        case 0x2bc014u: goto label_2bc014;
        case 0x2bc018u: goto label_2bc018;
        case 0x2bc01cu: goto label_2bc01c;
        case 0x2bc020u: goto label_2bc020;
        case 0x2bc024u: goto label_2bc024;
        case 0x2bc028u: goto label_2bc028;
        case 0x2bc02cu: goto label_2bc02c;
        case 0x2bc030u: goto label_2bc030;
        case 0x2bc034u: goto label_2bc034;
        case 0x2bc038u: goto label_2bc038;
        case 0x2bc03cu: goto label_2bc03c;
        case 0x2bc040u: goto label_2bc040;
        case 0x2bc044u: goto label_2bc044;
        case 0x2bc048u: goto label_2bc048;
        case 0x2bc04cu: goto label_2bc04c;
        case 0x2bc050u: goto label_2bc050;
        case 0x2bc054u: goto label_2bc054;
        case 0x2bc058u: goto label_2bc058;
        case 0x2bc05cu: goto label_2bc05c;
        case 0x2bc060u: goto label_2bc060;
        case 0x2bc064u: goto label_2bc064;
        case 0x2bc068u: goto label_2bc068;
        case 0x2bc06cu: goto label_2bc06c;
        case 0x2bc070u: goto label_2bc070;
        case 0x2bc074u: goto label_2bc074;
        case 0x2bc078u: goto label_2bc078;
        case 0x2bc07cu: goto label_2bc07c;
        case 0x2bc080u: goto label_2bc080;
        case 0x2bc084u: goto label_2bc084;
        case 0x2bc088u: goto label_2bc088;
        case 0x2bc08cu: goto label_2bc08c;
        case 0x2bc090u: goto label_2bc090;
        case 0x2bc094u: goto label_2bc094;
        case 0x2bc098u: goto label_2bc098;
        case 0x2bc09cu: goto label_2bc09c;
        case 0x2bc0a0u: goto label_2bc0a0;
        case 0x2bc0a4u: goto label_2bc0a4;
        case 0x2bc0a8u: goto label_2bc0a8;
        case 0x2bc0acu: goto label_2bc0ac;
        case 0x2bc0b0u: goto label_2bc0b0;
        case 0x2bc0b4u: goto label_2bc0b4;
        case 0x2bc0b8u: goto label_2bc0b8;
        case 0x2bc0bcu: goto label_2bc0bc;
        case 0x2bc0c0u: goto label_2bc0c0;
        case 0x2bc0c4u: goto label_2bc0c4;
        case 0x2bc0c8u: goto label_2bc0c8;
        case 0x2bc0ccu: goto label_2bc0cc;
        case 0x2bc0d0u: goto label_2bc0d0;
        case 0x2bc0d4u: goto label_2bc0d4;
        case 0x2bc0d8u: goto label_2bc0d8;
        case 0x2bc0dcu: goto label_2bc0dc;
        case 0x2bc0e0u: goto label_2bc0e0;
        case 0x2bc0e4u: goto label_2bc0e4;
        case 0x2bc0e8u: goto label_2bc0e8;
        case 0x2bc0ecu: goto label_2bc0ec;
        case 0x2bc0f0u: goto label_2bc0f0;
        case 0x2bc0f4u: goto label_2bc0f4;
        case 0x2bc0f8u: goto label_2bc0f8;
        case 0x2bc0fcu: goto label_2bc0fc;
        case 0x2bc100u: goto label_2bc100;
        case 0x2bc104u: goto label_2bc104;
        case 0x2bc108u: goto label_2bc108;
        case 0x2bc10cu: goto label_2bc10c;
        case 0x2bc110u: goto label_2bc110;
        case 0x2bc114u: goto label_2bc114;
        case 0x2bc118u: goto label_2bc118;
        case 0x2bc11cu: goto label_2bc11c;
        case 0x2bc120u: goto label_2bc120;
        case 0x2bc124u: goto label_2bc124;
        case 0x2bc128u: goto label_2bc128;
        case 0x2bc12cu: goto label_2bc12c;
        case 0x2bc130u: goto label_2bc130;
        case 0x2bc134u: goto label_2bc134;
        case 0x2bc138u: goto label_2bc138;
        case 0x2bc13cu: goto label_2bc13c;
        case 0x2bc140u: goto label_2bc140;
        case 0x2bc144u: goto label_2bc144;
        case 0x2bc148u: goto label_2bc148;
        case 0x2bc14cu: goto label_2bc14c;
        default: break;
    }

    ctx->pc = 0x2bbc80u;

label_2bbc80:
    // 0x2bbc80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2bbc84:
    // 0x2bbc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bbc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bbc88:
    // 0x2bbc88: 0x878384ec  lh          $v1, -0x7B14($gp)
    ctx->pc = 0x2bbc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbc8c:
    // 0x2bbc8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2bbc90:
    if (ctx->pc == 0x2BBC90u) {
        ctx->pc = 0x2BBC90u;
            // 0x2bbc90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC94u;
        goto label_2bbc94;
    }
    ctx->pc = 0x2BBC8Cu;
    {
        const bool branch_taken_0x2bbc8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2BBC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC8Cu;
            // 0x2bbc90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc8c) {
            ctx->pc = 0x2BBC9Cu;
            goto label_2bbc9c;
        }
    }
    ctx->pc = 0x2BBC94u;
label_2bbc94:
    // 0x2bbc94: 0x1000012c  b           . + 4 + (0x12C << 2)
label_2bbc98:
    if (ctx->pc == 0x2BBC98u) {
        ctx->pc = 0x2BBC98u;
            // 0x2bbc98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2BBC9Cu;
        goto label_2bbc9c;
    }
    ctx->pc = 0x2BBC94u;
    {
        const bool branch_taken_0x2bbc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC94u;
            // 0x2bbc98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc94) {
            ctx->pc = 0x2BC148u;
            goto label_2bc148;
        }
    }
    ctx->pc = 0x2BBC9Cu;
label_2bbc9c:
    // 0x2bbc9c: 0x87829c18  lh          $v0, -0x63E8($gp)
    ctx->pc = 0x2bbc9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941720)));
label_2bbca0:
    // 0x2bbca0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bbca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2bbca4:
    // 0x2bbca4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2bbca8:
    if (ctx->pc == 0x2BBCA8u) {
        ctx->pc = 0x2BBCA8u;
            // 0x2bbca8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BBCACu;
        goto label_2bbcac;
    }
    ctx->pc = 0x2BBCA4u;
    {
        const bool branch_taken_0x2bbca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCA4u;
            // 0x2bbca8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbca4) {
            ctx->pc = 0x2BBCE8u;
            goto label_2bbce8;
        }
    }
    ctx->pc = 0x2BBCACu;
label_2bbcac:
    // 0x2bbcac: 0xc08f8c8  jal         func_23E320
label_2bbcb0:
    if (ctx->pc == 0x2BBCB0u) {
        ctx->pc = 0x2BBCB0u;
            // 0x2bbcb0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2BBCB4u;
        goto label_2bbcb4;
    }
    ctx->pc = 0x2BBCACu;
    SET_GPR_U32(ctx, 31, 0x2BBCB4u);
    ctx->pc = 0x2BBCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCACu;
            // 0x2bbcb0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCB4u; }
        if (ctx->pc != 0x2BBCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCB4u; }
        if (ctx->pc != 0x2BBCB4u) { return; }
    }
    ctx->pc = 0x2BBCB4u;
label_2bbcb4:
    // 0x2bbcb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2bbcb8:
    if (ctx->pc == 0x2BBCB8u) {
        ctx->pc = 0x2BBCB8u;
            // 0x2bbcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCBCu;
        goto label_2bbcbc;
    }
    ctx->pc = 0x2BBCB4u;
    {
        const bool branch_taken_0x2bbcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCB4u;
            // 0x2bbcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcb4) {
            ctx->pc = 0x2BBCE0u;
            goto label_2bbce0;
        }
    }
    ctx->pc = 0x2BBCBCu;
label_2bbcbc:
    // 0x2bbcbc: 0xc094274  jal         func_2509D0
label_2bbcc0:
    if (ctx->pc == 0x2BBCC0u) {
        ctx->pc = 0x2BBCC0u;
            // 0x2bbcc0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BBCC4u;
        goto label_2bbcc4;
    }
    ctx->pc = 0x2BBCBCu;
    SET_GPR_U32(ctx, 31, 0x2BBCC4u);
    ctx->pc = 0x2BBCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCBCu;
            // 0x2bbcc0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCC4u; }
        if (ctx->pc != 0x2BBCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCC4u; }
        if (ctx->pc != 0x2BBCC4u) { return; }
    }
    ctx->pc = 0x2BBCC4u;
label_2bbcc4:
    // 0x2bbcc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bbcc8:
    // 0x2bbcc8: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x2bbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2bbccc:
    // 0x2bbccc: 0xa78284ec  sh          $v0, -0x7B14($gp)
    ctx->pc = 0x2bbcccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935788), (uint16_t)GPR_U32(ctx, 2));
label_2bbcd0:
    // 0x2bbcd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bbcd4:
    // 0x2bbcd4: 0xaf839c0c  sw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bbcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 3));
label_2bbcd8:
    // 0x2bbcd8: 0x1000011a  b           . + 4 + (0x11A << 2)
label_2bbcdc:
    if (ctx->pc == 0x2BBCDCu) {
        ctx->pc = 0x2BBCDCu;
            // 0x2bbcdc: 0xaf829c10  sw          $v0, -0x63F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941712), GPR_U32(ctx, 2));
        ctx->pc = 0x2BBCE0u;
        goto label_2bbce0;
    }
    ctx->pc = 0x2BBCD8u;
    {
        const bool branch_taken_0x2bbcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCD8u;
            // 0x2bbcdc: 0xaf829c10  sw          $v0, -0x63F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcd8) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBCE0u;
label_2bbce0:
    // 0x2bbce0: 0x10000118  b           . + 4 + (0x118 << 2)
label_2bbce4:
    if (ctx->pc == 0x2BBCE4u) {
        ctx->pc = 0x2BBCE8u;
        goto label_2bbce8;
    }
    ctx->pc = 0x2BBCE0u;
    {
        const bool branch_taken_0x2bbce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbce0) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBCE8u;
label_2bbce8:
    // 0x2bbce8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2bbcec:
    if (ctx->pc == 0x2BBCECu) {
        ctx->pc = 0x2BBCF0u;
        goto label_2bbcf0;
    }
    ctx->pc = 0x2BBCE8u;
    {
        const bool branch_taken_0x2bbce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbce8) {
            ctx->pc = 0x2BBD04u;
            goto label_2bbd04;
        }
    }
    ctx->pc = 0x2BBCF0u;
label_2bbcf0:
    // 0x2bbcf0: 0x878284f0  lh          $v0, -0x7B10($gp)
    ctx->pc = 0x2bbcf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935792)));
label_2bbcf4:
    // 0x2bbcf4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2bbcf8:
    if (ctx->pc == 0x2BBCF8u) {
        ctx->pc = 0x2BBCF8u;
            // 0x2bbcf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BBCFCu;
        goto label_2bbcfc;
    }
    ctx->pc = 0x2BBCF4u;
    {
        const bool branch_taken_0x2bbcf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BBCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCF4u;
            // 0x2bbcf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcf4) {
            ctx->pc = 0x2BBD04u;
            goto label_2bbd04;
        }
    }
    ctx->pc = 0x2BBCFCu;
label_2bbcfc:
    // 0x2bbcfc: 0x10000111  b           . + 4 + (0x111 << 2)
label_2bbd00:
    if (ctx->pc == 0x2BBD00u) {
        ctx->pc = 0x2BBD04u;
        goto label_2bbd04;
    }
    ctx->pc = 0x2BBCFCu;
    {
        const bool branch_taken_0x2bbcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbcfc) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBD04u;
label_2bbd04:
    // 0x2bbd04: 0x8f829c04  lw          $v0, -0x63FC($gp)
    ctx->pc = 0x2bbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bbd08:
    // 0x2bbd08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bbd0c:
    if (ctx->pc == 0x2BBD0Cu) {
        ctx->pc = 0x2BBD0Cu;
            // 0x2bbd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD10u;
        goto label_2bbd10;
    }
    ctx->pc = 0x2BBD08u;
    {
        const bool branch_taken_0x2bbd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD08u;
            // 0x2bbd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd08) {
            ctx->pc = 0x2BBD18u;
            goto label_2bbd18;
        }
    }
    ctx->pc = 0x2BBD10u;
label_2bbd10:
    // 0x2bbd10: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2bbd14:
    if (ctx->pc == 0x2BBD14u) {
        ctx->pc = 0x2BBD18u;
        goto label_2bbd18;
    }
    ctx->pc = 0x2BBD10u;
    {
        const bool branch_taken_0x2bbd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd10) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBD18u;
label_2bbd18:
    // 0x2bbd18: 0xc052334  jal         func_148CD0
label_2bbd1c:
    if (ctx->pc == 0x2BBD1Cu) {
        ctx->pc = 0x2BBD20u;
        goto label_2bbd20;
    }
    ctx->pc = 0x2BBD18u;
    SET_GPR_U32(ctx, 31, 0x2BBD20u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD20u; }
        if (ctx->pc != 0x2BBD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD20u; }
        if (ctx->pc != 0x2BBD20u) { return; }
    }
    ctx->pc = 0x2BBD20u;
label_2bbd20:
    // 0x2bbd20: 0xc05239c  jal         func_148E70
label_2bbd24:
    if (ctx->pc == 0x2BBD24u) {
        ctx->pc = 0x2BBD28u;
        goto label_2bbd28;
    }
    ctx->pc = 0x2BBD20u;
    SET_GPR_U32(ctx, 31, 0x2BBD28u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD28u; }
        if (ctx->pc != 0x2BBD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD28u; }
        if (ctx->pc != 0x2BBD28u) { return; }
    }
    ctx->pc = 0x2BBD28u;
label_2bbd28:
    // 0x2bbd28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bbd2c:
    if (ctx->pc == 0x2BBD2Cu) {
        ctx->pc = 0x2BBD2Cu;
            // 0x2bbd2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBD30u;
        goto label_2bbd30;
    }
    ctx->pc = 0x2BBD28u;
    {
        const bool branch_taken_0x2bbd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD28u;
            // 0x2bbd2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd28) {
            ctx->pc = 0x2BBD38u;
            goto label_2bbd38;
        }
    }
    ctx->pc = 0x2BBD30u;
label_2bbd30:
    // 0x2bbd30: 0x10000104  b           . + 4 + (0x104 << 2)
label_2bbd34:
    if (ctx->pc == 0x2BBD34u) {
        ctx->pc = 0x2BBD38u;
        goto label_2bbd38;
    }
    ctx->pc = 0x2BBD30u;
    {
        const bool branch_taken_0x2bbd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd30) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBD38u;
label_2bbd38:
    // 0x2bbd38: 0x87859c00  lh          $a1, -0x6400($gp)
    ctx->pc = 0x2bbd38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941696)));
label_2bbd3c:
    // 0x2bbd3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bbd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbd40:
    // 0x2bbd40: 0x10a400fd  beq         $a1, $a0, . + 4 + (0xFD << 2)
label_2bbd44:
    if (ctx->pc == 0x2BBD44u) {
        ctx->pc = 0x2BBD44u;
            // 0x2bbd44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BBD48u;
        goto label_2bbd48;
    }
    ctx->pc = 0x2BBD40u;
    {
        const bool branch_taken_0x2bbd40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BBD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD40u;
            // 0x2bbd44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd40) {
            ctx->pc = 0x2BC138u;
            goto label_2bc138;
        }
    }
    ctx->pc = 0x2BBD48u;
label_2bbd48:
    // 0x2bbd48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bbd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bbd4c:
    // 0x2bbd4c: 0x10a200b6  beq         $a1, $v0, . + 4 + (0xB6 << 2)
label_2bbd50:
    if (ctx->pc == 0x2BBD50u) {
        ctx->pc = 0x2BBD50u;
            // 0x2bbd50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBD54u;
        goto label_2bbd54;
    }
    ctx->pc = 0x2BBD4Cu;
    {
        const bool branch_taken_0x2bbd4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD4Cu;
            // 0x2bbd50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd4c) {
            ctx->pc = 0x2BC028u;
            goto label_2bc028;
        }
    }
    ctx->pc = 0x2BBD54u;
label_2bbd54:
    // 0x2bbd54: 0x10a30035  beq         $a1, $v1, . + 4 + (0x35 << 2)
label_2bbd58:
    if (ctx->pc == 0x2BBD58u) {
        ctx->pc = 0x2BBD5Cu;
        goto label_2bbd5c;
    }
    ctx->pc = 0x2BBD54u;
    {
        const bool branch_taken_0x2bbd54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bbd54) {
            ctx->pc = 0x2BBE2Cu;
            goto label_2bbe2c;
        }
    }
    ctx->pc = 0x2BBD5Cu;
label_2bbd5c:
    // 0x2bbd5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2bbd60:
    if (ctx->pc == 0x2BBD60u) {
        ctx->pc = 0x2BBD64u;
        goto label_2bbd64;
    }
    ctx->pc = 0x2BBD5Cu;
    {
        const bool branch_taken_0x2bbd5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd5c) {
            ctx->pc = 0x2BBD6Cu;
            goto label_2bbd6c;
        }
    }
    ctx->pc = 0x2BBD64u;
label_2bbd64:
    // 0x2bbd64: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_2bbd68:
    if (ctx->pc == 0x2BBD68u) {
        ctx->pc = 0x2BBD68u;
            // 0x2bbd68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBD6Cu;
        goto label_2bbd6c;
    }
    ctx->pc = 0x2BBD64u;
    {
        const bool branch_taken_0x2bbd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD64u;
            // 0x2bbd68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd64) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBD6Cu;
label_2bbd6c:
    // 0x2bbd6c: 0x878784ec  lh          $a3, -0x7B14($gp)
    ctx->pc = 0x2bbd6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbd70:
    // 0x2bbd70: 0x10e40014  beq         $a3, $a0, . + 4 + (0x14 << 2)
label_2bbd74:
    if (ctx->pc == 0x2BBD74u) {
        ctx->pc = 0x2BBD78u;
        goto label_2bbd78;
    }
    ctx->pc = 0x2BBD70u;
    {
        const bool branch_taken_0x2bbd70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bbd70) {
            ctx->pc = 0x2BBDC4u;
            goto label_2bbdc4;
        }
    }
    ctx->pc = 0x2BBD78u;
label_2bbd78:
    // 0x2bbd78: 0x10e20028  beq         $a3, $v0, . + 4 + (0x28 << 2)
label_2bbd7c:
    if (ctx->pc == 0x2BBD7Cu) {
        ctx->pc = 0x2BBD80u;
        goto label_2bbd80;
    }
    ctx->pc = 0x2BBD78u;
    {
        const bool branch_taken_0x2bbd78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbd78) {
            ctx->pc = 0x2BBE1Cu;
            goto label_2bbe1c;
        }
    }
    ctx->pc = 0x2BBD80u;
label_2bbd80:
    // 0x2bbd80: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
label_2bbd84:
    if (ctx->pc == 0x2BBD84u) {
        ctx->pc = 0x2BBD84u;
            // 0x2bbd84: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBD88u;
        goto label_2bbd88;
    }
    ctx->pc = 0x2BBD80u;
    {
        const bool branch_taken_0x2bbd80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD80u;
            // 0x2bbd84: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd80) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBD88u;
label_2bbd88:
    // 0x2bbd88: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_2bbd8c:
    if (ctx->pc == 0x2BBD8Cu) {
        ctx->pc = 0x2BBD90u;
        goto label_2bbd90;
    }
    ctx->pc = 0x2BBD88u;
    {
        const bool branch_taken_0x2bbd88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd88) {
            ctx->pc = 0x2BBD98u;
            goto label_2bbd98;
        }
    }
    ctx->pc = 0x2BBD90u;
label_2bbd90:
    // 0x2bbd90: 0x10000023  b           . + 4 + (0x23 << 2)
label_2bbd94:
    if (ctx->pc == 0x2BBD94u) {
        ctx->pc = 0x2BBD94u;
            // 0x2bbd94: 0x87829c00  lh          $v0, -0x6400($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941696)));
        ctx->pc = 0x2BBD98u;
        goto label_2bbd98;
    }
    ctx->pc = 0x2BBD90u;
    {
        const bool branch_taken_0x2bbd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD90u;
            // 0x2bbd94: 0x87829c00  lh          $v0, -0x6400($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd90) {
            ctx->pc = 0x2BBE20u;
            goto label_2bbe20;
        }
    }
    ctx->pc = 0x2BBD98u;
label_2bbd98:
    // 0x2bbd98: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bbd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bbd9c:
    // 0x2bbd9c: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x2bbd9cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2bbda0:
    // 0x2bbda0: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2bbda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2bbda4:
    // 0x2bbda4: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bbda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bbda8:
    // 0x2bbda8: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2bbda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_2bbdac:
    // 0x2bbdac: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2bbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2bbdb0:
    // 0x2bbdb0: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2bbdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_2bbdb4:
    // 0x2bbdb4: 0xc0ae634  jal         func_2B98D0
label_2bbdb8:
    if (ctx->pc == 0x2BBDB8u) {
        ctx->pc = 0x2BBDB8u;
            // 0x2bbdb8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BBDBCu;
        goto label_2bbdbc;
    }
    ctx->pc = 0x2BBDB4u;
    SET_GPR_U32(ctx, 31, 0x2BBDBCu);
    ctx->pc = 0x2BBDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDB4u;
            // 0x2bbdb8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDBCu; }
        if (ctx->pc != 0x2BBDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDBCu; }
        if (ctx->pc != 0x2BBDBCu) { return; }
    }
    ctx->pc = 0x2BBDBCu;
label_2bbdbc:
    // 0x2bbdbc: 0x10000017  b           . + 4 + (0x17 << 2)
label_2bbdc0:
    if (ctx->pc == 0x2BBDC0u) {
        ctx->pc = 0x2BBDC4u;
        goto label_2bbdc4;
    }
    ctx->pc = 0x2BBDBCu;
    {
        const bool branch_taken_0x2bbdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbdbc) {
            ctx->pc = 0x2BBE1Cu;
            goto label_2bbe1c;
        }
    }
    ctx->pc = 0x2BBDC4u;
label_2bbdc4:
    // 0x2bbdc4: 0x878384f0  lh          $v1, -0x7B10($gp)
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935792)));
label_2bbdc8:
    // 0x2bbdc8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2bbdcc:
    if (ctx->pc == 0x2BBDCCu) {
        ctx->pc = 0x2BBDCCu;
            // 0x2bbdcc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBDD0u;
        goto label_2bbdd0;
    }
    ctx->pc = 0x2BBDC8u;
    {
        const bool branch_taken_0x2bbdc8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2BBDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDC8u;
            // 0x2bbdcc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbdc8) {
            ctx->pc = 0x2BBDD8u;
            goto label_2bbdd8;
        }
    }
    ctx->pc = 0x2BBDD0u;
label_2bbdd0:
    // 0x2bbdd0: 0x100000dc  b           . + 4 + (0xDC << 2)
label_2bbdd4:
    if (ctx->pc == 0x2BBDD4u) {
        ctx->pc = 0x2BBDD8u;
        goto label_2bbdd8;
    }
    ctx->pc = 0x2BBDD0u;
    {
        const bool branch_taken_0x2bbdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbdd0) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BBDD8u;
label_2bbdd8:
    // 0x2bbdd8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bbddc:
    // 0x2bbddc: 0x8427d5fc  lh          $a3, -0x2A04($at)
    ctx->pc = 0x2bbddcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2bbde0:
    // 0x2bbde0: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bbde4:
    // 0x2bbde4: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2bbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_2bbde8:
    // 0x2bbde8: 0x24a5caa0  addiu       $a1, $a1, -0x3560
    ctx->pc = 0x2bbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
label_2bbdec:
    // 0x2bbdec: 0xc0aec40  jal         func_2BB100
label_2bbdf0:
    if (ctx->pc == 0x2BBDF0u) {
        ctx->pc = 0x2BBDF0u;
            // 0x2bbdf0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BBDF4u;
        goto label_2bbdf4;
    }
    ctx->pc = 0x2BBDECu;
    SET_GPR_U32(ctx, 31, 0x2BBDF4u);
    ctx->pc = 0x2BBDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDECu;
            // 0x2bbdf0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB100u;
    if (runtime->hasFunction(0x2BB100u)) {
        auto targetFn = runtime->lookupFunction(0x2BB100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDF4u; }
        if (ctx->pc != 0x2BBDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii_0x2bb100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDF4u; }
        if (ctx->pc != 0x2BBDF4u) { return; }
    }
    ctx->pc = 0x2BBDF4u;
label_2bbdf4:
    // 0x2bbdf4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbdf8:
    // 0x2bbdf8: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2bbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_2bbdfc:
    // 0x2bbdfc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbe00:
    // 0x2bbe00: 0xc052330  jal         func_148CC0
label_2bbe04:
    if (ctx->pc == 0x2BBE04u) {
        ctx->pc = 0x2BBE04u;
            // 0x2bbe04: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->pc = 0x2BBE08u;
        goto label_2bbe08;
    }
    ctx->pc = 0x2BBE00u;
    SET_GPR_U32(ctx, 31, 0x2BBE08u);
    ctx->pc = 0x2BBE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE00u;
            // 0x2bbe04: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE08u; }
        if (ctx->pc != 0x2BBE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE08u; }
        if (ctx->pc != 0x2BBE08u) { return; }
    }
    ctx->pc = 0x2BBE08u;
label_2bbe08:
    // 0x2bbe08: 0x878584f0  lh          $a1, -0x7B10($gp)
    ctx->pc = 0x2bbe08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935792)));
label_2bbe0c:
    // 0x2bbe0c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bbe10:
    // 0x2bbe10: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bbe14:
    // 0x2bbe14: 0xc0ad8d0  jal         func_2B6340
label_2bbe18:
    if (ctx->pc == 0x2BBE18u) {
        ctx->pc = 0x2BBE18u;
            // 0x2bbe18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBE1Cu;
        goto label_2bbe1c;
    }
    ctx->pc = 0x2BBE14u;
    SET_GPR_U32(ctx, 31, 0x2BBE1Cu);
    ctx->pc = 0x2BBE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE14u;
            // 0x2bbe18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6340u;
    if (runtime->hasFunction(0x2B6340u)) {
        auto targetFn = runtime->lookupFunction(0x2B6340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE1Cu; }
        if (ctx->pc != 0x2BBE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterEffectRead__FP9mgCMemoryii_0x2b6340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE1Cu; }
        if (ctx->pc != 0x2BBE1Cu) { return; }
    }
    ctx->pc = 0x2BBE1Cu;
label_2bbe1c:
    // 0x2bbe1c: 0x87829c00  lh          $v0, -0x6400($gp)
    ctx->pc = 0x2bbe1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941696)));
label_2bbe20:
    // 0x2bbe20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bbe24:
    // 0x2bbe24: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_2bbe28:
    if (ctx->pc == 0x2BBE28u) {
        ctx->pc = 0x2BBE28u;
            // 0x2bbe28: 0xa7829c00  sh          $v0, -0x6400($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BBE2Cu;
        goto label_2bbe2c;
    }
    ctx->pc = 0x2BBE24u;
    {
        const bool branch_taken_0x2bbe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE24u;
            // 0x2bbe28: 0xa7829c00  sh          $v0, -0x6400($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe24) {
            ctx->pc = 0x2BC140u;
            goto label_2bc140;
        }
    }
    ctx->pc = 0x2BBE2Cu;
label_2bbe2c:
    // 0x2bbe2c: 0x878784ec  lh          $a3, -0x7B14($gp)
    ctx->pc = 0x2bbe2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbe30:
    // 0x2bbe30: 0x10e4001f  beq         $a3, $a0, . + 4 + (0x1F << 2)
label_2bbe34:
    if (ctx->pc == 0x2BBE34u) {
        ctx->pc = 0x2BBE34u;
            // 0x2bbe34: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBE38u;
        goto label_2bbe38;
    }
    ctx->pc = 0x2BBE30u;
    {
        const bool branch_taken_0x2bbe30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BBE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE30u;
            // 0x2bbe34: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe30) {
            ctx->pc = 0x2BBEB0u;
            goto label_2bbeb0;
        }
    }
    ctx->pc = 0x2BBE38u;
label_2bbe38:
    // 0x2bbe38: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
label_2bbe3c:
    if (ctx->pc == 0x2BBE3Cu) {
        ctx->pc = 0x2BBE3Cu;
            // 0x2bbe3c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBE40u;
        goto label_2bbe40;
    }
    ctx->pc = 0x2BBE38u;
    {
        const bool branch_taken_0x2bbe38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE38u;
            // 0x2bbe3c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe38) {
            ctx->pc = 0x2BBE84u;
            goto label_2bbe84;
        }
    }
    ctx->pc = 0x2BBE40u;
label_2bbe40:
    // 0x2bbe40: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
label_2bbe44:
    if (ctx->pc == 0x2BBE44u) {
        ctx->pc = 0x2BBE44u;
            // 0x2bbe44: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBE48u;
        goto label_2bbe48;
    }
    ctx->pc = 0x2BBE40u;
    {
        const bool branch_taken_0x2bbe40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE40u;
            // 0x2bbe44: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe40) {
            ctx->pc = 0x2BBE58u;
            goto label_2bbe58;
        }
    }
    ctx->pc = 0x2BBE48u;
label_2bbe48:
    // 0x2bbe48: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_2bbe4c:
    if (ctx->pc == 0x2BBE4Cu) {
        ctx->pc = 0x2BBE50u;
        goto label_2bbe50;
    }
    ctx->pc = 0x2BBE48u;
    {
        const bool branch_taken_0x2bbe48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe48) {
            ctx->pc = 0x2BBE58u;
            goto label_2bbe58;
        }
    }
    ctx->pc = 0x2BBE50u;
label_2bbe50:
    // 0x2bbe50: 0x10000027  b           . + 4 + (0x27 << 2)
label_2bbe54:
    if (ctx->pc == 0x2BBE54u) {
        ctx->pc = 0x2BBE54u;
            // 0x2bbe54: 0x8f849c04  lw          $a0, -0x63FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
        ctx->pc = 0x2BBE58u;
        goto label_2bbe58;
    }
    ctx->pc = 0x2BBE50u;
    {
        const bool branch_taken_0x2bbe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE50u;
            // 0x2bbe54: 0x8f849c04  lw          $a0, -0x63FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe50) {
            ctx->pc = 0x2BBEF0u;
            goto label_2bbef0;
        }
    }
    ctx->pc = 0x2BBE58u;
label_2bbe58:
    // 0x2bbe58: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bbe5c:
    // 0x2bbe5c: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x2bbe5cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2bbe60:
    // 0x2bbe60: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2bbe60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2bbe64:
    // 0x2bbe64: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bbe64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bbe68:
    // 0x2bbe68: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_2bbe6c:
    // 0x2bbe6c: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2bbe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2bbe70:
    // 0x2bbe70: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2bbe70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_2bbe74:
    // 0x2bbe74: 0xc0ae634  jal         func_2B98D0
label_2bbe78:
    if (ctx->pc == 0x2BBE78u) {
        ctx->pc = 0x2BBE78u;
            // 0x2bbe78: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BBE7Cu;
        goto label_2bbe7c;
    }
    ctx->pc = 0x2BBE74u;
    SET_GPR_U32(ctx, 31, 0x2BBE7Cu);
    ctx->pc = 0x2BBE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE74u;
            // 0x2bbe78: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE7Cu; }
        if (ctx->pc != 0x2BBE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE7Cu; }
        if (ctx->pc != 0x2BBE7Cu) { return; }
    }
    ctx->pc = 0x2BBE7Cu;
label_2bbe7c:
    // 0x2bbe7c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2bbe80:
    if (ctx->pc == 0x2BBE80u) {
        ctx->pc = 0x2BBE84u;
        goto label_2bbe84;
    }
    ctx->pc = 0x2BBE7Cu;
    {
        const bool branch_taken_0x2bbe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe7c) {
            ctx->pc = 0x2BBEECu;
            goto label_2bbeec;
        }
    }
    ctx->pc = 0x2BBE84u;
label_2bbe84:
    // 0x2bbe84: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bbe88:
    // 0x2bbe88: 0x8428d5fc  lh          $t0, -0x2A04($at)
    ctx->pc = 0x2bbe88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2bbe8c:
    // 0x2bbe8c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2bbe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2bbe90:
    // 0x2bbe90: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bbe90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bbe94:
    // 0x2bbe94: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2bbe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_2bbe98:
    // 0x2bbe98: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2bbe9c:
    // 0x2bbe9c: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2bbe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_2bbea0:
    // 0x2bbea0: 0xc0ae9a4  jal         func_2BA690
label_2bbea4:
    if (ctx->pc == 0x2BBEA4u) {
        ctx->pc = 0x2BBEA4u;
            // 0x2bbea4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BBEA8u;
        goto label_2bbea8;
    }
    ctx->pc = 0x2BBEA0u;
    SET_GPR_U32(ctx, 31, 0x2BBEA8u);
    ctx->pc = 0x2BBEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEA0u;
            // 0x2bbea4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA690u;
    if (runtime->hasFunction(0x2BA690u)) {
        auto targetFn = runtime->lookupFunction(0x2BA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBEA8u; }
        if (ctx->pc != 0x2BBEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaii_0x2ba690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBEA8u; }
        if (ctx->pc != 0x2BBEA8u) { return; }
    }
    ctx->pc = 0x2BBEA8u;
label_2bbea8:
    // 0x2bbea8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2bbeac:
    if (ctx->pc == 0x2BBEACu) {
        ctx->pc = 0x2BBEB0u;
        goto label_2bbeb0;
    }
    ctx->pc = 0x2BBEA8u;
    {
        const bool branch_taken_0x2bbea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbea8) {
            ctx->pc = 0x2BBEECu;
            goto label_2bbeec;
        }
    }
    ctx->pc = 0x2BBEB0u;
label_2bbeb0:
    // 0x2bbeb0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2bbeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2bbeb4:
    // 0x2bbeb4: 0xc04e748  jal         func_139D20
label_2bbeb8:
    if (ctx->pc == 0x2BBEB8u) {
        ctx->pc = 0x2BBEB8u;
            // 0x2bbeb8: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->pc = 0x2BBEBCu;
        goto label_2bbebc;
    }
    ctx->pc = 0x2BBEB4u;
    SET_GPR_U32(ctx, 31, 0x2BBEBCu);
    ctx->pc = 0x2BBEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEB4u;
            // 0x2bbeb8: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBEBCu; }
        if (ctx->pc != 0x2BBEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBEBCu; }
        if (ctx->pc != 0x2BBEBCu) { return; }
    }
    ctx->pc = 0x2BBEBCu;
label_2bbebc:
    // 0x2bbebc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbec0:
    // 0x2bbec0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2bbec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2bbec4:
    // 0x2bbec4: 0x8c23dc18  lw          $v1, -0x23E8($at)
    ctx->pc = 0x2bbec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958104)));
label_2bbec8:
    // 0x2bbec8: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x2bbec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_2bbecc:
    // 0x2bbecc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbed0:
    // 0x2bbed0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2bbed4:
    // 0x2bbed4: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x2bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
label_2bbed8:
    // 0x2bbed8: 0x3c01fffd  lui         $at, 0xFFFD
    ctx->pc = 0x2bbed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65533 << 16));
label_2bbedc:
    // 0x2bbedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bbee0:
    // 0x2bbee0: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x2bbee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
label_2bbee4:
    // 0x2bbee4: 0xc0ad954  jal         func_2B6550
label_2bbee8:
    if (ctx->pc == 0x2BBEE8u) {
        ctx->pc = 0x2BBEE8u;
            // 0x2bbee8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x2BBEECu;
        goto label_2bbeec;
    }
    ctx->pc = 0x2BBEE4u;
    SET_GPR_U32(ctx, 31, 0x2BBEECu);
    ctx->pc = 0x2BBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEE4u;
            // 0x2bbee8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6550u;
    if (runtime->hasFunction(0x2B6550u)) {
        auto targetFn = runtime->lookupFunction(0x2B6550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBEECu; }
        if (ctx->pc != 0x2BBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterEffectEnter__FP6CSceneP1i_0x2b6550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBEECu; }
        if (ctx->pc != 0x2BBEECu) { return; }
    }
    ctx->pc = 0x2BBEECu;
label_2bbeec:
    // 0x2bbeec: 0x8f849c04  lw          $a0, -0x63FC($gp)
    ctx->pc = 0x2bbeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bbef0:
    // 0x2bbef0: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bbef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bbef4:
    // 0x2bbef4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bbef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bbef8:
    // 0x2bbef8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2bbef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2bbefc:
    // 0x2bbefc: 0x320f809  jalr        $t9
label_2bbf00:
    if (ctx->pc == 0x2BBF00u) {
        ctx->pc = 0x2BBF00u;
            // 0x2bbf00: 0x24a5d150  addiu       $a1, $a1, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
        ctx->pc = 0x2BBF04u;
        goto label_2bbf04;
    }
    ctx->pc = 0x2BBEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBF04u);
        ctx->pc = 0x2BBF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEFCu;
            // 0x2bbf00: 0x24a5d150  addiu       $a1, $a1, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBF04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF04u; }
            if (ctx->pc != 0x2BBF04u) { return; }
        }
        }
    }
    ctx->pc = 0x2BBF04u;
label_2bbf04:
    // 0x2bbf04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbf08:
    // 0x2bbf08: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2bbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_2bbf0c:
    // 0x2bbf0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbf10:
    // 0x2bbf10: 0xc052330  jal         func_148CC0
label_2bbf14:
    if (ctx->pc == 0x2BBF14u) {
        ctx->pc = 0x2BBF14u;
            // 0x2bbf14: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->pc = 0x2BBF18u;
        goto label_2bbf18;
    }
    ctx->pc = 0x2BBF10u;
    SET_GPR_U32(ctx, 31, 0x2BBF18u);
    ctx->pc = 0x2BBF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF10u;
            // 0x2bbf14: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF18u; }
        if (ctx->pc != 0x2BBF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF18u; }
        if (ctx->pc != 0x2BBF18u) { return; }
    }
    ctx->pc = 0x2BBF18u;
label_2bbf18:
    // 0x2bbf18: 0x878584ec  lh          $a1, -0x7B14($gp)
    ctx->pc = 0x2bbf18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbf1c:
    // 0x2bbf1c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x2bbf1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bbf20:
    // 0x2bbf20: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2bbf24:
    if (ctx->pc == 0x2BBF24u) {
        ctx->pc = 0x2BBF24u;
            // 0x2bbf24: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBF28u;
        goto label_2bbf28;
    }
    ctx->pc = 0x2BBF20u;
    {
        const bool branch_taken_0x2bbf20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF20u;
            // 0x2bbf24: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf20) {
            ctx->pc = 0x2BBF34u;
            goto label_2bbf34;
        }
    }
    ctx->pc = 0x2BBF28u;
label_2bbf28:
    // 0x2bbf28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bbf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbf2c:
    // 0x2bbf2c: 0xc0ae7c8  jal         func_2B9F20
label_2bbf30:
    if (ctx->pc == 0x2BBF30u) {
        ctx->pc = 0x2BBF30u;
            // 0x2bbf30: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->pc = 0x2BBF34u;
        goto label_2bbf34;
    }
    ctx->pc = 0x2BBF2Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF34u);
    ctx->pc = 0x2BBF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF2Cu;
            // 0x2bbf30: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9F20u;
    if (runtime->hasFunction(0x2B9F20u)) {
        auto targetFn = runtime->lookupFunction(0x2B9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF34u; }
        if (ctx->pc != 0x2BBF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF34u; }
        if (ctx->pc != 0x2BBF34u) { return; }
    }
    ctx->pc = 0x2BBF34u;
label_2bbf34:
    // 0x2bbf34: 0x878384ec  lh          $v1, -0x7B14($gp)
    ctx->pc = 0x2bbf34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbf38:
    // 0x2bbf38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bbf3c:
    // 0x2bbf3c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_2bbf40:
    if (ctx->pc == 0x2BBF40u) {
        ctx->pc = 0x2BBF44u;
        goto label_2bbf44;
    }
    ctx->pc = 0x2BBF3Cu;
    {
        const bool branch_taken_0x2bbf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bbf3c) {
            ctx->pc = 0x2BBFCCu;
            goto label_2bbfcc;
        }
    }
    ctx->pc = 0x2BBF44u;
label_2bbf44:
    // 0x2bbf44: 0xc065af8  jal         func_196BE0
label_2bbf48:
    if (ctx->pc == 0x2BBF48u) {
        ctx->pc = 0x2BBF4Cu;
        goto label_2bbf4c;
    }
    ctx->pc = 0x2BBF44u;
    SET_GPR_U32(ctx, 31, 0x2BBF4Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF4Cu; }
        if (ctx->pc != 0x2BBF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF4Cu; }
        if (ctx->pc != 0x2BBF4Cu) { return; }
    }
    ctx->pc = 0x2BBF4Cu;
label_2bbf4c:
    // 0x2bbf4c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2bbf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2bbf50:
    // 0x2bbf50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bbf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbf54:
    // 0x2bbf54: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2bbf54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2bbf58:
    // 0x2bbf58: 0x84244d98  lh          $a0, 0x4D98($at)
    ctx->pc = 0x2bbf58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
label_2bbf5c:
    // 0x2bbf5c: 0xc0ad77c  jal         func_2B5DF0
label_2bbf60:
    if (ctx->pc == 0x2BBF60u) {
        ctx->pc = 0x2BBF60u;
            // 0x2bbf60: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2BBF64u;
        goto label_2bbf64;
    }
    ctx->pc = 0x2BBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF64u);
    ctx->pc = 0x2BBF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF5Cu;
            // 0x2bbf60: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF64u; }
        if (ctx->pc != 0x2BBF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF64u; }
        if (ctx->pc != 0x2BBF64u) { return; }
    }
    ctx->pc = 0x2BBF64u;
label_2bbf64:
    // 0x2bbf64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bbf68:
    // 0x2bbf68: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_2bbf6c:
    if (ctx->pc == 0x2BBF6Cu) {
        ctx->pc = 0x2BBF70u;
        goto label_2bbf70;
    }
    ctx->pc = 0x2BBF68u;
    {
        const bool branch_taken_0x2bbf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bbf68) {
            ctx->pc = 0x2BBFCCu;
            goto label_2bbfcc;
        }
    }
    ctx->pc = 0x2BBF70u;
label_2bbf70:
    // 0x2bbf70: 0xc052330  jal         func_148CC0
label_2bbf74:
    if (ctx->pc == 0x2BBF74u) {
        ctx->pc = 0x2BBF78u;
        goto label_2bbf78;
    }
    ctx->pc = 0x2BBF70u;
    SET_GPR_U32(ctx, 31, 0x2BBF78u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF78u; }
        if (ctx->pc != 0x2BBF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF78u; }
        if (ctx->pc != 0x2BBF78u) { return; }
    }
    ctx->pc = 0x2BBF78u;
label_2bbf78:
    // 0x2bbf78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbf7c:
    // 0x2bbf7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bbf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bbf80:
    // 0x2bbf80: 0x8c23dc14  lw          $v1, -0x23EC($at)
    ctx->pc = 0x2bbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958100)));
label_2bbf84:
    // 0x2bbf84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbf88:
    // 0x2bbf88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bbf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2bbf8c:
    // 0x2bbf8c: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x2bbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
label_2bbf90:
    // 0x2bbf90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bbf94:
    // 0x2bbf94: 0xaf829bdc  sw          $v0, -0x6424($gp)
    ctx->pc = 0x2bbf94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941660), GPR_U32(ctx, 2));
label_2bbf98:
    // 0x2bbf98: 0x8f859bdc  lw          $a1, -0x6424($gp)
    ctx->pc = 0x2bbf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941660)));
label_2bbf9c:
    // 0x2bbf9c: 0xc05224c  jal         func_148930
label_2bbfa0:
    if (ctx->pc == 0x2BBFA0u) {
        ctx->pc = 0x2BBFA0u;
            // 0x2bbfa0: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x2BBFA4u;
        goto label_2bbfa4;
    }
    ctx->pc = 0x2BBF9Cu;
    SET_GPR_U32(ctx, 31, 0x2BBFA4u);
    ctx->pc = 0x2BBFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBF9Cu;
            // 0x2bbfa0: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFA4u; }
        if (ctx->pc != 0x2BBFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFA4u; }
        if (ctx->pc != 0x2BBFA4u) { return; }
    }
    ctx->pc = 0x2BBFA4u;
label_2bbfa4:
    // 0x2bbfa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2bbfa8:
    // 0x2bbfa8: 0x24432800  addiu       $v1, $v0, 0x2800
    ctx->pc = 0x2bbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
label_2bbfac:
    // 0x2bbfac: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2bbfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2bbfb0:
    // 0x2bbfb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bbfb4:
    if (ctx->pc == 0x2BBFB4u) {
        ctx->pc = 0x2BBFB4u;
            // 0x2bbfb4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2BBFB8u;
        goto label_2bbfb8;
    }
    ctx->pc = 0x2BBFB0u;
    {
        const bool branch_taken_0x2bbfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFB0u;
            // 0x2bbfb4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb0) {
            ctx->pc = 0x2BBFC0u;
            goto label_2bbfc0;
        }
    }
    ctx->pc = 0x2BBFB8u;
label_2bbfb8:
    // 0x2bbfb8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2bbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2bbfbc:
    // 0x2bbfbc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bbfc0:
    // 0x2bbfc0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bbfc4:
    // 0x2bbfc4: 0xc04e748  jal         func_139D20
label_2bbfc8:
    if (ctx->pc == 0x2BBFC8u) {
        ctx->pc = 0x2BBFC8u;
            // 0x2bbfc8: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->pc = 0x2BBFCCu;
        goto label_2bbfcc;
    }
    ctx->pc = 0x2BBFC4u;
    SET_GPR_U32(ctx, 31, 0x2BBFCCu);
    ctx->pc = 0x2BBFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFC4u;
            // 0x2bbfc8: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFCCu; }
        if (ctx->pc != 0x2BBFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFCCu; }
        if (ctx->pc != 0x2BBFCCu) { return; }
    }
    ctx->pc = 0x2BBFCCu;
label_2bbfcc:
    // 0x2bbfcc: 0x83829b71  lb          $v0, -0x648F($gp)
    ctx->pc = 0x2bbfccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2bbfd0:
    // 0x2bbfd0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2bbfd4:
    if (ctx->pc == 0x2BBFD4u) {
        ctx->pc = 0x2BBFD8u;
        goto label_2bbfd8;
    }
    ctx->pc = 0x2BBFD0u;
    {
        const bool branch_taken_0x2bbfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbfd0) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BBFD8u;
label_2bbfd8:
    // 0x2bbfd8: 0x878284ec  lh          $v0, -0x7B14($gp)
    ctx->pc = 0x2bbfd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bbfdc:
    // 0x2bbfdc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2bbfdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bbfe0:
    // 0x2bbfe0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_2bbfe4:
    if (ctx->pc == 0x2BBFE4u) {
        ctx->pc = 0x2BBFE4u;
            // 0x2bbfe4: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BBFE8u;
        goto label_2bbfe8;
    }
    ctx->pc = 0x2BBFE0u;
    {
        const bool branch_taken_0x2bbfe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFE0u;
            // 0x2bbfe4: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfe0) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BBFE8u;
label_2bbfe8:
    // 0x2bbfe8: 0xc04e780  jal         func_139E00
label_2bbfec:
    if (ctx->pc == 0x2BBFECu) {
        ctx->pc = 0x2BBFECu;
            // 0x2bbfec: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->pc = 0x2BBFF0u;
        goto label_2bbff0;
    }
    ctx->pc = 0x2BBFE8u;
    SET_GPR_U32(ctx, 31, 0x2BBFF0u);
    ctx->pc = 0x2BBFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBFE8u;
            // 0x2bbfec: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFF0u; }
        if (ctx->pc != 0x2BBFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFF0u; }
        if (ctx->pc != 0x2BBFF0u) { return; }
    }
    ctx->pc = 0x2BBFF0u;
label_2bbff0:
    // 0x2bbff0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bbff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bbff4:
    // 0x2bbff4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2bbff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2bbff8:
    // 0x2bbff8: 0x8c23dc14  lw          $v1, -0x23EC($at)
    ctx->pc = 0x2bbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958100)));
label_2bbffc:
    // 0x2bbffc: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x2bbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
label_2bc000:
    // 0x2bc000: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2bc000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2bc004:
    // 0x2bc004: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bc004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bc008:
    // 0x2bc008: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bc008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2bc00c:
    // 0x2bc00c: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x2bc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
label_2bc010:
    // 0x2bc010: 0xc05224c  jal         func_148930
label_2bc014:
    if (ctx->pc == 0x2BC014u) {
        ctx->pc = 0x2BC014u;
            // 0x2bc014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2BC018u;
        goto label_2bc018;
    }
    ctx->pc = 0x2BC010u;
    SET_GPR_U32(ctx, 31, 0x2BC018u);
    ctx->pc = 0x2BC014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC010u;
            // 0x2bc014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC018u; }
        if (ctx->pc != 0x2BC018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC018u; }
        if (ctx->pc != 0x2BC018u) { return; }
    }
    ctx->pc = 0x2BC018u;
label_2bc018:
    // 0x2bc018: 0x87829c00  lh          $v0, -0x6400($gp)
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941696)));
label_2bc01c:
    // 0x2bc01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bc020:
    // 0x2bc020: 0x10000047  b           . + 4 + (0x47 << 2)
label_2bc024:
    if (ctx->pc == 0x2BC024u) {
        ctx->pc = 0x2BC024u;
            // 0x2bc024: 0xa7829c00  sh          $v0, -0x6400($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BC028u;
        goto label_2bc028;
    }
    ctx->pc = 0x2BC020u;
    {
        const bool branch_taken_0x2bc020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC020u;
            // 0x2bc024: 0xa7829c00  sh          $v0, -0x6400($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc020) {
            ctx->pc = 0x2BC140u;
            goto label_2bc140;
        }
    }
    ctx->pc = 0x2BC028u;
label_2bc028:
    // 0x2bc028: 0x878384ec  lh          $v1, -0x7B14($gp)
    ctx->pc = 0x2bc028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bc02c:
    // 0x2bc02c: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_2bc030:
    if (ctx->pc == 0x2BC030u) {
        ctx->pc = 0x2BC034u;
        goto label_2bc034;
    }
    ctx->pc = 0x2BC02Cu;
    {
        const bool branch_taken_0x2bc02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bc02c) {
            ctx->pc = 0x2BC0ACu;
            goto label_2bc0ac;
        }
    }
    ctx->pc = 0x2BC034u;
label_2bc034:
    // 0x2bc034: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2bc038:
    if (ctx->pc == 0x2BC038u) {
        ctx->pc = 0x2BC038u;
            // 0x2bc038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BC03Cu;
        goto label_2bc03c;
    }
    ctx->pc = 0x2BC034u;
    {
        const bool branch_taken_0x2bc034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC034u;
            // 0x2bc038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc034) {
            ctx->pc = 0x2BC054u;
            goto label_2bc054;
        }
    }
    ctx->pc = 0x2BC03Cu;
label_2bc03c:
    // 0x2bc03c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bc040:
    if (ctx->pc == 0x2BC040u) {
        ctx->pc = 0x2BC044u;
        goto label_2bc044;
    }
    ctx->pc = 0x2BC03Cu;
    {
        const bool branch_taken_0x2bc03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc03c) {
            ctx->pc = 0x2BC054u;
            goto label_2bc054;
        }
    }
    ctx->pc = 0x2BC044u;
label_2bc044:
    // 0x2bc044: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2bc048:
    if (ctx->pc == 0x2BC048u) {
        ctx->pc = 0x2BC04Cu;
        goto label_2bc04c;
    }
    ctx->pc = 0x2BC044u;
    {
        const bool branch_taken_0x2bc044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc044) {
            ctx->pc = 0x2BC054u;
            goto label_2bc054;
        }
    }
    ctx->pc = 0x2BC04Cu;
label_2bc04c:
    // 0x2bc04c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2bc050:
    if (ctx->pc == 0x2BC050u) {
        ctx->pc = 0x2BC050u;
            // 0x2bc050: 0x83829b71  lb          $v0, -0x648F($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
        ctx->pc = 0x2BC054u;
        goto label_2bc054;
    }
    ctx->pc = 0x2BC04Cu;
    {
        const bool branch_taken_0x2bc04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC04Cu;
            // 0x2bc050: 0x83829b71  lb          $v0, -0x648F($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc04c) {
            ctx->pc = 0x2BC0B0u;
            goto label_2bc0b0;
        }
    }
    ctx->pc = 0x2BC054u;
label_2bc054:
    // 0x2bc054: 0x83829b71  lb          $v0, -0x648F($gp)
    ctx->pc = 0x2bc054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2bc058:
    // 0x2bc058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bc058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc05c:
    // 0x2bc05c: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_2bc060:
    if (ctx->pc == 0x2BC060u) {
        ctx->pc = 0x2BC064u;
        goto label_2bc064;
    }
    ctx->pc = 0x2BC05Cu;
    {
        const bool branch_taken_0x2bc05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bc05c) {
            ctx->pc = 0x2BC0ACu;
            goto label_2bc0ac;
        }
    }
    ctx->pc = 0x2BC064u;
label_2bc064:
    // 0x2bc064: 0xc05231c  jal         func_148C70
label_2bc068:
    if (ctx->pc == 0x2BC068u) {
        ctx->pc = 0x2BC06Cu;
        goto label_2bc06c;
    }
    ctx->pc = 0x2BC064u;
    SET_GPR_U32(ctx, 31, 0x2BC06Cu);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC06Cu; }
        if (ctx->pc != 0x2BC06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC06Cu; }
        if (ctx->pc != 0x2BC06Cu) { return; }
    }
    ctx->pc = 0x2BC06Cu;
label_2bc06c:
    // 0x2bc06c: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x2bc06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_2bc070:
    // 0x2bc070: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bc070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2bc074:
    // 0x2bc074: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2bc074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2bc078:
    // 0x2bc078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bc078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc07c:
    // 0x2bc07c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bc07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bc080:
    // 0x2bc080: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2bc080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2bc084:
    // 0x2bc084: 0xc04b6a4  jal         func_12DA90
label_2bc088:
    if (ctx->pc == 0x2BC088u) {
        ctx->pc = 0x2BC088u;
            // 0x2bc088: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC08Cu;
        goto label_2bc08c;
    }
    ctx->pc = 0x2BC084u;
    SET_GPR_U32(ctx, 31, 0x2BC08Cu);
    ctx->pc = 0x2BC088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC084u;
            // 0x2bc088: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC08Cu; }
        if (ctx->pc != 0x2BC08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC08Cu; }
        if (ctx->pc != 0x2BC08Cu) { return; }
    }
    ctx->pc = 0x2BC08Cu;
label_2bc08c:
    // 0x2bc08c: 0x878484ec  lh          $a0, -0x7B14($gp)
    ctx->pc = 0x2bc08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
label_2bc090:
    // 0x2bc090: 0xc08da84  jal         func_236A10
label_2bc094:
    if (ctx->pc == 0x2BC094u) {
        ctx->pc = 0x2BC094u;
            // 0x2bc094: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BC098u;
        goto label_2bc098;
    }
    ctx->pc = 0x2BC090u;
    SET_GPR_U32(ctx, 31, 0x2BC098u);
    ctx->pc = 0x2BC094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC090u;
            // 0x2bc094: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236A10u;
    if (runtime->hasFunction(0x236A10u)) {
        auto targetFn = runtime->lookupFunction(0x236A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC098u; }
        if (ctx->pc != 0x2BC098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyActiveItemAndWeapon__Fii_0x236a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC098u; }
        if (ctx->pc != 0x2BC098u) { return; }
    }
    ctx->pc = 0x2BC098u;
label_2bc098:
    // 0x2bc098: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bc09c:
    // 0x2bc09c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2bc09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2bc0a0:
    // 0x2bc0a0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2bc0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2bc0a4:
    // 0x2bc0a4: 0xc04b950  jal         func_12E540
label_2bc0a8:
    if (ctx->pc == 0x2BC0A8u) {
        ctx->pc = 0x2BC0A8u;
            // 0x2bc0a8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2BC0ACu;
        goto label_2bc0ac;
    }
    ctx->pc = 0x2BC0A4u;
    SET_GPR_U32(ctx, 31, 0x2BC0ACu);
    ctx->pc = 0x2BC0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC0A4u;
            // 0x2bc0a8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0ACu; }
        if (ctx->pc != 0x2BC0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0ACu; }
        if (ctx->pc != 0x2BC0ACu) { return; }
    }
    ctx->pc = 0x2BC0ACu;
label_2bc0ac:
    // 0x2bc0ac: 0x83829b71  lb          $v0, -0x648F($gp)
    ctx->pc = 0x2bc0acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2bc0b0:
    // 0x2bc0b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2bc0b4:
    if (ctx->pc == 0x2BC0B4u) {
        ctx->pc = 0x2BC0B8u;
        goto label_2bc0b8;
    }
    ctx->pc = 0x2BC0B0u;
    {
        const bool branch_taken_0x2bc0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc0b0) {
            ctx->pc = 0x2BC0CCu;
            goto label_2bc0cc;
        }
    }
    ctx->pc = 0x2BC0B8u;
label_2bc0b8:
    // 0x2bc0b8: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x2bc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_2bc0bc:
    // 0x2bc0bc: 0x8f829c04  lw          $v0, -0x63FC($gp)
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bc0c0:
    // 0x2bc0c0: 0xac4307dc  sw          $v1, 0x7DC($v0)
    ctx->pc = 0x2bc0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
label_2bc0c4:
    // 0x2bc0c4: 0xc05c458  jal         func_171160
label_2bc0c8:
    if (ctx->pc == 0x2BC0C8u) {
        ctx->pc = 0x2BC0C8u;
            // 0x2bc0c8: 0x8f849c04  lw          $a0, -0x63FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
        ctx->pc = 0x2BC0CCu;
        goto label_2bc0cc;
    }
    ctx->pc = 0x2BC0C4u;
    SET_GPR_U32(ctx, 31, 0x2BC0CCu);
    ctx->pc = 0x2BC0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC0C4u;
            // 0x2bc0c8: 0x8f849c04  lw          $a0, -0x63FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0CCu; }
        if (ctx->pc != 0x2BC0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0CCu; }
        if (ctx->pc != 0x2BC0CCu) { return; }
    }
    ctx->pc = 0x2BC0CCu;
label_2bc0cc:
    // 0x2bc0cc: 0x8f849c04  lw          $a0, -0x63FC($gp)
    ctx->pc = 0x2bc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bc0d0:
    // 0x2bc0d0: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bc0d4:
    // 0x2bc0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc0d8:
    // 0x2bc0d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2bc0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2bc0dc:
    // 0x2bc0dc: 0x320f809  jalr        $t9
label_2bc0e0:
    if (ctx->pc == 0x2BC0E0u) {
        ctx->pc = 0x2BC0E0u;
            // 0x2bc0e0: 0x24a5d150  addiu       $a1, $a1, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
        ctx->pc = 0x2BC0E4u;
        goto label_2bc0e4;
    }
    ctx->pc = 0x2BC0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC0E4u);
        ctx->pc = 0x2BC0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC0DCu;
            // 0x2bc0e0: 0x24a5d150  addiu       $a1, $a1, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0E4u; }
            if (ctx->pc != 0x2BC0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC0E4u;
label_2bc0e4:
    // 0x2bc0e4: 0x8f849c04  lw          $a0, -0x63FC($gp)
    ctx->pc = 0x2bc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bc0e8:
    // 0x2bc0e8: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bc0ec:
    // 0x2bc0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc0f0:
    // 0x2bc0f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2bc0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2bc0f4:
    // 0x2bc0f4: 0x320f809  jalr        $t9
label_2bc0f8:
    if (ctx->pc == 0x2BC0F8u) {
        ctx->pc = 0x2BC0F8u;
            // 0x2bc0f8: 0x24a5d160  addiu       $a1, $a1, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955360));
        ctx->pc = 0x2BC0FCu;
        goto label_2bc0fc;
    }
    ctx->pc = 0x2BC0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC0FCu);
        ctx->pc = 0x2BC0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC0F4u;
            // 0x2bc0f8: 0x24a5d160  addiu       $a1, $a1, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955360));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0FCu; }
            if (ctx->pc != 0x2BC0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2BC0FCu;
label_2bc0fc:
    // 0x2bc0fc: 0xc06421c  jal         func_190870
label_2bc100:
    if (ctx->pc == 0x2BC100u) {
        ctx->pc = 0x2BC104u;
        goto label_2bc104;
    }
    ctx->pc = 0x2BC0FCu;
    SET_GPR_U32(ctx, 31, 0x2BC104u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC104u; }
        if (ctx->pc != 0x2BC104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC104u; }
        if (ctx->pc != 0x2BC104u) { return; }
    }
    ctx->pc = 0x2BC104u;
label_2bc104:
    // 0x2bc104: 0x8f859c04  lw          $a1, -0x63FC($gp)
    ctx->pc = 0x2bc104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941700)));
label_2bc108:
    // 0x2bc108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc10c:
    // 0x2bc10c: 0xc0ae808  jal         func_2BA020
label_2bc110:
    if (ctx->pc == 0x2BC110u) {
        ctx->pc = 0x2BC110u;
            // 0x2bc110: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BC114u;
        goto label_2bc114;
    }
    ctx->pc = 0x2BC10Cu;
    SET_GPR_U32(ctx, 31, 0x2BC114u);
    ctx->pc = 0x2BC110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC10Cu;
            // 0x2bc110: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (runtime->hasFunction(0x2BA020u)) {
        auto targetFn = runtime->lookupFunction(0x2BA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC114u; }
        if (ctx->pc != 0x2BC114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC114u; }
        if (ctx->pc != 0x2BC114u) { return; }
    }
    ctx->pc = 0x2BC114u;
label_2bc114:
    // 0x2bc114: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2bc114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2bc118:
    // 0x2bc118: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bc118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bc11c:
    // 0x2bc11c: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2bc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_2bc120:
    // 0x2bc120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc124:
    // 0x2bc124: 0x87829c00  lh          $v0, -0x6400($gp)
    ctx->pc = 0x2bc124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941696)));
label_2bc128:
    // 0x2bc128: 0xaf839c10  sw          $v1, -0x63F0($gp)
    ctx->pc = 0x2bc128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941712), GPR_U32(ctx, 3));
label_2bc12c:
    // 0x2bc12c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bc130:
    // 0x2bc130: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bc134:
    if (ctx->pc == 0x2BC134u) {
        ctx->pc = 0x2BC134u;
            // 0x2bc134: 0xa7829c00  sh          $v0, -0x6400($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BC138u;
        goto label_2bc138;
    }
    ctx->pc = 0x2BC130u;
    {
        const bool branch_taken_0x2bc130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC130u;
            // 0x2bc134: 0xa7829c00  sh          $v0, -0x6400($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941696), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc130) {
            ctx->pc = 0x2BC140u;
            goto label_2bc140;
        }
    }
    ctx->pc = 0x2BC138u;
label_2bc138:
    // 0x2bc138: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bc13c:
    if (ctx->pc == 0x2BC13Cu) {
        ctx->pc = 0x2BC140u;
        goto label_2bc140;
    }
    ctx->pc = 0x2BC138u;
    {
        const bool branch_taken_0x2bc138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc138) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BC140u;
label_2bc140:
    // 0x2bc140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc144:
    // 0x2bc144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc148:
    // 0x2bc148: 0x3e00008  jr          $ra
label_2bc14c:
    if (ctx->pc == 0x2BC14Cu) {
        ctx->pc = 0x2BC14Cu;
            // 0x2bc14c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2BC150u;
        goto label_fallthrough_0x2bc148;
    }
    ctx->pc = 0x2BC148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC148u;
            // 0x2bc14c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bc148:
    ctx->pc = 0x2BC150u;
}
