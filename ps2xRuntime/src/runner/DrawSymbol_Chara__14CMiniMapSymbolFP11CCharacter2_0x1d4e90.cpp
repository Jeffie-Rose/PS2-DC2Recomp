#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSymbol_Chara__14CMiniMapSymbolFP11CCharacter2
// Address: 0x1d4e90 - 0x1d5294
void DrawSymbol_Chara__14CMiniMapSymbolFP11CCharacter2_0x1d4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSymbol_Chara__14CMiniMapSymbolFP11CCharacter2_0x1d4e90");
#endif

    switch (ctx->pc) {
        case 0x1d4e90u: goto label_1d4e90;
        case 0x1d4e94u: goto label_1d4e94;
        case 0x1d4e98u: goto label_1d4e98;
        case 0x1d4e9cu: goto label_1d4e9c;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4ea4u: goto label_1d4ea4;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4eacu: goto label_1d4eac;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb4u: goto label_1d4eb4;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ebcu: goto label_1d4ebc;
        case 0x1d4ec0u: goto label_1d4ec0;
        case 0x1d4ec4u: goto label_1d4ec4;
        case 0x1d4ec8u: goto label_1d4ec8;
        case 0x1d4eccu: goto label_1d4ecc;
        case 0x1d4ed0u: goto label_1d4ed0;
        case 0x1d4ed4u: goto label_1d4ed4;
        case 0x1d4ed8u: goto label_1d4ed8;
        case 0x1d4edcu: goto label_1d4edc;
        case 0x1d4ee0u: goto label_1d4ee0;
        case 0x1d4ee4u: goto label_1d4ee4;
        case 0x1d4ee8u: goto label_1d4ee8;
        case 0x1d4eecu: goto label_1d4eec;
        case 0x1d4ef0u: goto label_1d4ef0;
        case 0x1d4ef4u: goto label_1d4ef4;
        case 0x1d4ef8u: goto label_1d4ef8;
        case 0x1d4efcu: goto label_1d4efc;
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f08u: goto label_1d4f08;
        case 0x1d4f0cu: goto label_1d4f0c;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f14u: goto label_1d4f14;
        case 0x1d4f18u: goto label_1d4f18;
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f20u: goto label_1d4f20;
        case 0x1d4f24u: goto label_1d4f24;
        case 0x1d4f28u: goto label_1d4f28;
        case 0x1d4f2cu: goto label_1d4f2c;
        case 0x1d4f30u: goto label_1d4f30;
        case 0x1d4f34u: goto label_1d4f34;
        case 0x1d4f38u: goto label_1d4f38;
        case 0x1d4f3cu: goto label_1d4f3c;
        case 0x1d4f40u: goto label_1d4f40;
        case 0x1d4f44u: goto label_1d4f44;
        case 0x1d4f48u: goto label_1d4f48;
        case 0x1d4f4cu: goto label_1d4f4c;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4f54u: goto label_1d4f54;
        case 0x1d4f58u: goto label_1d4f58;
        case 0x1d4f5cu: goto label_1d4f5c;
        case 0x1d4f60u: goto label_1d4f60;
        case 0x1d4f64u: goto label_1d4f64;
        case 0x1d4f68u: goto label_1d4f68;
        case 0x1d4f6cu: goto label_1d4f6c;
        case 0x1d4f70u: goto label_1d4f70;
        case 0x1d4f74u: goto label_1d4f74;
        case 0x1d4f78u: goto label_1d4f78;
        case 0x1d4f7cu: goto label_1d4f7c;
        case 0x1d4f80u: goto label_1d4f80;
        case 0x1d4f84u: goto label_1d4f84;
        case 0x1d4f88u: goto label_1d4f88;
        case 0x1d4f8cu: goto label_1d4f8c;
        case 0x1d4f90u: goto label_1d4f90;
        case 0x1d4f94u: goto label_1d4f94;
        case 0x1d4f98u: goto label_1d4f98;
        case 0x1d4f9cu: goto label_1d4f9c;
        case 0x1d4fa0u: goto label_1d4fa0;
        case 0x1d4fa4u: goto label_1d4fa4;
        case 0x1d4fa8u: goto label_1d4fa8;
        case 0x1d4facu: goto label_1d4fac;
        case 0x1d4fb0u: goto label_1d4fb0;
        case 0x1d4fb4u: goto label_1d4fb4;
        case 0x1d4fb8u: goto label_1d4fb8;
        case 0x1d4fbcu: goto label_1d4fbc;
        case 0x1d4fc0u: goto label_1d4fc0;
        case 0x1d4fc4u: goto label_1d4fc4;
        case 0x1d4fc8u: goto label_1d4fc8;
        case 0x1d4fccu: goto label_1d4fcc;
        case 0x1d4fd0u: goto label_1d4fd0;
        case 0x1d4fd4u: goto label_1d4fd4;
        case 0x1d4fd8u: goto label_1d4fd8;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d4fe0u: goto label_1d4fe0;
        case 0x1d4fe4u: goto label_1d4fe4;
        case 0x1d4fe8u: goto label_1d4fe8;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d4ff0u: goto label_1d4ff0;
        case 0x1d4ff4u: goto label_1d4ff4;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d4ffcu: goto label_1d4ffc;
        case 0x1d5000u: goto label_1d5000;
        case 0x1d5004u: goto label_1d5004;
        case 0x1d5008u: goto label_1d5008;
        case 0x1d500cu: goto label_1d500c;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d5014u: goto label_1d5014;
        case 0x1d5018u: goto label_1d5018;
        case 0x1d501cu: goto label_1d501c;
        case 0x1d5020u: goto label_1d5020;
        case 0x1d5024u: goto label_1d5024;
        case 0x1d5028u: goto label_1d5028;
        case 0x1d502cu: goto label_1d502c;
        case 0x1d5030u: goto label_1d5030;
        case 0x1d5034u: goto label_1d5034;
        case 0x1d5038u: goto label_1d5038;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5040u: goto label_1d5040;
        case 0x1d5044u: goto label_1d5044;
        case 0x1d5048u: goto label_1d5048;
        case 0x1d504cu: goto label_1d504c;
        case 0x1d5050u: goto label_1d5050;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5058u: goto label_1d5058;
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5060u: goto label_1d5060;
        case 0x1d5064u: goto label_1d5064;
        case 0x1d5068u: goto label_1d5068;
        case 0x1d506cu: goto label_1d506c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5074u: goto label_1d5074;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d507cu: goto label_1d507c;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5084u: goto label_1d5084;
        case 0x1d5088u: goto label_1d5088;
        case 0x1d508cu: goto label_1d508c;
        case 0x1d5090u: goto label_1d5090;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d5098u: goto label_1d5098;
        case 0x1d509cu: goto label_1d509c;
        case 0x1d50a0u: goto label_1d50a0;
        case 0x1d50a4u: goto label_1d50a4;
        case 0x1d50a8u: goto label_1d50a8;
        case 0x1d50acu: goto label_1d50ac;
        case 0x1d50b0u: goto label_1d50b0;
        case 0x1d50b4u: goto label_1d50b4;
        case 0x1d50b8u: goto label_1d50b8;
        case 0x1d50bcu: goto label_1d50bc;
        case 0x1d50c0u: goto label_1d50c0;
        case 0x1d50c4u: goto label_1d50c4;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d50ccu: goto label_1d50cc;
        case 0x1d50d0u: goto label_1d50d0;
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50d8u: goto label_1d50d8;
        case 0x1d50dcu: goto label_1d50dc;
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d50e4u: goto label_1d50e4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50ecu: goto label_1d50ec;
        case 0x1d50f0u: goto label_1d50f0;
        case 0x1d50f4u: goto label_1d50f4;
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d50fcu: goto label_1d50fc;
        case 0x1d5100u: goto label_1d5100;
        case 0x1d5104u: goto label_1d5104;
        case 0x1d5108u: goto label_1d5108;
        case 0x1d510cu: goto label_1d510c;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5114u: goto label_1d5114;
        case 0x1d5118u: goto label_1d5118;
        case 0x1d511cu: goto label_1d511c;
        case 0x1d5120u: goto label_1d5120;
        case 0x1d5124u: goto label_1d5124;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d512cu: goto label_1d512c;
        case 0x1d5130u: goto label_1d5130;
        case 0x1d5134u: goto label_1d5134;
        case 0x1d5138u: goto label_1d5138;
        case 0x1d513cu: goto label_1d513c;
        case 0x1d5140u: goto label_1d5140;
        case 0x1d5144u: goto label_1d5144;
        case 0x1d5148u: goto label_1d5148;
        case 0x1d514cu: goto label_1d514c;
        case 0x1d5150u: goto label_1d5150;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d5158u: goto label_1d5158;
        case 0x1d515cu: goto label_1d515c;
        case 0x1d5160u: goto label_1d5160;
        case 0x1d5164u: goto label_1d5164;
        case 0x1d5168u: goto label_1d5168;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d5170u: goto label_1d5170;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5178u: goto label_1d5178;
        case 0x1d517cu: goto label_1d517c;
        case 0x1d5180u: goto label_1d5180;
        case 0x1d5184u: goto label_1d5184;
        case 0x1d5188u: goto label_1d5188;
        case 0x1d518cu: goto label_1d518c;
        case 0x1d5190u: goto label_1d5190;
        case 0x1d5194u: goto label_1d5194;
        case 0x1d5198u: goto label_1d5198;
        case 0x1d519cu: goto label_1d519c;
        case 0x1d51a0u: goto label_1d51a0;
        case 0x1d51a4u: goto label_1d51a4;
        case 0x1d51a8u: goto label_1d51a8;
        case 0x1d51acu: goto label_1d51ac;
        case 0x1d51b0u: goto label_1d51b0;
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51b8u: goto label_1d51b8;
        case 0x1d51bcu: goto label_1d51bc;
        case 0x1d51c0u: goto label_1d51c0;
        case 0x1d51c4u: goto label_1d51c4;
        case 0x1d51c8u: goto label_1d51c8;
        case 0x1d51ccu: goto label_1d51cc;
        case 0x1d51d0u: goto label_1d51d0;
        case 0x1d51d4u: goto label_1d51d4;
        case 0x1d51d8u: goto label_1d51d8;
        case 0x1d51dcu: goto label_1d51dc;
        case 0x1d51e0u: goto label_1d51e0;
        case 0x1d51e4u: goto label_1d51e4;
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51ecu: goto label_1d51ec;
        case 0x1d51f0u: goto label_1d51f0;
        case 0x1d51f4u: goto label_1d51f4;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d51fcu: goto label_1d51fc;
        case 0x1d5200u: goto label_1d5200;
        case 0x1d5204u: goto label_1d5204;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d520cu: goto label_1d520c;
        case 0x1d5210u: goto label_1d5210;
        case 0x1d5214u: goto label_1d5214;
        case 0x1d5218u: goto label_1d5218;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d5220u: goto label_1d5220;
        case 0x1d5224u: goto label_1d5224;
        case 0x1d5228u: goto label_1d5228;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5230u: goto label_1d5230;
        case 0x1d5234u: goto label_1d5234;
        case 0x1d5238u: goto label_1d5238;
        case 0x1d523cu: goto label_1d523c;
        case 0x1d5240u: goto label_1d5240;
        case 0x1d5244u: goto label_1d5244;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d524cu: goto label_1d524c;
        case 0x1d5250u: goto label_1d5250;
        case 0x1d5254u: goto label_1d5254;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d525cu: goto label_1d525c;
        case 0x1d5260u: goto label_1d5260;
        case 0x1d5264u: goto label_1d5264;
        case 0x1d5268u: goto label_1d5268;
        case 0x1d526cu: goto label_1d526c;
        case 0x1d5270u: goto label_1d5270;
        case 0x1d5274u: goto label_1d5274;
        case 0x1d5278u: goto label_1d5278;
        case 0x1d527cu: goto label_1d527c;
        case 0x1d5280u: goto label_1d5280;
        case 0x1d5284u: goto label_1d5284;
        case 0x1d5288u: goto label_1d5288;
        case 0x1d528cu: goto label_1d528c;
        case 0x1d5290u: goto label_1d5290;
        default: break;
    }

    ctx->pc = 0x1d4e90u;

label_1d4e90:
    // 0x1d4e90: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1d4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1d4e94:
    // 0x1d4e94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d4e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d4e98:
    // 0x1d4e98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d4e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d4e9c:
    // 0x1d4e9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d4ea0:
    // 0x1d4ea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d4ea4:
    // 0x1d4ea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d4ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ea8:
    // 0x1d4ea8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d4eac:
    // 0x1d4eac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d4eacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d4eb0:
    // 0x1d4eb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d4eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4eb4:
    // 0x1d4eb4: 0x120000ee  beqz        $s0, . + 4 + (0xEE << 2)
label_1d4eb8:
    if (ctx->pc == 0x1D4EB8u) {
        ctx->pc = 0x1D4EB8u;
            // 0x1d4eb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1D4EBCu;
        goto label_1d4ebc;
    }
    ctx->pc = 0x1D4EB4u;
    {
        const bool branch_taken_0x1d4eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EB4u;
            // 0x1d4eb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4eb4) {
            ctx->pc = 0x1D5270u;
            goto label_1d5270;
        }
    }
    ctx->pc = 0x1D4EBCu;
label_1d4ebc:
    // 0x1d4ebc: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d4ec0:
    // 0x1d4ec0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1d4ec4:
    // 0x1d4ec4: 0x146000ea  bnez        $v1, . + 4 + (0xEA << 2)
label_1d4ec8:
    if (ctx->pc == 0x1D4EC8u) {
        ctx->pc = 0x1D4ECCu;
        goto label_1d4ecc;
    }
    ctx->pc = 0x1D4EC4u;
    {
        const bool branch_taken_0x1d4ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ec4) {
            ctx->pc = 0x1D5270u;
            goto label_1d5270;
        }
    }
    ctx->pc = 0x1D4ECCu;
label_1d4ecc:
    // 0x1d4ecc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d4eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4ed0:
    // 0x1d4ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ed4:
    // 0x1d4ed4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d4ed8:
    // 0x1d4ed8: 0x320f809  jalr        $t9
label_1d4edc:
    if (ctx->pc == 0x1D4EDCu) {
        ctx->pc = 0x1D4EDCu;
            // 0x1d4edc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D4EE0u;
        goto label_1d4ee0;
    }
    ctx->pc = 0x1D4ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D4EE0u);
        ctx->pc = 0x1D4EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4ED8u;
            // 0x1d4edc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D4EE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EE0u; }
            if (ctx->pc != 0x1D4EE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D4EE0u;
label_1d4ee0:
    // 0x1d4ee0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4ee4:
    // 0x1d4ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ee8:
    // 0x1d4ee8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1d4ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1d4eec:
    // 0x1d4eec: 0x320f809  jalr        $t9
label_1d4ef0:
    if (ctx->pc == 0x1D4EF0u) {
        ctx->pc = 0x1D4EF0u;
            // 0x1d4ef0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1D4EF4u;
        goto label_1d4ef4;
    }
    ctx->pc = 0x1D4EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D4EF4u);
        ctx->pc = 0x1D4EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EECu;
            // 0x1d4ef0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D4EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EF4u; }
            if (ctx->pc != 0x1D4EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D4EF4u;
label_1d4ef4:
    // 0x1d4ef4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d4ef8:
    // 0x1d4ef8: 0x26460150  addiu       $a2, $s2, 0x150
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_1d4efc:
    // 0x1d4efc: 0xc041c3e  jal         func_1070F8
label_1d4f00:
    if (ctx->pc == 0x1D4F00u) {
        ctx->pc = 0x1D4F00u;
            // 0x1d4f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F04u;
        goto label_1d4f04;
    }
    ctx->pc = 0x1D4EFCu;
    SET_GPR_U32(ctx, 31, 0x1D4F04u);
    ctx->pc = 0x1D4F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EFCu;
            // 0x1d4f00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F04u; }
        if (ctx->pc != 0x1D4F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F04u; }
        if (ctx->pc != 0x1D4F04u) { return; }
    }
    ctx->pc = 0x1D4F04u;
label_1d4f04:
    // 0x1d4f04: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1d4f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4f08:
    // 0x1d4f08: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1d4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1d4f0c:
    // 0x1d4f0c: 0xc640013c  lwc1        $f0, 0x13C($s2)
    ctx->pc = 0x1d4f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4f10:
    // 0x1d4f10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d4f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d4f14:
    // 0x1d4f14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d4f14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d4f18:
    // 0x1d4f18: 0x0  nop
    ctx->pc = 0x1d4f18u;
    // NOP
label_1d4f1c:
    // 0x1d4f1c: 0x0  nop
    ctx->pc = 0x1d4f1cu;
    // NOP
label_1d4f20:
    // 0x1d4f20: 0xc0a248c  jal         func_289230
label_1d4f24:
    if (ctx->pc == 0x1D4F24u) {
        ctx->pc = 0x1D4F24u;
            // 0x1d4f24: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1D4F28u;
        goto label_1d4f28;
    }
    ctx->pc = 0x1D4F20u;
    SET_GPR_U32(ctx, 31, 0x1D4F28u);
    ctx->pc = 0x1D4F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F20u;
            // 0x1d4f24: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F28u; }
        if (ctx->pc != 0x1D4F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F28u; }
        if (ctx->pc != 0x1D4F28u) { return; }
    }
    ctx->pc = 0x1D4F28u;
label_1d4f28:
    // 0x1d4f28: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1d4f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d4f2c:
    // 0x1d4f2c: 0x86460160  lh          $a2, 0x160($s2)
    ctx->pc = 0x1d4f2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
label_1d4f30:
    // 0x1d4f30: 0xc6410140  lwc1        $f1, 0x140($s2)
    ctx->pc = 0x1d4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4f34:
    // 0x1d4f34: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_1d4f38:
    // 0x1d4f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4f3c:
    // 0x1d4f3c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1d4f40:
    // 0x1d4f40: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d4f40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1d4f44:
    // 0x1d4f44: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1d4f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d4f48:
    // 0x1d4f48: 0x0  nop
    ctx->pc = 0x1d4f48u;
    // NOP
label_1d4f4c:
    // 0x1d4f4c: 0x0  nop
    ctx->pc = 0x1d4f4cu;
    // NOP
label_1d4f50:
    // 0x1d4f50: 0xc0a248c  jal         func_289230
label_1d4f54:
    if (ctx->pc == 0x1D4F54u) {
        ctx->pc = 0x1D4F54u;
            // 0x1d4f54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1D4F58u;
        goto label_1d4f58;
    }
    ctx->pc = 0x1D4F50u;
    SET_GPR_U32(ctx, 31, 0x1D4F58u);
    ctx->pc = 0x1D4F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F50u;
            // 0x1d4f54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F58u; }
        if (ctx->pc != 0x1D4F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F58u; }
        if (ctx->pc != 0x1D4F58u) { return; }
    }
    ctx->pc = 0x1D4F58u;
label_1d4f58:
    // 0x1d4f58: 0x86430162  lh          $v1, 0x162($s2)
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
label_1d4f5c:
    // 0x1d4f5c: 0xc7b40074  lwc1        $f20, 0x74($sp)
    ctx->pc = 0x1d4f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d4f60:
    // 0x1d4f60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d4f64:
    // 0x1d4f64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d4f68:
    // 0x1d4f68: 0xc04d0e8  jal         func_1343A0
label_1d4f6c:
    if (ctx->pc == 0x1D4F6Cu) {
        ctx->pc = 0x1D4F6Cu;
            // 0x1d4f6c: 0x24510008  addiu       $s1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1D4F70u;
        goto label_1d4f70;
    }
    ctx->pc = 0x1D4F68u;
    SET_GPR_U32(ctx, 31, 0x1D4F70u);
    ctx->pc = 0x1D4F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F68u;
            // 0x1d4f6c: 0x24510008  addiu       $s1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F70u; }
        if (ctx->pc != 0x1D4F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F70u; }
        if (ctx->pc != 0x1D4F70u) { return; }
    }
    ctx->pc = 0x1D4F70u;
label_1d4f70:
    // 0x1d4f70: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d4f74:
    // 0x1d4f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f78:
    // 0x1d4f78: 0xc04d104  jal         func_134410
label_1d4f7c:
    if (ctx->pc == 0x1D4F7Cu) {
        ctx->pc = 0x1D4F7Cu;
            // 0x1d4f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F80u;
        goto label_1d4f80;
    }
    ctx->pc = 0x1D4F78u;
    SET_GPR_U32(ctx, 31, 0x1D4F80u);
    ctx->pc = 0x1D4F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F78u;
            // 0x1d4f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F80u; }
        if (ctx->pc != 0x1D4F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F80u; }
        if (ctx->pc != 0x1D4F80u) { return; }
    }
    ctx->pc = 0x1D4F80u;
label_1d4f80:
    // 0x1d4f80: 0xc079f5c  jal         func_1E7D70
label_1d4f84:
    if (ctx->pc == 0x1D4F84u) {
        ctx->pc = 0x1D4F84u;
            // 0x1d4f84: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1D4F88u;
        goto label_1d4f88;
    }
    ctx->pc = 0x1D4F80u;
    SET_GPR_U32(ctx, 31, 0x1D4F88u);
    ctx->pc = 0x1D4F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F80u;
            // 0x1d4f84: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F88u; }
        if (ctx->pc != 0x1D4F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F88u; }
        if (ctx->pc != 0x1D4F88u) { return; }
    }
    ctx->pc = 0x1D4F88u;
label_1d4f88:
    // 0x1d4f88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d4f8c:
    // 0x1d4f8c: 0xc04d128  jal         func_1344A0
label_1d4f90:
    if (ctx->pc == 0x1D4F90u) {
        ctx->pc = 0x1D4F90u;
            // 0x1d4f90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1D4F94u;
        goto label_1d4f94;
    }
    ctx->pc = 0x1D4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F94u);
    ctx->pc = 0x1D4F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F8Cu;
            // 0x1d4f90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F94u; }
        if (ctx->pc != 0x1D4F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F94u; }
        if (ctx->pc != 0x1D4F94u) { return; }
    }
    ctx->pc = 0x1D4F94u;
label_1d4f94:
    // 0x1d4f94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d4f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d4f98:
    // 0x1d4f98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d4f9c:
    // 0x1d4f9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d4f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fa0:
    // 0x1d4fa0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fa4:
    // 0x1d4fa4: 0xc04d320  jal         func_134C80
label_1d4fa8:
    if (ctx->pc == 0x1D4FA8u) {
        ctx->pc = 0x1D4FA8u;
            // 0x1d4fa8: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x1D4FACu;
        goto label_1d4fac;
    }
    ctx->pc = 0x1D4FA4u;
    SET_GPR_U32(ctx, 31, 0x1D4FACu);
    ctx->pc = 0x1D4FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FA4u;
            // 0x1d4fa8: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FACu; }
        if (ctx->pc != 0x1D4FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FACu; }
        if (ctx->pc != 0x1D4FACu) { return; }
    }
    ctx->pc = 0x1D4FACu;
label_1d4fac:
    // 0x1d4fac: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1d4facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
label_1d4fb0:
    // 0x1d4fb0: 0xc04d368  jal         func_134DA0
label_1d4fb4:
    if (ctx->pc == 0x1D4FB4u) {
        ctx->pc = 0x1D4FB4u;
            // 0x1d4fb4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1D4FB8u;
        goto label_1d4fb8;
    }
    ctx->pc = 0x1D4FB0u;
    SET_GPR_U32(ctx, 31, 0x1D4FB8u);
    ctx->pc = 0x1D4FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FB0u;
            // 0x1d4fb4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FB8u; }
        if (ctx->pc != 0x1D4FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FB8u; }
        if (ctx->pc != 0x1D4FB8u) { return; }
    }
    ctx->pc = 0x1D4FB8u;
label_1d4fb8:
    // 0x1d4fb8: 0x86470164  lh          $a3, 0x164($s2)
    ctx->pc = 0x1d4fb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 356)));
label_1d4fbc:
    // 0x1d4fbc: 0x86480166  lh          $t0, 0x166($s2)
    ctx->pc = 0x1d4fbcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
label_1d4fc0:
    // 0x1d4fc0: 0x86430160  lh          $v1, 0x160($s2)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
label_1d4fc4:
    // 0x1d4fc4: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1d4fc8:
    if (ctx->pc == 0x1D4FC8u) {
        ctx->pc = 0x1D4FC8u;
            // 0x1d4fc8: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->pc = 0x1D4FCCu;
        goto label_1d4fcc;
    }
    ctx->pc = 0x1D4FC4u;
    {
        const bool branch_taken_0x1d4fc4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1D4FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FC4u;
            // 0x1d4fc8: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fc4) {
            ctx->pc = 0x1D4FD4u;
            goto label_1d4fd4;
        }
    }
    ctx->pc = 0x1D4FCCu;
label_1d4fcc:
    // 0x1d4fcc: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d4fd0:
    // 0x1d4fd0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d4fd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d4fd4:
    // 0x1d4fd4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1d4fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d4fd8:
    // 0x1d4fd8: 0x86430162  lh          $v1, 0x162($s2)
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
label_1d4fdc:
    // 0x1d4fdc: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1d4fe0:
    if (ctx->pc == 0x1D4FE0u) {
        ctx->pc = 0x1D4FE0u;
            // 0x1d4fe0: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->pc = 0x1D4FE4u;
        goto label_1d4fe4;
    }
    ctx->pc = 0x1D4FDCu;
    {
        const bool branch_taken_0x1d4fdc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D4FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FDCu;
            // 0x1d4fe0: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fdc) {
            ctx->pc = 0x1D4FECu;
            goto label_1d4fec;
        }
    }
    ctx->pc = 0x1D4FE4u;
label_1d4fe4:
    // 0x1d4fe4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d4fe8:
    // 0x1d4fe8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d4fec:
    // 0x1d4fec: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d4ff0:
    // 0x1d4ff0: 0xc079fd8  jal         func_1E7F60
label_1d4ff4:
    if (ctx->pc == 0x1D4FF4u) {
        ctx->pc = 0x1D4FF4u;
            // 0x1d4ff4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1D4FF8u;
        goto label_1d4ff8;
    }
    ctx->pc = 0x1D4FF0u;
    SET_GPR_U32(ctx, 31, 0x1D4FF8u);
    ctx->pc = 0x1D4FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FF0u;
            // 0x1d4ff4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FF8u; }
        if (ctx->pc != 0x1D4FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FF8u; }
        if (ctx->pc != 0x1D4FF8u) { return; }
    }
    ctx->pc = 0x1D4FF8u;
label_1d4ff8:
    // 0x1d4ff8: 0xc047a42  jal         func_11E908
label_1d4ffc:
    if (ctx->pc == 0x1D4FFCu) {
        ctx->pc = 0x1D4FFCu;
            // 0x1d4ffc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D5000u;
        goto label_1d5000;
    }
    ctx->pc = 0x1D4FF8u;
    SET_GPR_U32(ctx, 31, 0x1D5000u);
    ctx->pc = 0x1D4FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FF8u;
            // 0x1d4ffc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5000u; }
        if (ctx->pc != 0x1D5000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5000u; }
        if (ctx->pc != 0x1D5000u) { return; }
    }
    ctx->pc = 0x1D5000u;
label_1d5000:
    // 0x1d5000: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x1d5000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
label_1d5004:
    // 0x1d5004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5008:
    // 0x1d5008: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d5008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d500c:
    // 0x1d500c: 0xc047964  jal         func_11E590
label_1d5010:
    if (ctx->pc == 0x1D5010u) {
        ctx->pc = 0x1D5010u;
            // 0x1d5010: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D5014u;
        goto label_1d5014;
    }
    ctx->pc = 0x1D500Cu;
    SET_GPR_U32(ctx, 31, 0x1D5014u);
    ctx->pc = 0x1D5010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D500Cu;
            // 0x1d5010: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5014u; }
        if (ctx->pc != 0x1D5014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5014u; }
        if (ctx->pc != 0x1D5014u) { return; }
    }
    ctx->pc = 0x1D5014u;
label_1d5014:
    // 0x1d5014: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_1d5018:
    // 0x1d5018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d501c:
    // 0x1d501c: 0x0  nop
    ctx->pc = 0x1d501cu;
    // NOP
label_1d5020:
    // 0x1d5020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d5020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d5024:
    // 0x1d5024: 0xc0a248c  jal         func_289230
label_1d5028:
    if (ctx->pc == 0x1D5028u) {
        ctx->pc = 0x1D5028u;
            // 0x1d5028: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D502Cu;
        goto label_1d502c;
    }
    ctx->pc = 0x1D5024u;
    SET_GPR_U32(ctx, 31, 0x1D502Cu);
    ctx->pc = 0x1D5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5024u;
            // 0x1d5028: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D502Cu; }
        if (ctx->pc != 0x1D502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D502Cu; }
        if (ctx->pc != 0x1D502Cu) { return; }
    }
    ctx->pc = 0x1D502Cu;
label_1d502c:
    // 0x1d502c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d502cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5030:
    // 0x1d5030: 0xc047a42  jal         func_11E908
label_1d5034:
    if (ctx->pc == 0x1D5034u) {
        ctx->pc = 0x1D5034u;
            // 0x1d5034: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D5038u;
        goto label_1d5038;
    }
    ctx->pc = 0x1D5030u;
    SET_GPR_U32(ctx, 31, 0x1D5038u);
    ctx->pc = 0x1D5034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5030u;
            // 0x1d5034: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5038u; }
        if (ctx->pc != 0x1D5038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5038u; }
        if (ctx->pc != 0x1D5038u) { return; }
    }
    ctx->pc = 0x1D5038u;
label_1d5038:
    // 0x1d5038: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1d5038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_1d503c:
    // 0x1d503c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d503cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5040:
    // 0x1d5040: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d5040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d5044:
    // 0x1d5044: 0xc047964  jal         func_11E590
label_1d5048:
    if (ctx->pc == 0x1D5048u) {
        ctx->pc = 0x1D5048u;
            // 0x1d5048: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D504Cu;
        goto label_1d504c;
    }
    ctx->pc = 0x1D5044u;
    SET_GPR_U32(ctx, 31, 0x1D504Cu);
    ctx->pc = 0x1D5048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5044u;
            // 0x1d5048: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D504Cu; }
        if (ctx->pc != 0x1D504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D504Cu; }
        if (ctx->pc != 0x1D504Cu) { return; }
    }
    ctx->pc = 0x1D504Cu;
label_1d504c:
    // 0x1d504c: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x1d504cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
label_1d5050:
    // 0x1d5050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5054:
    // 0x1d5054: 0x0  nop
    ctx->pc = 0x1d5054u;
    // NOP
label_1d5058:
    // 0x1d5058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d5058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d505c:
    // 0x1d505c: 0xc0a248c  jal         func_289230
label_1d5060:
    if (ctx->pc == 0x1D5060u) {
        ctx->pc = 0x1D5060u;
            // 0x1d5060: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D5064u;
        goto label_1d5064;
    }
    ctx->pc = 0x1D505Cu;
    SET_GPR_U32(ctx, 31, 0x1D5064u);
    ctx->pc = 0x1D5060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D505Cu;
            // 0x1d5060: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5064u; }
        if (ctx->pc != 0x1D5064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5064u; }
        if (ctx->pc != 0x1D5064u) { return; }
    }
    ctx->pc = 0x1D5064u;
label_1d5064:
    // 0x1d5064: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d5064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5068:
    // 0x1d5068: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d506c:
    // 0x1d506c: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1d5070:
    // 0x1d5070: 0xc04d35c  jal         func_134D70
label_1d5074:
    if (ctx->pc == 0x1D5074u) {
        ctx->pc = 0x1D5074u;
            // 0x1d5074: 0x240600f2  addiu       $a2, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->pc = 0x1D5078u;
        goto label_1d5078;
    }
    ctx->pc = 0x1D5070u;
    SET_GPR_U32(ctx, 31, 0x1D5078u);
    ctx->pc = 0x1D5074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5070u;
            // 0x1d5074: 0x240600f2  addiu       $a2, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5078u; }
        if (ctx->pc != 0x1D5078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5078u; }
        if (ctx->pc != 0x1D5078u) { return; }
    }
    ctx->pc = 0x1D5078u;
label_1d5078:
    // 0x1d5078: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1d5078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d507c:
    // 0x1d507c: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x1d507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1d5080:
    // 0x1d5080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d5080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5084:
    // 0x1d5084: 0xc04d2c8  jal         func_134B20
label_1d5088:
    if (ctx->pc == 0x1D5088u) {
        ctx->pc = 0x1D5088u;
            // 0x1d5088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D508Cu;
        goto label_1d508c;
    }
    ctx->pc = 0x1D5084u;
    SET_GPR_U32(ctx, 31, 0x1D508Cu);
    ctx->pc = 0x1D5088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5084u;
            // 0x1d5088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D508Cu; }
        if (ctx->pc != 0x1D508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D508Cu; }
        if (ctx->pc != 0x1D508Cu) { return; }
    }
    ctx->pc = 0x1D508Cu;
label_1d508c:
    // 0x1d508c: 0xc047a42  jal         func_11E908
label_1d5090:
    if (ctx->pc == 0x1D5090u) {
        ctx->pc = 0x1D5090u;
            // 0x1d5090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D5094u;
        goto label_1d5094;
    }
    ctx->pc = 0x1D508Cu;
    SET_GPR_U32(ctx, 31, 0x1D5094u);
    ctx->pc = 0x1D5090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D508Cu;
            // 0x1d5090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5094u; }
        if (ctx->pc != 0x1D5094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5094u; }
        if (ctx->pc != 0x1D5094u) { return; }
    }
    ctx->pc = 0x1D5094u;
label_1d5094:
    // 0x1d5094: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x1d5094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
label_1d5098:
    // 0x1d5098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d509c:
    // 0x1d509c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d509cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d50a0:
    // 0x1d50a0: 0xc047964  jal         func_11E590
label_1d50a4:
    if (ctx->pc == 0x1D50A4u) {
        ctx->pc = 0x1D50A4u;
            // 0x1d50a4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D50A8u;
        goto label_1d50a8;
    }
    ctx->pc = 0x1D50A0u;
    SET_GPR_U32(ctx, 31, 0x1D50A8u);
    ctx->pc = 0x1D50A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50A0u;
            // 0x1d50a4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50A8u; }
        if (ctx->pc != 0x1D50A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50A8u; }
        if (ctx->pc != 0x1D50A8u) { return; }
    }
    ctx->pc = 0x1D50A8u;
label_1d50a8:
    // 0x1d50a8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1d50ac:
    // 0x1d50ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d50acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d50b0:
    // 0x1d50b0: 0x0  nop
    ctx->pc = 0x1d50b0u;
    // NOP
label_1d50b4:
    // 0x1d50b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d50b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d50b8:
    // 0x1d50b8: 0xc0a248c  jal         func_289230
label_1d50bc:
    if (ctx->pc == 0x1D50BCu) {
        ctx->pc = 0x1D50BCu;
            // 0x1d50bc: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D50C0u;
        goto label_1d50c0;
    }
    ctx->pc = 0x1D50B8u;
    SET_GPR_U32(ctx, 31, 0x1D50C0u);
    ctx->pc = 0x1D50BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50B8u;
            // 0x1d50bc: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50C0u; }
        if (ctx->pc != 0x1D50C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50C0u; }
        if (ctx->pc != 0x1D50C0u) { return; }
    }
    ctx->pc = 0x1D50C0u;
label_1d50c0:
    // 0x1d50c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d50c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d50c4:
    // 0x1d50c4: 0xc047a42  jal         func_11E908
label_1d50c8:
    if (ctx->pc == 0x1D50C8u) {
        ctx->pc = 0x1D50C8u;
            // 0x1d50c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D50CCu;
        goto label_1d50cc;
    }
    ctx->pc = 0x1D50C4u;
    SET_GPR_U32(ctx, 31, 0x1D50CCu);
    ctx->pc = 0x1D50C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50C4u;
            // 0x1d50c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50CCu; }
        if (ctx->pc != 0x1D50CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50CCu; }
        if (ctx->pc != 0x1D50CCu) { return; }
    }
    ctx->pc = 0x1D50CCu;
label_1d50cc:
    // 0x1d50cc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1d50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1d50d0:
    // 0x1d50d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d50d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d50d4:
    // 0x1d50d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d50d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d50d8:
    // 0x1d50d8: 0xc047964  jal         func_11E590
label_1d50dc:
    if (ctx->pc == 0x1D50DCu) {
        ctx->pc = 0x1D50DCu;
            // 0x1d50dc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D50E0u;
        goto label_1d50e0;
    }
    ctx->pc = 0x1D50D8u;
    SET_GPR_U32(ctx, 31, 0x1D50E0u);
    ctx->pc = 0x1D50DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50D8u;
            // 0x1d50dc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E0u; }
        if (ctx->pc != 0x1D50E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E0u; }
        if (ctx->pc != 0x1D50E0u) { return; }
    }
    ctx->pc = 0x1D50E0u;
label_1d50e0:
    // 0x1d50e0: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x1d50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
label_1d50e4:
    // 0x1d50e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d50e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d50e8:
    // 0x1d50e8: 0x0  nop
    ctx->pc = 0x1d50e8u;
    // NOP
label_1d50ec:
    // 0x1d50ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d50ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d50f0:
    // 0x1d50f0: 0xc0a248c  jal         func_289230
label_1d50f4:
    if (ctx->pc == 0x1D50F4u) {
        ctx->pc = 0x1D50F4u;
            // 0x1d50f4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D50F8u;
        goto label_1d50f8;
    }
    ctx->pc = 0x1D50F0u;
    SET_GPR_U32(ctx, 31, 0x1D50F8u);
    ctx->pc = 0x1D50F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50F0u;
            // 0x1d50f4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50F8u; }
        if (ctx->pc != 0x1D50F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50F8u; }
        if (ctx->pc != 0x1D50F8u) { return; }
    }
    ctx->pc = 0x1D50F8u;
label_1d50f8:
    // 0x1d50f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d50f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d50fc:
    // 0x1d50fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5100:
    // 0x1d5100: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1d5100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1d5104:
    // 0x1d5104: 0xc04d35c  jal         func_134D70
label_1d5108:
    if (ctx->pc == 0x1D5108u) {
        ctx->pc = 0x1D5108u;
            // 0x1d5108: 0x240600f2  addiu       $a2, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->pc = 0x1D510Cu;
        goto label_1d510c;
    }
    ctx->pc = 0x1D5104u;
    SET_GPR_U32(ctx, 31, 0x1D510Cu);
    ctx->pc = 0x1D5108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5104u;
            // 0x1d5108: 0x240600f2  addiu       $a2, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D510Cu; }
        if (ctx->pc != 0x1D510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D510Cu; }
        if (ctx->pc != 0x1D510Cu) { return; }
    }
    ctx->pc = 0x1D510Cu;
label_1d510c:
    // 0x1d510c: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d5110:
    // 0x1d5110: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x1d5110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1d5114:
    // 0x1d5114: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5118:
    // 0x1d5118: 0xc04d2c8  jal         func_134B20
label_1d511c:
    if (ctx->pc == 0x1D511Cu) {
        ctx->pc = 0x1D511Cu;
            // 0x1d511c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5120u;
        goto label_1d5120;
    }
    ctx->pc = 0x1D5118u;
    SET_GPR_U32(ctx, 31, 0x1D5120u);
    ctx->pc = 0x1D511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5118u;
            // 0x1d511c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5120u; }
        if (ctx->pc != 0x1D5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5120u; }
        if (ctx->pc != 0x1D5120u) { return; }
    }
    ctx->pc = 0x1D5120u;
label_1d5120:
    // 0x1d5120: 0xc047a42  jal         func_11E908
label_1d5124:
    if (ctx->pc == 0x1D5124u) {
        ctx->pc = 0x1D5124u;
            // 0x1d5124: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D5128u;
        goto label_1d5128;
    }
    ctx->pc = 0x1D5120u;
    SET_GPR_U32(ctx, 31, 0x1D5128u);
    ctx->pc = 0x1D5124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5120u;
            // 0x1d5124: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5128u; }
        if (ctx->pc != 0x1D5128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5128u; }
        if (ctx->pc != 0x1D5128u) { return; }
    }
    ctx->pc = 0x1D5128u;
label_1d5128:
    // 0x1d5128: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1d5128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_1d512c:
    // 0x1d512c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5130:
    // 0x1d5130: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d5130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d5134:
    // 0x1d5134: 0xc047964  jal         func_11E590
label_1d5138:
    if (ctx->pc == 0x1D5138u) {
        ctx->pc = 0x1D5138u;
            // 0x1d5138: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D513Cu;
        goto label_1d513c;
    }
    ctx->pc = 0x1D5134u;
    SET_GPR_U32(ctx, 31, 0x1D513Cu);
    ctx->pc = 0x1D5138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5134u;
            // 0x1d5138: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D513Cu; }
        if (ctx->pc != 0x1D513Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D513Cu; }
        if (ctx->pc != 0x1D513Cu) { return; }
    }
    ctx->pc = 0x1D513Cu;
label_1d513c:
    // 0x1d513c: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_1d5140:
    // 0x1d5140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5144:
    // 0x1d5144: 0x0  nop
    ctx->pc = 0x1d5144u;
    // NOP
label_1d5148:
    // 0x1d5148: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d5148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d514c:
    // 0x1d514c: 0xc0a248c  jal         func_289230
label_1d5150:
    if (ctx->pc == 0x1D5150u) {
        ctx->pc = 0x1D5150u;
            // 0x1d5150: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D5154u;
        goto label_1d5154;
    }
    ctx->pc = 0x1D514Cu;
    SET_GPR_U32(ctx, 31, 0x1D5154u);
    ctx->pc = 0x1D5150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D514Cu;
            // 0x1d5150: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5154u; }
        if (ctx->pc != 0x1D5154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5154u; }
        if (ctx->pc != 0x1D5154u) { return; }
    }
    ctx->pc = 0x1D5154u;
label_1d5154:
    // 0x1d5154: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d5154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5158:
    // 0x1d5158: 0xc047a42  jal         func_11E908
label_1d515c:
    if (ctx->pc == 0x1D515Cu) {
        ctx->pc = 0x1D515Cu;
            // 0x1d515c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D5160u;
        goto label_1d5160;
    }
    ctx->pc = 0x1D5158u;
    SET_GPR_U32(ctx, 31, 0x1D5160u);
    ctx->pc = 0x1D515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5158u;
            // 0x1d515c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5160u; }
        if (ctx->pc != 0x1D5160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5160u; }
        if (ctx->pc != 0x1D5160u) { return; }
    }
    ctx->pc = 0x1D5160u;
label_1d5160:
    // 0x1d5160: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_1d5164:
    // 0x1d5164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5168:
    // 0x1d5168: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d5168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d516c:
    // 0x1d516c: 0xc047964  jal         func_11E590
label_1d5170:
    if (ctx->pc == 0x1D5170u) {
        ctx->pc = 0x1D5170u;
            // 0x1d5170: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D5174u;
        goto label_1d5174;
    }
    ctx->pc = 0x1D516Cu;
    SET_GPR_U32(ctx, 31, 0x1D5174u);
    ctx->pc = 0x1D5170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D516Cu;
            // 0x1d5170: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5174u; }
        if (ctx->pc != 0x1D5174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5174u; }
        if (ctx->pc != 0x1D5174u) { return; }
    }
    ctx->pc = 0x1D5174u;
label_1d5174:
    // 0x1d5174: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1d5174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_1d5178:
    // 0x1d5178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d517c:
    // 0x1d517c: 0x0  nop
    ctx->pc = 0x1d517cu;
    // NOP
label_1d5180:
    // 0x1d5180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d5180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d5184:
    // 0x1d5184: 0xc0a248c  jal         func_289230
label_1d5188:
    if (ctx->pc == 0x1D5188u) {
        ctx->pc = 0x1D5188u;
            // 0x1d5188: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D518Cu;
        goto label_1d518c;
    }
    ctx->pc = 0x1D5184u;
    SET_GPR_U32(ctx, 31, 0x1D518Cu);
    ctx->pc = 0x1D5188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5184u;
            // 0x1d5188: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D518Cu; }
        if (ctx->pc != 0x1D518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D518Cu; }
        if (ctx->pc != 0x1D518Cu) { return; }
    }
    ctx->pc = 0x1D518Cu;
label_1d518c:
    // 0x1d518c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d518cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5190:
    // 0x1d5190: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d5190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5194:
    // 0x1d5194: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x1d5194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1d5198:
    // 0x1d5198: 0xc04d35c  jal         func_134D70
label_1d519c:
    if (ctx->pc == 0x1D519Cu) {
        ctx->pc = 0x1D519Cu;
            // 0x1d519c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x1D51A0u;
        goto label_1d51a0;
    }
    ctx->pc = 0x1D5198u;
    SET_GPR_U32(ctx, 31, 0x1D51A0u);
    ctx->pc = 0x1D519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5198u;
            // 0x1d519c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51A0u; }
        if (ctx->pc != 0x1D51A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51A0u; }
        if (ctx->pc != 0x1D51A0u) { return; }
    }
    ctx->pc = 0x1D51A0u;
label_1d51a0:
    // 0x1d51a0: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1d51a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d51a4:
    // 0x1d51a4: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x1d51a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1d51a8:
    // 0x1d51a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d51a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d51ac:
    // 0x1d51ac: 0xc04d2c8  jal         func_134B20
label_1d51b0:
    if (ctx->pc == 0x1D51B0u) {
        ctx->pc = 0x1D51B0u;
            // 0x1d51b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D51B4u;
        goto label_1d51b4;
    }
    ctx->pc = 0x1D51ACu;
    SET_GPR_U32(ctx, 31, 0x1D51B4u);
    ctx->pc = 0x1D51B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51ACu;
            // 0x1d51b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51B4u; }
        if (ctx->pc != 0x1D51B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51B4u; }
        if (ctx->pc != 0x1D51B4u) { return; }
    }
    ctx->pc = 0x1D51B4u;
label_1d51b4:
    // 0x1d51b4: 0xc047a42  jal         func_11E908
label_1d51b8:
    if (ctx->pc == 0x1D51B8u) {
        ctx->pc = 0x1D51B8u;
            // 0x1d51b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D51BCu;
        goto label_1d51bc;
    }
    ctx->pc = 0x1D51B4u;
    SET_GPR_U32(ctx, 31, 0x1D51BCu);
    ctx->pc = 0x1D51B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51B4u;
            // 0x1d51b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51BCu; }
        if (ctx->pc != 0x1D51BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51BCu; }
        if (ctx->pc != 0x1D51BCu) { return; }
    }
    ctx->pc = 0x1D51BCu;
label_1d51bc:
    // 0x1d51bc: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1d51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_1d51c0:
    // 0x1d51c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d51c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d51c4:
    // 0x1d51c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d51c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d51c8:
    // 0x1d51c8: 0xc047964  jal         func_11E590
label_1d51cc:
    if (ctx->pc == 0x1D51CCu) {
        ctx->pc = 0x1D51CCu;
            // 0x1d51cc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D51D0u;
        goto label_1d51d0;
    }
    ctx->pc = 0x1D51C8u;
    SET_GPR_U32(ctx, 31, 0x1D51D0u);
    ctx->pc = 0x1D51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51C8u;
            // 0x1d51cc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51D0u; }
        if (ctx->pc != 0x1D51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51D0u; }
        if (ctx->pc != 0x1D51D0u) { return; }
    }
    ctx->pc = 0x1D51D0u;
label_1d51d0:
    // 0x1d51d0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1d51d4:
    // 0x1d51d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d51d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d51d8:
    // 0x1d51d8: 0x0  nop
    ctx->pc = 0x1d51d8u;
    // NOP
label_1d51dc:
    // 0x1d51dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d51dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d51e0:
    // 0x1d51e0: 0xc0a248c  jal         func_289230
label_1d51e4:
    if (ctx->pc == 0x1D51E4u) {
        ctx->pc = 0x1D51E4u;
            // 0x1d51e4: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x1D51E8u;
        goto label_1d51e8;
    }
    ctx->pc = 0x1D51E0u;
    SET_GPR_U32(ctx, 31, 0x1D51E8u);
    ctx->pc = 0x1D51E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51E0u;
            // 0x1d51e4: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51E8u; }
        if (ctx->pc != 0x1D51E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51E8u; }
        if (ctx->pc != 0x1D51E8u) { return; }
    }
    ctx->pc = 0x1D51E8u;
label_1d51e8:
    // 0x1d51e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d51e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51ec:
    // 0x1d51ec: 0xc047a42  jal         func_11E908
label_1d51f0:
    if (ctx->pc == 0x1D51F0u) {
        ctx->pc = 0x1D51F0u;
            // 0x1d51f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1D51F4u;
        goto label_1d51f4;
    }
    ctx->pc = 0x1D51ECu;
    SET_GPR_U32(ctx, 31, 0x1D51F4u);
    ctx->pc = 0x1D51F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51ECu;
            // 0x1d51f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51F4u; }
        if (ctx->pc != 0x1D51F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D51F4u; }
        if (ctx->pc != 0x1D51F4u) { return; }
    }
    ctx->pc = 0x1D51F4u;
label_1d51f4:
    // 0x1d51f4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1d51f8:
    // 0x1d51f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d51f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d51fc:
    // 0x1d51fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d51fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d5200:
    // 0x1d5200: 0xc047964  jal         func_11E590
label_1d5204:
    if (ctx->pc == 0x1D5204u) {
        ctx->pc = 0x1D5204u;
            // 0x1d5204: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1D5208u;
        goto label_1d5208;
    }
    ctx->pc = 0x1D5200u;
    SET_GPR_U32(ctx, 31, 0x1D5208u);
    ctx->pc = 0x1D5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5200u;
            // 0x1d5204: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5208u; }
        if (ctx->pc != 0x1D5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5208u; }
        if (ctx->pc != 0x1D5208u) { return; }
    }
    ctx->pc = 0x1D5208u;
label_1d5208:
    // 0x1d5208: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_1d520c:
    // 0x1d520c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d520cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5210:
    // 0x1d5210: 0x0  nop
    ctx->pc = 0x1d5210u;
    // NOP
label_1d5214:
    // 0x1d5214: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d5214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d5218:
    // 0x1d5218: 0xc0a248c  jal         func_289230
label_1d521c:
    if (ctx->pc == 0x1D521Cu) {
        ctx->pc = 0x1D521Cu;
            // 0x1d521c: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1D5220u;
        goto label_1d5220;
    }
    ctx->pc = 0x1D5218u;
    SET_GPR_U32(ctx, 31, 0x1D5220u);
    ctx->pc = 0x1D521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5218u;
            // 0x1d521c: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5220u; }
        if (ctx->pc != 0x1D5220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5220u; }
        if (ctx->pc != 0x1D5220u) { return; }
    }
    ctx->pc = 0x1D5220u;
label_1d5220:
    // 0x1d5220: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d5220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5224:
    // 0x1d5224: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d5224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5228:
    // 0x1d5228: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1d522c:
    // 0x1d522c: 0xc04d35c  jal         func_134D70
label_1d5230:
    if (ctx->pc == 0x1D5230u) {
        ctx->pc = 0x1D5230u;
            // 0x1d5230: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x1D5234u;
        goto label_1d5234;
    }
    ctx->pc = 0x1D522Cu;
    SET_GPR_U32(ctx, 31, 0x1D5234u);
    ctx->pc = 0x1D5230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D522Cu;
            // 0x1d5230: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5234u; }
        if (ctx->pc != 0x1D5234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5234u; }
        if (ctx->pc != 0x1D5234u) { return; }
    }
    ctx->pc = 0x1D5234u;
label_1d5234:
    // 0x1d5234: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1d5234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d5238:
    // 0x1d5238: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x1d5238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1d523c:
    // 0x1d523c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5240:
    // 0x1d5240: 0xc04d2c8  jal         func_134B20
label_1d5244:
    if (ctx->pc == 0x1D5244u) {
        ctx->pc = 0x1D5244u;
            // 0x1d5244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5248u;
        goto label_1d5248;
    }
    ctx->pc = 0x1D5240u;
    SET_GPR_U32(ctx, 31, 0x1D5248u);
    ctx->pc = 0x1D5244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5240u;
            // 0x1d5244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5248u; }
        if (ctx->pc != 0x1D5248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5248u; }
        if (ctx->pc != 0x1D5248u) { return; }
    }
    ctx->pc = 0x1D5248u;
label_1d5248:
    // 0x1d5248: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1d5248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1d524c:
    // 0x1d524c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5250:
    // 0x1d5250: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1d5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1d5254:
    // 0x1d5254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5258:
    // 0x1d5258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d525c:
    // 0x1d525c: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x1d525cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d5260:
    // 0x1d5260: 0xc079fd8  jal         func_1E7F60
label_1d5264:
    if (ctx->pc == 0x1D5264u) {
        ctx->pc = 0x1D5264u;
            // 0x1d5264: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1D5268u;
        goto label_1d5268;
    }
    ctx->pc = 0x1D5260u;
    SET_GPR_U32(ctx, 31, 0x1D5268u);
    ctx->pc = 0x1D5264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5260u;
            // 0x1d5264: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5268u; }
        if (ctx->pc != 0x1D5268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5268u; }
        if (ctx->pc != 0x1D5268u) { return; }
    }
    ctx->pc = 0x1D5268u;
label_1d5268:
    // 0x1d5268: 0xc04d1a4  jal         func_134690
label_1d526c:
    if (ctx->pc == 0x1D526Cu) {
        ctx->pc = 0x1D526Cu;
            // 0x1d526c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1D5270u;
        goto label_1d5270;
    }
    ctx->pc = 0x1D5268u;
    SET_GPR_U32(ctx, 31, 0x1D5270u);
    ctx->pc = 0x1D526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5268u;
            // 0x1d526c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5270u; }
        if (ctx->pc != 0x1D5270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5270u; }
        if (ctx->pc != 0x1D5270u) { return; }
    }
    ctx->pc = 0x1D5270u;
label_1d5270:
    // 0x1d5270: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d5270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d5274:
    // 0x1d5274: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d5278:
    // 0x1d5278: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d5278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d527c:
    // 0x1d527c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d5280:
    // 0x1d5280: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5284:
    // 0x1d5284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5288:
    // 0x1d5288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d528c:
    // 0x1d528c: 0x3e00008  jr          $ra
label_1d5290:
    if (ctx->pc == 0x1D5290u) {
        ctx->pc = 0x1D5290u;
            // 0x1d5290: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1D5294u;
        goto label_fallthrough_0x1d528c;
    }
    ctx->pc = 0x1D528Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D528Cu;
            // 0x1d5290: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d528c:
    ctx->pc = 0x1D5294u;
}
