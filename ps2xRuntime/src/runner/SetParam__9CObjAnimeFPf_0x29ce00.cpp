#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetParam__9CObjAnimeFPf
// Address: 0x29ce00 - 0x29d1ac
void SetParam__9CObjAnimeFPf_0x29ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetParam__9CObjAnimeFPf_0x29ce00");
#endif

    switch (ctx->pc) {
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce04u: goto label_29ce04;
        case 0x29ce08u: goto label_29ce08;
        case 0x29ce0cu: goto label_29ce0c;
        case 0x29ce10u: goto label_29ce10;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce18u: goto label_29ce18;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce20u: goto label_29ce20;
        case 0x29ce24u: goto label_29ce24;
        case 0x29ce28u: goto label_29ce28;
        case 0x29ce2cu: goto label_29ce2c;
        case 0x29ce30u: goto label_29ce30;
        case 0x29ce34u: goto label_29ce34;
        case 0x29ce38u: goto label_29ce38;
        case 0x29ce3cu: goto label_29ce3c;
        case 0x29ce40u: goto label_29ce40;
        case 0x29ce44u: goto label_29ce44;
        case 0x29ce48u: goto label_29ce48;
        case 0x29ce4cu: goto label_29ce4c;
        case 0x29ce50u: goto label_29ce50;
        case 0x29ce54u: goto label_29ce54;
        case 0x29ce58u: goto label_29ce58;
        case 0x29ce5cu: goto label_29ce5c;
        case 0x29ce60u: goto label_29ce60;
        case 0x29ce64u: goto label_29ce64;
        case 0x29ce68u: goto label_29ce68;
        case 0x29ce6cu: goto label_29ce6c;
        case 0x29ce70u: goto label_29ce70;
        case 0x29ce74u: goto label_29ce74;
        case 0x29ce78u: goto label_29ce78;
        case 0x29ce7cu: goto label_29ce7c;
        case 0x29ce80u: goto label_29ce80;
        case 0x29ce84u: goto label_29ce84;
        case 0x29ce88u: goto label_29ce88;
        case 0x29ce8cu: goto label_29ce8c;
        case 0x29ce90u: goto label_29ce90;
        case 0x29ce94u: goto label_29ce94;
        case 0x29ce98u: goto label_29ce98;
        case 0x29ce9cu: goto label_29ce9c;
        case 0x29cea0u: goto label_29cea0;
        case 0x29cea4u: goto label_29cea4;
        case 0x29cea8u: goto label_29cea8;
        case 0x29ceacu: goto label_29ceac;
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29ceb4u: goto label_29ceb4;
        case 0x29ceb8u: goto label_29ceb8;
        case 0x29cebcu: goto label_29cebc;
        case 0x29cec0u: goto label_29cec0;
        case 0x29cec4u: goto label_29cec4;
        case 0x29cec8u: goto label_29cec8;
        case 0x29ceccu: goto label_29cecc;
        case 0x29ced0u: goto label_29ced0;
        case 0x29ced4u: goto label_29ced4;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cedcu: goto label_29cedc;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cee4u: goto label_29cee4;
        case 0x29cee8u: goto label_29cee8;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cef0u: goto label_29cef0;
        case 0x29cef4u: goto label_29cef4;
        case 0x29cef8u: goto label_29cef8;
        case 0x29cefcu: goto label_29cefc;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf04u: goto label_29cf04;
        case 0x29cf08u: goto label_29cf08;
        case 0x29cf0cu: goto label_29cf0c;
        case 0x29cf10u: goto label_29cf10;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf18u: goto label_29cf18;
        case 0x29cf1cu: goto label_29cf1c;
        case 0x29cf20u: goto label_29cf20;
        case 0x29cf24u: goto label_29cf24;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf2cu: goto label_29cf2c;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf34u: goto label_29cf34;
        case 0x29cf38u: goto label_29cf38;
        case 0x29cf3cu: goto label_29cf3c;
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        case 0x29d008u: goto label_29d008;
        case 0x29d00cu: goto label_29d00c;
        case 0x29d010u: goto label_29d010;
        case 0x29d014u: goto label_29d014;
        case 0x29d018u: goto label_29d018;
        case 0x29d01cu: goto label_29d01c;
        case 0x29d020u: goto label_29d020;
        case 0x29d024u: goto label_29d024;
        case 0x29d028u: goto label_29d028;
        case 0x29d02cu: goto label_29d02c;
        case 0x29d030u: goto label_29d030;
        case 0x29d034u: goto label_29d034;
        case 0x29d038u: goto label_29d038;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d040u: goto label_29d040;
        case 0x29d044u: goto label_29d044;
        case 0x29d048u: goto label_29d048;
        case 0x29d04cu: goto label_29d04c;
        case 0x29d050u: goto label_29d050;
        case 0x29d054u: goto label_29d054;
        case 0x29d058u: goto label_29d058;
        case 0x29d05cu: goto label_29d05c;
        case 0x29d060u: goto label_29d060;
        case 0x29d064u: goto label_29d064;
        case 0x29d068u: goto label_29d068;
        case 0x29d06cu: goto label_29d06c;
        case 0x29d070u: goto label_29d070;
        case 0x29d074u: goto label_29d074;
        case 0x29d078u: goto label_29d078;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d080u: goto label_29d080;
        case 0x29d084u: goto label_29d084;
        case 0x29d088u: goto label_29d088;
        case 0x29d08cu: goto label_29d08c;
        case 0x29d090u: goto label_29d090;
        case 0x29d094u: goto label_29d094;
        case 0x29d098u: goto label_29d098;
        case 0x29d09cu: goto label_29d09c;
        case 0x29d0a0u: goto label_29d0a0;
        case 0x29d0a4u: goto label_29d0a4;
        case 0x29d0a8u: goto label_29d0a8;
        case 0x29d0acu: goto label_29d0ac;
        case 0x29d0b0u: goto label_29d0b0;
        case 0x29d0b4u: goto label_29d0b4;
        case 0x29d0b8u: goto label_29d0b8;
        case 0x29d0bcu: goto label_29d0bc;
        case 0x29d0c0u: goto label_29d0c0;
        case 0x29d0c4u: goto label_29d0c4;
        case 0x29d0c8u: goto label_29d0c8;
        case 0x29d0ccu: goto label_29d0cc;
        case 0x29d0d0u: goto label_29d0d0;
        case 0x29d0d4u: goto label_29d0d4;
        case 0x29d0d8u: goto label_29d0d8;
        case 0x29d0dcu: goto label_29d0dc;
        case 0x29d0e0u: goto label_29d0e0;
        case 0x29d0e4u: goto label_29d0e4;
        case 0x29d0e8u: goto label_29d0e8;
        case 0x29d0ecu: goto label_29d0ec;
        case 0x29d0f0u: goto label_29d0f0;
        case 0x29d0f4u: goto label_29d0f4;
        case 0x29d0f8u: goto label_29d0f8;
        case 0x29d0fcu: goto label_29d0fc;
        case 0x29d100u: goto label_29d100;
        case 0x29d104u: goto label_29d104;
        case 0x29d108u: goto label_29d108;
        case 0x29d10cu: goto label_29d10c;
        case 0x29d110u: goto label_29d110;
        case 0x29d114u: goto label_29d114;
        case 0x29d118u: goto label_29d118;
        case 0x29d11cu: goto label_29d11c;
        case 0x29d120u: goto label_29d120;
        case 0x29d124u: goto label_29d124;
        case 0x29d128u: goto label_29d128;
        case 0x29d12cu: goto label_29d12c;
        case 0x29d130u: goto label_29d130;
        case 0x29d134u: goto label_29d134;
        case 0x29d138u: goto label_29d138;
        case 0x29d13cu: goto label_29d13c;
        case 0x29d140u: goto label_29d140;
        case 0x29d144u: goto label_29d144;
        case 0x29d148u: goto label_29d148;
        case 0x29d14cu: goto label_29d14c;
        case 0x29d150u: goto label_29d150;
        case 0x29d154u: goto label_29d154;
        case 0x29d158u: goto label_29d158;
        case 0x29d15cu: goto label_29d15c;
        case 0x29d160u: goto label_29d160;
        case 0x29d164u: goto label_29d164;
        case 0x29d168u: goto label_29d168;
        case 0x29d16cu: goto label_29d16c;
        case 0x29d170u: goto label_29d170;
        case 0x29d174u: goto label_29d174;
        case 0x29d178u: goto label_29d178;
        case 0x29d17cu: goto label_29d17c;
        case 0x29d180u: goto label_29d180;
        case 0x29d184u: goto label_29d184;
        case 0x29d188u: goto label_29d188;
        case 0x29d18cu: goto label_29d18c;
        case 0x29d190u: goto label_29d190;
        case 0x29d194u: goto label_29d194;
        case 0x29d198u: goto label_29d198;
        case 0x29d19cu: goto label_29d19c;
        case 0x29d1a0u: goto label_29d1a0;
        case 0x29d1a4u: goto label_29d1a4;
        case 0x29d1a8u: goto label_29d1a8;
        default: break;
    }

    ctx->pc = 0x29ce00u;

label_29ce00:
    // 0x29ce00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_29ce04:
    // 0x29ce04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29ce08:
    // 0x29ce08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29ce0c:
    // 0x29ce0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ce10:
    // 0x29ce10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ce10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ce14:
    // 0x29ce14: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x29ce14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_29ce18:
    // 0x29ce18: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29ce18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29ce1c:
    // 0x29ce1c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x29ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_29ce20:
    // 0x29ce20: 0x84a30034  lh          $v1, 0x34($a1)
    ctx->pc = 0x29ce20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
label_29ce24:
    // 0x29ce24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29ce28:
    if (ctx->pc == 0x29CE28u) {
        ctx->pc = 0x29CE28u;
            // 0x29ce28: 0x24a60020  addiu       $a2, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x29CE2Cu;
        goto label_29ce2c;
    }
    ctx->pc = 0x29CE24u;
    {
        const bool branch_taken_0x29ce24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE24u;
            // 0x29ce28: 0x24a60020  addiu       $a2, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce24) {
            ctx->pc = 0x29CE3Cu;
            goto label_29ce3c;
        }
    }
    ctx->pc = 0x29CE2Cu;
label_29ce2c:
    // 0x29ce2c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ce30:
    // 0x29ce30: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x29ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_29ce34:
    // 0x29ce34: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ce38:
    // 0x29ce38: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x29ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_29ce3c:
    // 0x29ce3c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x29ce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_29ce40:
    // 0x29ce40: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29ce44:
    // 0x29ce44: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
label_29ce48:
    if (ctx->pc == 0x29CE48u) {
        ctx->pc = 0x29CE48u;
            // 0x29ce48: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CE4Cu;
        goto label_29ce4c;
    }
    ctx->pc = 0x29CE44u;
    {
        const bool branch_taken_0x29ce44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE44u;
            // 0x29ce48: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce44) {
            ctx->pc = 0x29CE50u;
            goto label_29ce50;
        }
    }
    ctx->pc = 0x29CE4Cu;
label_29ce4c:
    // 0x29ce4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ce4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ce50:
    // 0x29ce50: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_29ce54:
    if (ctx->pc == 0x29CE54u) {
        ctx->pc = 0x29CE58u;
        goto label_29ce58;
    }
    ctx->pc = 0x29CE50u;
    {
        const bool branch_taken_0x29ce50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce50) {
            ctx->pc = 0x29CE60u;
            goto label_29ce60;
        }
    }
    ctx->pc = 0x29CE58u;
label_29ce58:
    // 0x29ce58: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x29ce58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_29ce5c:
    // 0x29ce5c: 0x0  nop
    ctx->pc = 0x29ce5cu;
    // NOP
label_29ce60:
    // 0x29ce60: 0x120000cd  beqz        $s0, . + 4 + (0xCD << 2)
label_29ce64:
    if (ctx->pc == 0x29CE64u) {
        ctx->pc = 0x29CE68u;
        goto label_29ce68;
    }
    ctx->pc = 0x29CE60u;
    {
        const bool branch_taken_0x29ce60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce60) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29CE68u;
label_29ce68:
    // 0x29ce68: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_29ce6c:
    if (ctx->pc == 0x29CE6Cu) {
        ctx->pc = 0x29CE70u;
        goto label_29ce70;
    }
    ctx->pc = 0x29CE68u;
    {
        const bool branch_taken_0x29ce68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce68) {
            ctx->pc = 0x29CE78u;
            goto label_29ce78;
        }
    }
    ctx->pc = 0x29CE70u;
label_29ce70:
    // 0x29ce70: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_29ce74:
    // 0x29ce74: 0x0  nop
    ctx->pc = 0x29ce74u;
    // NOP
label_29ce78:
    // 0x29ce78: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x29ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_29ce7c:
    // 0x29ce7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29ce80:
    // 0x29ce80: 0x10a300be  beq         $a1, $v1, . + 4 + (0xBE << 2)
label_29ce84:
    if (ctx->pc == 0x29CE84u) {
        ctx->pc = 0x29CE84u;
            // 0x29ce84: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29CE88u;
        goto label_29ce88;
    }
    ctx->pc = 0x29CE80u;
    {
        const bool branch_taken_0x29ce80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE80u;
            // 0x29ce84: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce80) {
            ctx->pc = 0x29D17Cu;
            goto label_29d17c;
        }
    }
    ctx->pc = 0x29CE88u;
label_29ce88:
    // 0x29ce88: 0x10a300af  beq         $a1, $v1, . + 4 + (0xAF << 2)
label_29ce8c:
    if (ctx->pc == 0x29CE8Cu) {
        ctx->pc = 0x29CE8Cu;
            // 0x29ce8c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29CE90u;
        goto label_29ce90;
    }
    ctx->pc = 0x29CE88u;
    {
        const bool branch_taken_0x29ce88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE88u;
            // 0x29ce8c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce88) {
            ctx->pc = 0x29D148u;
            goto label_29d148;
        }
    }
    ctx->pc = 0x29CE90u;
label_29ce90:
    // 0x29ce90: 0x10a300a5  beq         $a1, $v1, . + 4 + (0xA5 << 2)
label_29ce94:
    if (ctx->pc == 0x29CE94u) {
        ctx->pc = 0x29CE94u;
            // 0x29ce94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29CE98u;
        goto label_29ce98;
    }
    ctx->pc = 0x29CE90u;
    {
        const bool branch_taken_0x29ce90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE90u;
            // 0x29ce94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce90) {
            ctx->pc = 0x29D128u;
            goto label_29d128;
        }
    }
    ctx->pc = 0x29CE98u;
label_29ce98:
    // 0x29ce98: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
label_29ce9c:
    if (ctx->pc == 0x29CE9Cu) {
        ctx->pc = 0x29CE9Cu;
            // 0x29ce9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29CEA0u;
        goto label_29cea0;
    }
    ctx->pc = 0x29CE98u;
    {
        const bool branch_taken_0x29ce98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE98u;
            // 0x29ce9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce98) {
            ctx->pc = 0x29CF38u;
            goto label_29cf38;
        }
    }
    ctx->pc = 0x29CEA0u;
label_29cea0:
    // 0x29cea0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_29cea4:
    if (ctx->pc == 0x29CEA4u) {
        ctx->pc = 0x29CEA8u;
        goto label_29cea8;
    }
    ctx->pc = 0x29CEA0u;
    {
        const bool branch_taken_0x29cea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cea0) {
            ctx->pc = 0x29CEB0u;
            goto label_29ceb0;
        }
    }
    ctx->pc = 0x29CEA8u;
label_29cea8:
    // 0x29cea8: 0x100000bc  b           . + 4 + (0xBC << 2)
label_29ceac:
    if (ctx->pc == 0x29CEACu) {
        ctx->pc = 0x29CEACu;
            // 0x29ceac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x29CEB0u;
        goto label_29ceb0;
    }
    ctx->pc = 0x29CEA8u;
    {
        const bool branch_taken_0x29cea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEA8u;
            // 0x29ceac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cea8) {
            ctx->pc = 0x29D19Cu;
            goto label_29d19c;
        }
    }
    ctx->pc = 0x29CEB0u;
label_29ceb0:
    // 0x29ceb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29ceb4:
    // 0x29ceb4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x29ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_29ceb8:
    // 0x29ceb8: 0x84c20016  lh          $v0, 0x16($a2)
    ctx->pc = 0x29ceb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
label_29cebc:
    // 0x29cebc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_29cec0:
    if (ctx->pc == 0x29CEC0u) {
        ctx->pc = 0x29CEC4u;
        goto label_29cec4;
    }
    ctx->pc = 0x29CEBCu;
    {
        const bool branch_taken_0x29cebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cebc) {
            ctx->pc = 0x29CF1Cu;
            goto label_29cf1c;
        }
    }
    ctx->pc = 0x29CEC4u;
label_29cec4:
    // 0x29cec4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_29cec8:
    if (ctx->pc == 0x29CEC8u) {
        ctx->pc = 0x29CEC8u;
            // 0x29cec8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29CECCu;
        goto label_29cecc;
    }
    ctx->pc = 0x29CEC4u;
    {
        const bool branch_taken_0x29cec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEC4u;
            // 0x29cec8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cec4) {
            ctx->pc = 0x29CF00u;
            goto label_29cf00;
        }
    }
    ctx->pc = 0x29CECCu;
label_29cecc:
    // 0x29cecc: 0xc05a67c  jal         func_1699F0
label_29ced0:
    if (ctx->pc == 0x29CED0u) {
        ctx->pc = 0x29CED4u;
        goto label_29ced4;
    }
    ctx->pc = 0x29CECCu;
    SET_GPR_U32(ctx, 31, 0x29CED4u);
    ctx->pc = 0x1699F0u;
    if (runtime->hasFunction(0x1699F0u)) {
        auto targetFn = runtime->lookupFunction(0x1699F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CED4u; }
        if (ctx->pc != 0x29CED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__7CObjectFPA4_f_0x1699f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CED4u; }
        if (ctx->pc != 0x29CED4u) { return; }
    }
    ctx->pc = 0x29CED4u;
label_29ced4:
    // 0x29ced4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x29ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_29ced8:
    // 0x29ced8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x29ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_29cedc:
    // 0x29cedc: 0xc041bb0  jal         func_106EC0
label_29cee0:
    if (ctx->pc == 0x29CEE0u) {
        ctx->pc = 0x29CEE0u;
            // 0x29cee0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29CEE4u;
        goto label_29cee4;
    }
    ctx->pc = 0x29CEDCu;
    SET_GPR_U32(ctx, 31, 0x29CEE4u);
    ctx->pc = 0x29CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEDCu;
            // 0x29cee0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEE4u; }
        if (ctx->pc != 0x29CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEE4u; }
        if (ctx->pc != 0x29CEE4u) { return; }
    }
    ctx->pc = 0x29CEE4u;
label_29cee4:
    // 0x29cee4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29cee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29cee8:
    // 0x29cee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ceec:
    // 0x29ceec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29ceecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29cef0:
    // 0x29cef0: 0x320f809  jalr        $t9
label_29cef4:
    if (ctx->pc == 0x29CEF4u) {
        ctx->pc = 0x29CEF4u;
            // 0x29cef4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x29CEF8u;
        goto label_29cef8;
    }
    ctx->pc = 0x29CEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CEF8u);
        ctx->pc = 0x29CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEF0u;
            // 0x29cef4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CEF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CEF8u; }
            if (ctx->pc != 0x29CEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x29CEF8u;
label_29cef8:
    // 0x29cef8: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_29cefc:
    if (ctx->pc == 0x29CEFCu) {
        ctx->pc = 0x29CF00u;
        goto label_29cf00;
    }
    ctx->pc = 0x29CEF8u;
    {
        const bool branch_taken_0x29cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cef8) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29CF00u;
label_29cf00:
    // 0x29cf00: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29cf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29cf04:
    // 0x29cf04: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x29cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_29cf08:
    // 0x29cf08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29cf08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29cf0c:
    // 0x29cf0c: 0x320f809  jalr        $t9
label_29cf10:
    if (ctx->pc == 0x29CF10u) {
        ctx->pc = 0x29CF10u;
            // 0x29cf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CF14u;
        goto label_29cf14;
    }
    ctx->pc = 0x29CF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CF14u);
        ctx->pc = 0x29CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF0Cu;
            // 0x29cf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CF14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CF14u; }
            if (ctx->pc != 0x29CF14u) { return; }
        }
        }
    }
    ctx->pc = 0x29CF14u;
label_29cf14:
    // 0x29cf14: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_29cf18:
    if (ctx->pc == 0x29CF18u) {
        ctx->pc = 0x29CF1Cu;
        goto label_29cf1c;
    }
    ctx->pc = 0x29CF14u;
    {
        const bool branch_taken_0x29cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf14) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29CF1Cu;
label_29cf1c:
    // 0x29cf1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29cf1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29cf20:
    // 0x29cf20: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x29cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_29cf24:
    // 0x29cf24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29cf24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29cf28:
    // 0x29cf28: 0x320f809  jalr        $t9
label_29cf2c:
    if (ctx->pc == 0x29CF2Cu) {
        ctx->pc = 0x29CF2Cu;
            // 0x29cf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CF30u;
        goto label_29cf30;
    }
    ctx->pc = 0x29CF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CF30u);
        ctx->pc = 0x29CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF28u;
            // 0x29cf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CF30u; }
            if (ctx->pc != 0x29CF30u) { return; }
        }
        }
    }
    ctx->pc = 0x29CF30u;
label_29cf30:
    // 0x29cf30: 0x10000099  b           . + 4 + (0x99 << 2)
label_29cf34:
    if (ctx->pc == 0x29CF34u) {
        ctx->pc = 0x29CF38u;
        goto label_29cf38;
    }
    ctx->pc = 0x29CF30u;
    {
        const bool branch_taken_0x29cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf30) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29CF38u;
label_29cf38:
    // 0x29cf38: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cf3c:
    // 0x29cf3c: 0x3c0248af  lui         $v0, 0x48AF
    ctx->pc = 0x29cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
label_29cf40:
    // 0x29cf40: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29cf44:
    // 0x29cf44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cf48:
    // 0x29cf48: 0x0  nop
    ctx->pc = 0x29cf48u;
    // NOP
label_29cf4c:
    // 0x29cf4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cf4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cf50:
    // 0x29cf50: 0x0  nop
    ctx->pc = 0x29cf50u;
    // NOP
label_29cf54:
    // 0x29cf54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_29cf58:
    if (ctx->pc == 0x29CF58u) {
        ctx->pc = 0x29CF5Cu;
        goto label_29cf5c;
    }
    ctx->pc = 0x29CF54u;
    {
        const bool branch_taken_0x29cf54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cf54) {
            ctx->pc = 0x29CF64u;
            goto label_29cf64;
        }
    }
    ctx->pc = 0x29CF5Cu;
label_29cf5c:
    // 0x29cf5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29cf5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29cf60:
    // 0x29cf60: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x29cf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_29cf64:
    // 0x29cf64: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x29cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cf68:
    // 0x29cf68: 0x3c02c8af  lui         $v0, 0xC8AF
    ctx->pc = 0x29cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51375 << 16));
label_29cf6c:
    // 0x29cf6c: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29cf70:
    // 0x29cf70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cf74:
    // 0x29cf74: 0x0  nop
    ctx->pc = 0x29cf74u;
    // NOP
label_29cf78:
    // 0x29cf78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29cf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cf7c:
    // 0x29cf7c: 0x0  nop
    ctx->pc = 0x29cf7cu;
    // NOP
label_29cf80:
    // 0x29cf80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_29cf84:
    if (ctx->pc == 0x29CF84u) {
        ctx->pc = 0x29CF84u;
            // 0x29cf84: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->pc = 0x29CF88u;
        goto label_29cf88;
    }
    ctx->pc = 0x29CF80u;
    {
        const bool branch_taken_0x29cf80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF80u;
            // 0x29cf84: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf80) {
            ctx->pc = 0x29CF9Cu;
            goto label_29cf9c;
        }
    }
    ctx->pc = 0x29CF88u;
label_29cf88:
    // 0x29cf88: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29cf8c:
    // 0x29cf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cf90:
    // 0x29cf90: 0x0  nop
    ctx->pc = 0x29cf90u;
    // NOP
label_29cf94:
    // 0x29cf94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cf94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cf98:
    // 0x29cf98: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x29cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_29cf9c:
    // 0x29cf9c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x29cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cfa0:
    // 0x29cfa0: 0x3c0248af  lui         $v0, 0x48AF
    ctx->pc = 0x29cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
label_29cfa4:
    // 0x29cfa4: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29cfa8:
    // 0x29cfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cfac:
    // 0x29cfac: 0x0  nop
    ctx->pc = 0x29cfacu;
    // NOP
label_29cfb0:
    // 0x29cfb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29cfb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cfb4:
    // 0x29cfb4: 0x0  nop
    ctx->pc = 0x29cfb4u;
    // NOP
label_29cfb8:
    // 0x29cfb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_29cfbc:
    if (ctx->pc == 0x29CFBCu) {
        ctx->pc = 0x29CFC0u;
        goto label_29cfc0;
    }
    ctx->pc = 0x29CFB8u;
    {
        const bool branch_taken_0x29cfb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cfb8) {
            ctx->pc = 0x29CFC8u;
            goto label_29cfc8;
        }
    }
    ctx->pc = 0x29CFC0u;
label_29cfc0:
    // 0x29cfc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29cfc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29cfc4:
    // 0x29cfc4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x29cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_29cfc8:
    // 0x29cfc8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x29cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cfcc:
    // 0x29cfcc: 0x3c02c8af  lui         $v0, 0xC8AF
    ctx->pc = 0x29cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51375 << 16));
label_29cfd0:
    // 0x29cfd0: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29cfd4:
    // 0x29cfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cfd8:
    // 0x29cfd8: 0x0  nop
    ctx->pc = 0x29cfd8u;
    // NOP
label_29cfdc:
    // 0x29cfdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29cfdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cfe0:
    // 0x29cfe0: 0x0  nop
    ctx->pc = 0x29cfe0u;
    // NOP
label_29cfe4:
    // 0x29cfe4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_29cfe8:
    if (ctx->pc == 0x29CFE8u) {
        ctx->pc = 0x29CFE8u;
            // 0x29cfe8: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->pc = 0x29CFECu;
        goto label_29cfec;
    }
    ctx->pc = 0x29CFE4u;
    {
        const bool branch_taken_0x29cfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CFE4u;
            // 0x29cfe8: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfe4) {
            ctx->pc = 0x29D000u;
            goto label_29d000;
        }
    }
    ctx->pc = 0x29CFECu;
label_29cfec:
    // 0x29cfec: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29cff0:
    // 0x29cff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cff4:
    // 0x29cff4: 0x0  nop
    ctx->pc = 0x29cff4u;
    // NOP
label_29cff8:
    // 0x29cff8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cffc:
    // 0x29cffc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x29cffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_29d000:
    // 0x29d000: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x29d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d004:
    // 0x29d004: 0x3c0248af  lui         $v0, 0x48AF
    ctx->pc = 0x29d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
label_29d008:
    // 0x29d008: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29d00c:
    // 0x29d00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d010:
    // 0x29d010: 0x0  nop
    ctx->pc = 0x29d010u;
    // NOP
label_29d014:
    // 0x29d014: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d018:
    // 0x29d018: 0x0  nop
    ctx->pc = 0x29d018u;
    // NOP
label_29d01c:
    // 0x29d01c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_29d020:
    if (ctx->pc == 0x29D020u) {
        ctx->pc = 0x29D024u;
        goto label_29d024;
    }
    ctx->pc = 0x29D01Cu;
    {
        const bool branch_taken_0x29d01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d01c) {
            ctx->pc = 0x29D02Cu;
            goto label_29d02c;
        }
    }
    ctx->pc = 0x29D024u;
label_29d024:
    // 0x29d024: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29d024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29d028:
    // 0x29d028: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x29d028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_29d02c:
    // 0x29d02c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x29d02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d030:
    // 0x29d030: 0x3c02c8af  lui         $v0, 0xC8AF
    ctx->pc = 0x29d030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51375 << 16));
label_29d034:
    // 0x29d034: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29d038:
    // 0x29d038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d03c:
    // 0x29d03c: 0x0  nop
    ctx->pc = 0x29d03cu;
    // NOP
label_29d040:
    // 0x29d040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29d040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d044:
    // 0x29d044: 0x0  nop
    ctx->pc = 0x29d044u;
    // NOP
label_29d048:
    // 0x29d048: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_29d04c:
    if (ctx->pc == 0x29D04Cu) {
        ctx->pc = 0x29D04Cu;
            // 0x29d04c: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->pc = 0x29D050u;
        goto label_29d050;
    }
    ctx->pc = 0x29D048u;
    {
        const bool branch_taken_0x29d048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D048u;
            // 0x29d04c: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d048) {
            ctx->pc = 0x29D064u;
            goto label_29d064;
        }
    }
    ctx->pc = 0x29D050u;
label_29d050:
    // 0x29d050: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x29d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_29d054:
    // 0x29d054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d058:
    // 0x29d058: 0x0  nop
    ctx->pc = 0x29d058u;
    // NOP
label_29d05c:
    // 0x29d05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29d05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29d060:
    // 0x29d060: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x29d060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_29d064:
    // 0x29d064: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d068:
    // 0x29d068: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29d06c:
    // 0x29d06c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x29d06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29d070:
    // 0x29d070: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29d070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29d074:
    // 0x29d074: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x29d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_29d078:
    // 0x29d078: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29d078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29d07c:
    // 0x29d07c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29d07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29d080:
    // 0x29d080: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x29d080u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_29d084:
    // 0x29d084: 0x0  nop
    ctx->pc = 0x29d084u;
    // NOP
label_29d088:
    // 0x29d088: 0x0  nop
    ctx->pc = 0x29d088u;
    // NOP
label_29d08c:
    // 0x29d08c: 0xc04c374  jal         func_130DD0
label_29d090:
    if (ctx->pc == 0x29D090u) {
        ctx->pc = 0x29D094u;
        goto label_29d094;
    }
    ctx->pc = 0x29D08Cu;
    SET_GPR_U32(ctx, 31, 0x29D094u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D094u; }
        if (ctx->pc != 0x29D094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D094u; }
        if (ctx->pc != 0x29D094u) { return; }
    }
    ctx->pc = 0x29D094u;
label_29d094:
    // 0x29d094: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x29d094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_29d098:
    // 0x29d098: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29d098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29d09c:
    // 0x29d09c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x29d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d0a0:
    // 0x29d0a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29d0a4:
    // 0x29d0a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29d0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29d0a8:
    // 0x29d0a8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x29d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_29d0ac:
    // 0x29d0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d0b0:
    // 0x29d0b0: 0x0  nop
    ctx->pc = 0x29d0b0u;
    // NOP
label_29d0b4:
    // 0x29d0b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29d0b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_29d0b8:
    // 0x29d0b8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29d0b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29d0bc:
    // 0x29d0bc: 0x0  nop
    ctx->pc = 0x29d0bcu;
    // NOP
label_29d0c0:
    // 0x29d0c0: 0x0  nop
    ctx->pc = 0x29d0c0u;
    // NOP
label_29d0c4:
    // 0x29d0c4: 0xc04c374  jal         func_130DD0
label_29d0c8:
    if (ctx->pc == 0x29D0C8u) {
        ctx->pc = 0x29D0CCu;
        goto label_29d0cc;
    }
    ctx->pc = 0x29D0C4u;
    SET_GPR_U32(ctx, 31, 0x29D0CCu);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D0CCu; }
        if (ctx->pc != 0x29D0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D0CCu; }
        if (ctx->pc != 0x29D0CCu) { return; }
    }
    ctx->pc = 0x29D0CCu;
label_29d0cc:
    // 0x29d0cc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x29d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_29d0d0:
    // 0x29d0d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29d0d4:
    // 0x29d0d4: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x29d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d0d8:
    // 0x29d0d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29d0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29d0dc:
    // 0x29d0dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29d0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29d0e0:
    // 0x29d0e0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x29d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_29d0e4:
    // 0x29d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d0e8:
    // 0x29d0e8: 0x0  nop
    ctx->pc = 0x29d0e8u;
    // NOP
label_29d0ec:
    // 0x29d0ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29d0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_29d0f0:
    // 0x29d0f0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29d0f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29d0f4:
    // 0x29d0f4: 0x0  nop
    ctx->pc = 0x29d0f4u;
    // NOP
label_29d0f8:
    // 0x29d0f8: 0x0  nop
    ctx->pc = 0x29d0f8u;
    // NOP
label_29d0fc:
    // 0x29d0fc: 0xc04c374  jal         func_130DD0
label_29d100:
    if (ctx->pc == 0x29D100u) {
        ctx->pc = 0x29D104u;
        goto label_29d104;
    }
    ctx->pc = 0x29D0FCu;
    SET_GPR_U32(ctx, 31, 0x29D104u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D104u; }
        if (ctx->pc != 0x29D104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D104u; }
        if (ctx->pc != 0x29D104u) { return; }
    }
    ctx->pc = 0x29D104u;
label_29d104:
    // 0x29d104: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x29d104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_29d108:
    // 0x29d108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d10c:
    // 0x29d10c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x29d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_29d110:
    // 0x29d110: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29d110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d114:
    // 0x29d114: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_29d118:
    // 0x29d118: 0x320f809  jalr        $t9
label_29d11c:
    if (ctx->pc == 0x29D11Cu) {
        ctx->pc = 0x29D11Cu;
            // 0x29d11c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x29D120u;
        goto label_29d120;
    }
    ctx->pc = 0x29D118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D120u);
        ctx->pc = 0x29D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D118u;
            // 0x29d11c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29D120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29D120u; }
            if (ctx->pc != 0x29D120u) { return; }
        }
        }
    }
    ctx->pc = 0x29D120u;
label_29d120:
    // 0x29d120: 0x1000001d  b           . + 4 + (0x1D << 2)
label_29d124:
    if (ctx->pc == 0x29D124u) {
        ctx->pc = 0x29D128u;
        goto label_29d128;
    }
    ctx->pc = 0x29D120u;
    {
        const bool branch_taken_0x29d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d120) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D128u;
label_29d128:
    // 0x29d128: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x29d128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_29d12c:
    // 0x29d12c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_29d130:
    // 0x29d130: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29d130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d134:
    // 0x29d134: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x29d134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_29d138:
    // 0x29d138: 0x320f809  jalr        $t9
label_29d13c:
    if (ctx->pc == 0x29D13Cu) {
        ctx->pc = 0x29D13Cu;
            // 0x29d13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D140u;
        goto label_29d140;
    }
    ctx->pc = 0x29D138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D140u);
        ctx->pc = 0x29D13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D138u;
            // 0x29d13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29D140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29D140u; }
            if (ctx->pc != 0x29D140u) { return; }
        }
        }
    }
    ctx->pc = 0x29D140u;
label_29d140:
    // 0x29d140: 0x10000015  b           . + 4 + (0x15 << 2)
label_29d144:
    if (ctx->pc == 0x29D144u) {
        ctx->pc = 0x29D148u;
        goto label_29d148;
    }
    ctx->pc = 0x29D140u;
    {
        const bool branch_taken_0x29d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d140) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D148u;
label_29d148:
    // 0x29d148: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
label_29d14c:
    if (ctx->pc == 0x29D14Cu) {
        ctx->pc = 0x29D150u;
        goto label_29d150;
    }
    ctx->pc = 0x29D148u;
    {
        const bool branch_taken_0x29d148 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d148) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D150u;
label_29d150:
    // 0x29d150: 0x8ce400f4  lw          $a0, 0xF4($a3)
    ctx->pc = 0x29d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
label_29d154:
    // 0x29d154: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_29d158:
    if (ctx->pc == 0x29D158u) {
        ctx->pc = 0x29D158u;
            // 0x29d158: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29D15Cu;
        goto label_29d15c;
    }
    ctx->pc = 0x29D154u;
    {
        const bool branch_taken_0x29d154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D154u;
            // 0x29d158: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d154) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D15Cu;
label_29d15c:
    // 0x29d15c: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x29d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_29d160:
    // 0x29d160: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d164:
    // 0x29d164: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x29d164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_29d168:
    // 0x29d168: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x29d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d16c:
    // 0x29d16c: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x29d16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_29d170:
    // 0x29d170: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x29d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d174:
    // 0x29d174: 0x10000008  b           . + 4 + (0x8 << 2)
label_29d178:
    if (ctx->pc == 0x29D178u) {
        ctx->pc = 0x29D178u;
            // 0x29d178: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->pc = 0x29D17Cu;
        goto label_29d17c;
    }
    ctx->pc = 0x29D174u;
    {
        const bool branch_taken_0x29d174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D174u;
            // 0x29d178: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d174) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D17Cu;
label_29d17c:
    // 0x29d17c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_29d180:
    if (ctx->pc == 0x29D180u) {
        ctx->pc = 0x29D184u;
        goto label_29d184;
    }
    ctx->pc = 0x29D17Cu;
    {
        const bool branch_taken_0x29d17c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d17c) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D184u;
label_29d184:
    // 0x29d184: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x29d184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
label_29d188:
    // 0x29d188: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_29d18c:
    if (ctx->pc == 0x29D18Cu) {
        ctx->pc = 0x29D190u;
        goto label_29d190;
    }
    ctx->pc = 0x29D188u;
    {
        const bool branch_taken_0x29d188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d188) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D190u;
label_29d190:
    // 0x29d190: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d194:
    // 0x29d194: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x29d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_29d198:
    // 0x29d198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d19c:
    // 0x29d19c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d1a0:
    // 0x29d1a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d1a4:
    // 0x29d1a4: 0x3e00008  jr          $ra
label_29d1a8:
    if (ctx->pc == 0x29D1A8u) {
        ctx->pc = 0x29D1A8u;
            // 0x29d1a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x29D1ACu;
        goto label_fallthrough_0x29d1a4;
    }
    ctx->pc = 0x29D1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1A4u;
            // 0x29d1a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29d1a4:
    ctx->pc = 0x29D1ACu;
}
