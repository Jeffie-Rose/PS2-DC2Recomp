#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaLight__4CMapFP9mgCObjectP10CFuncPointii
// Address: 0x15dbe0 - 0x15e0ac
void GetCharaLight__4CMapFP9mgCObjectP10CFuncPointii_0x15dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaLight__4CMapFP9mgCObjectP10CFuncPointii_0x15dbe0");
#endif

    switch (ctx->pc) {
        case 0x15dbe0u: goto label_15dbe0;
        case 0x15dbe4u: goto label_15dbe4;
        case 0x15dbe8u: goto label_15dbe8;
        case 0x15dbecu: goto label_15dbec;
        case 0x15dbf0u: goto label_15dbf0;
        case 0x15dbf4u: goto label_15dbf4;
        case 0x15dbf8u: goto label_15dbf8;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc00u: goto label_15dc00;
        case 0x15dc04u: goto label_15dc04;
        case 0x15dc08u: goto label_15dc08;
        case 0x15dc0cu: goto label_15dc0c;
        case 0x15dc10u: goto label_15dc10;
        case 0x15dc14u: goto label_15dc14;
        case 0x15dc18u: goto label_15dc18;
        case 0x15dc1cu: goto label_15dc1c;
        case 0x15dc20u: goto label_15dc20;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc28u: goto label_15dc28;
        case 0x15dc2cu: goto label_15dc2c;
        case 0x15dc30u: goto label_15dc30;
        case 0x15dc34u: goto label_15dc34;
        case 0x15dc38u: goto label_15dc38;
        case 0x15dc3cu: goto label_15dc3c;
        case 0x15dc40u: goto label_15dc40;
        case 0x15dc44u: goto label_15dc44;
        case 0x15dc48u: goto label_15dc48;
        case 0x15dc4cu: goto label_15dc4c;
        case 0x15dc50u: goto label_15dc50;
        case 0x15dc54u: goto label_15dc54;
        case 0x15dc58u: goto label_15dc58;
        case 0x15dc5cu: goto label_15dc5c;
        case 0x15dc60u: goto label_15dc60;
        case 0x15dc64u: goto label_15dc64;
        case 0x15dc68u: goto label_15dc68;
        case 0x15dc6cu: goto label_15dc6c;
        case 0x15dc70u: goto label_15dc70;
        case 0x15dc74u: goto label_15dc74;
        case 0x15dc78u: goto label_15dc78;
        case 0x15dc7cu: goto label_15dc7c;
        case 0x15dc80u: goto label_15dc80;
        case 0x15dc84u: goto label_15dc84;
        case 0x15dc88u: goto label_15dc88;
        case 0x15dc8cu: goto label_15dc8c;
        case 0x15dc90u: goto label_15dc90;
        case 0x15dc94u: goto label_15dc94;
        case 0x15dc98u: goto label_15dc98;
        case 0x15dc9cu: goto label_15dc9c;
        case 0x15dca0u: goto label_15dca0;
        case 0x15dca4u: goto label_15dca4;
        case 0x15dca8u: goto label_15dca8;
        case 0x15dcacu: goto label_15dcac;
        case 0x15dcb0u: goto label_15dcb0;
        case 0x15dcb4u: goto label_15dcb4;
        case 0x15dcb8u: goto label_15dcb8;
        case 0x15dcbcu: goto label_15dcbc;
        case 0x15dcc0u: goto label_15dcc0;
        case 0x15dcc4u: goto label_15dcc4;
        case 0x15dcc8u: goto label_15dcc8;
        case 0x15dcccu: goto label_15dccc;
        case 0x15dcd0u: goto label_15dcd0;
        case 0x15dcd4u: goto label_15dcd4;
        case 0x15dcd8u: goto label_15dcd8;
        case 0x15dcdcu: goto label_15dcdc;
        case 0x15dce0u: goto label_15dce0;
        case 0x15dce4u: goto label_15dce4;
        case 0x15dce8u: goto label_15dce8;
        case 0x15dcecu: goto label_15dcec;
        case 0x15dcf0u: goto label_15dcf0;
        case 0x15dcf4u: goto label_15dcf4;
        case 0x15dcf8u: goto label_15dcf8;
        case 0x15dcfcu: goto label_15dcfc;
        case 0x15dd00u: goto label_15dd00;
        case 0x15dd04u: goto label_15dd04;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd0cu: goto label_15dd0c;
        case 0x15dd10u: goto label_15dd10;
        case 0x15dd14u: goto label_15dd14;
        case 0x15dd18u: goto label_15dd18;
        case 0x15dd1cu: goto label_15dd1c;
        case 0x15dd20u: goto label_15dd20;
        case 0x15dd24u: goto label_15dd24;
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd2cu: goto label_15dd2c;
        case 0x15dd30u: goto label_15dd30;
        case 0x15dd34u: goto label_15dd34;
        case 0x15dd38u: goto label_15dd38;
        case 0x15dd3cu: goto label_15dd3c;
        case 0x15dd40u: goto label_15dd40;
        case 0x15dd44u: goto label_15dd44;
        case 0x15dd48u: goto label_15dd48;
        case 0x15dd4cu: goto label_15dd4c;
        case 0x15dd50u: goto label_15dd50;
        case 0x15dd54u: goto label_15dd54;
        case 0x15dd58u: goto label_15dd58;
        case 0x15dd5cu: goto label_15dd5c;
        case 0x15dd60u: goto label_15dd60;
        case 0x15dd64u: goto label_15dd64;
        case 0x15dd68u: goto label_15dd68;
        case 0x15dd6cu: goto label_15dd6c;
        case 0x15dd70u: goto label_15dd70;
        case 0x15dd74u: goto label_15dd74;
        case 0x15dd78u: goto label_15dd78;
        case 0x15dd7cu: goto label_15dd7c;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd84u: goto label_15dd84;
        case 0x15dd88u: goto label_15dd88;
        case 0x15dd8cu: goto label_15dd8c;
        case 0x15dd90u: goto label_15dd90;
        case 0x15dd94u: goto label_15dd94;
        case 0x15dd98u: goto label_15dd98;
        case 0x15dd9cu: goto label_15dd9c;
        case 0x15dda0u: goto label_15dda0;
        case 0x15dda4u: goto label_15dda4;
        case 0x15dda8u: goto label_15dda8;
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddb0u: goto label_15ddb0;
        case 0x15ddb4u: goto label_15ddb4;
        case 0x15ddb8u: goto label_15ddb8;
        case 0x15ddbcu: goto label_15ddbc;
        case 0x15ddc0u: goto label_15ddc0;
        case 0x15ddc4u: goto label_15ddc4;
        case 0x15ddc8u: goto label_15ddc8;
        case 0x15ddccu: goto label_15ddcc;
        case 0x15ddd0u: goto label_15ddd0;
        case 0x15ddd4u: goto label_15ddd4;
        case 0x15ddd8u: goto label_15ddd8;
        case 0x15dddcu: goto label_15dddc;
        case 0x15dde0u: goto label_15dde0;
        case 0x15dde4u: goto label_15dde4;
        case 0x15dde8u: goto label_15dde8;
        case 0x15ddecu: goto label_15ddec;
        case 0x15ddf0u: goto label_15ddf0;
        case 0x15ddf4u: goto label_15ddf4;
        case 0x15ddf8u: goto label_15ddf8;
        case 0x15ddfcu: goto label_15ddfc;
        case 0x15de00u: goto label_15de00;
        case 0x15de04u: goto label_15de04;
        case 0x15de08u: goto label_15de08;
        case 0x15de0cu: goto label_15de0c;
        case 0x15de10u: goto label_15de10;
        case 0x15de14u: goto label_15de14;
        case 0x15de18u: goto label_15de18;
        case 0x15de1cu: goto label_15de1c;
        case 0x15de20u: goto label_15de20;
        case 0x15de24u: goto label_15de24;
        case 0x15de28u: goto label_15de28;
        case 0x15de2cu: goto label_15de2c;
        case 0x15de30u: goto label_15de30;
        case 0x15de34u: goto label_15de34;
        case 0x15de38u: goto label_15de38;
        case 0x15de3cu: goto label_15de3c;
        case 0x15de40u: goto label_15de40;
        case 0x15de44u: goto label_15de44;
        case 0x15de48u: goto label_15de48;
        case 0x15de4cu: goto label_15de4c;
        case 0x15de50u: goto label_15de50;
        case 0x15de54u: goto label_15de54;
        case 0x15de58u: goto label_15de58;
        case 0x15de5cu: goto label_15de5c;
        case 0x15de60u: goto label_15de60;
        case 0x15de64u: goto label_15de64;
        case 0x15de68u: goto label_15de68;
        case 0x15de6cu: goto label_15de6c;
        case 0x15de70u: goto label_15de70;
        case 0x15de74u: goto label_15de74;
        case 0x15de78u: goto label_15de78;
        case 0x15de7cu: goto label_15de7c;
        case 0x15de80u: goto label_15de80;
        case 0x15de84u: goto label_15de84;
        case 0x15de88u: goto label_15de88;
        case 0x15de8cu: goto label_15de8c;
        case 0x15de90u: goto label_15de90;
        case 0x15de94u: goto label_15de94;
        case 0x15de98u: goto label_15de98;
        case 0x15de9cu: goto label_15de9c;
        case 0x15dea0u: goto label_15dea0;
        case 0x15dea4u: goto label_15dea4;
        case 0x15dea8u: goto label_15dea8;
        case 0x15deacu: goto label_15deac;
        case 0x15deb0u: goto label_15deb0;
        case 0x15deb4u: goto label_15deb4;
        case 0x15deb8u: goto label_15deb8;
        case 0x15debcu: goto label_15debc;
        case 0x15dec0u: goto label_15dec0;
        case 0x15dec4u: goto label_15dec4;
        case 0x15dec8u: goto label_15dec8;
        case 0x15deccu: goto label_15decc;
        case 0x15ded0u: goto label_15ded0;
        case 0x15ded4u: goto label_15ded4;
        case 0x15ded8u: goto label_15ded8;
        case 0x15dedcu: goto label_15dedc;
        case 0x15dee0u: goto label_15dee0;
        case 0x15dee4u: goto label_15dee4;
        case 0x15dee8u: goto label_15dee8;
        case 0x15deecu: goto label_15deec;
        case 0x15def0u: goto label_15def0;
        case 0x15def4u: goto label_15def4;
        case 0x15def8u: goto label_15def8;
        case 0x15defcu: goto label_15defc;
        case 0x15df00u: goto label_15df00;
        case 0x15df04u: goto label_15df04;
        case 0x15df08u: goto label_15df08;
        case 0x15df0cu: goto label_15df0c;
        case 0x15df10u: goto label_15df10;
        case 0x15df14u: goto label_15df14;
        case 0x15df18u: goto label_15df18;
        case 0x15df1cu: goto label_15df1c;
        case 0x15df20u: goto label_15df20;
        case 0x15df24u: goto label_15df24;
        case 0x15df28u: goto label_15df28;
        case 0x15df2cu: goto label_15df2c;
        case 0x15df30u: goto label_15df30;
        case 0x15df34u: goto label_15df34;
        case 0x15df38u: goto label_15df38;
        case 0x15df3cu: goto label_15df3c;
        case 0x15df40u: goto label_15df40;
        case 0x15df44u: goto label_15df44;
        case 0x15df48u: goto label_15df48;
        case 0x15df4cu: goto label_15df4c;
        case 0x15df50u: goto label_15df50;
        case 0x15df54u: goto label_15df54;
        case 0x15df58u: goto label_15df58;
        case 0x15df5cu: goto label_15df5c;
        case 0x15df60u: goto label_15df60;
        case 0x15df64u: goto label_15df64;
        case 0x15df68u: goto label_15df68;
        case 0x15df6cu: goto label_15df6c;
        case 0x15df70u: goto label_15df70;
        case 0x15df74u: goto label_15df74;
        case 0x15df78u: goto label_15df78;
        case 0x15df7cu: goto label_15df7c;
        case 0x15df80u: goto label_15df80;
        case 0x15df84u: goto label_15df84;
        case 0x15df88u: goto label_15df88;
        case 0x15df8cu: goto label_15df8c;
        case 0x15df90u: goto label_15df90;
        case 0x15df94u: goto label_15df94;
        case 0x15df98u: goto label_15df98;
        case 0x15df9cu: goto label_15df9c;
        case 0x15dfa0u: goto label_15dfa0;
        case 0x15dfa4u: goto label_15dfa4;
        case 0x15dfa8u: goto label_15dfa8;
        case 0x15dfacu: goto label_15dfac;
        case 0x15dfb0u: goto label_15dfb0;
        case 0x15dfb4u: goto label_15dfb4;
        case 0x15dfb8u: goto label_15dfb8;
        case 0x15dfbcu: goto label_15dfbc;
        case 0x15dfc0u: goto label_15dfc0;
        case 0x15dfc4u: goto label_15dfc4;
        case 0x15dfc8u: goto label_15dfc8;
        case 0x15dfccu: goto label_15dfcc;
        case 0x15dfd0u: goto label_15dfd0;
        case 0x15dfd4u: goto label_15dfd4;
        case 0x15dfd8u: goto label_15dfd8;
        case 0x15dfdcu: goto label_15dfdc;
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dfe4u: goto label_15dfe4;
        case 0x15dfe8u: goto label_15dfe8;
        case 0x15dfecu: goto label_15dfec;
        case 0x15dff0u: goto label_15dff0;
        case 0x15dff4u: goto label_15dff4;
        case 0x15dff8u: goto label_15dff8;
        case 0x15dffcu: goto label_15dffc;
        case 0x15e000u: goto label_15e000;
        case 0x15e004u: goto label_15e004;
        case 0x15e008u: goto label_15e008;
        case 0x15e00cu: goto label_15e00c;
        case 0x15e010u: goto label_15e010;
        case 0x15e014u: goto label_15e014;
        case 0x15e018u: goto label_15e018;
        case 0x15e01cu: goto label_15e01c;
        case 0x15e020u: goto label_15e020;
        case 0x15e024u: goto label_15e024;
        case 0x15e028u: goto label_15e028;
        case 0x15e02cu: goto label_15e02c;
        case 0x15e030u: goto label_15e030;
        case 0x15e034u: goto label_15e034;
        case 0x15e038u: goto label_15e038;
        case 0x15e03cu: goto label_15e03c;
        case 0x15e040u: goto label_15e040;
        case 0x15e044u: goto label_15e044;
        case 0x15e048u: goto label_15e048;
        case 0x15e04cu: goto label_15e04c;
        case 0x15e050u: goto label_15e050;
        case 0x15e054u: goto label_15e054;
        case 0x15e058u: goto label_15e058;
        case 0x15e05cu: goto label_15e05c;
        case 0x15e060u: goto label_15e060;
        case 0x15e064u: goto label_15e064;
        case 0x15e068u: goto label_15e068;
        case 0x15e06cu: goto label_15e06c;
        case 0x15e070u: goto label_15e070;
        case 0x15e074u: goto label_15e074;
        case 0x15e078u: goto label_15e078;
        case 0x15e07cu: goto label_15e07c;
        case 0x15e080u: goto label_15e080;
        case 0x15e084u: goto label_15e084;
        case 0x15e088u: goto label_15e088;
        case 0x15e08cu: goto label_15e08c;
        case 0x15e090u: goto label_15e090;
        case 0x15e094u: goto label_15e094;
        case 0x15e098u: goto label_15e098;
        case 0x15e09cu: goto label_15e09c;
        case 0x15e0a0u: goto label_15e0a0;
        case 0x15e0a4u: goto label_15e0a4;
        case 0x15e0a8u: goto label_15e0a8;
        default: break;
    }

    ctx->pc = 0x15dbe0u;

label_15dbe0:
    // 0x15dbe0: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_15dbe4:
    // 0x15dbe4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_15dbe8:
    // 0x15dbe8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x15dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_15dbec:
    // 0x15dbec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_15dbf0:
    // 0x15dbf0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x15dbf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15dbf4:
    // 0x15dbf4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_15dbf8:
    // 0x15dbf8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x15dbf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15dbfc:
    // 0x15dbfc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_15dc00:
    // 0x15dc00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15dc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_15dc04:
    // 0x15dc04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15dc04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15dc08:
    // 0x15dc08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15dc0c:
    // 0x15dc0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15dc10:
    // 0x15dc10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15dc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15dc14:
    // 0x15dc14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15dc18:
    // 0x15dc18: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15dc18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15dc1c:
    // 0x15dc1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15dc1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15dc20:
    // 0x15dc20: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
label_15dc24:
    if (ctx->pc == 0x15DC24u) {
        ctx->pc = 0x15DC24u;
            // 0x15dc24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DC28u;
        goto label_15dc28;
    }
    ctx->pc = 0x15DC20u;
    {
        const bool branch_taken_0x15dc20 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x15DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC20u;
            // 0x15dc24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc20) {
            ctx->pc = 0x15DC30u;
            goto label_15dc30;
        }
    }
    ctx->pc = 0x15DC28u;
label_15dc28:
    // 0x15dc28: 0x10000113  b           . + 4 + (0x113 << 2)
label_15dc2c:
    if (ctx->pc == 0x15DC2Cu) {
        ctx->pc = 0x15DC2Cu;
            // 0x15dc2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DC30u;
        goto label_15dc30;
    }
    ctx->pc = 0x15DC28u;
    {
        const bool branch_taken_0x15dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC28u;
            // 0x15dc2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc28) {
            ctx->pc = 0x15E078u;
            goto label_15e078;
        }
    }
    ctx->pc = 0x15DC30u;
label_15dc30:
    // 0x15dc30: 0x27a50518  addiu       $a1, $sp, 0x518
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_15dc34:
    // 0x15dc34: 0xc0575cc  jal         func_15D730
label_15dc38:
    if (ctx->pc == 0x15DC38u) {
        ctx->pc = 0x15DC38u;
            // 0x15dc38: 0xafa00518  sw          $zero, 0x518($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1304), GPR_U32(ctx, 0));
        ctx->pc = 0x15DC3Cu;
        goto label_15dc3c;
    }
    ctx->pc = 0x15DC34u;
    SET_GPR_U32(ctx, 31, 0x15DC3Cu);
    ctx->pc = 0x15DC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC34u;
            // 0x15dc38: 0xafa00518  sw          $zero, 0x518($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC3Cu; }
        if (ctx->pc != 0x15DC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC3Cu; }
        if (ctx->pc != 0x15DC3Cu) { return; }
    }
    ctx->pc = 0x15DC3Cu;
label_15dc3c:
    // 0x15dc3c: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_15dc40:
    // 0x15dc40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15dc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15dc44:
    // 0x15dc44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15dc48:
    // 0x15dc48: 0x320f809  jalr        $t9
label_15dc4c:
    if (ctx->pc == 0x15DC4Cu) {
        ctx->pc = 0x15DC4Cu;
            // 0x15dc4c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15DC50u;
        goto label_15dc50;
    }
    ctx->pc = 0x15DC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15DC50u);
        ctx->pc = 0x15DC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC48u;
            // 0x15dc4c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15DC50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15DC50u; }
            if (ctx->pc != 0x15DC50u) { return; }
        }
        }
    }
    ctx->pc = 0x15DC50u;
label_15dc50:
    // 0x15dc50: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_15dc54:
    // 0x15dc54: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15dc54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc58:
    // 0x15dc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15dc5c:
    // 0x15dc5c: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_15dc60:
    // 0x15dc60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_15dc64:
    // 0x15dc64: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x15dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15dc68:
    // 0x15dc68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15dc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_15dc6c:
    // 0x15dc6c: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
label_15dc70:
    if (ctx->pc == 0x15DC70u) {
        ctx->pc = 0x15DC70u;
            // 0x15dc70: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x15DC74u;
        goto label_15dc74;
    }
    ctx->pc = 0x15DC6Cu;
    {
        const bool branch_taken_0x15dc6c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC6Cu;
            // 0x15dc70: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc6c) {
            ctx->pc = 0x15DC78u;
            goto label_15dc78;
        }
    }
    ctx->pc = 0x15DC74u;
label_15dc74:
    // 0x15dc74: 0x36d60002  ori         $s6, $s6, 0x2
    ctx->pc = 0x15dc74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2);
label_15dc78:
    // 0x15dc78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15dc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc7c:
    // 0x15dc7c: 0x26040cb0  addiu       $a0, $s0, 0xCB0
    ctx->pc = 0x15dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3248));
label_15dc80:
    // 0x15dc80: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x15dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_15dc84:
    // 0x15dc84: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15dc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15dc88:
    // 0x15dc88: 0x27a80518  addiu       $t0, $sp, 0x518
    ctx->pc = 0x15dc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_15dc8c:
    // 0x15dc8c: 0xc0a7668  jal         func_29D9A0
label_15dc90:
    if (ctx->pc == 0x15DC90u) {
        ctx->pc = 0x15DC90u;
            // 0x15dc90: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DC94u;
        goto label_15dc94;
    }
    ctx->pc = 0x15DC8Cu;
    SET_GPR_U32(ctx, 31, 0x15DC94u);
    ctx->pc = 0x15DC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC8Cu;
            // 0x15dc90: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D9A0u;
    if (runtime->hasFunction(0x29D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC94u; }
        if (ctx->pc != 0x15DC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLight__14CFuncPointMngrFPfP10CFuncPointiP15CFuncPointChecki_0x29d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC94u; }
        if (ctx->pc != 0x15DC94u) { return; }
    }
    ctx->pc = 0x15DC94u;
label_15dc94:
    // 0x15dc94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15dc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15dc98:
    // 0x15dc98: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x15dc98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_15dc9c:
    // 0x15dc9c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_15dca0:
    if (ctx->pc == 0x15DCA0u) {
        ctx->pc = 0x15DCA0u;
            // 0x15dca0: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x15DCA4u;
        goto label_15dca4;
    }
    ctx->pc = 0x15DC9Cu;
    {
        const bool branch_taken_0x15dc9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC9Cu;
            // 0x15dca0: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc9c) {
            ctx->pc = 0x15DCACu;
            goto label_15dcac;
        }
    }
    ctx->pc = 0x15DCA4u;
label_15dca4:
    // 0x15dca4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dca8:
    // 0x15dca8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15dca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15dcac:
    // 0x15dcac: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_15dcb0:
    if (ctx->pc == 0x15DCB0u) {
        ctx->pc = 0x15DCB0u;
            // 0x15dcb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DCB4u;
        goto label_15dcb4;
    }
    ctx->pc = 0x15DCACu;
    {
        const bool branch_taken_0x15dcac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCACu;
            // 0x15dcb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dcac) {
            ctx->pc = 0x15DD6Cu;
            goto label_15dd6c;
        }
    }
    ctx->pc = 0x15DCB4u;
label_15dcb4:
    // 0x15dcb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15dcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dcb8:
    // 0x15dcb8: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_15dcbc:
    // 0x15dcbc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15dcc0:
    // 0x15dcc0: 0x26850180  addiu       $a1, $s4, 0x180
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
label_15dcc4:
    // 0x15dcc4: 0xc041c3e  jal         func_1070F8
label_15dcc8:
    if (ctx->pc == 0x15DCC8u) {
        ctx->pc = 0x15DCC8u;
            // 0x15dcc8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15DCCCu;
        goto label_15dccc;
    }
    ctx->pc = 0x15DCC4u;
    SET_GPR_U32(ctx, 31, 0x15DCCCu);
    ctx->pc = 0x15DCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCC4u;
            // 0x15dcc8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCCCu; }
        if (ctx->pc != 0x15DCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCCCu; }
        if (ctx->pc != 0x15DCCCu) { return; }
    }
    ctx->pc = 0x15DCCCu;
label_15dccc:
    // 0x15dccc: 0xc6940030  lwc1        $f20, 0x30($s4)
    ctx->pc = 0x15dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15dcd0:
    // 0x15dcd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15dcd4:
    // 0x15dcd4: 0xc04c00c  jal         func_130030
label_15dcd8:
    if (ctx->pc == 0x15DCD8u) {
        ctx->pc = 0x15DCD8u;
            // 0x15dcd8: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->pc = 0x15DCDCu;
        goto label_15dcdc;
    }
    ctx->pc = 0x15DCD4u;
    SET_GPR_U32(ctx, 31, 0x15DCDCu);
    ctx->pc = 0x15DCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCD4u;
            // 0x15dcd8: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130030u;
    if (runtime->hasFunction(0x130030u)) {
        auto targetFn = runtime->lookupFunction(0x130030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCDCu; }
        if (ctx->pc != 0x15DCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPf_0x130030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCDCu; }
        if (ctx->pc != 0x15DCDCu) { return; }
    }
    ctx->pc = 0x15DCDCu;
label_15dcdc:
    // 0x15dcdc: 0x0  nop
    ctx->pc = 0x15dcdcu;
    // NOP
label_15dce0:
    // 0x15dce0: 0x0  nop
    ctx->pc = 0x15dce0u;
    // NOP
label_15dce4:
    // 0x15dce4: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x15dce4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_15dce8:
    // 0x15dce8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15dcec:
    // 0x15dcec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15dcf0:
    // 0x15dcf0: 0x0  nop
    ctx->pc = 0x15dcf0u;
    // NOP
label_15dcf4:
    // 0x15dcf4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x15dcf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15dcf8:
    // 0x15dcf8: 0x0  nop
    ctx->pc = 0x15dcf8u;
    // NOP
label_15dcfc:
    // 0x15dcfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_15dd00:
    if (ctx->pc == 0x15DD00u) {
        ctx->pc = 0x15DD04u;
        goto label_15dd04;
    }
    ctx->pc = 0x15DCFCu;
    {
        const bool branch_taken_0x15dcfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15dcfc) {
            ctx->pc = 0x15DD08u;
            goto label_15dd08;
        }
    }
    ctx->pc = 0x15DD04u;
label_15dd04:
    // 0x15dd04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15dd04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15dd08:
    // 0x15dd08: 0x8e050ce8  lw          $a1, 0xCE8($s0)
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3304)));
label_15dd0c:
    // 0x15dd0c: 0xc0a7b8c  jal         func_29EE30
label_15dd10:
    if (ctx->pc == 0x15DD10u) {
        ctx->pc = 0x15DD10u;
            // 0x15dd10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DD14u;
        goto label_15dd14;
    }
    ctx->pc = 0x15DD0Cu;
    SET_GPR_U32(ctx, 31, 0x15DD14u);
    ctx->pc = 0x15DD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD0Cu;
            // 0x15dd10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EE30u;
    if (runtime->hasFunction(0x29EE30u)) {
        auto targetFn = runtime->lookupFunction(0x29EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD14u; }
        if (ctx->pc != 0x15DD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightAnimeWeight__FP10CFuncPointi_0x29ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD14u; }
        if (ctx->pc != 0x15DD14u) { return; }
    }
    ctx->pc = 0x15DD14u;
label_15dd14:
    // 0x15dd14: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x15dd14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_15dd18:
    // 0x15dd18: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x15dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_15dd1c:
    // 0x15dd1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_15dd20:
    // 0x15dd20: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x15dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_15dd24:
    // 0x15dd24: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15dd28:
    // 0x15dd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15dd2c:
    // 0x15dd2c: 0xc041c4a  jal         func_107128
label_15dd30:
    if (ctx->pc == 0x15DD30u) {
        ctx->pc = 0x15DD30u;
            // 0x15dd30: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x15DD34u;
        goto label_15dd34;
    }
    ctx->pc = 0x15DD2Cu;
    SET_GPR_U32(ctx, 31, 0x15DD34u);
    ctx->pc = 0x15DD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD2Cu;
            // 0x15dd30: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD34u; }
        if (ctx->pc != 0x15DD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD34u; }
        if (ctx->pc != 0x15DD34u) { return; }
    }
    ctx->pc = 0x15DD34u;
label_15dd34:
    // 0x15dd34: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x15dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_15dd38:
    // 0x15dd38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15dd3c:
    // 0x15dd3c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x15dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_15dd40:
    // 0x15dd40: 0xc041be0  jal         func_106F80
label_15dd44:
    if (ctx->pc == 0x15DD44u) {
        ctx->pc = 0x15DD44u;
            // 0x15dd44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DD48u;
        goto label_15dd48;
    }
    ctx->pc = 0x15DD40u;
    SET_GPR_U32(ctx, 31, 0x15DD48u);
    ctx->pc = 0x15DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD40u;
            // 0x15dd44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD48u; }
        if (ctx->pc != 0x15DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD48u; }
        if (ctx->pc != 0x15DD48u) { return; }
    }
    ctx->pc = 0x15DD48u;
label_15dd48:
    // 0x15dd48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15dd4c:
    // 0x15dd4c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15dd50:
    // 0x15dd50: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15dd54:
    // 0x15dd54: 0xc050de0  jal         func_143780
label_15dd58:
    if (ctx->pc == 0x15DD58u) {
        ctx->pc = 0x15DD58u;
            // 0x15dd58: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x15DD5Cu;
        goto label_15dd5c;
    }
    ctx->pc = 0x15DD54u;
    SET_GPR_U32(ctx, 31, 0x15DD5Cu);
    ctx->pc = 0x15DD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD54u;
            // 0x15dd58: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143780u;
    if (runtime->hasFunction(0x143780u)) {
        auto targetFn = runtime->lookupFunction(0x143780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD5Cu; }
        if (ctx->pc != 0x15DD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FiPfPf_0x143780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD5Cu; }
        if (ctx->pc != 0x15DD5Cu) { return; }
    }
    ctx->pc = 0x15DD5Cu;
label_15dd5c:
    // 0x15dd5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15dd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15dd60:
    // 0x15dd60: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15dd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15dd64:
    // 0x15dd64: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_15dd68:
    if (ctx->pc == 0x15DD68u) {
        ctx->pc = 0x15DD68u;
            // 0x15dd68: 0x267301c0  addiu       $s3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->pc = 0x15DD6Cu;
        goto label_15dd6c;
    }
    ctx->pc = 0x15DD64u;
    {
        const bool branch_taken_0x15dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD64u;
            // 0x15dd68: 0x267301c0  addiu       $s3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd64) {
            ctx->pc = 0x15DCB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15dcb8;
        }
    }
    ctx->pc = 0x15DD6Cu;
label_15dd6c:
    // 0x15dd6c: 0x0  nop
    ctx->pc = 0x15dd6cu;
    // NOP
label_15dd70:
    // 0x15dd70: 0x12e000c1  beqz        $s7, . + 4 + (0xC1 << 2)
label_15dd74:
    if (ctx->pc == 0x15DD74u) {
        ctx->pc = 0x15DD74u;
            // 0x15dd74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DD78u;
        goto label_15dd78;
    }
    ctx->pc = 0x15DD70u;
    {
        const bool branch_taken_0x15dd70 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD70u;
            // 0x15dd74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd70) {
            ctx->pc = 0x15E078u;
            goto label_15e078;
        }
    }
    ctx->pc = 0x15DD78u;
label_15dd78:
    // 0x15dd78: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x15dd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_15dd7c:
    // 0x15dd7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15dd80:
    // 0x15dd80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15dd84:
    // 0x15dd84: 0x320f809  jalr        $t9
label_15dd88:
    if (ctx->pc == 0x15DD88u) {
        ctx->pc = 0x15DD88u;
            // 0x15dd88: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15DD8Cu;
        goto label_15dd8c;
    }
    ctx->pc = 0x15DD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15DD8Cu);
        ctx->pc = 0x15DD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD84u;
            // 0x15dd88: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15DD8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15DD8Cu; }
            if (ctx->pc != 0x15DD8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15DD8Cu;
label_15dd8c:
    // 0x15dd8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15dd90:
    // 0x15dd90: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_15dd94:
    // 0x15dd94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15dd98:
    // 0x15dd98: 0x8e12032c  lw          $s2, 0x32C($s0)
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_15dd9c:
    // 0x15dd9c: 0xc05834c  jal         func_160D30
label_15dda0:
    if (ctx->pc == 0x15DDA0u) {
        ctx->pc = 0x15DDA0u;
            // 0x15dda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DDA4u;
        goto label_15dda4;
    }
    ctx->pc = 0x15DD9Cu;
    SET_GPR_U32(ctx, 31, 0x15DDA4u);
    ctx->pc = 0x15DDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD9Cu;
            // 0x15dda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDA4u; }
        if (ctx->pc != 0x15DDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDA4u; }
        if (ctx->pc != 0x15DDA4u) { return; }
    }
    ctx->pc = 0x15DDA4u;
label_15dda4:
    // 0x15dda4: 0xc04d924  jal         func_136490
label_15dda8:
    if (ctx->pc == 0x15DDA8u) {
        ctx->pc = 0x15DDA8u;
            // 0x15dda8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x15DDACu;
        goto label_15ddac;
    }
    ctx->pc = 0x15DDA4u;
    SET_GPR_U32(ctx, 31, 0x15DDACu);
    ctx->pc = 0x15DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDA4u;
            // 0x15dda8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDACu; }
        if (ctx->pc != 0x15DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDACu; }
        if (ctx->pc != 0x15DDACu) { return; }
    }
    ctx->pc = 0x15DDACu;
label_15ddac:
    // 0x15ddac: 0x27be0310  addiu       $fp, $sp, 0x310
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_15ddb0:
    // 0x15ddb0: 0xc04d924  jal         func_136490
label_15ddb4:
    if (ctx->pc == 0x15DDB4u) {
        ctx->pc = 0x15DDB4u;
            // 0x15ddb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DDB8u;
        goto label_15ddb8;
    }
    ctx->pc = 0x15DDB0u;
    SET_GPR_U32(ctx, 31, 0x15DDB8u);
    ctx->pc = 0x15DDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDB0u;
            // 0x15ddb4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDB8u; }
        if (ctx->pc != 0x15DDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDB8u; }
        if (ctx->pc != 0x15DDB8u) { return; }
    }
    ctx->pc = 0x15DDB8u;
label_15ddb8:
    // 0x15ddb8: 0x27b702a4  addiu       $s7, $sp, 0x2A4
    ctx->pc = 0x15ddb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
label_15ddbc:
    // 0x15ddbc: 0x3c024876  lui         $v0, 0x4876
    ctx->pc = 0x15ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18550 << 16));
label_15ddc0:
    // 0x15ddc0: 0x3453e000  ori         $s3, $v0, 0xE000
    ctx->pc = 0x15ddc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_15ddc4:
    // 0x15ddc4: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x15ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_15ddc8:
    // 0x15ddc8: 0x1000007d  b           . + 4 + (0x7D << 2)
label_15ddcc:
    if (ctx->pc == 0x15DDCCu) {
        ctx->pc = 0x15DDCCu;
            // 0x15ddcc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DDD0u;
        goto label_15ddd0;
    }
    ctx->pc = 0x15DDC8u;
    {
        const bool branch_taken_0x15ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDC8u;
            // 0x15ddcc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddc8) {
            ctx->pc = 0x15DFC0u;
            goto label_15dfc0;
        }
    }
    ctx->pc = 0x15DDD0u;
label_15ddd0:
    // 0x15ddd0: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x15ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
label_15ddd4:
    // 0x15ddd4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15ddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_15ddd8:
    // 0x15ddd8: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_15dddc:
    if (ctx->pc == 0x15DDDCu) {
        ctx->pc = 0x15DDE0u;
        goto label_15dde0;
    }
    ctx->pc = 0x15DDD8u;
    {
        const bool branch_taken_0x15ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ddd8) {
            ctx->pc = 0x15DFB8u;
            goto label_15dfb8;
        }
    }
    ctx->pc = 0x15DDE0u;
label_15dde0:
    // 0x15dde0: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x15dde0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_15dde4:
    // 0x15dde4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_15dde8:
    // 0x15dde8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15dde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15ddec:
    // 0x15ddec: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_15ddf0:
    if (ctx->pc == 0x15DDF0u) {
        ctx->pc = 0x15DDF0u;
            // 0x15ddf0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x15DDF4u;
        goto label_15ddf4;
    }
    ctx->pc = 0x15DDECu;
    {
        const bool branch_taken_0x15ddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDECu;
            // 0x15ddf0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddec) {
            ctx->pc = 0x15DFB8u;
            goto label_15dfb8;
        }
    }
    ctx->pc = 0x15DDF4u;
label_15ddf4:
    // 0x15ddf4: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x15ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_15ddf8:
    // 0x15ddf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ddfc:
    // 0x15ddfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15de00:
    // 0x15de00: 0xc059cc0  jal         func_167300
label_15de04:
    if (ctx->pc == 0x15DE04u) {
        ctx->pc = 0x15DE04u;
            // 0x15de04: 0x27a50470  addiu       $a1, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x15DE08u;
        goto label_15de08;
    }
    ctx->pc = 0x15DE00u;
    SET_GPR_U32(ctx, 31, 0x15DE08u);
    ctx->pc = 0x15DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE00u;
            // 0x15de04: 0x27a50470  addiu       $a1, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE08u; }
        if (ctx->pc != 0x15DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE08u; }
        if (ctx->pc != 0x15DE08u) { return; }
    }
    ctx->pc = 0x15DE08u;
label_15de08:
    // 0x15de08: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_15de0c:
    // 0x15de0c: 0xc04c0b4  jal         func_1302D0
label_15de10:
    if (ctx->pc == 0x15DE10u) {
        ctx->pc = 0x15DE10u;
            // 0x15de10: 0x27a50470  addiu       $a1, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x15DE14u;
        goto label_15de14;
    }
    ctx->pc = 0x15DE0Cu;
    SET_GPR_U32(ctx, 31, 0x15DE14u);
    ctx->pc = 0x15DE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE0Cu;
            // 0x15de10: 0x27a50470  addiu       $a1, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE14u; }
        if (ctx->pc != 0x15DE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE14u; }
        if (ctx->pc != 0x15DE14u) { return; }
    }
    ctx->pc = 0x15DE14u;
label_15de14:
    // 0x15de14: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_15de18:
    // 0x15de18: 0x27a504b0  addiu       $a1, $sp, 0x4B0
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_15de1c:
    // 0x15de1c: 0xc041bb0  jal         func_106EC0
label_15de20:
    if (ctx->pc == 0x15DE20u) {
        ctx->pc = 0x15DE20u;
            // 0x15de20: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15DE24u;
        goto label_15de24;
    }
    ctx->pc = 0x15DE1Cu;
    SET_GPR_U32(ctx, 31, 0x15DE24u);
    ctx->pc = 0x15DE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE1Cu;
            // 0x15de20: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE24u; }
        if (ctx->pc != 0x15DE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE24u; }
        if (ctx->pc != 0x15DE24u) { return; }
    }
    ctx->pc = 0x15DE24u;
label_15de24:
    // 0x15de24: 0x264402b0  addiu       $a0, $s2, 0x2B0
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
label_15de28:
    // 0x15de28: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_15de2c:
    // 0x15de2c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x15de2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15de30:
    // 0x15de30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15de34:
    // 0x15de34: 0x27a80518  addiu       $t0, $sp, 0x518
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1304));
label_15de38:
    // 0x15de38: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x15de38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15de3c:
    // 0x15de3c: 0xc0a7668  jal         func_29D9A0
label_15de40:
    if (ctx->pc == 0x15DE40u) {
        ctx->pc = 0x15DE40u;
            // 0x15de40: 0xafa0046c  sw          $zero, 0x46C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 0));
        ctx->pc = 0x15DE44u;
        goto label_15de44;
    }
    ctx->pc = 0x15DE3Cu;
    SET_GPR_U32(ctx, 31, 0x15DE44u);
    ctx->pc = 0x15DE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE3Cu;
            // 0x15de40: 0xafa0046c  sw          $zero, 0x46C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D9A0u;
    if (runtime->hasFunction(0x29D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE44u; }
        if (ctx->pc != 0x15DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLight__14CFuncPointMngrFPfP10CFuncPointiP15CFuncPointChecki_0x29d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE44u; }
        if (ctx->pc != 0x15DE44u) { return; }
    }
    ctx->pc = 0x15DE44u;
label_15de44:
    // 0x15de44: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
label_15de48:
    if (ctx->pc == 0x15DE48u) {
        ctx->pc = 0x15DE48u;
            // 0x15de48: 0x27b50260  addiu       $s5, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x15DE4Cu;
        goto label_15de4c;
    }
    ctx->pc = 0x15DE44u;
    {
        const bool branch_taken_0x15de44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15DE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE44u;
            // 0x15de48: 0x27b50260  addiu       $s5, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de44) {
            ctx->pc = 0x15DFB8u;
            goto label_15dfb8;
        }
    }
    ctx->pc = 0x15DE4Cu;
label_15de4c:
    // 0x15de4c: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x15de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_15de50:
    // 0x15de50: 0xc04c018  jal         func_130060
label_15de54:
    if (ctx->pc == 0x15DE54u) {
        ctx->pc = 0x15DE54u;
            // 0x15de54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15DE58u;
        goto label_15de58;
    }
    ctx->pc = 0x15DE50u;
    SET_GPR_U32(ctx, 31, 0x15DE58u);
    ctx->pc = 0x15DE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE50u;
            // 0x15de54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE58u; }
        if (ctx->pc != 0x15DE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE58u; }
        if (ctx->pc != 0x15DE58u) { return; }
    }
    ctx->pc = 0x15DE58u;
label_15de58:
    // 0x15de58: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x15de58u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15de5c:
    // 0x15de5c: 0x0  nop
    ctx->pc = 0x15de5cu;
    // NOP
label_15de60:
    // 0x15de60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15de60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15de64:
    // 0x15de64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15de64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15de68:
    // 0x15de68: 0x0  nop
    ctx->pc = 0x15de68u;
    // NOP
label_15de6c:
    // 0x15de6c: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_15de70:
    if (ctx->pc == 0x15DE70u) {
        ctx->pc = 0x15DE70u;
            // 0x15de70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x15DE74u;
        goto label_15de74;
    }
    ctx->pc = 0x15DE6Cu;
    {
        const bool branch_taken_0x15de6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE6Cu;
            // 0x15de70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de6c) {
            ctx->pc = 0x15DFB8u;
            goto label_15dfb8;
        }
    }
    ctx->pc = 0x15DE74u;
label_15de74:
    // 0x15de74: 0xc0a248c  jal         func_289230
label_15de78:
    if (ctx->pc == 0x15DE78u) {
        ctx->pc = 0x15DE7Cu;
        goto label_15de7c;
    }
    ctx->pc = 0x15DE74u;
    SET_GPR_U32(ctx, 31, 0x15DE7Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE7Cu; }
        if (ctx->pc != 0x15DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE7Cu; }
        if (ctx->pc != 0x15DE7Cu) { return; }
    }
    ctx->pc = 0x15DE7Cu;
label_15de7c:
    // 0x15de7c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x15de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_15de80:
    // 0x15de80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15de80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15de84:
    // 0x15de84: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_15de88:
    // 0x15de88: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15de8c:
    // 0x15de8c: 0x27a202c0  addiu       $v0, $sp, 0x2C0
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_15de90:
    // 0x15de90: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15de94:
    // 0x15de94: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x15de94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15de98:
    // 0x15de98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15de98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15de9c:
    // 0x15de9c: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x15de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
label_15dea0:
    // 0x15dea0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x15dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_15dea4:
    // 0x15dea4: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15dea8:
    // 0x15dea8: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x15dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15deac:
    // 0x15deac: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x15deacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_15deb0:
    // 0x15deb0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x15deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15deb4:
    // 0x15deb4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x15deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_15deb8:
    // 0x15deb8: 0xafa802a8  sw          $t0, 0x2A8($sp)
    ctx->pc = 0x15deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 8));
label_15debc:
    // 0x15debc: 0xe7a102b4  swc1        $f1, 0x2B4($sp)
    ctx->pc = 0x15debcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_15dec0:
    // 0x15dec0: 0xafa402ac  sw          $a0, 0x2AC($sp)
    ctx->pc = 0x15dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 4));
label_15dec4:
    // 0x15dec4: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x15dec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_15dec8:
    // 0x15dec8: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x15dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
label_15decc:
    // 0x15decc: 0x0  nop
    ctx->pc = 0x15deccu;
    // NOP
label_15ded0:
    // 0x15ded0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15ded4:
    // 0x15ded4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_15ded8:
    // 0x15ded8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_15dedc:
    // 0x15dedc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x15dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_15dee0:
    // 0x15dee0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x15dee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_15dee4:
    // 0x15dee4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x15dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_15dee8:
    // 0x15dee8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_15deec:
    if (ctx->pc == 0x15DEECu) {
        ctx->pc = 0x15DEECu;
            // 0x15deec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x15DEF0u;
        goto label_15def0;
    }
    ctx->pc = 0x15DEE8u;
    {
        const bool branch_taken_0x15dee8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x15DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEE8u;
            // 0x15deec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dee8) {
            ctx->pc = 0x15DED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ded0;
        }
    }
    ctx->pc = 0x15DEF0u;
label_15def0:
    // 0x15def0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_15def4:
    // 0x15def4: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_15def8:
    // 0x15def8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x15def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_15defc:
    // 0x15defc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15defcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15df00:
    // 0x15df00: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x15df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_15df04:
    // 0x15df04: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x15df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15df08:
    // 0x15df08: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x15df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15df0c:
    // 0x15df0c: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x15df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
label_15df10:
    // 0x15df10: 0xe7a102c8  swc1        $f1, 0x2C8($sp)
    ctx->pc = 0x15df10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_15df14:
    // 0x15df14: 0xc04e624  jal         func_139890
label_15df18:
    if (ctx->pc == 0x15DF18u) {
        ctx->pc = 0x15DF18u;
            // 0x15df18: 0xe7a002cc  swc1        $f0, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->pc = 0x15DF1Cu;
        goto label_15df1c;
    }
    ctx->pc = 0x15DF14u;
    SET_GPR_U32(ctx, 31, 0x15DF1Cu);
    ctx->pc = 0x15DF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF14u;
            // 0x15df18: 0xe7a002cc  swc1        $f0, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF1Cu; }
        if (ctx->pc != 0x15DF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF1Cu; }
        if (ctx->pc != 0x15DF1Cu) { return; }
    }
    ctx->pc = 0x15DF1Cu;
label_15df1c:
    // 0x15df1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15df20:
    // 0x15df20: 0xc04e1b0  jal         func_1386C0
label_15df24:
    if (ctx->pc == 0x15DF24u) {
        ctx->pc = 0x15DF24u;
            // 0x15df24: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x15DF28u;
        goto label_15df28;
    }
    ctx->pc = 0x15DF20u;
    SET_GPR_U32(ctx, 31, 0x15DF28u);
    ctx->pc = 0x15DF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF20u;
            // 0x15df24: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF28u; }
        if (ctx->pc != 0x15DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF28u; }
        if (ctx->pc != 0x15DF28u) { return; }
    }
    ctx->pc = 0x15DF28u;
label_15df28:
    // 0x15df28: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x15df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15df2c:
    // 0x15df2c: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x15df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_15df30:
    // 0x15df30: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x15df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15df34:
    // 0x15df34: 0x27a90270  addiu       $t1, $sp, 0x270
    ctx->pc = 0x15df34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_15df38:
    // 0x15df38: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x15df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15df3c:
    // 0x15df3c: 0x27a80430  addiu       $t0, $sp, 0x430
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_15df40:
    // 0x15df40: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x15df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15df44:
    // 0x15df44: 0x27a70280  addiu       $a3, $sp, 0x280
    ctx->pc = 0x15df44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_15df48:
    // 0x15df48: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_15df4c:
    // 0x15df4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15df50:
    // 0x15df50: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x15df50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_15df54:
    // 0x15df54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15df54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15df58:
    // 0x15df58: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x15df58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_15df5c:
    // 0x15df5c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x15df5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_15df60:
    // 0x15df60: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x15df60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_15df64:
    // 0x15df64: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x15df64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_15df68:
    // 0x15df68: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x15df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15df6c:
    // 0x15df6c: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x15df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15df70:
    // 0x15df70: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x15df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15df74:
    // 0x15df74: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x15df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15df78:
    // 0x15df78: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x15df78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_15df7c:
    // 0x15df7c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x15df7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_15df80:
    // 0x15df80: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x15df80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_15df84:
    // 0x15df84: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x15df84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_15df88:
    // 0x15df88: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x15df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15df8c:
    // 0x15df8c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x15df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15df90:
    // 0x15df90: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x15df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15df94:
    // 0x15df94: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x15df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15df98:
    // 0x15df98: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x15df98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_15df9c:
    // 0x15df9c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x15df9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_15dfa0:
    // 0x15dfa0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x15dfa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_15dfa4:
    // 0x15dfa4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_15dfa8:
    // 0x15dfa8: 0xafa2042c  sw          $v0, 0x42C($sp)
    ctx->pc = 0x15dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 2));
label_15dfac:
    // 0x15dfac: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x15dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_15dfb0:
    // 0x15dfb0: 0xc041bb0  jal         func_106EC0
label_15dfb4:
    if (ctx->pc == 0x15DFB4u) {
        ctx->pc = 0x15DFB4u;
            // 0x15dfb4: 0xafa20450  sw          $v0, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
        ctx->pc = 0x15DFB8u;
        goto label_15dfb8;
    }
    ctx->pc = 0x15DFB0u;
    SET_GPR_U32(ctx, 31, 0x15DFB8u);
    ctx->pc = 0x15DFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFB0u;
            // 0x15dfb4: 0xafa20450  sw          $v0, 0x450($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFB8u; }
        if (ctx->pc != 0x15DFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFB8u; }
        if (ctx->pc != 0x15DFB8u) { return; }
    }
    ctx->pc = 0x15DFB8u;
label_15dfb8:
    // 0x15dfb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15dfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15dfbc:
    // 0x15dfbc: 0x26520310  addiu       $s2, $s2, 0x310
    ctx->pc = 0x15dfbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_15dfc0:
    // 0x15dfc0: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x15dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_15dfc4:
    // 0x15dfc4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x15dfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15dfc8:
    // 0x15dfc8: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
label_15dfcc:
    if (ctx->pc == 0x15DFCCu) {
        ctx->pc = 0x15DFD0u;
        goto label_15dfd0;
    }
    ctx->pc = 0x15DFC8u;
    {
        const bool branch_taken_0x15dfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dfc8) {
            ctx->pc = 0x15DDD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ddd0;
        }
    }
    ctx->pc = 0x15DFD0u;
label_15dfd0:
    // 0x15dfd0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_15dfd4:
    // 0x15dfd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15dfd8:
    // 0x15dfd8: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_15dfdc:
    if (ctx->pc == 0x15DFDCu) {
        ctx->pc = 0x15DFDCu;
            // 0x15dfdc: 0x27a404f0  addiu       $a0, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x15DFE0u;
        goto label_15dfe0;
    }
    ctx->pc = 0x15DFD8u;
    {
        const bool branch_taken_0x15dfd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFD8u;
            // 0x15dfdc: 0x27a404f0  addiu       $a0, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfd8) {
            ctx->pc = 0x15E074u;
            goto label_15e074;
        }
    }
    ctx->pc = 0x15DFE0u;
label_15dfe0:
    // 0x15dfe0: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_15dfe4:
    // 0x15dfe4: 0xc041c3e  jal         func_1070F8
label_15dfe8:
    if (ctx->pc == 0x15DFE8u) {
        ctx->pc = 0x15DFE8u;
            // 0x15dfe8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15DFECu;
        goto label_15dfec;
    }
    ctx->pc = 0x15DFE4u;
    SET_GPR_U32(ctx, 31, 0x15DFECu);
    ctx->pc = 0x15DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFE4u;
            // 0x15dfe8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFECu; }
        if (ctx->pc != 0x15DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFECu; }
        if (ctx->pc != 0x15DFECu) { return; }
    }
    ctx->pc = 0x15DFECu;
label_15dfec:
    // 0x15dfec: 0xc04bff4  jal         func_12FFD0
label_15dff0:
    if (ctx->pc == 0x15DFF0u) {
        ctx->pc = 0x15DFF0u;
            // 0x15dff0: 0x27a404f0  addiu       $a0, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x15DFF4u;
        goto label_15dff4;
    }
    ctx->pc = 0x15DFECu;
    SET_GPR_U32(ctx, 31, 0x15DFF4u);
    ctx->pc = 0x15DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFECu;
            // 0x15dff0: 0x27a404f0  addiu       $a0, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFF4u; }
        if (ctx->pc != 0x15DFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFF4u; }
        if (ctx->pc != 0x15DFF4u) { return; }
    }
    ctx->pc = 0x15DFF4u;
label_15dff4:
    // 0x15dff4: 0xc7a202d0  lwc1        $f2, 0x2D0($sp)
    ctx->pc = 0x15dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15dff8:
    // 0x15dff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15dffc:
    // 0x15dffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e000:
    // 0x15e000: 0x0  nop
    ctx->pc = 0x15e000u;
    // NOP
label_15e004:
    // 0x15e004: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x15e004u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_15e008:
    // 0x15e008: 0x0  nop
    ctx->pc = 0x15e008u;
    // NOP
label_15e00c:
    // 0x15e00c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x15e00cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_15e010:
    // 0x15e010: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x15e010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e014:
    // 0x15e014: 0x0  nop
    ctx->pc = 0x15e014u;
    // NOP
label_15e018:
    // 0x15e018: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_15e01c:
    if (ctx->pc == 0x15E01Cu) {
        ctx->pc = 0x15E020u;
        goto label_15e020;
    }
    ctx->pc = 0x15E018u;
    {
        const bool branch_taken_0x15e018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e018) {
            ctx->pc = 0x15E024u;
            goto label_15e024;
        }
    }
    ctx->pc = 0x15E020u;
label_15e020:
    // 0x15e020: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x15e020u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_15e024:
    // 0x15e024: 0x8e050ce8  lw          $a1, 0xCE8($s0)
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3304)));
label_15e028:
    // 0x15e028: 0xc0a7b8c  jal         func_29EE30
label_15e02c:
    if (ctx->pc == 0x15E02Cu) {
        ctx->pc = 0x15E02Cu;
            // 0x15e02c: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x15E030u;
        goto label_15e030;
    }
    ctx->pc = 0x15E028u;
    SET_GPR_U32(ctx, 31, 0x15E030u);
    ctx->pc = 0x15E02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E028u;
            // 0x15e02c: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EE30u;
    if (runtime->hasFunction(0x29EE30u)) {
        auto targetFn = runtime->lookupFunction(0x29EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E030u; }
        if (ctx->pc != 0x15E030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightAnimeWeight__FP10CFuncPointi_0x29ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E030u; }
        if (ctx->pc != 0x15E030u) { return; }
    }
    ctx->pc = 0x15E030u;
label_15e030:
    // 0x15e030: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x15e030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_15e034:
    // 0x15e034: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_15e038:
    // 0x15e038: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_15e03c:
    // 0x15e03c: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x15e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_15e040:
    // 0x15e040: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_15e044:
    // 0x15e044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e048:
    // 0x15e048: 0xc041c4a  jal         func_107128
label_15e04c:
    if (ctx->pc == 0x15E04Cu) {
        ctx->pc = 0x15E04Cu;
            // 0x15e04c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x15E050u;
        goto label_15e050;
    }
    ctx->pc = 0x15E048u;
    SET_GPR_U32(ctx, 31, 0x15E050u);
    ctx->pc = 0x15E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E048u;
            // 0x15e04c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E050u; }
        if (ctx->pc != 0x15E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E050u; }
        if (ctx->pc != 0x15E050u) { return; }
    }
    ctx->pc = 0x15E050u;
label_15e050:
    // 0x15e050: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x15e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_15e054:
    // 0x15e054: 0x27a404f0  addiu       $a0, $sp, 0x4F0
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_15e058:
    // 0x15e058: 0xafa2050c  sw          $v0, 0x50C($sp)
    ctx->pc = 0x15e058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 2));
label_15e05c:
    // 0x15e05c: 0xc041be0  jal         func_106F80
label_15e060:
    if (ctx->pc == 0x15E060u) {
        ctx->pc = 0x15E060u;
            // 0x15e060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E064u;
        goto label_15e064;
    }
    ctx->pc = 0x15E05Cu;
    SET_GPR_U32(ctx, 31, 0x15E064u);
    ctx->pc = 0x15E060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E05Cu;
            // 0x15e060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E064u; }
        if (ctx->pc != 0x15E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E064u; }
        if (ctx->pc != 0x15E064u) { return; }
    }
    ctx->pc = 0x15E064u;
label_15e064:
    // 0x15e064: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e068:
    // 0x15e068: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_15e06c:
    // 0x15e06c: 0xc050de0  jal         func_143780
label_15e070:
    if (ctx->pc == 0x15E070u) {
        ctx->pc = 0x15E070u;
            // 0x15e070: 0x27a60500  addiu       $a2, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->pc = 0x15E074u;
        goto label_15e074;
    }
    ctx->pc = 0x15E06Cu;
    SET_GPR_U32(ctx, 31, 0x15E074u);
    ctx->pc = 0x15E070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E06Cu;
            // 0x15e070: 0x27a60500  addiu       $a2, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143780u;
    if (runtime->hasFunction(0x143780u)) {
        auto targetFn = runtime->lookupFunction(0x143780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E074u; }
        if (ctx->pc != 0x15E074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FiPfPf_0x143780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E074u; }
        if (ctx->pc != 0x15E074u) { return; }
    }
    ctx->pc = 0x15E074u;
label_15e074:
    // 0x15e074: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15e074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e078:
    // 0x15e078: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_15e07c:
    // 0x15e07c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15e080:
    // 0x15e080: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x15e080u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15e084:
    // 0x15e084: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15e084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15e088:
    // 0x15e088: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15e088u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15e08c:
    // 0x15e08c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15e08cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15e090:
    // 0x15e090: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15e090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e094:
    // 0x15e094: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15e094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e098:
    // 0x15e098: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15e098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e09c:
    // 0x15e09c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15e09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e0a0:
    // 0x15e0a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e0a4:
    // 0x15e0a4: 0x3e00008  jr          $ra
label_15e0a8:
    if (ctx->pc == 0x15E0A8u) {
        ctx->pc = 0x15E0A8u;
            // 0x15e0a8: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x15E0ACu;
        goto label_fallthrough_0x15e0a4;
    }
    ctx->pc = 0x15E0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0A4u;
            // 0x15e0a8: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15e0a4:
    ctx->pc = 0x15E0ACu;
}
