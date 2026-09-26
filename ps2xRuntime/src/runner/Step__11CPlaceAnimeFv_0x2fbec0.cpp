#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CPlaceAnimeFv
// Address: 0x2fbec0 - 0x2fc2b4
void Step__11CPlaceAnimeFv_0x2fbec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CPlaceAnimeFv_0x2fbec0");
#endif

    switch (ctx->pc) {
        case 0x2fbec0u: goto label_2fbec0;
        case 0x2fbec4u: goto label_2fbec4;
        case 0x2fbec8u: goto label_2fbec8;
        case 0x2fbeccu: goto label_2fbecc;
        case 0x2fbed0u: goto label_2fbed0;
        case 0x2fbed4u: goto label_2fbed4;
        case 0x2fbed8u: goto label_2fbed8;
        case 0x2fbedcu: goto label_2fbedc;
        case 0x2fbee0u: goto label_2fbee0;
        case 0x2fbee4u: goto label_2fbee4;
        case 0x2fbee8u: goto label_2fbee8;
        case 0x2fbeecu: goto label_2fbeec;
        case 0x2fbef0u: goto label_2fbef0;
        case 0x2fbef4u: goto label_2fbef4;
        case 0x2fbef8u: goto label_2fbef8;
        case 0x2fbefcu: goto label_2fbefc;
        case 0x2fbf00u: goto label_2fbf00;
        case 0x2fbf04u: goto label_2fbf04;
        case 0x2fbf08u: goto label_2fbf08;
        case 0x2fbf0cu: goto label_2fbf0c;
        case 0x2fbf10u: goto label_2fbf10;
        case 0x2fbf14u: goto label_2fbf14;
        case 0x2fbf18u: goto label_2fbf18;
        case 0x2fbf1cu: goto label_2fbf1c;
        case 0x2fbf20u: goto label_2fbf20;
        case 0x2fbf24u: goto label_2fbf24;
        case 0x2fbf28u: goto label_2fbf28;
        case 0x2fbf2cu: goto label_2fbf2c;
        case 0x2fbf30u: goto label_2fbf30;
        case 0x2fbf34u: goto label_2fbf34;
        case 0x2fbf38u: goto label_2fbf38;
        case 0x2fbf3cu: goto label_2fbf3c;
        case 0x2fbf40u: goto label_2fbf40;
        case 0x2fbf44u: goto label_2fbf44;
        case 0x2fbf48u: goto label_2fbf48;
        case 0x2fbf4cu: goto label_2fbf4c;
        case 0x2fbf50u: goto label_2fbf50;
        case 0x2fbf54u: goto label_2fbf54;
        case 0x2fbf58u: goto label_2fbf58;
        case 0x2fbf5cu: goto label_2fbf5c;
        case 0x2fbf60u: goto label_2fbf60;
        case 0x2fbf64u: goto label_2fbf64;
        case 0x2fbf68u: goto label_2fbf68;
        case 0x2fbf6cu: goto label_2fbf6c;
        case 0x2fbf70u: goto label_2fbf70;
        case 0x2fbf74u: goto label_2fbf74;
        case 0x2fbf78u: goto label_2fbf78;
        case 0x2fbf7cu: goto label_2fbf7c;
        case 0x2fbf80u: goto label_2fbf80;
        case 0x2fbf84u: goto label_2fbf84;
        case 0x2fbf88u: goto label_2fbf88;
        case 0x2fbf8cu: goto label_2fbf8c;
        case 0x2fbf90u: goto label_2fbf90;
        case 0x2fbf94u: goto label_2fbf94;
        case 0x2fbf98u: goto label_2fbf98;
        case 0x2fbf9cu: goto label_2fbf9c;
        case 0x2fbfa0u: goto label_2fbfa0;
        case 0x2fbfa4u: goto label_2fbfa4;
        case 0x2fbfa8u: goto label_2fbfa8;
        case 0x2fbfacu: goto label_2fbfac;
        case 0x2fbfb0u: goto label_2fbfb0;
        case 0x2fbfb4u: goto label_2fbfb4;
        case 0x2fbfb8u: goto label_2fbfb8;
        case 0x2fbfbcu: goto label_2fbfbc;
        case 0x2fbfc0u: goto label_2fbfc0;
        case 0x2fbfc4u: goto label_2fbfc4;
        case 0x2fbfc8u: goto label_2fbfc8;
        case 0x2fbfccu: goto label_2fbfcc;
        case 0x2fbfd0u: goto label_2fbfd0;
        case 0x2fbfd4u: goto label_2fbfd4;
        case 0x2fbfd8u: goto label_2fbfd8;
        case 0x2fbfdcu: goto label_2fbfdc;
        case 0x2fbfe0u: goto label_2fbfe0;
        case 0x2fbfe4u: goto label_2fbfe4;
        case 0x2fbfe8u: goto label_2fbfe8;
        case 0x2fbfecu: goto label_2fbfec;
        case 0x2fbff0u: goto label_2fbff0;
        case 0x2fbff4u: goto label_2fbff4;
        case 0x2fbff8u: goto label_2fbff8;
        case 0x2fbffcu: goto label_2fbffc;
        case 0x2fc000u: goto label_2fc000;
        case 0x2fc004u: goto label_2fc004;
        case 0x2fc008u: goto label_2fc008;
        case 0x2fc00cu: goto label_2fc00c;
        case 0x2fc010u: goto label_2fc010;
        case 0x2fc014u: goto label_2fc014;
        case 0x2fc018u: goto label_2fc018;
        case 0x2fc01cu: goto label_2fc01c;
        case 0x2fc020u: goto label_2fc020;
        case 0x2fc024u: goto label_2fc024;
        case 0x2fc028u: goto label_2fc028;
        case 0x2fc02cu: goto label_2fc02c;
        case 0x2fc030u: goto label_2fc030;
        case 0x2fc034u: goto label_2fc034;
        case 0x2fc038u: goto label_2fc038;
        case 0x2fc03cu: goto label_2fc03c;
        case 0x2fc040u: goto label_2fc040;
        case 0x2fc044u: goto label_2fc044;
        case 0x2fc048u: goto label_2fc048;
        case 0x2fc04cu: goto label_2fc04c;
        case 0x2fc050u: goto label_2fc050;
        case 0x2fc054u: goto label_2fc054;
        case 0x2fc058u: goto label_2fc058;
        case 0x2fc05cu: goto label_2fc05c;
        case 0x2fc060u: goto label_2fc060;
        case 0x2fc064u: goto label_2fc064;
        case 0x2fc068u: goto label_2fc068;
        case 0x2fc06cu: goto label_2fc06c;
        case 0x2fc070u: goto label_2fc070;
        case 0x2fc074u: goto label_2fc074;
        case 0x2fc078u: goto label_2fc078;
        case 0x2fc07cu: goto label_2fc07c;
        case 0x2fc080u: goto label_2fc080;
        case 0x2fc084u: goto label_2fc084;
        case 0x2fc088u: goto label_2fc088;
        case 0x2fc08cu: goto label_2fc08c;
        case 0x2fc090u: goto label_2fc090;
        case 0x2fc094u: goto label_2fc094;
        case 0x2fc098u: goto label_2fc098;
        case 0x2fc09cu: goto label_2fc09c;
        case 0x2fc0a0u: goto label_2fc0a0;
        case 0x2fc0a4u: goto label_2fc0a4;
        case 0x2fc0a8u: goto label_2fc0a8;
        case 0x2fc0acu: goto label_2fc0ac;
        case 0x2fc0b0u: goto label_2fc0b0;
        case 0x2fc0b4u: goto label_2fc0b4;
        case 0x2fc0b8u: goto label_2fc0b8;
        case 0x2fc0bcu: goto label_2fc0bc;
        case 0x2fc0c0u: goto label_2fc0c0;
        case 0x2fc0c4u: goto label_2fc0c4;
        case 0x2fc0c8u: goto label_2fc0c8;
        case 0x2fc0ccu: goto label_2fc0cc;
        case 0x2fc0d0u: goto label_2fc0d0;
        case 0x2fc0d4u: goto label_2fc0d4;
        case 0x2fc0d8u: goto label_2fc0d8;
        case 0x2fc0dcu: goto label_2fc0dc;
        case 0x2fc0e0u: goto label_2fc0e0;
        case 0x2fc0e4u: goto label_2fc0e4;
        case 0x2fc0e8u: goto label_2fc0e8;
        case 0x2fc0ecu: goto label_2fc0ec;
        case 0x2fc0f0u: goto label_2fc0f0;
        case 0x2fc0f4u: goto label_2fc0f4;
        case 0x2fc0f8u: goto label_2fc0f8;
        case 0x2fc0fcu: goto label_2fc0fc;
        case 0x2fc100u: goto label_2fc100;
        case 0x2fc104u: goto label_2fc104;
        case 0x2fc108u: goto label_2fc108;
        case 0x2fc10cu: goto label_2fc10c;
        case 0x2fc110u: goto label_2fc110;
        case 0x2fc114u: goto label_2fc114;
        case 0x2fc118u: goto label_2fc118;
        case 0x2fc11cu: goto label_2fc11c;
        case 0x2fc120u: goto label_2fc120;
        case 0x2fc124u: goto label_2fc124;
        case 0x2fc128u: goto label_2fc128;
        case 0x2fc12cu: goto label_2fc12c;
        case 0x2fc130u: goto label_2fc130;
        case 0x2fc134u: goto label_2fc134;
        case 0x2fc138u: goto label_2fc138;
        case 0x2fc13cu: goto label_2fc13c;
        case 0x2fc140u: goto label_2fc140;
        case 0x2fc144u: goto label_2fc144;
        case 0x2fc148u: goto label_2fc148;
        case 0x2fc14cu: goto label_2fc14c;
        case 0x2fc150u: goto label_2fc150;
        case 0x2fc154u: goto label_2fc154;
        case 0x2fc158u: goto label_2fc158;
        case 0x2fc15cu: goto label_2fc15c;
        case 0x2fc160u: goto label_2fc160;
        case 0x2fc164u: goto label_2fc164;
        case 0x2fc168u: goto label_2fc168;
        case 0x2fc16cu: goto label_2fc16c;
        case 0x2fc170u: goto label_2fc170;
        case 0x2fc174u: goto label_2fc174;
        case 0x2fc178u: goto label_2fc178;
        case 0x2fc17cu: goto label_2fc17c;
        case 0x2fc180u: goto label_2fc180;
        case 0x2fc184u: goto label_2fc184;
        case 0x2fc188u: goto label_2fc188;
        case 0x2fc18cu: goto label_2fc18c;
        case 0x2fc190u: goto label_2fc190;
        case 0x2fc194u: goto label_2fc194;
        case 0x2fc198u: goto label_2fc198;
        case 0x2fc19cu: goto label_2fc19c;
        case 0x2fc1a0u: goto label_2fc1a0;
        case 0x2fc1a4u: goto label_2fc1a4;
        case 0x2fc1a8u: goto label_2fc1a8;
        case 0x2fc1acu: goto label_2fc1ac;
        case 0x2fc1b0u: goto label_2fc1b0;
        case 0x2fc1b4u: goto label_2fc1b4;
        case 0x2fc1b8u: goto label_2fc1b8;
        case 0x2fc1bcu: goto label_2fc1bc;
        case 0x2fc1c0u: goto label_2fc1c0;
        case 0x2fc1c4u: goto label_2fc1c4;
        case 0x2fc1c8u: goto label_2fc1c8;
        case 0x2fc1ccu: goto label_2fc1cc;
        case 0x2fc1d0u: goto label_2fc1d0;
        case 0x2fc1d4u: goto label_2fc1d4;
        case 0x2fc1d8u: goto label_2fc1d8;
        case 0x2fc1dcu: goto label_2fc1dc;
        case 0x2fc1e0u: goto label_2fc1e0;
        case 0x2fc1e4u: goto label_2fc1e4;
        case 0x2fc1e8u: goto label_2fc1e8;
        case 0x2fc1ecu: goto label_2fc1ec;
        case 0x2fc1f0u: goto label_2fc1f0;
        case 0x2fc1f4u: goto label_2fc1f4;
        case 0x2fc1f8u: goto label_2fc1f8;
        case 0x2fc1fcu: goto label_2fc1fc;
        case 0x2fc200u: goto label_2fc200;
        case 0x2fc204u: goto label_2fc204;
        case 0x2fc208u: goto label_2fc208;
        case 0x2fc20cu: goto label_2fc20c;
        case 0x2fc210u: goto label_2fc210;
        case 0x2fc214u: goto label_2fc214;
        case 0x2fc218u: goto label_2fc218;
        case 0x2fc21cu: goto label_2fc21c;
        case 0x2fc220u: goto label_2fc220;
        case 0x2fc224u: goto label_2fc224;
        case 0x2fc228u: goto label_2fc228;
        case 0x2fc22cu: goto label_2fc22c;
        case 0x2fc230u: goto label_2fc230;
        case 0x2fc234u: goto label_2fc234;
        case 0x2fc238u: goto label_2fc238;
        case 0x2fc23cu: goto label_2fc23c;
        case 0x2fc240u: goto label_2fc240;
        case 0x2fc244u: goto label_2fc244;
        case 0x2fc248u: goto label_2fc248;
        case 0x2fc24cu: goto label_2fc24c;
        case 0x2fc250u: goto label_2fc250;
        case 0x2fc254u: goto label_2fc254;
        case 0x2fc258u: goto label_2fc258;
        case 0x2fc25cu: goto label_2fc25c;
        case 0x2fc260u: goto label_2fc260;
        case 0x2fc264u: goto label_2fc264;
        case 0x2fc268u: goto label_2fc268;
        case 0x2fc26cu: goto label_2fc26c;
        case 0x2fc270u: goto label_2fc270;
        case 0x2fc274u: goto label_2fc274;
        case 0x2fc278u: goto label_2fc278;
        case 0x2fc27cu: goto label_2fc27c;
        case 0x2fc280u: goto label_2fc280;
        case 0x2fc284u: goto label_2fc284;
        case 0x2fc288u: goto label_2fc288;
        case 0x2fc28cu: goto label_2fc28c;
        case 0x2fc290u: goto label_2fc290;
        case 0x2fc294u: goto label_2fc294;
        case 0x2fc298u: goto label_2fc298;
        case 0x2fc29cu: goto label_2fc29c;
        case 0x2fc2a0u: goto label_2fc2a0;
        case 0x2fc2a4u: goto label_2fc2a4;
        case 0x2fc2a8u: goto label_2fc2a8;
        case 0x2fc2acu: goto label_2fc2ac;
        case 0x2fc2b0u: goto label_2fc2b0;
        default: break;
    }

    ctx->pc = 0x2fbec0u;

label_2fbec0:
    // 0x2fbec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbec4:
    // 0x2fbec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbec8:
    // 0x2fbec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbecc:
    // 0x2fbecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbed0:
    // 0x2fbed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbed4:
    // 0x2fbed4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2fbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbed8:
    // 0x2fbed8: 0x108000f1  beqz        $a0, . + 4 + (0xF1 << 2)
label_2fbedc:
    if (ctx->pc == 0x2FBEDCu) {
        ctx->pc = 0x2FBEE0u;
        goto label_2fbee0;
    }
    ctx->pc = 0x2FBED8u;
    {
        const bool branch_taken_0x2fbed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbed8) {
            ctx->pc = 0x2FC2A0u;
            goto label_2fc2a0;
        }
    }
    ctx->pc = 0x2FBEE0u;
label_2fbee0:
    // 0x2fbee0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fbee4:
    // 0x2fbee4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2fbee8:
    if (ctx->pc == 0x2FBEE8u) {
        ctx->pc = 0x2FBEECu;
        goto label_2fbeec;
    }
    ctx->pc = 0x2FBEE4u;
    {
        const bool branch_taken_0x2fbee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fbee4) {
            ctx->pc = 0x2FBEF4u;
            goto label_2fbef4;
        }
    }
    ctx->pc = 0x2FBEECu;
label_2fbeec:
    // 0x2fbeec: 0x100000ed  b           . + 4 + (0xED << 2)
label_2fbef0:
    if (ctx->pc == 0x2FBEF0u) {
        ctx->pc = 0x2FBEF0u;
            // 0x2fbef0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FBEF4u;
        goto label_2fbef4;
    }
    ctx->pc = 0x2FBEECu;
    {
        const bool branch_taken_0x2fbeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBEECu;
            // 0x2fbef0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbeec) {
            ctx->pc = 0x2FC2A4u;
            goto label_2fc2a4;
        }
    }
    ctx->pc = 0x2FBEF4u;
label_2fbef4:
    // 0x2fbef4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2fbef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fbef8:
    // 0x2fbef8: 0x108000e9  beqz        $a0, . + 4 + (0xE9 << 2)
label_2fbefc:
    if (ctx->pc == 0x2FBEFCu) {
        ctx->pc = 0x2FBF00u;
        goto label_2fbf00;
    }
    ctx->pc = 0x2FBEF8u;
    {
        const bool branch_taken_0x2fbef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbef8) {
            ctx->pc = 0x2FC2A0u;
            goto label_2fc2a0;
        }
    }
    ctx->pc = 0x2FBF00u;
label_2fbf00:
    // 0x2fbf00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2fbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2fbf04:
    // 0x2fbf04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2fbf08:
    if (ctx->pc == 0x2FBF08u) {
        ctx->pc = 0x2FBF0Cu;
        goto label_2fbf0c;
    }
    ctx->pc = 0x2FBF04u;
    {
        const bool branch_taken_0x2fbf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf04) {
            ctx->pc = 0x2FBF14u;
            goto label_2fbf14;
        }
    }
    ctx->pc = 0x2FBF0Cu;
label_2fbf0c:
    // 0x2fbf0c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_2fbf10:
    if (ctx->pc == 0x2FBF10u) {
        ctx->pc = 0x2FBF14u;
        goto label_2fbf14;
    }
    ctx->pc = 0x2FBF0Cu;
    {
        const bool branch_taken_0x2fbf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf0c) {
            ctx->pc = 0x2FC2A0u;
            goto label_2fc2a0;
        }
    }
    ctx->pc = 0x2FBF14u;
label_2fbf14:
    // 0x2fbf14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fbf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbf18:
    // 0x2fbf18: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2fbf18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2fbf1c:
    // 0x2fbf1c: 0x320f809  jalr        $t9
label_2fbf20:
    if (ctx->pc == 0x2FBF20u) {
        ctx->pc = 0x2FBF20u;
            // 0x2fbf20: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x2FBF24u;
        goto label_2fbf24;
    }
    ctx->pc = 0x2FBF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBF24u);
        ctx->pc = 0x2FBF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF1Cu;
            // 0x2fbf20: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF24u; }
            if (ctx->pc != 0x2FBF24u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBF24u;
label_2fbf24:
    // 0x2fbf24: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2fbf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fbf28:
    // 0x2fbf28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fbf28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbf2c:
    // 0x2fbf2c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2fbf2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2fbf30:
    // 0x2fbf30: 0x320f809  jalr        $t9
label_2fbf34:
    if (ctx->pc == 0x2FBF34u) {
        ctx->pc = 0x2FBF34u;
            // 0x2fbf34: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2FBF38u;
        goto label_2fbf38;
    }
    ctx->pc = 0x2FBF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBF38u);
        ctx->pc = 0x2FBF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF30u;
            // 0x2fbf34: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBF38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF38u; }
            if (ctx->pc != 0x2FBF38u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBF38u;
label_2fbf38:
    // 0x2fbf38: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2fbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fbf3c:
    // 0x2fbf3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fbf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbf40:
    // 0x2fbf40: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fbf40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fbf44:
    // 0x2fbf44: 0x320f809  jalr        $t9
label_2fbf48:
    if (ctx->pc == 0x2FBF48u) {
        ctx->pc = 0x2FBF48u;
            // 0x2fbf48: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x2FBF4Cu;
        goto label_2fbf4c;
    }
    ctx->pc = 0x2FBF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBF4Cu);
        ctx->pc = 0x2FBF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF44u;
            // 0x2fbf48: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF4Cu; }
            if (ctx->pc != 0x2FBF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FBF4Cu;
label_2fbf4c:
    // 0x2fbf4c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2fbf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2fbf50:
    // 0x2fbf50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbf54:
    // 0x2fbf54: 0x14a40049  bne         $a1, $a0, . + 4 + (0x49 << 2)
label_2fbf58:
    if (ctx->pc == 0x2FBF58u) {
        ctx->pc = 0x2FBF58u;
            // 0x2fbf58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF5Cu;
        goto label_2fbf5c;
    }
    ctx->pc = 0x2FBF54u;
    {
        const bool branch_taken_0x2fbf54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FBF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF54u;
            // 0x2fbf58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf54) {
            ctx->pc = 0x2FC07Cu;
            goto label_2fc07c;
        }
    }
    ctx->pc = 0x2FBF5Cu;
label_2fbf5c:
    // 0x2fbf5c: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2fbf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fbf60:
    // 0x2fbf60: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2fbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_2fbf64:
    // 0x2fbf64: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2fbf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2fbf68:
    // 0x2fbf68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fbf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fbf6c:
    // 0x2fbf6c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fbf6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fbf70:
    // 0x2fbf70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2fbf70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2fbf74:
    // 0x2fbf74: 0xe6210080  swc1        $f1, 0x80($s1)
    ctx->pc = 0x2fbf74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2fbf78:
    // 0x2fbf78: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x2fbf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fbf7c:
    // 0x2fbf7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fbf7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fbf80:
    // 0x2fbf80: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fbf80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fbf84:
    // 0x2fbf84: 0x0  nop
    ctx->pc = 0x2fbf84u;
    // NOP
label_2fbf88:
    // 0x2fbf88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2fbf8c:
    if (ctx->pc == 0x2FBF8Cu) {
        ctx->pc = 0x2FBF8Cu;
            // 0x2fbf8c: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->pc = 0x2FBF90u;
        goto label_2fbf90;
    }
    ctx->pc = 0x2FBF88u;
    {
        const bool branch_taken_0x2fbf88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FBF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF88u;
            // 0x2fbf8c: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf88) {
            ctx->pc = 0x2FBF98u;
            goto label_2fbf98;
        }
    }
    ctx->pc = 0x2FBF90u;
label_2fbf90:
    // 0x2fbf90: 0xe622007c  swc1        $f2, 0x7C($s1)
    ctx->pc = 0x2fbf90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_2fbf94:
    // 0x2fbf94: 0xe6220080  swc1        $f2, 0x80($s1)
    ctx->pc = 0x2fbf94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2fbf98:
    // 0x2fbf98: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2fbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fbf9c:
    // 0x2fbf9c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2fbfa0:
    // 0x2fbfa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fbfa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fbfa4:
    // 0x2fbfa4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2fbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2fbfa8:
    // 0x2fbfa8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2fbfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2fbfac:
    // 0x2fbfac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fbfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fbfb0:
    // 0x2fbfb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fbfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2fbfb4:
    // 0x2fbfb4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2fbfb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2fbfb8:
    // 0x2fbfb8: 0x0  nop
    ctx->pc = 0x2fbfb8u;
    // NOP
label_2fbfbc:
    // 0x2fbfbc: 0x0  nop
    ctx->pc = 0x2fbfbcu;
    // NOP
label_2fbfc0:
    // 0x2fbfc0: 0xc047a42  jal         func_11E908
label_2fbfc4:
    if (ctx->pc == 0x2FBFC4u) {
        ctx->pc = 0x2FBFC4u;
            // 0x2fbfc4: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x2FBFC8u;
        goto label_2fbfc8;
    }
    ctx->pc = 0x2FBFC0u;
    SET_GPR_U32(ctx, 31, 0x2FBFC8u);
    ctx->pc = 0x2FBFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBFC0u;
            // 0x2fbfc4: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBFC8u; }
        if (ctx->pc != 0x2FBFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBFC8u; }
        if (ctx->pc != 0x2FBFC8u) { return; }
    }
    ctx->pc = 0x2FBFC8u;
label_2fbfc8:
    // 0x2fbfc8: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x2fbfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fbfcc:
    // 0x2fbfcc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2fbfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2fbfd0:
    // 0x2fbfd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fbfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2fbfd4:
    // 0x2fbfd4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2fbfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2fbfd8:
    // 0x2fbfd8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2fbfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2fbfdc:
    // 0x2fbfdc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2fbfdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2fbfe0:
    // 0x2fbfe0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2fbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2fbfe4:
    // 0x2fbfe4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2fbfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2fbfe8:
    // 0x2fbfe8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2fbfe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2fbfec:
    // 0x2fbfec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fbfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fbff0:
    // 0x2fbff0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2fbff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2fbff4:
    // 0x2fbff4: 0xc6240070  lwc1        $f4, 0x70($s1)
    ctx->pc = 0x2fbff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2fbff8:
    // 0x2fbff8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fbff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fbffc:
    // 0x2fbffc: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x2fbffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc000:
    // 0x2fc000: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2fc000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_2fc004:
    // 0x2fc004: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2fc004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2fc008:
    // 0x2fc008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fc008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fc00c:
    // 0x2fc00c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2fc00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_2fc010:
    // 0x2fc010: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x2fc010u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
label_2fc014:
    // 0x2fc014: 0x0  nop
    ctx->pc = 0x2fc014u;
    // NOP
label_2fc018:
    // 0x2fc018: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2fc018u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2fc01c:
    // 0x2fc01c: 0xc047964  jal         func_11E590
label_2fc020:
    if (ctx->pc == 0x2FC020u) {
        ctx->pc = 0x2FC020u;
            // 0x2fc020: 0x46000b1c  madd.s      $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x2FC024u;
        goto label_2fc024;
    }
    ctx->pc = 0x2FC01Cu;
    SET_GPR_U32(ctx, 31, 0x2FC024u);
    ctx->pc = 0x2FC020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC01Cu;
            // 0x2fc020: 0x46000b1c  madd.s      $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC024u; }
        if (ctx->pc != 0x2FC024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC024u; }
        if (ctx->pc != 0x2FC024u) { return; }
    }
    ctx->pc = 0x2FC024u;
label_2fc024:
    // 0x2fc024: 0xc6220078  lwc1        $f2, 0x78($s1)
    ctx->pc = 0x2fc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fc028:
    // 0x2fc028: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2fc028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_2fc02c:
    // 0x2fc02c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2fc02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2fc030:
    // 0x2fc030: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2fc030u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2fc034:
    // 0x2fc034: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2fc034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
label_2fc038:
    // 0x2fc038: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2fc038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_2fc03c:
    // 0x2fc03c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fc040:
    // 0x2fc040: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2fc040u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2fc044:
    // 0x2fc044: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2fc044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2fc048:
    // 0x2fc048: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2fc048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2fc04c:
    // 0x2fc04c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2fc04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2fc050:
    // 0x2fc050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fc050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2fc054:
    // 0x2fc054: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2fc054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_2fc058:
    // 0x2fc058: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x2fc058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc05c:
    // 0x2fc05c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fc05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fc060:
    // 0x2fc060: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2fc060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_2fc064:
    // 0x2fc064: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2fc064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2fc068:
    // 0x2fc068: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2fc068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_2fc06c:
    // 0x2fc06c: 0x14200075  bnez        $at, . + 4 + (0x75 << 2)
label_2fc070:
    if (ctx->pc == 0x2FC070u) {
        ctx->pc = 0x2FC074u;
        goto label_2fc074;
    }
    ctx->pc = 0x2FC06Cu;
    {
        const bool branch_taken_0x2fc06c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc06c) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC074u;
label_2fc074:
    // 0x2fc074: 0x10000073  b           . + 4 + (0x73 << 2)
label_2fc078:
    if (ctx->pc == 0x2FC078u) {
        ctx->pc = 0x2FC078u;
            // 0x2fc078: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC07Cu;
        goto label_2fc07c;
    }
    ctx->pc = 0x2FC074u;
    {
        const bool branch_taken_0x2fc074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC074u;
            // 0x2fc078: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc074) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC07Cu;
label_2fc07c:
    // 0x2fc07c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fc07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fc080:
    // 0x2fc080: 0x14a30047  bne         $a1, $v1, . + 4 + (0x47 << 2)
label_2fc084:
    if (ctx->pc == 0x2FC084u) {
        ctx->pc = 0x2FC084u;
            // 0x2fc084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FC088u;
        goto label_2fc088;
    }
    ctx->pc = 0x2FC080u;
    {
        const bool branch_taken_0x2fc080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FC084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC080u;
            // 0x2fc084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc080) {
            ctx->pc = 0x2FC1A0u;
            goto label_2fc1a0;
        }
    }
    ctx->pc = 0x2FC088u;
label_2fc088:
    // 0x2fc088: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x2fc088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2fc08c:
    // 0x2fc08c: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
label_2fc090:
    if (ctx->pc == 0x2FC090u) {
        ctx->pc = 0x2FC094u;
        goto label_2fc094;
    }
    ctx->pc = 0x2FC08Cu;
    {
        const bool branch_taken_0x2fc08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fc08c) {
            ctx->pc = 0x2FC0E8u;
            goto label_2fc0e8;
        }
    }
    ctx->pc = 0x2FC094u;
label_2fc094:
    // 0x2fc094: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2fc098:
    if (ctx->pc == 0x2FC098u) {
        ctx->pc = 0x2FC09Cu;
        goto label_2fc09c;
    }
    ctx->pc = 0x2FC094u;
    {
        const bool branch_taken_0x2fc094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc094) {
            ctx->pc = 0x2FC0A4u;
            goto label_2fc0a4;
        }
    }
    ctx->pc = 0x2FC09Cu;
label_2fc09c:
    // 0x2fc09c: 0x10000069  b           . + 4 + (0x69 << 2)
label_2fc0a0:
    if (ctx->pc == 0x2FC0A0u) {
        ctx->pc = 0x2FC0A4u;
        goto label_2fc0a4;
    }
    ctx->pc = 0x2FC09Cu;
    {
        const bool branch_taken_0x2fc09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc09c) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC0A4u;
label_2fc0a4:
    // 0x2fc0a4: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2fc0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc0a8:
    // 0x2fc0a8: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2fc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_2fc0ac:
    // 0x2fc0ac: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2fc0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2fc0b0:
    // 0x2fc0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc0b4:
    // 0x2fc0b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fc0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fc0b8:
    // 0x2fc0b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2fc0b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2fc0bc:
    // 0x2fc0bc: 0xe6210080  swc1        $f1, 0x80($s1)
    ctx->pc = 0x2fc0bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2fc0c0:
    // 0x2fc0c0: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x2fc0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc0c4:
    // 0x2fc0c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fc0c8:
    // 0x2fc0c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fc0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc0cc:
    // 0x2fc0cc: 0x0  nop
    ctx->pc = 0x2fc0ccu;
    // NOP
label_2fc0d0:
    // 0x2fc0d0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_2fc0d4:
    if (ctx->pc == 0x2FC0D4u) {
        ctx->pc = 0x2FC0D4u;
            // 0x2fc0d4: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->pc = 0x2FC0D8u;
        goto label_2fc0d8;
    }
    ctx->pc = 0x2FC0D0u;
    {
        const bool branch_taken_0x2fc0d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC0D0u;
            // 0x2fc0d4: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0d0) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC0D8u;
label_2fc0d8:
    // 0x2fc0d8: 0xe622007c  swc1        $f2, 0x7C($s1)
    ctx->pc = 0x2fc0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_2fc0dc:
    // 0x2fc0dc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2fc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2fc0e0:
    // 0x2fc0e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fc0e4:
    // 0x2fc0e4: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2fc0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_2fc0e8:
    // 0x2fc0e8: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x2fc0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_2fc0ec:
    // 0x2fc0ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2fc0f0:
    // 0x2fc0f0: 0xc6220070  lwc1        $f2, 0x70($s1)
    ctx->pc = 0x2fc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fc0f4:
    // 0x2fc0f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fc0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fc0f8:
    // 0x2fc0f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2fc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2fc0fc:
    // 0x2fc0fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2fc0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2fc100:
    // 0x2fc100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fc100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc104:
    // 0x2fc104: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fc104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2fc108:
    // 0x2fc108: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2fc108u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_2fc10c:
    // 0x2fc10c: 0x0  nop
    ctx->pc = 0x2fc10cu;
    // NOP
label_2fc110:
    // 0x2fc110: 0x0  nop
    ctx->pc = 0x2fc110u;
    // NOP
label_2fc114:
    // 0x2fc114: 0xc047a42  jal         func_11E908
label_2fc118:
    if (ctx->pc == 0x2FC118u) {
        ctx->pc = 0x2FC118u;
            // 0x2fc118: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2FC11Cu;
        goto label_2fc11c;
    }
    ctx->pc = 0x2FC114u;
    SET_GPR_U32(ctx, 31, 0x2FC11Cu);
    ctx->pc = 0x2FC118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC114u;
            // 0x2fc118: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC11Cu; }
        if (ctx->pc != 0x2FC11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC11Cu; }
        if (ctx->pc != 0x2FC11Cu) { return; }
    }
    ctx->pc = 0x2FC11Cu;
label_2fc11c:
    // 0x2fc11c: 0xc6240078  lwc1        $f4, 0x78($s1)
    ctx->pc = 0x2fc11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2fc120:
    // 0x2fc120: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2fc120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2fc124:
    // 0x2fc124: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2fc124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2fc128:
    // 0x2fc128: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2fc128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2fc12c:
    // 0x2fc12c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2fc130:
    // 0x2fc130: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2fc130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2fc134:
    // 0x2fc134: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2fc134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2fc138:
    // 0x2fc138: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2fc138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
label_2fc13c:
    // 0x2fc13c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2fc13cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2fc140:
    // 0x2fc140: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2fc140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
label_2fc144:
    // 0x2fc144: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2fc144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2fc148:
    // 0x2fc148: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2fc148u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2fc14c:
    // 0x2fc14c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2fc14cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fc150:
    // 0x2fc150: 0x0  nop
    ctx->pc = 0x2fc150u;
    // NOP
label_2fc154:
    // 0x2fc154: 0xe6230028  swc1        $f3, 0x28($s1)
    ctx->pc = 0x2fc154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2fc158:
    // 0x2fc158: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2fc158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2fc15c:
    // 0x2fc15c: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x2fc15cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2fc160:
    // 0x2fc160: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fc164:
    // 0x2fc164: 0x0  nop
    ctx->pc = 0x2fc164u;
    // NOP
label_2fc168:
    // 0x2fc168: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2fc168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2fc16c:
    // 0x2fc16c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2fc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2fc170:
    // 0x2fc170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fc170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2fc174:
    // 0x2fc174: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2fc174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_2fc178:
    // 0x2fc178: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x2fc178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc17c:
    // 0x2fc17c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fc17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fc180:
    // 0x2fc180: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2fc180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_2fc184:
    // 0x2fc184: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2fc184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2fc188:
    // 0x2fc188: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x2fc188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_2fc18c:
    // 0x2fc18c: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
label_2fc190:
    if (ctx->pc == 0x2FC190u) {
        ctx->pc = 0x2FC194u;
        goto label_2fc194;
    }
    ctx->pc = 0x2FC18Cu;
    {
        const bool branch_taken_0x2fc18c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc18c) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC194u;
label_2fc194:
    // 0x2fc194: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2fc198:
    if (ctx->pc == 0x2FC198u) {
        ctx->pc = 0x2FC198u;
            // 0x2fc198: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC19Cu;
        goto label_2fc19c;
    }
    ctx->pc = 0x2FC194u;
    {
        const bool branch_taken_0x2fc194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC194u;
            // 0x2fc198: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc194) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC19Cu;
label_2fc19c:
    // 0x2fc19c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fc1a0:
    // 0x2fc1a0: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
label_2fc1a4:
    if (ctx->pc == 0x2FC1A4u) {
        ctx->pc = 0x2FC1A8u;
        goto label_2fc1a8;
    }
    ctx->pc = 0x2FC1A0u;
    {
        const bool branch_taken_0x2fc1a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc1a0) {
            ctx->pc = 0x2FC240u;
            goto label_2fc240;
        }
    }
    ctx->pc = 0x2FC1A8u;
label_2fc1a8:
    // 0x2fc1a8: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x2fc1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc1ac:
    // 0x2fc1ac: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2fc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2fc1b0:
    // 0x2fc1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc1b4:
    // 0x2fc1b4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2fc1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2fc1b8:
    // 0x2fc1b8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2fc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_2fc1bc:
    // 0x2fc1bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fc1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2fc1c0:
    // 0x2fc1c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2fc1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fc1c4:
    // 0x2fc1c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fc1c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2fc1c8:
    // 0x2fc1c8: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x2fc1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_2fc1cc:
    // 0x2fc1cc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2fc1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc1d0:
    // 0x2fc1d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2fc1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2fc1d4:
    // 0x2fc1d4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2fc1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2fc1d8:
    // 0x2fc1d8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2fc1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc1dc:
    // 0x2fc1dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2fc1dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2fc1e0:
    // 0x2fc1e0: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2fc1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2fc1e4:
    // 0x2fc1e4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2fc1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc1e8:
    // 0x2fc1e8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2fc1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc1ec:
    // 0x2fc1ec: 0x0  nop
    ctx->pc = 0x2fc1ecu;
    // NOP
label_2fc1f0:
    // 0x2fc1f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2fc1f4:
    if (ctx->pc == 0x2FC1F4u) {
        ctx->pc = 0x2FC1F8u;
        goto label_2fc1f8;
    }
    ctx->pc = 0x2FC1F0u;
    {
        const bool branch_taken_0x2fc1f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc1f0) {
            ctx->pc = 0x2FC1FCu;
            goto label_2fc1fc;
        }
    }
    ctx->pc = 0x2FC1F8u;
label_2fc1f8:
    // 0x2fc1f8: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x2fc1f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2fc1fc:
    // 0x2fc1fc: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2fc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc200:
    // 0x2fc200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fc200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc204:
    // 0x2fc204: 0x0  nop
    ctx->pc = 0x2fc204u;
    // NOP
label_2fc208:
    // 0x2fc208: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fc208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fc20c:
    // 0x2fc20c: 0x0  nop
    ctx->pc = 0x2fc20cu;
    // NOP
label_2fc210:
    // 0x2fc210: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2fc214:
    if (ctx->pc == 0x2FC214u) {
        ctx->pc = 0x2FC218u;
        goto label_2fc218;
    }
    ctx->pc = 0x2FC210u;
    {
        const bool branch_taken_0x2fc210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc210) {
            ctx->pc = 0x2FC21Cu;
            goto label_2fc21c;
        }
    }
    ctx->pc = 0x2FC218u;
label_2fc218:
    // 0x2fc218: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2fc218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2fc21c:
    // 0x2fc21c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2fc21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2fc220:
    // 0x2fc220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fc220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2fc224:
    // 0x2fc224: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2fc224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_2fc228:
    // 0x2fc228: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2fc228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2fc22c:
    // 0x2fc22c: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2fc22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_2fc230:
    // 0x2fc230: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2fc234:
    if (ctx->pc == 0x2FC234u) {
        ctx->pc = 0x2FC238u;
        goto label_2fc238;
    }
    ctx->pc = 0x2FC230u;
    {
        const bool branch_taken_0x2fc230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc230) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC238u;
label_2fc238:
    // 0x2fc238: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fc23c:
    if (ctx->pc == 0x2FC23Cu) {
        ctx->pc = 0x2FC23Cu;
            // 0x2fc23c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC240u;
        goto label_2fc240;
    }
    ctx->pc = 0x2FC238u;
    {
        const bool branch_taken_0x2fc238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC238u;
            // 0x2fc23c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc238) {
            ctx->pc = 0x2FC244u;
            goto label_2fc244;
        }
    }
    ctx->pc = 0x2FC240u;
label_2fc240:
    // 0x2fc240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc244:
    // 0x2fc244: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2fc248:
    if (ctx->pc == 0x2FC248u) {
        ctx->pc = 0x2FC24Cu;
        goto label_2fc24c;
    }
    ctx->pc = 0x2FC244u;
    {
        const bool branch_taken_0x2fc244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc244) {
            ctx->pc = 0x2FC254u;
            goto label_2fc254;
        }
    }
    ctx->pc = 0x2FC24Cu;
label_2fc24c:
    // 0x2fc24c: 0x10000014  b           . + 4 + (0x14 << 2)
label_2fc250:
    if (ctx->pc == 0x2FC250u) {
        ctx->pc = 0x2FC250u;
            // 0x2fc250: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2FC254u;
        goto label_2fc254;
    }
    ctx->pc = 0x2FC24Cu;
    {
        const bool branch_taken_0x2fc24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC24Cu;
            // 0x2fc250: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc24c) {
            ctx->pc = 0x2FC2A0u;
            goto label_2fc2a0;
        }
    }
    ctx->pc = 0x2FC254u;
label_2fc254:
    // 0x2fc254: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x2fc254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fc258:
    // 0x2fc258: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x2fc258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc25c:
    // 0x2fc25c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fc25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2fc260:
    // 0x2fc260: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2fc260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_2fc264:
    // 0x2fc264: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2fc264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fc268:
    // 0x2fc268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc26c:
    // 0x2fc26c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fc26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fc270:
    // 0x2fc270: 0x320f809  jalr        $t9
label_2fc274:
    if (ctx->pc == 0x2FC274u) {
        ctx->pc = 0x2FC274u;
            // 0x2fc274: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x2FC278u;
        goto label_2fc278;
    }
    ctx->pc = 0x2FC270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC278u);
        ctx->pc = 0x2FC274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC270u;
            // 0x2fc274: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC278u; }
            if (ctx->pc != 0x2FC278u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC278u;
label_2fc278:
    // 0x2fc278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2fc278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fc27c:
    // 0x2fc27c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc280:
    // 0x2fc280: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2fc280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2fc284:
    // 0x2fc284: 0x320f809  jalr        $t9
label_2fc288:
    if (ctx->pc == 0x2FC288u) {
        ctx->pc = 0x2FC288u;
            // 0x2fc288: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2FC28Cu;
        goto label_2fc28c;
    }
    ctx->pc = 0x2FC284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC28Cu);
        ctx->pc = 0x2FC288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC284u;
            // 0x2fc288: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC28Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC28Cu; }
            if (ctx->pc != 0x2FC28Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FC28Cu;
label_2fc28c:
    // 0x2fc28c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2fc28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fc290:
    // 0x2fc290: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc294:
    // 0x2fc294: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2fc294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2fc298:
    // 0x2fc298: 0x320f809  jalr        $t9
label_2fc29c:
    if (ctx->pc == 0x2FC29Cu) {
        ctx->pc = 0x2FC29Cu;
            // 0x2fc29c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x2FC2A0u;
        goto label_2fc2a0;
    }
    ctx->pc = 0x2FC298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC2A0u);
        ctx->pc = 0x2FC29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC298u;
            // 0x2fc29c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC2A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC2A0u; }
            if (ctx->pc != 0x2FC2A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC2A0u;
label_2fc2a0:
    // 0x2fc2a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc2a4:
    // 0x2fc2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc2a8:
    // 0x2fc2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc2ac:
    // 0x2fc2ac: 0x3e00008  jr          $ra
label_2fc2b0:
    if (ctx->pc == 0x2FC2B0u) {
        ctx->pc = 0x2FC2B0u;
            // 0x2fc2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FC2B4u;
        goto label_fallthrough_0x2fc2ac;
    }
    ctx->pc = 0x2FC2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC2ACu;
            // 0x2fc2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc2ac:
    ctx->pc = 0x2FC2B4u;
}
