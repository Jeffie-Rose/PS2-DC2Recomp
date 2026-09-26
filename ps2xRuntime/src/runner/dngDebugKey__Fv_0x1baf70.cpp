#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dngDebugKey__Fv
// Address: 0x1baf70 - 0x1bb310
void dngDebugKey__Fv_0x1baf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dngDebugKey__Fv_0x1baf70");
#endif

    switch (ctx->pc) {
        case 0x1baf70u: goto label_1baf70;
        case 0x1baf74u: goto label_1baf74;
        case 0x1baf78u: goto label_1baf78;
        case 0x1baf7cu: goto label_1baf7c;
        case 0x1baf80u: goto label_1baf80;
        case 0x1baf84u: goto label_1baf84;
        case 0x1baf88u: goto label_1baf88;
        case 0x1baf8cu: goto label_1baf8c;
        case 0x1baf90u: goto label_1baf90;
        case 0x1baf94u: goto label_1baf94;
        case 0x1baf98u: goto label_1baf98;
        case 0x1baf9cu: goto label_1baf9c;
        case 0x1bafa0u: goto label_1bafa0;
        case 0x1bafa4u: goto label_1bafa4;
        case 0x1bafa8u: goto label_1bafa8;
        case 0x1bafacu: goto label_1bafac;
        case 0x1bafb0u: goto label_1bafb0;
        case 0x1bafb4u: goto label_1bafb4;
        case 0x1bafb8u: goto label_1bafb8;
        case 0x1bafbcu: goto label_1bafbc;
        case 0x1bafc0u: goto label_1bafc0;
        case 0x1bafc4u: goto label_1bafc4;
        case 0x1bafc8u: goto label_1bafc8;
        case 0x1bafccu: goto label_1bafcc;
        case 0x1bafd0u: goto label_1bafd0;
        case 0x1bafd4u: goto label_1bafd4;
        case 0x1bafd8u: goto label_1bafd8;
        case 0x1bafdcu: goto label_1bafdc;
        case 0x1bafe0u: goto label_1bafe0;
        case 0x1bafe4u: goto label_1bafe4;
        case 0x1bafe8u: goto label_1bafe8;
        case 0x1bafecu: goto label_1bafec;
        case 0x1baff0u: goto label_1baff0;
        case 0x1baff4u: goto label_1baff4;
        case 0x1baff8u: goto label_1baff8;
        case 0x1baffcu: goto label_1baffc;
        case 0x1bb000u: goto label_1bb000;
        case 0x1bb004u: goto label_1bb004;
        case 0x1bb008u: goto label_1bb008;
        case 0x1bb00cu: goto label_1bb00c;
        case 0x1bb010u: goto label_1bb010;
        case 0x1bb014u: goto label_1bb014;
        case 0x1bb018u: goto label_1bb018;
        case 0x1bb01cu: goto label_1bb01c;
        case 0x1bb020u: goto label_1bb020;
        case 0x1bb024u: goto label_1bb024;
        case 0x1bb028u: goto label_1bb028;
        case 0x1bb02cu: goto label_1bb02c;
        case 0x1bb030u: goto label_1bb030;
        case 0x1bb034u: goto label_1bb034;
        case 0x1bb038u: goto label_1bb038;
        case 0x1bb03cu: goto label_1bb03c;
        case 0x1bb040u: goto label_1bb040;
        case 0x1bb044u: goto label_1bb044;
        case 0x1bb048u: goto label_1bb048;
        case 0x1bb04cu: goto label_1bb04c;
        case 0x1bb050u: goto label_1bb050;
        case 0x1bb054u: goto label_1bb054;
        case 0x1bb058u: goto label_1bb058;
        case 0x1bb05cu: goto label_1bb05c;
        case 0x1bb060u: goto label_1bb060;
        case 0x1bb064u: goto label_1bb064;
        case 0x1bb068u: goto label_1bb068;
        case 0x1bb06cu: goto label_1bb06c;
        case 0x1bb070u: goto label_1bb070;
        case 0x1bb074u: goto label_1bb074;
        case 0x1bb078u: goto label_1bb078;
        case 0x1bb07cu: goto label_1bb07c;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb084u: goto label_1bb084;
        case 0x1bb088u: goto label_1bb088;
        case 0x1bb08cu: goto label_1bb08c;
        case 0x1bb090u: goto label_1bb090;
        case 0x1bb094u: goto label_1bb094;
        case 0x1bb098u: goto label_1bb098;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0a0u: goto label_1bb0a0;
        case 0x1bb0a4u: goto label_1bb0a4;
        case 0x1bb0a8u: goto label_1bb0a8;
        case 0x1bb0acu: goto label_1bb0ac;
        case 0x1bb0b0u: goto label_1bb0b0;
        case 0x1bb0b4u: goto label_1bb0b4;
        case 0x1bb0b8u: goto label_1bb0b8;
        case 0x1bb0bcu: goto label_1bb0bc;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb0c4u: goto label_1bb0c4;
        case 0x1bb0c8u: goto label_1bb0c8;
        case 0x1bb0ccu: goto label_1bb0cc;
        case 0x1bb0d0u: goto label_1bb0d0;
        case 0x1bb0d4u: goto label_1bb0d4;
        case 0x1bb0d8u: goto label_1bb0d8;
        case 0x1bb0dcu: goto label_1bb0dc;
        case 0x1bb0e0u: goto label_1bb0e0;
        case 0x1bb0e4u: goto label_1bb0e4;
        case 0x1bb0e8u: goto label_1bb0e8;
        case 0x1bb0ecu: goto label_1bb0ec;
        case 0x1bb0f0u: goto label_1bb0f0;
        case 0x1bb0f4u: goto label_1bb0f4;
        case 0x1bb0f8u: goto label_1bb0f8;
        case 0x1bb0fcu: goto label_1bb0fc;
        case 0x1bb100u: goto label_1bb100;
        case 0x1bb104u: goto label_1bb104;
        case 0x1bb108u: goto label_1bb108;
        case 0x1bb10cu: goto label_1bb10c;
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb114u: goto label_1bb114;
        case 0x1bb118u: goto label_1bb118;
        case 0x1bb11cu: goto label_1bb11c;
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb124u: goto label_1bb124;
        case 0x1bb128u: goto label_1bb128;
        case 0x1bb12cu: goto label_1bb12c;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb134u: goto label_1bb134;
        case 0x1bb138u: goto label_1bb138;
        case 0x1bb13cu: goto label_1bb13c;
        case 0x1bb140u: goto label_1bb140;
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb148u: goto label_1bb148;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb150u: goto label_1bb150;
        case 0x1bb154u: goto label_1bb154;
        case 0x1bb158u: goto label_1bb158;
        case 0x1bb15cu: goto label_1bb15c;
        case 0x1bb160u: goto label_1bb160;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb168u: goto label_1bb168;
        case 0x1bb16cu: goto label_1bb16c;
        case 0x1bb170u: goto label_1bb170;
        case 0x1bb174u: goto label_1bb174;
        case 0x1bb178u: goto label_1bb178;
        case 0x1bb17cu: goto label_1bb17c;
        case 0x1bb180u: goto label_1bb180;
        case 0x1bb184u: goto label_1bb184;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb18cu: goto label_1bb18c;
        case 0x1bb190u: goto label_1bb190;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb198u: goto label_1bb198;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1a4u: goto label_1bb1a4;
        case 0x1bb1a8u: goto label_1bb1a8;
        case 0x1bb1acu: goto label_1bb1ac;
        case 0x1bb1b0u: goto label_1bb1b0;
        case 0x1bb1b4u: goto label_1bb1b4;
        case 0x1bb1b8u: goto label_1bb1b8;
        case 0x1bb1bcu: goto label_1bb1bc;
        case 0x1bb1c0u: goto label_1bb1c0;
        case 0x1bb1c4u: goto label_1bb1c4;
        case 0x1bb1c8u: goto label_1bb1c8;
        case 0x1bb1ccu: goto label_1bb1cc;
        case 0x1bb1d0u: goto label_1bb1d0;
        case 0x1bb1d4u: goto label_1bb1d4;
        case 0x1bb1d8u: goto label_1bb1d8;
        case 0x1bb1dcu: goto label_1bb1dc;
        case 0x1bb1e0u: goto label_1bb1e0;
        case 0x1bb1e4u: goto label_1bb1e4;
        case 0x1bb1e8u: goto label_1bb1e8;
        case 0x1bb1ecu: goto label_1bb1ec;
        case 0x1bb1f0u: goto label_1bb1f0;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb1f8u: goto label_1bb1f8;
        case 0x1bb1fcu: goto label_1bb1fc;
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb204u: goto label_1bb204;
        case 0x1bb208u: goto label_1bb208;
        case 0x1bb20cu: goto label_1bb20c;
        case 0x1bb210u: goto label_1bb210;
        case 0x1bb214u: goto label_1bb214;
        case 0x1bb218u: goto label_1bb218;
        case 0x1bb21cu: goto label_1bb21c;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb224u: goto label_1bb224;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb22cu: goto label_1bb22c;
        case 0x1bb230u: goto label_1bb230;
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb238u: goto label_1bb238;
        case 0x1bb23cu: goto label_1bb23c;
        case 0x1bb240u: goto label_1bb240;
        case 0x1bb244u: goto label_1bb244;
        case 0x1bb248u: goto label_1bb248;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb250u: goto label_1bb250;
        case 0x1bb254u: goto label_1bb254;
        case 0x1bb258u: goto label_1bb258;
        case 0x1bb25cu: goto label_1bb25c;
        case 0x1bb260u: goto label_1bb260;
        case 0x1bb264u: goto label_1bb264;
        case 0x1bb268u: goto label_1bb268;
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb270u: goto label_1bb270;
        case 0x1bb274u: goto label_1bb274;
        case 0x1bb278u: goto label_1bb278;
        case 0x1bb27cu: goto label_1bb27c;
        case 0x1bb280u: goto label_1bb280;
        case 0x1bb284u: goto label_1bb284;
        case 0x1bb288u: goto label_1bb288;
        case 0x1bb28cu: goto label_1bb28c;
        case 0x1bb290u: goto label_1bb290;
        case 0x1bb294u: goto label_1bb294;
        case 0x1bb298u: goto label_1bb298;
        case 0x1bb29cu: goto label_1bb29c;
        case 0x1bb2a0u: goto label_1bb2a0;
        case 0x1bb2a4u: goto label_1bb2a4;
        case 0x1bb2a8u: goto label_1bb2a8;
        case 0x1bb2acu: goto label_1bb2ac;
        case 0x1bb2b0u: goto label_1bb2b0;
        case 0x1bb2b4u: goto label_1bb2b4;
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2bcu: goto label_1bb2bc;
        case 0x1bb2c0u: goto label_1bb2c0;
        case 0x1bb2c4u: goto label_1bb2c4;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2d0u: goto label_1bb2d0;
        case 0x1bb2d4u: goto label_1bb2d4;
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2dcu: goto label_1bb2dc;
        case 0x1bb2e0u: goto label_1bb2e0;
        case 0x1bb2e4u: goto label_1bb2e4;
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb2ecu: goto label_1bb2ec;
        case 0x1bb2f0u: goto label_1bb2f0;
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb2f8u: goto label_1bb2f8;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb300u: goto label_1bb300;
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb30cu: goto label_1bb30c;
        default: break;
    }

    ctx->pc = 0x1baf70u;

label_1baf70:
    // 0x1baf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1baf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1baf74:
    // 0x1baf74: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1baf78:
    // 0x1baf78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1baf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1baf7c:
    // 0x1baf7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1baf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1baf80:
    // 0x1baf80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1baf84:
    // 0x1baf84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1baf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1baf88:
    // 0x1baf88: 0x8422f1f0  lh          $v0, -0xE10($at)
    ctx->pc = 0x1baf88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963696)));
label_1baf8c:
    // 0x1baf8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1baf90:
    if (ctx->pc == 0x1BAF90u) {
        ctx->pc = 0x1BAF90u;
            // 0x1baf90: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1BAF94u;
        goto label_1baf94;
    }
    ctx->pc = 0x1BAF8Cu;
    {
        const bool branch_taken_0x1baf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF8Cu;
            // 0x1baf90: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf8c) {
            ctx->pc = 0x1BAF9Cu;
            goto label_1baf9c;
        }
    }
    ctx->pc = 0x1BAF94u;
label_1baf94:
    // 0x1baf94: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_1baf98:
    if (ctx->pc == 0x1BAF98u) {
        ctx->pc = 0x1BAF98u;
            // 0x1baf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF9Cu;
        goto label_1baf9c;
    }
    ctx->pc = 0x1BAF94u;
    {
        const bool branch_taken_0x1baf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF94u;
            // 0x1baf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf94) {
            ctx->pc = 0x1BB2F8u;
            goto label_1bb2f8;
        }
    }
    ctx->pc = 0x1BAF9Cu;
label_1baf9c:
    // 0x1baf9c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1baf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1bafa0:
    // 0x1bafa0: 0xc052d0c  jal         func_14B430
label_1bafa4:
    if (ctx->pc == 0x1BAFA4u) {
        ctx->pc = 0x1BAFA4u;
            // 0x1bafa4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BAFA8u;
        goto label_1bafa8;
    }
    ctx->pc = 0x1BAFA0u;
    SET_GPR_U32(ctx, 31, 0x1BAFA8u);
    ctx->pc = 0x1BAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFA0u;
            // 0x1bafa4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFA8u; }
        if (ctx->pc != 0x1BAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFA8u; }
        if (ctx->pc != 0x1BAFA8u) { return; }
    }
    ctx->pc = 0x1BAFA8u;
label_1bafa8:
    // 0x1bafa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1bafac:
    if (ctx->pc == 0x1BAFACu) {
        ctx->pc = 0x1BAFB0u;
        goto label_1bafb0;
    }
    ctx->pc = 0x1BAFA8u;
    {
        const bool branch_taken_0x1bafa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafa8) {
            ctx->pc = 0x1BAFD0u;
            goto label_1bafd0;
        }
    }
    ctx->pc = 0x1BAFB0u;
label_1bafb0:
    // 0x1bafb0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bafb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bafb4:
    // 0x1bafb4: 0x8422f1f2  lh          $v0, -0xE0E($at)
    ctx->pc = 0x1bafb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1bafb8:
    // 0x1bafb8: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1bafb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_1bafbc:
    // 0x1bafbc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1bafc0:
    if (ctx->pc == 0x1BAFC0u) {
        ctx->pc = 0x1BAFC4u;
        goto label_1bafc4;
    }
    ctx->pc = 0x1BAFBCu;
    {
        const bool branch_taken_0x1bafbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafbc) {
            ctx->pc = 0x1BAFD0u;
            goto label_1bafd0;
        }
    }
    ctx->pc = 0x1BAFC4u;
label_1bafc4:
    // 0x1bafc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bafc8:
    // 0x1bafc8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bafc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bafcc:
    // 0x1bafcc: 0xa422f1f2  sh          $v0, -0xE0E($at)
    ctx->pc = 0x1bafccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963698), (uint16_t)GPR_U32(ctx, 2));
label_1bafd0:
    // 0x1bafd0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1bafd4:
    // 0x1bafd4: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1bafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1bafd8:
    // 0x1bafd8: 0xc052d0c  jal         func_14B430
label_1bafdc:
    if (ctx->pc == 0x1BAFDCu) {
        ctx->pc = 0x1BAFDCu;
            // 0x1bafdc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BAFE0u;
        goto label_1bafe0;
    }
    ctx->pc = 0x1BAFD8u;
    SET_GPR_U32(ctx, 31, 0x1BAFE0u);
    ctx->pc = 0x1BAFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFD8u;
            // 0x1bafdc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFE0u; }
        if (ctx->pc != 0x1BAFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFE0u; }
        if (ctx->pc != 0x1BAFE0u) { return; }
    }
    ctx->pc = 0x1BAFE0u;
label_1bafe0:
    // 0x1bafe0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bafe4:
    if (ctx->pc == 0x1BAFE4u) {
        ctx->pc = 0x1BAFE8u;
        goto label_1bafe8;
    }
    ctx->pc = 0x1BAFE0u;
    {
        const bool branch_taken_0x1bafe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafe0) {
            ctx->pc = 0x1BB004u;
            goto label_1bb004;
        }
    }
    ctx->pc = 0x1BAFE8u;
label_1bafe8:
    // 0x1bafe8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bafe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bafec:
    // 0x1bafec: 0x8422f1f2  lh          $v0, -0xE0E($at)
    ctx->pc = 0x1bafecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1baff0:
    // 0x1baff0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1baff4:
    if (ctx->pc == 0x1BAFF4u) {
        ctx->pc = 0x1BAFF8u;
        goto label_1baff8;
    }
    ctx->pc = 0x1BAFF0u;
    {
        const bool branch_taken_0x1baff0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1baff0) {
            ctx->pc = 0x1BB004u;
            goto label_1bb004;
        }
    }
    ctx->pc = 0x1BAFF8u;
label_1baff8:
    // 0x1baff8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1baff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1baffc:
    // 0x1baffc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb000:
    // 0x1bb000: 0xa422f1f2  sh          $v0, -0xE0E($at)
    ctx->pc = 0x1bb000u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963698), (uint16_t)GPR_U32(ctx, 2));
label_1bb004:
    // 0x1bb004: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb008:
    // 0x1bb008: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bb00c:
    // 0x1bb00c: 0x8423f1f2  lh          $v1, -0xE0E($at)
    ctx->pc = 0x1bb00cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1bb010:
    // 0x1bb010: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1bb010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1bb014:
    // 0x1bb014: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
label_1bb018:
    // 0x1bb018: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1bb018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1bb01c:
    // 0x1bb01c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1bb01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1bb020:
    // 0x1bb020: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bb020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb024:
    // 0x1bb024: 0xc052d0c  jal         func_14B430
label_1bb028:
    if (ctx->pc == 0x1BB028u) {
        ctx->pc = 0x1BB028u;
            // 0x1bb028: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1BB02Cu;
        goto label_1bb02c;
    }
    ctx->pc = 0x1BB024u;
    SET_GPR_U32(ctx, 31, 0x1BB02Cu);
    ctx->pc = 0x1BB028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB024u;
            // 0x1bb028: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB02Cu; }
        if (ctx->pc != 0x1BB02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB02Cu; }
        if (ctx->pc != 0x1BB02Cu) { return; }
    }
    ctx->pc = 0x1BB02Cu;
label_1bb02c:
    // 0x1bb02c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb030:
    if (ctx->pc == 0x1BB030u) {
        ctx->pc = 0x1BB030u;
            // 0x1bb030: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1BB034u;
        goto label_1bb034;
    }
    ctx->pc = 0x1BB02Cu;
    {
        const bool branch_taken_0x1bb02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB02Cu;
            // 0x1bb030: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb02c) {
            ctx->pc = 0x1BB040u;
            goto label_1bb040;
        }
    }
    ctx->pc = 0x1BB034u;
label_1bb034:
    // 0x1bb034: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb038:
    // 0x1bb038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bb03c:
    // 0x1bb03c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb040:
    // 0x1bb040: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1bb040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1bb044:
    // 0x1bb044: 0xc052d0c  jal         func_14B430
label_1bb048:
    if (ctx->pc == 0x1BB048u) {
        ctx->pc = 0x1BB048u;
            // 0x1bb048: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB04Cu;
        goto label_1bb04c;
    }
    ctx->pc = 0x1BB044u;
    SET_GPR_U32(ctx, 31, 0x1BB04Cu);
    ctx->pc = 0x1BB048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB044u;
            // 0x1bb048: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB04Cu; }
        if (ctx->pc != 0x1BB04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB04Cu; }
        if (ctx->pc != 0x1BB04Cu) { return; }
    }
    ctx->pc = 0x1BB04Cu;
label_1bb04c:
    // 0x1bb04c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb050:
    if (ctx->pc == 0x1BB050u) {
        ctx->pc = 0x1BB050u;
            // 0x1bb050: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1BB054u;
        goto label_1bb054;
    }
    ctx->pc = 0x1BB04Cu;
    {
        const bool branch_taken_0x1bb04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB04Cu;
            // 0x1bb050: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb04c) {
            ctx->pc = 0x1BB060u;
            goto label_1bb060;
        }
    }
    ctx->pc = 0x1BB054u;
label_1bb054:
    // 0x1bb054: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb058:
    // 0x1bb058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bb05c:
    // 0x1bb05c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb060:
    // 0x1bb060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb064:
    // 0x1bb064: 0x8423f1f2  lh          $v1, -0xE0E($at)
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1bb068:
    // 0x1bb068: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1bb06c:
    if (ctx->pc == 0x1BB06Cu) {
        ctx->pc = 0x1BB06Cu;
            // 0x1bb06c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1BB070u;
        goto label_1bb070;
    }
    ctx->pc = 0x1BB068u;
    {
        const bool branch_taken_0x1bb068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB068u;
            // 0x1bb06c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb068) {
            ctx->pc = 0x1BB074u;
            goto label_1bb074;
        }
    }
    ctx->pc = 0x1BB070u;
label_1bb070:
    // 0x1bb070: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1bb070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bb074:
    // 0x1bb074: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1bb078:
    // 0x1bb078: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bb07c:
    // 0x1bb07c: 0xc052d0c  jal         func_14B430
label_1bb080:
    if (ctx->pc == 0x1BB080u) {
        ctx->pc = 0x1BB080u;
            // 0x1bb080: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB084u;
        goto label_1bb084;
    }
    ctx->pc = 0x1BB07Cu;
    SET_GPR_U32(ctx, 31, 0x1BB084u);
    ctx->pc = 0x1BB080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB07Cu;
            // 0x1bb080: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB084u; }
        if (ctx->pc != 0x1BB084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB084u; }
        if (ctx->pc != 0x1BB084u) { return; }
    }
    ctx->pc = 0x1BB084u;
label_1bb084:
    // 0x1bb084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb088:
    if (ctx->pc == 0x1BB088u) {
        ctx->pc = 0x1BB088u;
            // 0x1bb088: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1BB08Cu;
        goto label_1bb08c;
    }
    ctx->pc = 0x1BB084u;
    {
        const bool branch_taken_0x1bb084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB084u;
            // 0x1bb088: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb084) {
            ctx->pc = 0x1BB098u;
            goto label_1bb098;
        }
    }
    ctx->pc = 0x1BB08Cu;
label_1bb08c:
    // 0x1bb08c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb090:
    // 0x1bb090: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1bb094:
    // 0x1bb094: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb098:
    // 0x1bb098: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bb098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bb09c:
    // 0x1bb09c: 0xc052d0c  jal         func_14B430
label_1bb0a0:
    if (ctx->pc == 0x1BB0A0u) {
        ctx->pc = 0x1BB0A0u;
            // 0x1bb0a0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB0A4u;
        goto label_1bb0a4;
    }
    ctx->pc = 0x1BB09Cu;
    SET_GPR_U32(ctx, 31, 0x1BB0A4u);
    ctx->pc = 0x1BB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB09Cu;
            // 0x1bb0a0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0A4u; }
        if (ctx->pc != 0x1BB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0A4u; }
        if (ctx->pc != 0x1BB0A4u) { return; }
    }
    ctx->pc = 0x1BB0A4u;
label_1bb0a4:
    // 0x1bb0a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb0a8:
    if (ctx->pc == 0x1BB0A8u) {
        ctx->pc = 0x1BB0A8u;
            // 0x1bb0a8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1BB0ACu;
        goto label_1bb0ac;
    }
    ctx->pc = 0x1BB0A4u;
    {
        const bool branch_taken_0x1bb0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0A4u;
            // 0x1bb0a8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0a4) {
            ctx->pc = 0x1BB0B8u;
            goto label_1bb0b8;
        }
    }
    ctx->pc = 0x1BB0ACu;
label_1bb0ac:
    // 0x1bb0ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb0b0:
    // 0x1bb0b0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1bb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1bb0b4:
    // 0x1bb0b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb0b8:
    // 0x1bb0b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb0bc:
    // 0x1bb0bc: 0xc052d0c  jal         func_14B430
label_1bb0c0:
    if (ctx->pc == 0x1BB0C0u) {
        ctx->pc = 0x1BB0C0u;
            // 0x1bb0c0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB0C4u;
        goto label_1bb0c4;
    }
    ctx->pc = 0x1BB0BCu;
    SET_GPR_U32(ctx, 31, 0x1BB0C4u);
    ctx->pc = 0x1BB0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0BCu;
            // 0x1bb0c0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0C4u; }
        if (ctx->pc != 0x1BB0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0C4u; }
        if (ctx->pc != 0x1BB0C4u) { return; }
    }
    ctx->pc = 0x1BB0C4u;
label_1bb0c4:
    // 0x1bb0c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb0c8:
    if (ctx->pc == 0x1BB0C8u) {
        ctx->pc = 0x1BB0C8u;
            // 0x1bb0c8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1BB0CCu;
        goto label_1bb0cc;
    }
    ctx->pc = 0x1BB0C4u;
    {
        const bool branch_taken_0x1bb0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0C4u;
            // 0x1bb0c8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c4) {
            ctx->pc = 0x1BB0D8u;
            goto label_1bb0d8;
        }
    }
    ctx->pc = 0x1BB0CCu;
label_1bb0cc:
    // 0x1bb0cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb0d0:
    // 0x1bb0d0: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1bb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1bb0d4:
    // 0x1bb0d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb0d8:
    // 0x1bb0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb0dc:
    // 0x1bb0dc: 0xc052d0c  jal         func_14B430
label_1bb0e0:
    if (ctx->pc == 0x1BB0E0u) {
        ctx->pc = 0x1BB0E0u;
            // 0x1bb0e0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB0E4u;
        goto label_1bb0e4;
    }
    ctx->pc = 0x1BB0DCu;
    SET_GPR_U32(ctx, 31, 0x1BB0E4u);
    ctx->pc = 0x1BB0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0DCu;
            // 0x1bb0e0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0E4u; }
        if (ctx->pc != 0x1BB0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0E4u; }
        if (ctx->pc != 0x1BB0E4u) { return; }
    }
    ctx->pc = 0x1BB0E4u;
label_1bb0e4:
    // 0x1bb0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb0e8:
    if (ctx->pc == 0x1BB0E8u) {
        ctx->pc = 0x1BB0E8u;
            // 0x1bb0e8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1BB0ECu;
        goto label_1bb0ec;
    }
    ctx->pc = 0x1BB0E4u;
    {
        const bool branch_taken_0x1bb0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0E4u;
            // 0x1bb0e8: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0e4) {
            ctx->pc = 0x1BB0F8u;
            goto label_1bb0f8;
        }
    }
    ctx->pc = 0x1BB0ECu;
label_1bb0ec:
    // 0x1bb0ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb0f0:
    // 0x1bb0f0: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1bb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_1bb0f4:
    // 0x1bb0f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb0f8:
    // 0x1bb0f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bb0fc:
    // 0x1bb0fc: 0x8423f1f2  lh          $v1, -0xE0E($at)
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1bb100:
    // 0x1bb100: 0x24428bf4  addiu       $v0, $v0, -0x740C
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937588));
label_1bb104:
    // 0x1bb104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb108:
    // 0x1bb108: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bb108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb10c:
    // 0x1bb10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb110:
    // 0x1bb110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bb114:
    // 0x1bb114: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1bb114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1bb118:
    // 0x1bb118: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb11c:
    if (ctx->pc == 0x1BB11Cu) {
        ctx->pc = 0x1BB11Cu;
            // 0x1bb11c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1BB120u;
        goto label_1bb120;
    }
    ctx->pc = 0x1BB118u;
    {
        const bool branch_taken_0x1bb118 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB118u;
            // 0x1bb11c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb118) {
            ctx->pc = 0x1BB124u;
            goto label_1bb124;
        }
    }
    ctx->pc = 0x1BB120u;
label_1bb120:
    // 0x1bb120: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb124:
    // 0x1bb124: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1bb124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1bb128:
    // 0x1bb128: 0xc052d0c  jal         func_14B430
label_1bb12c:
    if (ctx->pc == 0x1BB12Cu) {
        ctx->pc = 0x1BB12Cu;
            // 0x1bb12c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB130u;
        goto label_1bb130;
    }
    ctx->pc = 0x1BB128u;
    SET_GPR_U32(ctx, 31, 0x1BB130u);
    ctx->pc = 0x1BB12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB128u;
            // 0x1bb12c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB130u; }
        if (ctx->pc != 0x1BB130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB130u; }
        if (ctx->pc != 0x1BB130u) { return; }
    }
    ctx->pc = 0x1BB130u;
label_1bb130:
    // 0x1bb130: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_1bb134:
    if (ctx->pc == 0x1BB134u) {
        ctx->pc = 0x1BB138u;
        goto label_1bb138;
    }
    ctx->pc = 0x1BB130u;
    {
        const bool branch_taken_0x1bb130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb130) {
            ctx->pc = 0x1BB2D4u;
            goto label_1bb2d4;
        }
    }
    ctx->pc = 0x1BB138u;
label_1bb138:
    // 0x1bb138: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb13c:
    // 0x1bb13c: 0x8423f1f2  lh          $v1, -0xE0E($at)
    ctx->pc = 0x1bb13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1bb140:
    // 0x1bb140: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1bb144:
    if (ctx->pc == 0x1BB144u) {
        ctx->pc = 0x1BB144u;
            // 0x1bb144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB148u;
        goto label_1bb148;
    }
    ctx->pc = 0x1BB140u;
    {
        const bool branch_taken_0x1bb140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB140u;
            // 0x1bb144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb140) {
            ctx->pc = 0x1BB178u;
            goto label_1bb178;
        }
    }
    ctx->pc = 0x1BB148u;
label_1bb148:
    // 0x1bb148: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb14c:
    // 0x1bb14c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bb150:
    // 0x1bb150: 0xa423f1f4  sh          $v1, -0xE0C($at)
    ctx->pc = 0x1bb150u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963700), (uint16_t)GPR_U32(ctx, 3));
label_1bb154:
    // 0x1bb154: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
label_1bb158:
    // 0x1bb158: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb15c:
    // 0x1bb15c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb160:
    // 0x1bb160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb164:
    // 0x1bb164: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1bb168:
    // 0x1bb168: 0xc06ebb0  jal         func_1BAEC0
label_1bb16c:
    if (ctx->pc == 0x1BB16Cu) {
        ctx->pc = 0x1BB16Cu;
            // 0x1bb16c: 0xa422f1f6  sh          $v0, -0xE0A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294963702), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1BB170u;
        goto label_1bb170;
    }
    ctx->pc = 0x1BB168u;
    SET_GPR_U32(ctx, 31, 0x1BB170u);
    ctx->pc = 0x1BB16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB168u;
            // 0x1bb16c: 0xa422f1f6  sh          $v0, -0xE0A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294963702), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAEC0u;
    if (runtime->hasFunction(0x1BAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB170u; }
        if (ctx->pc != 0x1BB170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugExit__Fv_0x1baec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB170u; }
        if (ctx->pc != 0x1BB170u) { return; }
    }
    ctx->pc = 0x1BB170u;
label_1bb170:
    // 0x1bb170: 0x10000061  b           . + 4 + (0x61 << 2)
label_1bb174:
    if (ctx->pc == 0x1BB174u) {
        ctx->pc = 0x1BB174u;
            // 0x1bb174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB178u;
        goto label_1bb178;
    }
    ctx->pc = 0x1BB170u;
    {
        const bool branch_taken_0x1bb170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB170u;
            // 0x1bb174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb170) {
            ctx->pc = 0x1BB2F8u;
            goto label_1bb2f8;
        }
    }
    ctx->pc = 0x1BB178u;
label_1bb178:
    // 0x1bb178: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1bb17c:
    if (ctx->pc == 0x1BB17Cu) {
        ctx->pc = 0x1BB180u;
        goto label_1bb180;
    }
    ctx->pc = 0x1BB178u;
    {
        const bool branch_taken_0x1bb178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb178) {
            ctx->pc = 0x1BB19Cu;
            goto label_1bb19c;
        }
    }
    ctx->pc = 0x1BB180u;
label_1bb180:
    // 0x1bb180: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
label_1bb184:
    // 0x1bb184: 0x8c248bf8  lw          $a0, -0x7408($at)
    ctx->pc = 0x1bb184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937592)));
label_1bb188:
    // 0x1bb188: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb18c:
    // 0x1bb18c: 0xc06eccc  jal         func_1BB330
label_1bb190:
    if (ctx->pc == 0x1BB190u) {
        ctx->pc = 0x1BB190u;
            // 0x1bb190: 0x8c25f1fc  lw          $a1, -0xE04($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963708)));
        ctx->pc = 0x1BB194u;
        goto label_1bb194;
    }
    ctx->pc = 0x1BB18Cu;
    SET_GPR_U32(ctx, 31, 0x1BB194u);
    ctx->pc = 0x1BB190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB18Cu;
            // 0x1bb190: 0x8c25f1fc  lw          $a1, -0xE04($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963708)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB330u;
    if (runtime->hasFunction(0x1BB330u)) {
        auto targetFn = runtime->lookupFunction(0x1BB330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB194u; }
        if (ctx->pc != 0x1BB194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DBGCMD_ReloadEnemy__Fii_0x1bb330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB194u; }
        if (ctx->pc != 0x1BB194u) { return; }
    }
    ctx->pc = 0x1BB194u;
label_1bb194:
    // 0x1bb194: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb198:
    // 0x1bb198: 0xac20f1fc  sw          $zero, -0xE04($at)
    ctx->pc = 0x1bb198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963708), GPR_U32(ctx, 0));
label_1bb19c:
    // 0x1bb19c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bb19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1bb1a0:
    // 0x1bb1a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bb1a4:
    // 0x1bb1a4: 0x8423f1f2  lh          $v1, -0xE0E($at)
    ctx->pc = 0x1bb1a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963698)));
label_1bb1a8:
    // 0x1bb1a8: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_1bb1ac:
    if (ctx->pc == 0x1BB1ACu) {
        ctx->pc = 0x1BB1ACu;
            // 0x1bb1ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1BB1B0u;
        goto label_1bb1b0;
    }
    ctx->pc = 0x1BB1A8u;
    {
        const bool branch_taken_0x1bb1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1A8u;
            // 0x1bb1ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1a8) {
            ctx->pc = 0x1BB214u;
            goto label_1bb214;
        }
    }
    ctx->pc = 0x1BB1B0u;
label_1bb1b0:
    // 0x1bb1b0: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1bb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb1b4:
    // 0x1bb1b4: 0x8c51300c  lw          $s1, 0x300C($v0)
    ctx->pc = 0x1bb1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12300)));
label_1bb1b8:
    // 0x1bb1b8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_1bb1bc:
    if (ctx->pc == 0x1BB1BCu) {
        ctx->pc = 0x1BB1BCu;
            // 0x1bb1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1C0u;
        goto label_1bb1c0;
    }
    ctx->pc = 0x1BB1B8u;
    {
        const bool branch_taken_0x1bb1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1B8u;
            // 0x1bb1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1b8) {
            ctx->pc = 0x1BB1E8u;
            goto label_1bb1e8;
        }
    }
    ctx->pc = 0x1BB1C0u;
label_1bb1c0:
    // 0x1bb1c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bb1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb1c4:
    // 0x1bb1c4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1bb1c8:
    // 0x1bb1c8: 0x8c590010  lw          $t9, 0x10($v0)
    ctx->pc = 0x1bb1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1bb1cc:
    // 0x1bb1cc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1bb1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1bb1d0:
    // 0x1bb1d0: 0x320f809  jalr        $t9
label_1bb1d4:
    if (ctx->pc == 0x1BB1D4u) {
        ctx->pc = 0x1BB1D4u;
            // 0x1bb1d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1BB1D8u;
        goto label_1bb1d8;
    }
    ctx->pc = 0x1BB1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BB1D8u);
        ctx->pc = 0x1BB1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1D0u;
            // 0x1bb1d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BB1D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1D8u; }
            if (ctx->pc != 0x1BB1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BB1D8u;
label_1bb1d8:
    // 0x1bb1d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb1dc:
    // 0x1bb1dc: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1bb1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1bb1e0:
    // 0x1bb1e0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1bb1e4:
    if (ctx->pc == 0x1BB1E4u) {
        ctx->pc = 0x1BB1E4u;
            // 0x1bb1e4: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x1BB1E8u;
        goto label_1bb1e8;
    }
    ctx->pc = 0x1BB1E0u;
    {
        const bool branch_taken_0x1bb1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1E0u;
            // 0x1bb1e4: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1e0) {
            ctx->pc = 0x1BB1C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bb1c4;
        }
    }
    ctx->pc = 0x1BB1E8u;
label_1bb1e8:
    // 0x1bb1e8: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1bb1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb1ec:
    // 0x1bb1ec: 0xc076bb0  jal         func_1DAEC0
label_1bb1f0:
    if (ctx->pc == 0x1BB1F0u) {
        ctx->pc = 0x1BB1F0u;
            // 0x1bb1f0: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1BB1F4u;
        goto label_1bb1f4;
    }
    ctx->pc = 0x1BB1ECu;
    SET_GPR_U32(ctx, 31, 0x1BB1F4u);
    ctx->pc = 0x1BB1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1ECu;
            // 0x1bb1f0: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1F4u; }
        if (ctx->pc != 0x1BB1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1F4u; }
        if (ctx->pc != 0x1BB1F4u) { return; }
    }
    ctx->pc = 0x1BB1F4u;
label_1bb1f4:
    // 0x1bb1f4: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1bb1f8:
    // 0x1bb1f8: 0x2405013d  addiu       $a1, $zero, 0x13D
    ctx->pc = 0x1bb1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
label_1bb1fc:
    // 0x1bb1fc: 0xc0bd8f4  jal         func_2F63D0
label_1bb200:
    if (ctx->pc == 0x1BB200u) {
        ctx->pc = 0x1BB200u;
            // 0x1bb200: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB204u;
        goto label_1bb204;
    }
    ctx->pc = 0x1BB1FCu;
    SET_GPR_U32(ctx, 31, 0x1BB204u);
    ctx->pc = 0x1BB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1FCu;
            // 0x1bb200: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB204u; }
        if (ctx->pc != 0x1BB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB204u; }
        if (ctx->pc != 0x1BB204u) { return; }
    }
    ctx->pc = 0x1BB204u;
label_1bb204:
    // 0x1bb204: 0xc06ebb0  jal         func_1BAEC0
label_1bb208:
    if (ctx->pc == 0x1BB208u) {
        ctx->pc = 0x1BB20Cu;
        goto label_1bb20c;
    }
    ctx->pc = 0x1BB204u;
    SET_GPR_U32(ctx, 31, 0x1BB20Cu);
    ctx->pc = 0x1BAEC0u;
    if (runtime->hasFunction(0x1BAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB20Cu; }
        if (ctx->pc != 0x1BB20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugExit__Fv_0x1baec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB20Cu; }
        if (ctx->pc != 0x1BB20Cu) { return; }
    }
    ctx->pc = 0x1BB20Cu;
label_1bb20c:
    // 0x1bb20c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1bb210:
    if (ctx->pc == 0x1BB210u) {
        ctx->pc = 0x1BB210u;
            // 0x1bb210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB214u;
        goto label_1bb214;
    }
    ctx->pc = 0x1BB20Cu;
    {
        const bool branch_taken_0x1bb20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB20Cu;
            // 0x1bb210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb20c) {
            ctx->pc = 0x1BB2F8u;
            goto label_1bb2f8;
        }
    }
    ctx->pc = 0x1BB214u;
label_1bb214:
    // 0x1bb214: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_1bb218:
    if (ctx->pc == 0x1BB218u) {
        ctx->pc = 0x1BB218u;
            // 0x1bb218: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1BB21Cu;
        goto label_1bb21c;
    }
    ctx->pc = 0x1BB214u;
    {
        const bool branch_taken_0x1bb214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB214u;
            // 0x1bb218: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb214) {
            ctx->pc = 0x1BB298u;
            goto label_1bb298;
        }
    }
    ctx->pc = 0x1BB21Cu;
label_1bb21c:
    // 0x1bb21c: 0x8f838da8  lw          $v1, -0x7258($gp)
    ctx->pc = 0x1bb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_1bb220:
    // 0x1bb220: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1bb220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb224:
    // 0x1bb224: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1bb224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1bb228:
    // 0x1bb228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb22c:
    // 0x1bb22c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb230:
    // 0x1bb230: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1bb230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bb234:
    // 0x1bb234: 0xc0a32e8  jal         func_28CBA0
label_1bb238:
    if (ctx->pc == 0x1BB238u) {
        ctx->pc = 0x1BB238u;
            // 0x1bb238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB23Cu;
        goto label_1bb23c;
    }
    ctx->pc = 0x1BB234u;
    SET_GPR_U32(ctx, 31, 0x1BB23Cu);
    ctx->pc = 0x1BB238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB234u;
            // 0x1bb238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CBA0u;
    if (runtime->hasFunction(0x28CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x28CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB23Cu; }
        if (ctx->pc != 0x1BB23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGateKeyIndex__Fii_0x28cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB23Cu; }
        if (ctx->pc != 0x1BB23Cu) { return; }
    }
    ctx->pc = 0x1BB23Cu;
label_1bb23c:
    // 0x1bb23c: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1bb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1bb240:
    // 0x1bb240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb244:
    // 0x1bb244: 0xc0677fc  jal         func_19DFF0
label_1bb248:
    if (ctx->pc == 0x1BB248u) {
        ctx->pc = 0x1BB248u;
            // 0x1bb248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB24Cu;
        goto label_1bb24c;
    }
    ctx->pc = 0x1BB244u;
    SET_GPR_U32(ctx, 31, 0x1BB24Cu);
    ctx->pc = 0x1BB248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB244u;
            // 0x1bb248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB24Cu; }
        if (ctx->pc != 0x1BB24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB24Cu; }
        if (ctx->pc != 0x1BB24Cu) { return; }
    }
    ctx->pc = 0x1BB24Cu;
label_1bb24c:
    // 0x1bb24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb250:
    // 0x1bb250: 0xc0a32f8  jal         func_28CBE0
label_1bb254:
    if (ctx->pc == 0x1BB254u) {
        ctx->pc = 0x1BB254u;
            // 0x1bb254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB258u;
        goto label_1bb258;
    }
    ctx->pc = 0x1BB250u;
    SET_GPR_U32(ctx, 31, 0x1BB258u);
    ctx->pc = 0x1BB254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB250u;
            // 0x1bb254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CBE0u;
    if (runtime->hasFunction(0x28CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x28CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB258u; }
        if (ctx->pc != 0x1BB258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyDoorIndex__Fii_0x28cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB258u; }
        if (ctx->pc != 0x1BB258u) { return; }
    }
    ctx->pc = 0x1BB258u;
label_1bb258:
    // 0x1bb258: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1bb258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1bb25c:
    // 0x1bb25c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb260:
    // 0x1bb260: 0xc0677fc  jal         func_19DFF0
label_1bb264:
    if (ctx->pc == 0x1BB264u) {
        ctx->pc = 0x1BB264u;
            // 0x1bb264: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB268u;
        goto label_1bb268;
    }
    ctx->pc = 0x1BB260u;
    SET_GPR_U32(ctx, 31, 0x1BB268u);
    ctx->pc = 0x1BB264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB260u;
            // 0x1bb264: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB268u; }
        if (ctx->pc != 0x1BB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB268u; }
        if (ctx->pc != 0x1BB268u) { return; }
    }
    ctx->pc = 0x1BB268u;
label_1bb268:
    // 0x1bb268: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1bb268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1bb26c:
    // 0x1bb26c: 0x24050132  addiu       $a1, $zero, 0x132
    ctx->pc = 0x1bb26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
label_1bb270:
    // 0x1bb270: 0xc0677fc  jal         func_19DFF0
label_1bb274:
    if (ctx->pc == 0x1BB274u) {
        ctx->pc = 0x1BB274u;
            // 0x1bb274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB278u;
        goto label_1bb278;
    }
    ctx->pc = 0x1BB270u;
    SET_GPR_U32(ctx, 31, 0x1BB278u);
    ctx->pc = 0x1BB274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB270u;
            // 0x1bb274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB278u; }
        if (ctx->pc != 0x1BB278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB278u; }
        if (ctx->pc != 0x1BB278u) { return; }
    }
    ctx->pc = 0x1BB278u;
label_1bb278:
    // 0x1bb278: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1bb278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1bb27c:
    // 0x1bb27c: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x1bb27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
label_1bb280:
    // 0x1bb280: 0xc0677fc  jal         func_19DFF0
label_1bb284:
    if (ctx->pc == 0x1BB284u) {
        ctx->pc = 0x1BB284u;
            // 0x1bb284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB288u;
        goto label_1bb288;
    }
    ctx->pc = 0x1BB280u;
    SET_GPR_U32(ctx, 31, 0x1BB288u);
    ctx->pc = 0x1BB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB280u;
            // 0x1bb284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB288u; }
        if (ctx->pc != 0x1BB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB288u; }
        if (ctx->pc != 0x1BB288u) { return; }
    }
    ctx->pc = 0x1BB288u;
label_1bb288:
    // 0x1bb288: 0xc06ebb0  jal         func_1BAEC0
label_1bb28c:
    if (ctx->pc == 0x1BB28Cu) {
        ctx->pc = 0x1BB290u;
        goto label_1bb290;
    }
    ctx->pc = 0x1BB288u;
    SET_GPR_U32(ctx, 31, 0x1BB290u);
    ctx->pc = 0x1BAEC0u;
    if (runtime->hasFunction(0x1BAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB290u; }
        if (ctx->pc != 0x1BB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugExit__Fv_0x1baec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB290u; }
        if (ctx->pc != 0x1BB290u) { return; }
    }
    ctx->pc = 0x1BB290u;
label_1bb290:
    // 0x1bb290: 0x10000019  b           . + 4 + (0x19 << 2)
label_1bb294:
    if (ctx->pc == 0x1BB294u) {
        ctx->pc = 0x1BB294u;
            // 0x1bb294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB298u;
        goto label_1bb298;
    }
    ctx->pc = 0x1BB290u;
    {
        const bool branch_taken_0x1bb290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB290u;
            // 0x1bb294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb290) {
            ctx->pc = 0x1BB2F8u;
            goto label_1bb2f8;
        }
    }
    ctx->pc = 0x1BB298u;
label_1bb298:
    // 0x1bb298: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1bb29c:
    if (ctx->pc == 0x1BB29Cu) {
        ctx->pc = 0x1BB2A0u;
        goto label_1bb2a0;
    }
    ctx->pc = 0x1BB298u;
    {
        const bool branch_taken_0x1bb298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb298) {
            ctx->pc = 0x1BB2D4u;
            goto label_1bb2d4;
        }
    }
    ctx->pc = 0x1BB2A0u;
label_1bb2a0:
    // 0x1bb2a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bb2a4:
    // 0x1bb2a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb2a8:
    // 0x1bb2a8: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x1bb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
label_1bb2ac:
    // 0x1bb2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb2b0:
    // 0x1bb2b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bb2b4:
    // 0x1bb2b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bb2b8:
    if (ctx->pc == 0x1BB2B8u) {
        ctx->pc = 0x1BB2BCu;
        goto label_1bb2bc;
    }
    ctx->pc = 0x1BB2B4u;
    {
        const bool branch_taken_0x1bb2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2b4) {
            ctx->pc = 0x1BB2CCu;
            goto label_1bb2cc;
        }
    }
    ctx->pc = 0x1BB2BCu;
label_1bb2bc:
    // 0x1bb2bc: 0xc0a9884  jal         func_2A6210
label_1bb2c0:
    if (ctx->pc == 0x1BB2C0u) {
        ctx->pc = 0x1BB2C0u;
            // 0x1bb2c0: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1BB2C4u;
        goto label_1bb2c4;
    }
    ctx->pc = 0x1BB2BCu;
    SET_GPR_U32(ctx, 31, 0x1BB2C4u);
    ctx->pc = 0x1BB2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2BCu;
            // 0x1bb2c0: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6210u;
    if (runtime->hasFunction(0x2A6210u)) {
        auto targetFn = runtime->lookupFunction(0x2A6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C4u; }
        if (ctx->pc != 0x1BB2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseBGM__6CSceneFv_0x2a6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C4u; }
        if (ctx->pc != 0x1BB2C4u) { return; }
    }
    ctx->pc = 0x1BB2C4u;
label_1bb2c4:
    // 0x1bb2c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bb2c8:
    if (ctx->pc == 0x1BB2C8u) {
        ctx->pc = 0x1BB2CCu;
        goto label_1bb2cc;
    }
    ctx->pc = 0x1BB2C4u;
    {
        const bool branch_taken_0x1bb2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2c4) {
            ctx->pc = 0x1BB2D4u;
            goto label_1bb2d4;
        }
    }
    ctx->pc = 0x1BB2CCu;
label_1bb2cc:
    // 0x1bb2cc: 0xc0a9890  jal         func_2A6240
label_1bb2d0:
    if (ctx->pc == 0x1BB2D0u) {
        ctx->pc = 0x1BB2D0u;
            // 0x1bb2d0: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1BB2D4u;
        goto label_1bb2d4;
    }
    ctx->pc = 0x1BB2CCu;
    SET_GPR_U32(ctx, 31, 0x1BB2D4u);
    ctx->pc = 0x1BB2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2CCu;
            // 0x1bb2d0: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6240u;
    if (runtime->hasFunction(0x2A6240u)) {
        auto targetFn = runtime->lookupFunction(0x2A6240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2D4u; }
        if (ctx->pc != 0x1BB2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RePlayBGM__6CSceneFv_0x2a6240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2D4u; }
        if (ctx->pc != 0x1BB2D4u) { return; }
    }
    ctx->pc = 0x1BB2D4u;
label_1bb2d4:
    // 0x1bb2d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1bb2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1bb2d8:
    // 0x1bb2d8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1bb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1bb2dc:
    // 0x1bb2dc: 0xc052d0c  jal         func_14B430
label_1bb2e0:
    if (ctx->pc == 0x1BB2E0u) {
        ctx->pc = 0x1BB2E0u;
            // 0x1bb2e0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1BB2E4u;
        goto label_1bb2e4;
    }
    ctx->pc = 0x1BB2DCu;
    SET_GPR_U32(ctx, 31, 0x1BB2E4u);
    ctx->pc = 0x1BB2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2DCu;
            // 0x1bb2e0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2E4u; }
        if (ctx->pc != 0x1BB2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2E4u; }
        if (ctx->pc != 0x1BB2E4u) { return; }
    }
    ctx->pc = 0x1BB2E4u;
label_1bb2e4:
    // 0x1bb2e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bb2e8:
    if (ctx->pc == 0x1BB2E8u) {
        ctx->pc = 0x1BB2E8u;
            // 0x1bb2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB2ECu;
        goto label_1bb2ec;
    }
    ctx->pc = 0x1BB2E4u;
    {
        const bool branch_taken_0x1bb2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2E4u;
            // 0x1bb2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2e4) {
            ctx->pc = 0x1BB2F8u;
            goto label_1bb2f8;
        }
    }
    ctx->pc = 0x1BB2ECu;
label_1bb2ec:
    // 0x1bb2ec: 0xc06ebb0  jal         func_1BAEC0
label_1bb2f0:
    if (ctx->pc == 0x1BB2F0u) {
        ctx->pc = 0x1BB2F4u;
        goto label_1bb2f4;
    }
    ctx->pc = 0x1BB2ECu;
    SET_GPR_U32(ctx, 31, 0x1BB2F4u);
    ctx->pc = 0x1BAEC0u;
    if (runtime->hasFunction(0x1BAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F4u; }
        if (ctx->pc != 0x1BB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugExit__Fv_0x1baec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F4u; }
        if (ctx->pc != 0x1BB2F4u) { return; }
    }
    ctx->pc = 0x1BB2F4u;
label_1bb2f4:
    // 0x1bb2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb2f8:
    // 0x1bb2f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb2fc:
    // 0x1bb2fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb300:
    // 0x1bb300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb304:
    // 0x1bb304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb308:
    // 0x1bb308: 0x3e00008  jr          $ra
label_1bb30c:
    if (ctx->pc == 0x1BB30Cu) {
        ctx->pc = 0x1BB30Cu;
            // 0x1bb30c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1BB310u;
        goto label_fallthrough_0x1bb308;
    }
    ctx->pc = 0x1BB308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB308u;
            // 0x1bb30c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bb308:
    ctx->pc = 0x1BB310u;
}
