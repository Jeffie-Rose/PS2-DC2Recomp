#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CWorldMapMenuFv
// Address: 0x2acaf0 - 0x2ad9c4
void Draw__13CWorldMapMenuFv_0x2acaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CWorldMapMenuFv_0x2acaf0");
#endif

    switch (ctx->pc) {
        case 0x2acb30u: goto label_2acb30;
        case 0x2acb60u: goto label_2acb60;
        case 0x2acb80u: goto label_2acb80;
        case 0x2acb98u: goto label_2acb98;
        case 0x2acbb8u: goto label_2acbb8;
        case 0x2acbc0u: goto label_2acbc0;
        case 0x2acbd4u: goto label_2acbd4;
        case 0x2acbe0u: goto label_2acbe0;
        case 0x2acc00u: goto label_2acc00;
        case 0x2acc18u: goto label_2acc18;
        case 0x2acc28u: goto label_2acc28;
        case 0x2acc48u: goto label_2acc48;
        case 0x2acc78u: goto label_2acc78;
        case 0x2acc84u: goto label_2acc84;
        case 0x2acc90u: goto label_2acc90;
        case 0x2acc9cu: goto label_2acc9c;
        case 0x2accb4u: goto label_2accb4;
        case 0x2accbcu: goto label_2accbc;
        case 0x2accccu: goto label_2acccc;
        case 0x2accecu: goto label_2accec;
        case 0x2acd00u: goto label_2acd00;
        case 0x2acd14u: goto label_2acd14;
        case 0x2acd24u: goto label_2acd24;
        case 0x2acd38u: goto label_2acd38;
        case 0x2acd50u: goto label_2acd50;
        case 0x2acd6cu: goto label_2acd6c;
        case 0x2acd7cu: goto label_2acd7c;
        case 0x2acd9cu: goto label_2acd9c;
        case 0x2acdb0u: goto label_2acdb0;
        case 0x2acdc4u: goto label_2acdc4;
        case 0x2acdd4u: goto label_2acdd4;
        case 0x2acde8u: goto label_2acde8;
        case 0x2ace00u: goto label_2ace00;
        case 0x2ace1cu: goto label_2ace1c;
        case 0x2ace28u: goto label_2ace28;
        case 0x2ace34u: goto label_2ace34;
        case 0x2ace40u: goto label_2ace40;
        case 0x2ace58u: goto label_2ace58;
        case 0x2ace68u: goto label_2ace68;
        case 0x2ace7cu: goto label_2ace7c;
        case 0x2ace8cu: goto label_2ace8c;
        case 0x2acea0u: goto label_2acea0;
        case 0x2acea8u: goto label_2acea8;
        case 0x2aceb4u: goto label_2aceb4;
        case 0x2aced8u: goto label_2aced8;
        case 0x2acefcu: goto label_2acefc;
        case 0x2acf34u: goto label_2acf34;
        case 0x2acf40u: goto label_2acf40;
        case 0x2acf4cu: goto label_2acf4c;
        case 0x2acf5cu: goto label_2acf5c;
        case 0x2acf6cu: goto label_2acf6c;
        case 0x2acf80u: goto label_2acf80;
        case 0x2acf90u: goto label_2acf90;
        case 0x2acfa4u: goto label_2acfa4;
        case 0x2acfc0u: goto label_2acfc0;
        case 0x2acfe4u: goto label_2acfe4;
        case 0x2ad008u: goto label_2ad008;
        case 0x2ad028u: goto label_2ad028;
        case 0x2ad058u: goto label_2ad058;
        case 0x2ad064u: goto label_2ad064;
        case 0x2ad070u: goto label_2ad070;
        case 0x2ad088u: goto label_2ad088;
        case 0x2ad0a0u: goto label_2ad0a0;
        case 0x2ad0b0u: goto label_2ad0b0;
        case 0x2ad0ccu: goto label_2ad0cc;
        case 0x2ad0dcu: goto label_2ad0dc;
        case 0x2ad10cu: goto label_2ad10c;
        case 0x2ad124u: goto label_2ad124;
        case 0x2ad134u: goto label_2ad134;
        case 0x2ad14cu: goto label_2ad14c;
        case 0x2ad15cu: goto label_2ad15c;
        case 0x2ad18cu: goto label_2ad18c;
        case 0x2ad194u: goto label_2ad194;
        case 0x2ad1acu: goto label_2ad1ac;
        case 0x2ad1d4u: goto label_2ad1d4;
        case 0x2ad1ecu: goto label_2ad1ec;
        case 0x2ad1f8u: goto label_2ad1f8;
        case 0x2ad204u: goto label_2ad204;
        case 0x2ad210u: goto label_2ad210;
        case 0x2ad228u: goto label_2ad228;
        case 0x2ad240u: goto label_2ad240;
        case 0x2ad28cu: goto label_2ad28c;
        case 0x2ad2a4u: goto label_2ad2a4;
        case 0x2ad2b4u: goto label_2ad2b4;
        case 0x2ad2bcu: goto label_2ad2bc;
        case 0x2ad2f0u: goto label_2ad2f0;
        case 0x2ad318u: goto label_2ad318;
        case 0x2ad324u: goto label_2ad324;
        case 0x2ad33cu: goto label_2ad33c;
        case 0x2ad348u: goto label_2ad348;
        case 0x2ad3a0u: goto label_2ad3a0;
        case 0x2ad3b0u: goto label_2ad3b0;
        case 0x2ad3d0u: goto label_2ad3d0;
        case 0x2ad41cu: goto label_2ad41c;
        case 0x2ad468u: goto label_2ad468;
        case 0x2ad474u: goto label_2ad474;
        case 0x2ad47cu: goto label_2ad47c;
        case 0x2ad4f8u: goto label_2ad4f8;
        case 0x2ad53cu: goto label_2ad53c;
        case 0x2ad544u: goto label_2ad544;
        case 0x2ad55cu: goto label_2ad55c;
        case 0x2ad580u: goto label_2ad580;
        case 0x2ad5a0u: goto label_2ad5a0;
        case 0x2ad5b8u: goto label_2ad5b8;
        case 0x2ad5d8u: goto label_2ad5d8;
        case 0x2ad618u: goto label_2ad618;
        case 0x2ad620u: goto label_2ad620;
        case 0x2ad628u: goto label_2ad628;
        case 0x2ad658u: goto label_2ad658;
        case 0x2ad674u: goto label_2ad674;
        case 0x2ad680u: goto label_2ad680;
        case 0x2ad698u: goto label_2ad698;
        case 0x2ad6a0u: goto label_2ad6a0;
        case 0x2ad720u: goto label_2ad720;
        case 0x2ad728u: goto label_2ad728;
        case 0x2ad730u: goto label_2ad730;
        case 0x2ad740u: goto label_2ad740;
        case 0x2ad778u: goto label_2ad778;
        case 0x2ad7a4u: goto label_2ad7a4;
        case 0x2ad7acu: goto label_2ad7ac;
        case 0x2ad7d8u: goto label_2ad7d8;
        case 0x2ad804u: goto label_2ad804;
        case 0x2ad848u: goto label_2ad848;
        case 0x2ad850u: goto label_2ad850;
        case 0x2ad858u: goto label_2ad858;
        case 0x2ad8acu: goto label_2ad8ac;
        case 0x2ad8c8u: goto label_2ad8c8;
        case 0x2ad8dcu: goto label_2ad8dc;
        case 0x2ad8fcu: goto label_2ad8fc;
        case 0x2ad91cu: goto label_2ad91c;
        case 0x2ad950u: goto label_2ad950;
        case 0x2ad958u: goto label_2ad958;
        case 0x2ad968u: goto label_2ad968;
        case 0x2ad978u: goto label_2ad978;
        case 0x2ad98cu: goto label_2ad98c;
        default: break;
    }

    ctx->pc = 0x2acaf0u;

    // 0x2acaf0: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x2acaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x2acaf4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2acaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2acaf8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2acaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2acafc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2acafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2acb00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2acb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2acb04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2acb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2acb08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2acb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2acb0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2acb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2acb10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2acb10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2acb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2acb18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2acb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2acb1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2acb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2acb20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2acb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2acb24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2acb24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2acb28: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2ACB28u;
    SET_GPR_U32(ctx, 31, 0x2ACB30u);
    ctx->pc = 0x2ACB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB28u;
            // 0x2acb2c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB30u; }
        if (ctx->pc != 0x2ACB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB30u; }
        if (ctx->pc != 0x2ACB30u) { return; }
    }
    ctx->pc = 0x2ACB30u;
label_2acb30:
    // 0x2acb30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2acb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2acb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acb38: 0xafa304b8  sw          $v1, 0x4B8($sp)
    ctx->pc = 0x2acb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 3));
    // 0x2acb3c: 0x92830184  lbu         $v1, 0x184($s4)
    ctx->pc = 0x2acb3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 388)));
    // 0x2acb40: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2ACB40u;
    {
        const bool branch_taken_0x2acb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2acb40) {
            ctx->pc = 0x2ACBB8u;
            goto label_2acbb8;
        }
    }
    ctx->pc = 0x2ACB48u;
    // 0x2acb48: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x2acb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x2acb4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ACB4Cu;
    {
        const bool branch_taken_0x2acb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acb4c) {
            ctx->pc = 0x2ACBB8u;
            goto label_2acbb8;
        }
    }
    ctx->pc = 0x2ACB54u;
    // 0x2acb54: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2acb54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acb58: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2ACB58u;
    SET_GPR_U32(ctx, 31, 0x2ACB60u);
    ctx->pc = 0x2ACB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB58u;
            // 0x2acb5c: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB60u; }
        if (ctx->pc != 0x2ACB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB60u; }
        if (ctx->pc != 0x2ACB60u) { return; }
    }
    ctx->pc = 0x2ACB60u;
label_2acb60:
    // 0x2acb60: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2acb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2acb64: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x2acb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x2acb68: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2acb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2acb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb74: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x2acb74u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2acb78: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2ACB78u;
    SET_GPR_U32(ctx, 31, 0x2ACB80u);
    ctx->pc = 0x2ACB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB78u;
            // 0x2acb7c: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB80u; }
        if (ctx->pc != 0x2ACB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB80u; }
        if (ctx->pc != 0x2ACB80u) { return; }
    }
    ctx->pc = 0x2ACB80u;
label_2acb80:
    // 0x2acb80: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x2acb80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2acb84: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x2acb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x2acb88: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2acb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb90: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2ACB90u;
    SET_GPR_U32(ctx, 31, 0x2ACB98u);
    ctx->pc = 0x2ACB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACB90u;
            // 0x2acb94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB98u; }
        if (ctx->pc != 0x2ACB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACB98u; }
        if (ctx->pc != 0x2ACB98u) { return; }
    }
    ctx->pc = 0x2ACB98u;
label_2acb98:
    // 0x2acb98: 0x8e84017c  lw          $a0, 0x17C($s4)
    ctx->pc = 0x2acb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x2acb9c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2acb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2acba0: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x2acba4: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x2acba8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2acba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbac: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2acbacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbb0: 0xc088004  jal         func_220010
    ctx->pc = 0x2ACBB0u;
    SET_GPR_U32(ctx, 31, 0x2ACBB8u);
    ctx->pc = 0x2ACBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBB0u;
            // 0x2acbb4: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBB8u; }
        if (ctx->pc != 0x2ACBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBB8u; }
        if (ctx->pc != 0x2ACBB8u) { return; }
    }
    ctx->pc = 0x2ACBB8u;
label_2acbb8:
    // 0x2acbb8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2ACBB8u;
    SET_GPR_U32(ctx, 31, 0x2ACBC0u);
    ctx->pc = 0x2ACBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBB8u;
            // 0x2acbbc: 0xc68c0180  lwc1        $f12, 0x180($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBC0u; }
        if (ctx->pc != 0x2ACBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBC0u; }
        if (ctx->pc != 0x2ACBC0u) { return; }
    }
    ctx->pc = 0x2ACBC0u;
label_2acbc0:
    // 0x2acbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbcc: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x2ACBCCu;
    SET_GPR_U32(ctx, 31, 0x2ACBD4u);
    ctx->pc = 0x2ACBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBCCu;
            // 0x2acbd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBD4u; }
        if (ctx->pc != 0x2ACBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBD4u; }
        if (ctx->pc != 0x2ACBD4u) { return; }
    }
    ctx->pc = 0x2ACBD4u;
label_2acbd4:
    // 0x2acbd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2acbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2acbd8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2ACBD8u;
    SET_GPR_U32(ctx, 31, 0x2ACBE0u);
    ctx->pc = 0x2ACBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBD8u;
            // 0x2acbdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBE0u; }
        if (ctx->pc != 0x2ACBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACBE0u; }
        if (ctx->pc != 0x2ACBE0u) { return; }
    }
    ctx->pc = 0x2ACBE0u;
label_2acbe0:
    // 0x2acbe0: 0x8e830198  lw          $v1, 0x198($s4)
    ctx->pc = 0x2acbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 408)));
    // 0x2acbe4: 0x10600172  beqz        $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x2ACBE4u;
    {
        const bool branch_taken_0x2acbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBE4u;
            // 0x2acbe8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbe4) {
            ctx->pc = 0x2AD1B0u;
            goto label_2ad1b0;
        }
    }
    ctx->pc = 0x2ACBECu;
    // 0x2acbec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbf4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2acbf8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2ACBF8u;
    SET_GPR_U32(ctx, 31, 0x2ACC00u);
    ctx->pc = 0x2ACBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACBF8u;
            // 0x2acbfc: 0x2408016e  addiu       $t0, $zero, 0x16E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC00u; }
        if (ctx->pc != 0x2ACC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC00u; }
        if (ctx->pc != 0x2ACC00u) { return; }
    }
    ctx->pc = 0x2ACC00u;
label_2acc00:
    // 0x2acc00: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2acc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2acc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc0c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2acc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2acc10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2ACC10u;
    SET_GPR_U32(ctx, 31, 0x2ACC18u);
    ctx->pc = 0x2ACC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC10u;
            // 0x2acc14: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC18u; }
        if (ctx->pc != 0x2ACC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC18u; }
        if (ctx->pc != 0x2ACC18u) { return; }
    }
    ctx->pc = 0x2ACC18u;
label_2acc18:
    // 0x2acc18: 0x8e820198  lw          $v0, 0x198($s4)
    ctx->pc = 0x2acc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 408)));
    // 0x2acc1c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2acc1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acc20: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2ACC20u;
    SET_GPR_U32(ctx, 31, 0x2ACC28u);
    ctx->pc = 0x2ACC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC20u;
            // 0x2acc24: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC28u; }
        if (ctx->pc != 0x2ACC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC28u; }
        if (ctx->pc != 0x2ACC28u) { return; }
    }
    ctx->pc = 0x2ACC28u;
label_2acc28:
    // 0x2acc28: 0x8e840198  lw          $a0, 0x198($s4)
    ctx->pc = 0x2acc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 408)));
    // 0x2acc2c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2acc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2acc30: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2acc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2acc34: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2acc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2acc38: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2acc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc3c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2acc3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc40: 0xc088004  jal         func_220010
    ctx->pc = 0x2ACC40u;
    SET_GPR_U32(ctx, 31, 0x2ACC48u);
    ctx->pc = 0x2ACC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC40u;
            // 0x2acc44: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC48u; }
        if (ctx->pc != 0x2ACC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC48u; }
        if (ctx->pc != 0x2ACC48u) { return; }
    }
    ctx->pc = 0x2ACC48u;
label_2acc48:
    // 0x2acc48: 0x86840170  lh          $a0, 0x170($s4)
    ctx->pc = 0x2acc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x2acc4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2acc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2acc50: 0x148300e4  bne         $a0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2ACC50u;
    {
        const bool branch_taken_0x2acc50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2acc50) {
            ctx->pc = 0x2ACFE4u;
            goto label_2acfe4;
        }
    }
    ctx->pc = 0x2ACC58u;
    // 0x2acc58: 0x8e8301a0  lw          $v1, 0x1A0($s4)
    ctx->pc = 0x2acc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
    // 0x2acc5c: 0x106000e1  beqz        $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2ACC5Cu;
    {
        const bool branch_taken_0x2acc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acc5c) {
            ctx->pc = 0x2ACFE4u;
            goto label_2acfe4;
        }
    }
    ctx->pc = 0x2ACC64u;
    // 0x2acc64: 0x8e8301a4  lw          $v1, 0x1A4($s4)
    ctx->pc = 0x2acc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 420)));
    // 0x2acc68: 0x106000de  beqz        $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x2ACC68u;
    {
        const bool branch_taken_0x2acc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC68u;
            // 0x2acc6c: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc68) {
            ctx->pc = 0x2ACFE4u;
            goto label_2acfe4;
        }
    }
    ctx->pc = 0x2ACC70u;
    // 0x2acc70: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2ACC70u;
    SET_GPR_U32(ctx, 31, 0x2ACC78u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC78u; }
        if (ctx->pc != 0x2ACC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC78u; }
        if (ctx->pc != 0x2ACC78u) { return; }
    }
    ctx->pc = 0x2ACC78u;
label_2acc78:
    // 0x2acc78: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acc7c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2ACC7Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC84u);
    ctx->pc = 0x2ACC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC7Cu;
            // 0x2acc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC84u; }
        if (ctx->pc != 0x2ACC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC84u; }
        if (ctx->pc != 0x2ACC84u) { return; }
    }
    ctx->pc = 0x2ACC84u;
label_2acc84:
    // 0x2acc84: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acc88: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2ACC88u;
    SET_GPR_U32(ctx, 31, 0x2ACC90u);
    ctx->pc = 0x2ACC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC88u;
            // 0x2acc8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC90u; }
        if (ctx->pc != 0x2ACC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC90u; }
        if (ctx->pc != 0x2ACC90u) { return; }
    }
    ctx->pc = 0x2ACC90u;
label_2acc90:
    // 0x2acc90: 0x8e8501a0  lw          $a1, 0x1A0($s4)
    ctx->pc = 0x2acc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
    // 0x2acc94: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2ACC94u;
    SET_GPR_U32(ctx, 31, 0x2ACC9Cu);
    ctx->pc = 0x2ACC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC94u;
            // 0x2acc98: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC9Cu; }
        if (ctx->pc != 0x2ACC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC9Cu; }
        if (ctx->pc != 0x2ACC9Cu) { return; }
    }
    ctx->pc = 0x2ACC9Cu;
label_2acc9c:
    // 0x2acc9c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accac: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2ACCACu;
    SET_GPR_U32(ctx, 31, 0x2ACCB4u);
    ctx->pc = 0x2ACCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCACu;
            // 0x2accb0: 0x2408005e  addiu       $t0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCB4u; }
        if (ctx->pc != 0x2ACCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCB4u; }
        if (ctx->pc != 0x2ACCB4u) { return; }
    }
    ctx->pc = 0x2ACCB4u;
label_2accb4:
    // 0x2accb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2accb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2accb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2accbc:
    // 0x2accbc: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2accbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2accc0: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x2accc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2accc4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2ACCC4u;
    SET_GPR_U32(ctx, 31, 0x2ACCCCu);
    ctx->pc = 0x2ACCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCC4u;
            // 0x2accc8: 0x245201a8  addiu       $s2, $v0, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCCCu; }
        if (ctx->pc != 0x2ACCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCCCu; }
        if (ctx->pc != 0x2ACCCCu) { return; }
    }
    ctx->pc = 0x2ACCCCu;
label_2acccc:
    // 0x2acccc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2accccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2accd0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2accd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2accd4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2accd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2accd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2accd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2accdc: 0x0  nop
    ctx->pc = 0x2accdcu;
    // NOP
    // 0x2acce0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2acce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2acce4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2ACCE4u;
    SET_GPR_U32(ctx, 31, 0x2ACCECu);
    ctx->pc = 0x2ACCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCE4u;
            // 0x2acce8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCECu; }
        if (ctx->pc != 0x2ACCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCECu; }
        if (ctx->pc != 0x2ACCECu) { return; }
    }
    ctx->pc = 0x2ACCECu;
label_2accec:
    // 0x2accec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2accecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accf0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2accf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2accf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2accf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accf8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACCF8u;
    SET_GPR_U32(ctx, 31, 0x2ACD00u);
    ctx->pc = 0x2ACCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCF8u;
            // 0x2accfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD00u; }
        if (ctx->pc != 0x2ACD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD00u; }
        if (ctx->pc != 0x2ACD00u) { return; }
    }
    ctx->pc = 0x2ACD00u;
label_2acd00:
    // 0x2acd00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2acd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd04: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acd08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2acd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd0c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACD0Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD14u);
    ctx->pc = 0x2ACD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD0Cu;
            // 0x2acd10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD14u; }
        if (ctx->pc != 0x2ACD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD14u; }
        if (ctx->pc != 0x2ACD14u) { return; }
    }
    ctx->pc = 0x2ACD14u;
label_2acd14:
    // 0x2acd14: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2acd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acd18: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acd1c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACD1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD24u);
    ctx->pc = 0x2ACD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD1Cu;
            // 0x2acd20: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD24u; }
        if (ctx->pc != 0x2ACD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD24u; }
        if (ctx->pc != 0x2ACD24u) { return; }
    }
    ctx->pc = 0x2ACD24u;
label_2acd24:
    // 0x2acd24: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2acd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acd28: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acd2c: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x2acd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x2acd30: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACD30u;
    SET_GPR_U32(ctx, 31, 0x2ACD38u);
    ctx->pc = 0x2ACD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD30u;
            // 0x2acd34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD38u; }
        if (ctx->pc != 0x2ACD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD38u; }
        if (ctx->pc != 0x2ACD38u) { return; }
    }
    ctx->pc = 0x2ACD38u;
label_2acd38:
    // 0x2acd38: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2acd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd3c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2acd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2acd40: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2acd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2acd44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2acd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acd48: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2ACD48u;
    SET_GPR_U32(ctx, 31, 0x2ACD50u);
    ctx->pc = 0x2ACD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD48u;
            // 0x2acd4c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD50u; }
        if (ctx->pc != 0x2ACD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD50u; }
        if (ctx->pc != 0x2ACD50u) { return; }
    }
    ctx->pc = 0x2ACD50u;
label_2acd50:
    // 0x2acd50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2acd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acd54: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2acd58: 0x2a0200ff  slti        $v0, $s0, 0xFF
    ctx->pc = 0x2acd58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2acd5c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2ACD5Cu;
    {
        const bool branch_taken_0x2acd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD5Cu;
            // 0x2acd60: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd5c) {
            ctx->pc = 0x2ACCBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2accbc;
        }
    }
    ctx->pc = 0x2ACD64u;
    // 0x2acd64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2acd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2acd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd6c:
    // 0x2acd6c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2acd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2acd70: 0xc44c0608  lwc1        $f12, 0x608($v0)
    ctx->pc = 0x2acd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acd74: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2ACD74u;
    SET_GPR_U32(ctx, 31, 0x2ACD7Cu);
    ctx->pc = 0x2ACD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD74u;
            // 0x2acd78: 0x24520608  addiu       $s2, $v0, 0x608 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD7Cu; }
        if (ctx->pc != 0x2ACD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD7Cu; }
        if (ctx->pc != 0x2ACD7Cu) { return; }
    }
    ctx->pc = 0x2ACD7Cu;
label_2acd7c:
    // 0x2acd7c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2acd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2acd80: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2acd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2acd84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2acd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2acd88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2acd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acd8c: 0x0  nop
    ctx->pc = 0x2acd8cu;
    // NOP
    // 0x2acd90: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2acd90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2acd94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2ACD94u;
    SET_GPR_U32(ctx, 31, 0x2ACD9Cu);
    ctx->pc = 0x2ACD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD94u;
            // 0x2acd98: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD9Cu; }
        if (ctx->pc != 0x2ACD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD9Cu; }
        if (ctx->pc != 0x2ACD9Cu) { return; }
    }
    ctx->pc = 0x2ACD9Cu;
label_2acd9c:
    // 0x2acd9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2acd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acda0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acda4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2acda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acda8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACDA8u;
    SET_GPR_U32(ctx, 31, 0x2ACDB0u);
    ctx->pc = 0x2ACDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDA8u;
            // 0x2acdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDB0u; }
        if (ctx->pc != 0x2ACDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDB0u; }
        if (ctx->pc != 0x2ACDB0u) { return; }
    }
    ctx->pc = 0x2ACDB0u;
label_2acdb0:
    // 0x2acdb0: 0x260500ff  addiu       $a1, $s0, 0xFF
    ctx->pc = 0x2acdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    // 0x2acdb4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acdb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdbc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACDBCu;
    SET_GPR_U32(ctx, 31, 0x2ACDC4u);
    ctx->pc = 0x2ACDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDBCu;
            // 0x2acdc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDC4u; }
        if (ctx->pc != 0x2ACDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDC4u; }
        if (ctx->pc != 0x2ACDC4u) { return; }
    }
    ctx->pc = 0x2ACDC4u;
label_2acdc4:
    // 0x2acdc4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2acdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acdc8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acdcc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACDCCu;
    SET_GPR_U32(ctx, 31, 0x2ACDD4u);
    ctx->pc = 0x2ACDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDCCu;
            // 0x2acdd0: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDD4u; }
        if (ctx->pc != 0x2ACDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDD4u; }
        if (ctx->pc != 0x2ACDD4u) { return; }
    }
    ctx->pc = 0x2ACDD4u;
label_2acdd4:
    // 0x2acdd4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2acdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdd8: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x2acdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2acddc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acde0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACDE0u;
    SET_GPR_U32(ctx, 31, 0x2ACDE8u);
    ctx->pc = 0x2ACDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDE0u;
            // 0x2acde4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDE8u; }
        if (ctx->pc != 0x2ACDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDE8u; }
        if (ctx->pc != 0x2ACDE8u) { return; }
    }
    ctx->pc = 0x2ACDE8u;
label_2acde8:
    // 0x2acde8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2acde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acdec: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2acdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2acdf0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2acdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2acdf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acdf8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2ACDF8u;
    SET_GPR_U32(ctx, 31, 0x2ACE00u);
    ctx->pc = 0x2ACDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDF8u;
            // 0x2acdfc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE00u; }
        if (ctx->pc != 0x2ACE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE00u; }
        if (ctx->pc != 0x2ACE00u) { return; }
    }
    ctx->pc = 0x2ACE00u;
label_2ace00:
    // 0x2ace00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ace00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ace04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ace04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2ace08: 0x2a0200ff  slti        $v0, $s0, 0xFF
    ctx->pc = 0x2ace08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2ace0c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2ACE0Cu;
    {
        const bool branch_taken_0x2ace0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE0Cu;
            // 0x2ace10: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace0c) {
            ctx->pc = 0x2ACD6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2acd6c;
        }
    }
    ctx->pc = 0x2ACE14u;
    // 0x2ace14: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2ACE14u;
    SET_GPR_U32(ctx, 31, 0x2ACE1Cu);
    ctx->pc = 0x2ACE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE14u;
            // 0x2ace18: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE1Cu; }
        if (ctx->pc != 0x2ACE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE1Cu; }
        if (ctx->pc != 0x2ACE1Cu) { return; }
    }
    ctx->pc = 0x2ACE1Cu;
label_2ace1c:
    // 0x2ace1c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace20: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2ACE20u;
    SET_GPR_U32(ctx, 31, 0x2ACE28u);
    ctx->pc = 0x2ACE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE20u;
            // 0x2ace24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE28u; }
        if (ctx->pc != 0x2ACE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE28u; }
        if (ctx->pc != 0x2ACE28u) { return; }
    }
    ctx->pc = 0x2ACE28u;
label_2ace28:
    // 0x2ace28: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace2c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE34u);
    ctx->pc = 0x2ACE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE2Cu;
            // 0x2ace30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE34u; }
        if (ctx->pc != 0x2ACE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE34u; }
        if (ctx->pc != 0x2ACE34u) { return; }
    }
    ctx->pc = 0x2ACE34u;
label_2ace34:
    // 0x2ace34: 0x8e8501a0  lw          $a1, 0x1A0($s4)
    ctx->pc = 0x2ace34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
    // 0x2ace38: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2ACE38u;
    SET_GPR_U32(ctx, 31, 0x2ACE40u);
    ctx->pc = 0x2ACE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE38u;
            // 0x2ace3c: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE40u; }
        if (ctx->pc != 0x2ACE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE40u; }
        if (ctx->pc != 0x2ACE40u) { return; }
    }
    ctx->pc = 0x2ACE40u;
label_2ace40:
    // 0x2ace40: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ace40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ace44: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ace48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ace4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace50: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2ACE50u;
    SET_GPR_U32(ctx, 31, 0x2ACE58u);
    ctx->pc = 0x2ACE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE50u;
            // 0x2ace54: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE58u; }
        if (ctx->pc != 0x2ACE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE58u; }
        if (ctx->pc != 0x2ACE58u) { return; }
    }
    ctx->pc = 0x2ACE58u;
label_2ace58:
    // 0x2ace58: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ace5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace60: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACE60u;
    SET_GPR_U32(ctx, 31, 0x2ACE68u);
    ctx->pc = 0x2ACE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE60u;
            // 0x2ace64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE68u; }
        if (ctx->pc != 0x2ACE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE68u; }
        if (ctx->pc != 0x2ACE68u) { return; }
    }
    ctx->pc = 0x2ACE68u;
label_2ace68:
    // 0x2ace68: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace6c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ace6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ace70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ace70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace74: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACE74u;
    SET_GPR_U32(ctx, 31, 0x2ACE7Cu);
    ctx->pc = 0x2ACE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE74u;
            // 0x2ace78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE7Cu; }
        if (ctx->pc != 0x2ACE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE7Cu; }
        if (ctx->pc != 0x2ACE7Cu) { return; }
    }
    ctx->pc = 0x2ACE7Cu;
label_2ace7c:
    // 0x2ace7c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ace7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ace80: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace84: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACE84u;
    SET_GPR_U32(ctx, 31, 0x2ACE8Cu);
    ctx->pc = 0x2ACE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE84u;
            // 0x2ace88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE8Cu; }
        if (ctx->pc != 0x2ACE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACE8Cu; }
        if (ctx->pc != 0x2ACE8Cu) { return; }
    }
    ctx->pc = 0x2ACE8Cu;
label_2ace8c:
    // 0x2ace8c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2ace8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ace90: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2ace90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ace94: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2ace94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ace98: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACE98u;
    SET_GPR_U32(ctx, 31, 0x2ACEA0u);
    ctx->pc = 0x2ACE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE98u;
            // 0x2ace9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEA0u; }
        if (ctx->pc != 0x2ACEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEA0u; }
        if (ctx->pc != 0x2ACEA0u) { return; }
    }
    ctx->pc = 0x2ACEA0u;
label_2acea0:
    // 0x2acea0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2ACEA0u;
    SET_GPR_U32(ctx, 31, 0x2ACEA8u);
    ctx->pc = 0x2ACEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACEA0u;
            // 0x2acea4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEA8u; }
        if (ctx->pc != 0x2ACEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEA8u; }
        if (ctx->pc != 0x2ACEA8u) { return; }
    }
    ctx->pc = 0x2ACEA8u;
label_2acea8:
    // 0x2acea8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2aceac: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2ACEACu;
    SET_GPR_U32(ctx, 31, 0x2ACEB4u);
    ctx->pc = 0x2ACEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACEACu;
            // 0x2aceb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEB4u; }
        if (ctx->pc != 0x2ACEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEB4u; }
        if (ctx->pc != 0x2ACEB4u) { return; }
    }
    ctx->pc = 0x2ACEB4u;
label_2aceb4:
    // 0x2aceb4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2aceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2aceb8: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x2aceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x2acebc: 0x244245f0  addiu       $v0, $v0, 0x45F0
    ctx->pc = 0x2acebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17904));
    // 0x2acec0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2acec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acec4: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2acec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2acec8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2acec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2acecc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2aceccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2aced0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2ACED0u;
    SET_GPR_U32(ctx, 31, 0x2ACED8u);
    ctx->pc = 0x2ACED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACED0u;
            // 0x2aced4: 0xc68c0a68  lwc1        $f12, 0xA68($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACED8u; }
        if (ctx->pc != 0x2ACED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACED8u; }
        if (ctx->pc != 0x2ACED8u) { return; }
    }
    ctx->pc = 0x2ACED8u;
label_2aced8:
    // 0x2aced8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2aced8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2acedc: 0x3c024344  lui         $v0, 0x4344
    ctx->pc = 0x2acedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17220 << 16));
    // 0x2acee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2acee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acee4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2acee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2acee8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2acee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aceec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2aceecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2acef0: 0xe7a002fc  swc1        $f0, 0x2FC($sp)
    ctx->pc = 0x2acef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
    // 0x2acef4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2ACEF4u;
    SET_GPR_U32(ctx, 31, 0x2ACEFCu);
    ctx->pc = 0x2ACEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACEF4u;
            // 0x2acef8: 0xc68c0a6c  lwc1        $f12, 0xA6C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEFCu; }
        if (ctx->pc != 0x2ACEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACEFCu; }
        if (ctx->pc != 0x2ACEFCu) { return; }
    }
    ctx->pc = 0x2ACEFCu;
label_2acefc:
    // 0x2acefc: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2acefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2acf00: 0x3c024344  lui         $v0, 0x4344
    ctx->pc = 0x2acf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17220 << 16));
    // 0x2acf04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2acf04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2acf08: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acf0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2acf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acf10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2acf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2acf14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2acf14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2acf18: 0x27a30498  addiu       $v1, $sp, 0x498
    ctx->pc = 0x2acf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1176));
    // 0x2acf1c: 0xdf828480  ld          $v0, -0x7B80($gp)
    ctx->pc = 0x2acf1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x2acf20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2acf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2acf24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2acf28: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x2acf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x2acf2c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2ACF2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF34u);
    ctx->pc = 0x2ACF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF2Cu;
            // 0x2acf30: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF34u; }
        if (ctx->pc != 0x2ACF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF34u; }
        if (ctx->pc != 0x2ACF34u) { return; }
    }
    ctx->pc = 0x2ACF34u;
label_2acf34:
    // 0x2acf34: 0x8e8501a4  lw          $a1, 0x1A4($s4)
    ctx->pc = 0x2acf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 420)));
    // 0x2acf38: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2ACF38u;
    SET_GPR_U32(ctx, 31, 0x2ACF40u);
    ctx->pc = 0x2ACF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF38u;
            // 0x2acf3c: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF40u; }
        if (ctx->pc != 0x2ACF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF40u; }
        if (ctx->pc != 0x2ACF40u) { return; }
    }
    ctx->pc = 0x2ACF40u;
label_2acf40:
    // 0x2acf40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2acf40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2acf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2acf48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acf4c:
    // 0x2acf4c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2acf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2acf50: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acf54: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x2ACF54u;
    SET_GPR_U32(ctx, 31, 0x2ACF5Cu);
    ctx->pc = 0x2ACF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF54u;
            // 0x2acf58: 0x244502f0  addiu       $a1, $v0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF5Cu; }
        if (ctx->pc != 0x2ACF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF5Cu; }
        if (ctx->pc != 0x2ACF5Cu) { return; }
    }
    ctx->pc = 0x2ACF5Cu;
label_2acf5c:
    // 0x2acf5c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acf60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf64: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACF64u;
    SET_GPR_U32(ctx, 31, 0x2ACF6Cu);
    ctx->pc = 0x2ACF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF64u;
            // 0x2acf68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF6Cu; }
        if (ctx->pc != 0x2ACF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF6Cu; }
        if (ctx->pc != 0x2ACF6Cu) { return; }
    }
    ctx->pc = 0x2ACF6Cu;
label_2acf6c:
    // 0x2acf6c: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2acf70: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf78: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACF78u;
    SET_GPR_U32(ctx, 31, 0x2ACF80u);
    ctx->pc = 0x2ACF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF78u;
            // 0x2acf7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF80u; }
        if (ctx->pc != 0x2ACF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF80u; }
        if (ctx->pc != 0x2ACF80u) { return; }
    }
    ctx->pc = 0x2ACF80u;
label_2acf80:
    // 0x2acf80: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2acf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2acf84: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acf88: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2ACF88u;
    SET_GPR_U32(ctx, 31, 0x2ACF90u);
    ctx->pc = 0x2ACF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF88u;
            // 0x2acf8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF90u; }
        if (ctx->pc != 0x2ACF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF90u; }
        if (ctx->pc != 0x2ACF90u) { return; }
    }
    ctx->pc = 0x2ACF90u;
label_2acf90:
    // 0x2acf90: 0x26050200  addiu       $a1, $s0, 0x200
    ctx->pc = 0x2acf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2acf94: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2acf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2acf98: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2acf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2acf9c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2ACF9Cu;
    SET_GPR_U32(ctx, 31, 0x2ACFA4u);
    ctx->pc = 0x2ACFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACF9Cu;
            // 0x2acfa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFA4u; }
        if (ctx->pc != 0x2ACFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFA4u; }
        if (ctx->pc != 0x2ACFA4u) { return; }
    }
    ctx->pc = 0x2ACFA4u;
label_2acfa4:
    // 0x2acfa4: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x2acfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2acfa8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2acfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2acfac: 0xc4400498  lwc1        $f0, 0x498($v0)
    ctx->pc = 0x2acfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acfb0: 0x24750a68  addiu       $s5, $v1, 0xA68
    ctx->pc = 0x2acfb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x2acfb4: 0xc4610a68  lwc1        $f1, 0xA68($v1)
    ctx->pc = 0x2acfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acfb8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2ACFB8u;
    SET_GPR_U32(ctx, 31, 0x2ACFC0u);
    ctx->pc = 0x2ACFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFB8u;
            // 0x2acfbc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFC0u; }
        if (ctx->pc != 0x2ACFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFC0u; }
        if (ctx->pc != 0x2ACFC0u) { return; }
    }
    ctx->pc = 0x2ACFC0u;
label_2acfc0:
    // 0x2acfc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2acfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2acfc4: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x2acfc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2acfc8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2acfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2acfcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2acfccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2acfd0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2acfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2acfd4: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2ACFD4u;
    {
        const bool branch_taken_0x2acfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFD4u;
            // 0x2acfd8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfd4) {
            ctx->pc = 0x2ACF4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2acf4c;
        }
    }
    ctx->pc = 0x2ACFDCu;
    // 0x2acfdc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2ACFDCu;
    SET_GPR_U32(ctx, 31, 0x2ACFE4u);
    ctx->pc = 0x2ACFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACFDCu;
            // 0x2acfe0: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFE4u; }
        if (ctx->pc != 0x2ACFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACFE4u; }
        if (ctx->pc != 0x2ACFE4u) { return; }
    }
    ctx->pc = 0x2ACFE4u;
label_2acfe4:
    // 0x2acfe4: 0x86840170  lh          $a0, 0x170($s4)
    ctx->pc = 0x2acfe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x2acfe8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2acfec: 0x14830070  bne         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x2ACFECu;
    {
        const bool branch_taken_0x2acfec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2acfec) {
            ctx->pc = 0x2AD1B0u;
            goto label_2ad1b0;
        }
    }
    ctx->pc = 0x2ACFF4u;
    // 0x2acff4: 0x8e8301a0  lw          $v1, 0x1A0($s4)
    ctx->pc = 0x2acff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
    // 0x2acff8: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2ACFF8u;
    {
        const bool branch_taken_0x2acff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acff8) {
            ctx->pc = 0x2AD1B0u;
            goto label_2ad1b0;
        }
    }
    ctx->pc = 0x2AD000u;
    // 0x2ad000: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2AD000u;
    SET_GPR_U32(ctx, 31, 0x2AD008u);
    ctx->pc = 0x2AD004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD000u;
            // 0x2ad004: 0xc68c0a70  lwc1        $f12, 0xA70($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD008u; }
        if (ctx->pc != 0x2AD008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD008u; }
        if (ctx->pc != 0x2AD008u) { return; }
    }
    ctx->pc = 0x2AD008u;
label_2ad008:
    // 0x2ad008: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x2ad008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x2ad00c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x2ad00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x2ad010: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ad010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad014: 0xc68c0a70  lwc1        $f12, 0xA70($s4)
    ctx->pc = 0x2ad014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ad018: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ad018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ad01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad020: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2AD020u;
    SET_GPR_U32(ctx, 31, 0x2AD028u);
    ctx->pc = 0x2AD024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD020u;
            // 0x2ad024: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD028u; }
        if (ctx->pc != 0x2AD028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD028u; }
        if (ctx->pc != 0x2AD028u) { return; }
    }
    ctx->pc = 0x2AD028u;
label_2ad028:
    // 0x2ad028: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2ad028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2ad02c: 0x3c034308  lui         $v1, 0x4308
    ctx->pc = 0x2ad02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17160 << 16));
    // 0x2ad030: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ad030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad034: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad038: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ad03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad040: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ad040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ad044: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2ad044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2ad048: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ad048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ad04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad050: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2AD050u;
    SET_GPR_U32(ctx, 31, 0x2AD058u);
    ctx->pc = 0x2AD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD050u;
            // 0x2ad054: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD058u; }
        if (ctx->pc != 0x2AD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD058u; }
        if (ctx->pc != 0x2AD058u) { return; }
    }
    ctx->pc = 0x2AD058u;
label_2ad058:
    // 0x2ad058: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad05c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AD05Cu;
    SET_GPR_U32(ctx, 31, 0x2AD064u);
    ctx->pc = 0x2AD060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD05Cu;
            // 0x2ad060: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD064u; }
        if (ctx->pc != 0x2AD064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD064u; }
        if (ctx->pc != 0x2AD064u) { return; }
    }
    ctx->pc = 0x2AD064u;
label_2ad064:
    // 0x2ad064: 0x8e8501a0  lw          $a1, 0x1A0($s4)
    ctx->pc = 0x2ad064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
    // 0x2ad068: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AD068u;
    SET_GPR_U32(ctx, 31, 0x2AD070u);
    ctx->pc = 0x2AD06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD068u;
            // 0x2ad06c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD070u; }
        if (ctx->pc != 0x2AD070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD070u; }
        if (ctx->pc != 0x2AD070u) { return; }
    }
    ctx->pc = 0x2AD070u;
label_2ad070:
    // 0x2ad070: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad07c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad080: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AD080u;
    SET_GPR_U32(ctx, 31, 0x2AD088u);
    ctx->pc = 0x2AD084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD080u;
            // 0x2ad084: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD088u; }
        if (ctx->pc != 0x2AD088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD088u; }
        if (ctx->pc != 0x2AD088u) { return; }
    }
    ctx->pc = 0x2AD088u;
label_2ad088:
    // 0x2ad088: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad098: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AD098u;
    SET_GPR_U32(ctx, 31, 0x2AD0A0u);
    ctx->pc = 0x2AD09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD098u;
            // 0x2ad09c: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0A0u; }
        if (ctx->pc != 0x2AD0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0A0u; }
        if (ctx->pc != 0x2AD0A0u) { return; }
    }
    ctx->pc = 0x2AD0A0u;
label_2ad0a0:
    // 0x2ad0a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ad0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ad0a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad0a8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2AD0A8u;
    SET_GPR_U32(ctx, 31, 0x2AD0B0u);
    ctx->pc = 0x2AD0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0A8u;
            // 0x2ad0ac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0B0u; }
        if (ctx->pc != 0x2AD0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0B0u; }
        if (ctx->pc != 0x2AD0B0u) { return; }
    }
    ctx->pc = 0x2AD0B0u;
label_2ad0b0:
    // 0x2ad0b0: 0x3c0243ba  lui         $v0, 0x43BA
    ctx->pc = 0x2ad0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17338 << 16));
    // 0x2ad0b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad0b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ad0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ad0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ad0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad0c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ad0c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad0c4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2AD0C4u;
    SET_GPR_U32(ctx, 31, 0x2AD0CCu);
    ctx->pc = 0x2AD0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0C4u;
            // 0x2ad0c8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0CCu; }
        if (ctx->pc != 0x2AD0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0CCu; }
        if (ctx->pc != 0x2AD0CCu) { return; }
    }
    ctx->pc = 0x2AD0CCu;
label_2ad0cc:
    // 0x2ad0cc: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x2ad0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2ad0d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad0d4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2AD0D4u;
    SET_GPR_U32(ctx, 31, 0x2AD0DCu);
    ctx->pc = 0x2AD0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0D4u;
            // 0x2ad0d8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0DCu; }
        if (ctx->pc != 0x2AD0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0DCu; }
        if (ctx->pc != 0x2AD0DCu) { return; }
    }
    ctx->pc = 0x2AD0DCu;
label_2ad0dc:
    // 0x2ad0dc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad0e0: 0x3c0243ea  lui         $v0, 0x43EA
    ctx->pc = 0x2ad0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17386 << 16));
    // 0x2ad0e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad0e8: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x2ad0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ad0ec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ad0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ad0f0: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2ad0f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2ad0f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad0f8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2ad0f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad0fc: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x2ad0fcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ad100: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ad100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad104: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2AD104u;
    SET_GPR_U32(ctx, 31, 0x2AD10Cu);
    ctx->pc = 0x2AD108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD104u;
            // 0x2ad108: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD10Cu; }
        if (ctx->pc != 0x2AD10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD10Cu; }
        if (ctx->pc != 0x2AD10Cu) { return; }
    }
    ctx->pc = 0x2AD10Cu;
label_2ad10c:
    // 0x2ad10c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ad110: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad114: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ad114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad118: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ad118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad11c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AD11Cu;
    SET_GPR_U32(ctx, 31, 0x2AD124u);
    ctx->pc = 0x2AD120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD11Cu;
            // 0x2ad120: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD124u; }
        if (ctx->pc != 0x2AD124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD124u; }
        if (ctx->pc != 0x2AD124u) { return; }
    }
    ctx->pc = 0x2AD124u;
label_2ad124:
    // 0x2ad124: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ad124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ad128: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad12c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2AD12Cu;
    SET_GPR_U32(ctx, 31, 0x2AD134u);
    ctx->pc = 0x2AD130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD12Cu;
            // 0x2ad130: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD134u; }
        if (ctx->pc != 0x2AD134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD134u; }
        if (ctx->pc != 0x2AD134u) { return; }
    }
    ctx->pc = 0x2AD134u;
label_2ad134:
    // 0x2ad134: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2ad134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2ad138: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad13c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ad13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad140: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ad140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad144: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2AD144u;
    SET_GPR_U32(ctx, 31, 0x2AD14Cu);
    ctx->pc = 0x2AD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD144u;
            // 0x2ad148: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD14Cu; }
        if (ctx->pc != 0x2AD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD14Cu; }
        if (ctx->pc != 0x2AD14Cu) { return; }
    }
    ctx->pc = 0x2AD14Cu;
label_2ad14c:
    // 0x2ad14c: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x2ad14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2ad150: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad154: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2AD154u;
    SET_GPR_U32(ctx, 31, 0x2AD15Cu);
    ctx->pc = 0x2AD158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD154u;
            // 0x2ad158: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD15Cu; }
        if (ctx->pc != 0x2AD15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD15Cu; }
        if (ctx->pc != 0x2AD15Cu) { return; }
    }
    ctx->pc = 0x2AD15Cu;
label_2ad15c:
    // 0x2ad15c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x2ad15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2ad160: 0x3c024412  lui         $v0, 0x4412
    ctx->pc = 0x2ad160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17426 << 16));
    // 0x2ad164: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad168: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x2ad168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ad16c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ad170: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2ad170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2ad174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad178: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2ad178u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad17c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x2ad17cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ad180: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ad180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad184: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2AD184u;
    SET_GPR_U32(ctx, 31, 0x2AD18Cu);
    ctx->pc = 0x2AD188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD184u;
            // 0x2ad188: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD18Cu; }
        if (ctx->pc != 0x2AD18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD18Cu; }
        if (ctx->pc != 0x2AD18Cu) { return; }
    }
    ctx->pc = 0x2AD18Cu;
label_2ad18c:
    // 0x2ad18c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AD18Cu;
    SET_GPR_U32(ctx, 31, 0x2AD194u);
    ctx->pc = 0x2AD190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD18Cu;
            // 0x2ad190: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD194u; }
        if (ctx->pc != 0x2AD194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD194u; }
        if (ctx->pc != 0x2AD194u) { return; }
    }
    ctx->pc = 0x2AD194u;
label_2ad194:
    // 0x2ad194: 0xc6810a70  lwc1        $f1, 0xA70($s4)
    ctx->pc = 0x2ad194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad198: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x2ad19c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2ad19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2ad1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad1a4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2AD1A4u;
    SET_GPR_U32(ctx, 31, 0x2AD1ACu);
    ctx->pc = 0x2AD1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1A4u;
            // 0x2ad1a8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1ACu; }
        if (ctx->pc != 0x2AD1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1ACu; }
        if (ctx->pc != 0x2AD1ACu) { return; }
    }
    ctx->pc = 0x2AD1ACu;
label_2ad1ac:
    // 0x2ad1ac: 0xe6800a70  swc1        $f0, 0xA70($s4)
    ctx->pc = 0x2ad1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2672), bits); }
label_2ad1b0:
    // 0x2ad1b0: 0x8e83019c  lw          $v1, 0x19C($s4)
    ctx->pc = 0x2ad1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad1b4: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2AD1B4u;
    {
        const bool branch_taken_0x2ad1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1b4) {
            ctx->pc = 0x2AD3D0u;
            goto label_2ad3d0;
        }
    }
    ctx->pc = 0x2AD1BCu;
    // 0x2ad1bc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x2ad1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2ad1c0: 0x2405ffe4  addiu       $a1, $zero, -0x1C
    ctx->pc = 0x2ad1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x2ad1c4: 0x2406fff2  addiu       $a2, $zero, -0xE
    ctx->pc = 0x2ad1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x2ad1c8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2ad1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ad1cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD1CCu;
    SET_GPR_U32(ctx, 31, 0x2AD1D4u);
    ctx->pc = 0x2AD1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1CCu;
            // 0x2ad1d0: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1D4u; }
        if (ctx->pc != 0x2AD1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1D4u; }
        if (ctx->pc != 0x2AD1D4u) { return; }
    }
    ctx->pc = 0x2AD1D4u;
label_2ad1d4:
    // 0x2ad1d4: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x2ad1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2ad1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad1e0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2ad1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ad1e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD1E4u;
    SET_GPR_U32(ctx, 31, 0x2AD1ECu);
    ctx->pc = 0x2AD1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1E4u;
            // 0x2ad1e8: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1ECu; }
        if (ctx->pc != 0x2AD1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1ECu; }
        if (ctx->pc != 0x2AD1ECu) { return; }
    }
    ctx->pc = 0x2AD1ECu;
label_2ad1ec:
    // 0x2ad1ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad1f0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2AD1F0u;
    SET_GPR_U32(ctx, 31, 0x2AD1F8u);
    ctx->pc = 0x2AD1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1F0u;
            // 0x2ad1f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1F8u; }
        if (ctx->pc != 0x2AD1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD1F8u; }
        if (ctx->pc != 0x2AD1F8u) { return; }
    }
    ctx->pc = 0x2AD1F8u;
label_2ad1f8:
    // 0x2ad1f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad1fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AD1FCu;
    SET_GPR_U32(ctx, 31, 0x2AD204u);
    ctx->pc = 0x2AD200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD1FCu;
            // 0x2ad200: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD204u; }
        if (ctx->pc != 0x2AD204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD204u; }
        if (ctx->pc != 0x2AD204u) { return; }
    }
    ctx->pc = 0x2AD204u;
label_2ad204:
    // 0x2ad204: 0x8e85019c  lw          $a1, 0x19C($s4)
    ctx->pc = 0x2ad204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad208: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AD208u;
    SET_GPR_U32(ctx, 31, 0x2AD210u);
    ctx->pc = 0x2AD20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD208u;
            // 0x2ad20c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD210u; }
        if (ctx->pc != 0x2AD210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD210u; }
        if (ctx->pc != 0x2AD210u) { return; }
    }
    ctx->pc = 0x2AD210u;
label_2ad210:
    // 0x2ad210: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad21c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad220: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AD220u;
    SET_GPR_U32(ctx, 31, 0x2AD228u);
    ctx->pc = 0x2AD224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD220u;
            // 0x2ad224: 0x2408002e  addiu       $t0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD228u; }
        if (ctx->pc != 0x2AD228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD228u; }
        if (ctx->pc != 0x2AD228u) { return; }
    }
    ctx->pc = 0x2AD228u;
label_2ad228:
    // 0x2ad228: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x2ad228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x2ad22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad238: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD238u;
    SET_GPR_U32(ctx, 31, 0x2AD240u);
    ctx->pc = 0x2AD23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD238u;
            // 0x2ad23c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD240u; }
        if (ctx->pc != 0x2AD240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD240u; }
        if (ctx->pc != 0x2AD240u) { return; }
    }
    ctx->pc = 0x2AD240u;
label_2ad240:
    // 0x2ad240: 0x8fa30310  lw          $v1, 0x310($sp)
    ctx->pc = 0x2ad240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2ad244: 0x27a80334  addiu       $t0, $sp, 0x334
    ctx->pc = 0x2ad244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
    // 0x2ad248: 0x8fa20314  lw          $v0, 0x314($sp)
    ctx->pc = 0x2ad248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x2ad24c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad250: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x2ad250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x2ad254: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x2ad254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2ad258: 0xafa30330  sw          $v1, 0x330($sp)
    ctx->pc = 0x2ad258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 3));
    // 0x2ad25c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2ad25cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2ad260: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x2ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2ad264: 0x8fa70318  lw          $a3, 0x318($sp)
    ctx->pc = 0x2ad264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x2ad268: 0x8fa3031c  lw          $v1, 0x31C($sp)
    ctx->pc = 0x2ad268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
    // 0x2ad26c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ad26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ad270: 0xafa70338  sw          $a3, 0x338($sp)
    ctx->pc = 0x2ad270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 7));
    // 0x2ad274: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x2ad274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
    // 0x2ad278: 0xafa20330  sw          $v0, 0x330($sp)
    ctx->pc = 0x2ad278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 2));
    // 0x2ad27c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ad280: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ad280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ad284: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2AD284u;
    SET_GPR_U32(ctx, 31, 0x2AD28Cu);
    ctx->pc = 0x2AD288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD284u;
            // 0x2ad288: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD28Cu; }
        if (ctx->pc != 0x2AD28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD28Cu; }
        if (ctx->pc != 0x2AD28Cu) { return; }
    }
    ctx->pc = 0x2AD28Cu;
label_2ad28c:
    // 0x2ad28c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ad28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ad290: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad294: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ad294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad298: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ad298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad29c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AD29Cu;
    SET_GPR_U32(ctx, 31, 0x2AD2A4u);
    ctx->pc = 0x2AD2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD29Cu;
            // 0x2ad2a0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2A4u; }
        if (ctx->pc != 0x2AD2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2A4u; }
        if (ctx->pc != 0x2AD2A4u) { return; }
    }
    ctx->pc = 0x2AD2A4u;
label_2ad2a4:
    // 0x2ad2a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad2a8: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x2ad2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2ad2ac: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2AD2ACu;
    SET_GPR_U32(ctx, 31, 0x2AD2B4u);
    ctx->pc = 0x2AD2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2ACu;
            // 0x2ad2b0: 0x27a60320  addiu       $a2, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2B4u; }
        if (ctx->pc != 0x2AD2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2B4u; }
        if (ctx->pc != 0x2AD2B4u) { return; }
    }
    ctx->pc = 0x2AD2B4u;
label_2ad2b4:
    // 0x2ad2b4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AD2B4u;
    SET_GPR_U32(ctx, 31, 0x2AD2BCu);
    ctx->pc = 0x2AD2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2B4u;
            // 0x2ad2b8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2BCu; }
        if (ctx->pc != 0x2AD2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2BCu; }
        if (ctx->pc != 0x2AD2BCu) { return; }
    }
    ctx->pc = 0x2AD2BCu;
label_2ad2bc:
    // 0x2ad2bc: 0x8e820a74  lw          $v0, 0xA74($s4)
    ctx->pc = 0x2ad2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2676)));
    // 0x2ad2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ad2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ad2c4: 0xae820a74  sw          $v0, 0xA74($s4)
    ctx->pc = 0x2ad2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2676), GPR_U32(ctx, 2));
    // 0x2ad2c8: 0x8e820a74  lw          $v0, 0xA74($s4)
    ctx->pc = 0x2ad2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2676)));
    // 0x2ad2cc: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2ad2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2ad2d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD2D0u;
    {
        const bool branch_taken_0x2ad2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2D0u;
            // 0x2ad2d4: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2d0) {
            ctx->pc = 0x2AD2DCu;
            goto label_2ad2dc;
        }
    }
    ctx->pc = 0x2AD2D8u;
    // 0x2ad2d8: 0xae800a74  sw          $zero, 0xA74($s4)
    ctx->pc = 0x2ad2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2676), GPR_U32(ctx, 0));
label_2ad2dc:
    // 0x2ad2dc: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2ad2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2ad2e0: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2ad2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2ad2e4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2ad2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad2e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD2E8u;
    SET_GPR_U32(ctx, 31, 0x2AD2F0u);
    ctx->pc = 0x2AD2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2E8u;
            // 0x2ad2ec: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2F0u; }
        if (ctx->pc != 0x2AD2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2F0u; }
        if (ctx->pc != 0x2AD2F0u) { return; }
    }
    ctx->pc = 0x2AD2F0u;
label_2ad2f0:
    // 0x2ad2f0: 0x8e820a74  lw          $v0, 0xA74($s4)
    ctx->pc = 0x2ad2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2676)));
    // 0x2ad2f4: 0x2841002e  slti        $at, $v0, 0x2E
    ctx->pc = 0x2ad2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2ad2f8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD2F8u;
    {
        const bool branch_taken_0x2ad2f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2F8u;
            // 0x2ad2fc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2f8) {
            ctx->pc = 0x2AD310u;
            goto label_2ad310;
        }
    }
    ctx->pc = 0x2AD300u;
    // 0x2ad300: 0x8fa30344  lw          $v1, 0x344($sp)
    ctx->pc = 0x2ad300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x2ad304: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x2ad304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
    // 0x2ad308: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ad308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad30c: 0xafa20344  sw          $v0, 0x344($sp)
    ctx->pc = 0x2ad30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
label_2ad310:
    // 0x2ad310: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AD310u;
    SET_GPR_U32(ctx, 31, 0x2AD318u);
    ctx->pc = 0x2AD314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD310u;
            // 0x2ad314: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD318u; }
        if (ctx->pc != 0x2AD318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD318u; }
        if (ctx->pc != 0x2AD318u) { return; }
    }
    ctx->pc = 0x2AD318u;
label_2ad318:
    // 0x2ad318: 0x8e85019c  lw          $a1, 0x19C($s4)
    ctx->pc = 0x2ad318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad31c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AD31Cu;
    SET_GPR_U32(ctx, 31, 0x2AD324u);
    ctx->pc = 0x2AD320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD31Cu;
            // 0x2ad320: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD324u; }
        if (ctx->pc != 0x2AD324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD324u; }
        if (ctx->pc != 0x2AD324u) { return; }
    }
    ctx->pc = 0x2AD324u;
label_2ad324:
    // 0x2ad324: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ad324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ad328: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad32c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ad32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad330: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ad330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad334: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AD334u;
    SET_GPR_U32(ctx, 31, 0x2AD33Cu);
    ctx->pc = 0x2AD338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD334u;
            // 0x2ad338: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD33Cu; }
        if (ctx->pc != 0x2AD33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD33Cu; }
        if (ctx->pc != 0x2AD33Cu) { return; }
    }
    ctx->pc = 0x2AD33Cu;
label_2ad33c:
    // 0x2ad33c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ad33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad340: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AD340u;
    {
        const bool branch_taken_0x2ad340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD340u;
            // 0x2ad344: 0x2411004c  addiu       $s1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad340) {
            ctx->pc = 0x2AD3B8u;
            goto label_2ad3b8;
        }
    }
    ctx->pc = 0x2AD348u;
label_2ad348:
    // 0x2ad348: 0x8e830174  lw          $v1, 0x174($s4)
    ctx->pc = 0x2ad348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x2ad34c: 0x8f829ad4  lw          $v0, -0x652C($gp)
    ctx->pc = 0x2ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ad350: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2ad350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad354: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD354u;
    {
        const bool branch_taken_0x2ad354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD354u;
            // 0x2ad358: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad354) {
            ctx->pc = 0x2AD368u;
            goto label_2ad368;
        }
    }
    ctx->pc = 0x2AD35Cu;
    // 0x2ad35c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad360: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD360u;
    {
        const bool branch_taken_0x2ad360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ad360) {
            ctx->pc = 0x2AD37Cu;
            goto label_2ad37c;
        }
    }
    ctx->pc = 0x2AD368u;
label_2ad368:
    // 0x2ad368: 0x4610011  bgez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AD368u;
    {
        const bool branch_taken_0x2ad368 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ad368) {
            ctx->pc = 0x2AD3B0u;
            goto label_2ad3b0;
        }
    }
    ctx->pc = 0x2AD370u;
    // 0x2ad370: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2ad370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2ad374: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AD374u;
    {
        const bool branch_taken_0x2ad374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad374) {
            ctx->pc = 0x2AD3B0u;
            goto label_2ad3b0;
        }
    }
    ctx->pc = 0x2AD37Cu;
label_2ad37c:
    // 0x2ad37c: 0x0  nop
    ctx->pc = 0x2ad37cu;
    // NOP
    // 0x2ad380: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2ad380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ad384: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2ad384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2ad388: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2ad388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad38c: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x2ad38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ad390: 0x2465fff6  addiu       $a1, $v1, -0xA
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x2ad394: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x2ad394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    // 0x2ad398: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD398u;
    SET_GPR_U32(ctx, 31, 0x2AD3A0u);
    ctx->pc = 0x2AD39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD398u;
            // 0x2ad39c: 0x2446fff1  addiu       $a2, $v0, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3A0u; }
        if (ctx->pc != 0x2AD3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3A0u; }
        if (ctx->pc != 0x2AD3A0u) { return; }
    }
    ctx->pc = 0x2AD3A0u;
label_2ad3a0:
    // 0x2ad3a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ad3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ad3a4: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x2ad3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    // 0x2ad3a8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2AD3A8u;
    SET_GPR_U32(ctx, 31, 0x2AD3B0u);
    ctx->pc = 0x2AD3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3A8u;
            // 0x2ad3ac: 0x27a60340  addiu       $a2, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3B0u; }
        if (ctx->pc != 0x2AD3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3B0u; }
        if (ctx->pc != 0x2AD3B0u) { return; }
    }
    ctx->pc = 0x2AD3B0u;
label_2ad3b0:
    // 0x2ad3b0: 0x2631004c  addiu       $s1, $s1, 0x4C
    ctx->pc = 0x2ad3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x2ad3b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ad3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ad3b8:
    // 0x2ad3b8: 0x87829ad0  lh          $v0, -0x6530($gp)
    ctx->pc = 0x2ad3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941392)));
    // 0x2ad3bc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ad3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad3c0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2AD3C0u;
    {
        const bool branch_taken_0x2ad3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3C0u;
            // 0x2ad3c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3c0) {
            ctx->pc = 0x2AD348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad348;
        }
    }
    ctx->pc = 0x2AD3C8u;
    // 0x2ad3c8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AD3C8u;
    SET_GPR_U32(ctx, 31, 0x2AD3D0u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3D0u; }
        if (ctx->pc != 0x2AD3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3D0u; }
        if (ctx->pc != 0x2AD3D0u) { return; }
    }
    ctx->pc = 0x2AD3D0u;
label_2ad3d0:
    // 0x2ad3d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ad3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ad3d4: 0x8e850110  lw          $a1, 0x110($s4)
    ctx->pc = 0x2ad3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2ad3d8: 0x8c30ca50  lw          $s0, -0x35B0($at)
    ctx->pc = 0x2ad3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2ad3dc: 0x8f869ad4  lw          $a2, -0x652C($gp)
    ctx->pc = 0x2ad3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ad3e0: 0x92830b90  lbu         $v1, 0xB90($s4)
    ctx->pc = 0x2ad3e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2960)));
    // 0x2ad3e4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2ad3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ad3e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ad3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ad3ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ad3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ad3f0: 0x8c3eca48  lw          $fp, -0x35B8($at)
    ctx->pc = 0x2ad3f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2ad3f4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ad3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ad3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ad3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ad3fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ad3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad400: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ad400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ad404: 0x8c31ca4c  lw          $s1, -0x35B4($at)
    ctx->pc = 0x2ad404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2ad408: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2AD408u;
    {
        const bool branch_taken_0x2ad408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD408u;
            // 0x2ad40c: 0xc4b021  addu        $s6, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad408) {
            ctx->pc = 0x2AD628u;
            goto label_2ad628;
        }
    }
    ctx->pc = 0x2AD410u;
    // 0x2ad410: 0x87839ad0  lh          $v1, -0x6530($gp)
    ctx->pc = 0x2ad410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941392)));
    // 0x2ad414: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AD414u;
    {
        const bool branch_taken_0x2ad414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD414u;
            // 0x2ad418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad414) {
            ctx->pc = 0x2AD448u;
            goto label_2ad448;
        }
    }
    ctx->pc = 0x2AD41Cu;
label_2ad41c:
    // 0x2ad41c: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD41Cu;
    {
        const bool branch_taken_0x2ad41c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AD420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD41Cu;
            // 0x2ad420: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad41c) {
            ctx->pc = 0x2AD444u;
            goto label_2ad444;
        }
    }
    ctx->pc = 0x2AD424u;
    // 0x2ad424: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ad424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad428: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ad42c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ad42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ad434: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ad434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ad438: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2ad43c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD43Cu;
    {
        const bool branch_taken_0x2ad43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD43Cu;
            // 0x2ad440: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad43c) {
            ctx->pc = 0x2AD454u;
            goto label_2ad454;
        }
    }
    ctx->pc = 0x2AD444u;
label_2ad444:
    // 0x2ad444: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ad448:
    // 0x2ad448: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ad448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad44c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AD44Cu;
    {
        const bool branch_taken_0x2ad44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad44c) {
            ctx->pc = 0x2AD41Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad41c;
        }
    }
    ctx->pc = 0x2AD454u;
label_2ad454:
    // 0x2ad454: 0x0  nop
    ctx->pc = 0x2ad454u;
    // NOP
    // 0x2ad458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad45c: 0x27a504a0  addiu       $a1, $sp, 0x4A0
    ctx->pc = 0x2ad45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x2ad460: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2AD460u;
    SET_GPR_U32(ctx, 31, 0x2AD468u);
    ctx->pc = 0x2AD464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD460u;
            // 0x2ad464: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD468u; }
        if (ctx->pc != 0x2AD468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD468u; }
        if (ctx->pc != 0x2AD468u) { return; }
    }
    ctx->pc = 0x2AD468u;
label_2ad468:
    // 0x2ad468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad46c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AD46Cu;
    SET_GPR_U32(ctx, 31, 0x2AD474u);
    ctx->pc = 0x2AD470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD46Cu;
            // 0x2ad470: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD474u; }
        if (ctx->pc != 0x2AD474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD474u; }
        if (ctx->pc != 0x2AD474u) { return; }
    }
    ctx->pc = 0x2AD474u;
label_2ad474:
    // 0x2ad474: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AD474u;
    SET_GPR_U32(ctx, 31, 0x2AD47Cu);
    ctx->pc = 0x2AD478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD474u;
            // 0x2ad478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD47Cu; }
        if (ctx->pc != 0x2AD47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD47Cu; }
        if (ctx->pc != 0x2AD47Cu) { return; }
    }
    ctx->pc = 0x2AD47Cu;
label_2ad47c:
    // 0x2ad47c: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AD47Cu;
    {
        const bool branch_taken_0x2ad47c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad47c) {
            ctx->pc = 0x2AD4D0u;
            goto label_2ad4d0;
        }
    }
    ctx->pc = 0x2AD484u;
    // 0x2ad484: 0x8ec50038  lw          $a1, 0x38($s6)
    ctx->pc = 0x2ad484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x2ad488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ad488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad48c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD48Cu;
    {
        const bool branch_taken_0x2ad48c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD48Cu;
            // 0x2ad490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad48c) {
            ctx->pc = 0x2AD4A0u;
            goto label_2ad4a0;
        }
    }
    ctx->pc = 0x2AD494u;
    // 0x2ad494: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x2ad494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x2ad498: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x2ad498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x2ad49c: 0x2443001e  addiu       $v1, $v0, 0x1E
    ctx->pc = 0x2ad49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_2ad4a0:
    // 0x2ad4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad4a4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD4A4u;
    {
        const bool branch_taken_0x2ad4a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad4a4) {
            ctx->pc = 0x2AD4C0u;
            goto label_2ad4c0;
        }
    }
    ctx->pc = 0x2AD4ACu;
    // 0x2ad4ac: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x2ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x2ad4b0: 0x8e021e14  lw          $v0, 0x1E14($s0)
    ctx->pc = 0x2ad4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
    // 0x2ad4b4: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x2ad4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x2ad4b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ad4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad4bc: 0x2443ffd0  addiu       $v1, $v0, -0x30
    ctx->pc = 0x2ad4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_2ad4c0:
    // 0x2ad4c0: 0xae031b94  sw          $v1, 0x1B94($s0)
    ctx->pc = 0x2ad4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 3));
    // 0x2ad4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad4c8: 0xae041b98  sw          $a0, 0x1B98($s0)
    ctx->pc = 0x2ad4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 4));
    // 0x2ad4cc: 0xae021c34  sw          $v0, 0x1C34($s0)
    ctx->pc = 0x2ad4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 2));
label_2ad4d0:
    // 0x2ad4d0: 0x8e021b94  lw          $v0, 0x1B94($s0)
    ctx->pc = 0x2ad4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
    // 0x2ad4d4: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x2ad4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x2ad4d8: 0xae021b94  sw          $v0, 0x1B94($s0)
    ctx->pc = 0x2ad4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 2));
    // 0x2ad4dc: 0x8e021b98  lw          $v0, 0x1B98($s0)
    ctx->pc = 0x2ad4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
    // 0x2ad4e0: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x2ad4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x2ad4e4: 0xae021b98  sw          $v0, 0x1B98($s0)
    ctx->pc = 0x2ad4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 2));
    // 0x2ad4e8: 0x8e820198  lw          $v0, 0x198($s4)
    ctx->pc = 0x2ad4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 408)));
    // 0x2ad4ec: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ad4ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad4f0: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2AD4F0u;
    SET_GPR_U32(ctx, 31, 0x2AD4F8u);
    ctx->pc = 0x2AD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4F0u;
            // 0x2ad4f4: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4F8u; }
        if (ctx->pc != 0x2AD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4F8u; }
        if (ctx->pc != 0x2AD4F8u) { return; }
    }
    ctx->pc = 0x2AD4F8u;
label_2ad4f8:
    // 0x2ad4f8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ad4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ad4fc: 0x8e051b94  lw          $a1, 0x1B94($s0)
    ctx->pc = 0x2ad4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
    // 0x2ad500: 0x24424610  addiu       $v0, $v0, 0x4610
    ctx->pc = 0x2ad500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17936));
    // 0x2ad504: 0x8e061b98  lw          $a2, 0x1B98($s0)
    ctx->pc = 0x2ad504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
    // 0x2ad508: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ad508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad50c: 0x27a30350  addiu       $v1, $sp, 0x350
    ctx->pc = 0x2ad50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x2ad510: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2ad510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2ad514: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2ad514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ad518: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x2ad518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2ad51c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad520: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x2ad520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2ad524: 0x24c6fff4  addiu       $a2, $a2, -0xC
    ctx->pc = 0x2ad524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
    // 0x2ad528: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2ad528u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2ad52c: 0x8e021e14  lw          $v0, 0x1E14($s0)
    ctx->pc = 0x2ad52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
    // 0x2ad530: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x2ad530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x2ad534: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD534u;
    SET_GPR_U32(ctx, 31, 0x2AD53Cu);
    ctx->pc = 0x2AD538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD534u;
            // 0x2ad538: 0xafa20354  sw          $v0, 0x354($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD53Cu; }
        if (ctx->pc != 0x2AD53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD53Cu; }
        if (ctx->pc != 0x2AD53Cu) { return; }
    }
    ctx->pc = 0x2AD53Cu;
label_2ad53c:
    // 0x2ad53c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ad53cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad540: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ad540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad544:
    // 0x2ad544: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x2ad544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x2ad548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ad548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad54c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2ad54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ad550: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2ad550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ad554: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD554u;
    SET_GPR_U32(ctx, 31, 0x2AD55Cu);
    ctx->pc = 0x2AD558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD554u;
            // 0x2ad558: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD55Cu; }
        if (ctx->pc != 0x2AD55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD55Cu; }
        if (ctx->pc != 0x2AD55Cu) { return; }
    }
    ctx->pc = 0x2AD55Cu;
label_2ad55c:
    // 0x2ad55c: 0x8fa30360  lw          $v1, 0x360($sp)
    ctx->pc = 0x2ad55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2ad560: 0x27b70368  addiu       $s7, $sp, 0x368
    ctx->pc = 0x2ad560u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
    // 0x2ad564: 0x8fa20364  lw          $v0, 0x364($sp)
    ctx->pc = 0x2ad564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
    // 0x2ad568: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x2ad568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x2ad56c: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x2ad56cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ad570: 0x8fa8036c  lw          $t0, 0x36C($sp)
    ctx->pc = 0x2ad570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
    // 0x2ad574: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2ad574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ad578: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD578u;
    SET_GPR_U32(ctx, 31, 0x2AD580u);
    ctx->pc = 0x2AD57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD578u;
            // 0x2ad57c: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD580u; }
        if (ctx->pc != 0x2AD580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD580u; }
        if (ctx->pc != 0x2AD580u) { return; }
    }
    ctx->pc = 0x2AD580u;
label_2ad580:
    // 0x2ad580: 0x8e84019c  lw          $a0, 0x19C($s4)
    ctx->pc = 0x2ad580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad584: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x2ad584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x2ad588: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x2ad588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x2ad58c: 0x2407002e  addiu       $a3, $zero, 0x2E
    ctx->pc = 0x2ad58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2ad590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ad590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad594: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ad594u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad598: 0xc088004  jal         func_220010
    ctx->pc = 0x2AD598u;
    SET_GPR_U32(ctx, 31, 0x2AD5A0u);
    ctx->pc = 0x2AD59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD598u;
            // 0x2ad59c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5A0u; }
        if (ctx->pc != 0x2AD5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5A0u; }
        if (ctx->pc != 0x2AD5A0u) { return; }
    }
    ctx->pc = 0x2AD5A0u;
label_2ad5a0:
    // 0x2ad5a0: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x2ad5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x2ad5a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ad5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5a8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2ad5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ad5ac: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2ad5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ad5b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD5B0u;
    SET_GPR_U32(ctx, 31, 0x2AD5B8u);
    ctx->pc = 0x2AD5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5B0u;
            // 0x2ad5b4: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5B8u; }
        if (ctx->pc != 0x2AD5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5B8u; }
        if (ctx->pc != 0x2AD5B8u) { return; }
    }
    ctx->pc = 0x2AD5B8u;
label_2ad5b8:
    // 0x2ad5b8: 0x8e84019c  lw          $a0, 0x19C($s4)
    ctx->pc = 0x2ad5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad5bc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2ad5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ad5c0: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x2ad5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2ad5c4: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x2ad5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x2ad5c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad5c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2ad5ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5d0: 0xc088004  jal         func_220010
    ctx->pc = 0x2AD5D0u;
    SET_GPR_U32(ctx, 31, 0x2AD5D8u);
    ctx->pc = 0x2AD5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5D0u;
            // 0x2ad5d4: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5D8u; }
        if (ctx->pc != 0x2AD5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5D8u; }
        if (ctx->pc != 0x2AD5D8u) { return; }
    }
    ctx->pc = 0x2AD5D8u;
label_2ad5d8:
    // 0x2ad5d8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2ad5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2ad5dc: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x2ad5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2ad5e0: 0x24450350  addiu       $a1, $v0, 0x350
    ctx->pc = 0x2ad5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x2ad5e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ad5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ad5e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ad5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ad5ec: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2ad5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ad5f0: 0x2652001e  addiu       $s2, $s2, 0x1E
    ctx->pc = 0x2ad5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 30));
    // 0x2ad5f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2ad5f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ad5f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ad5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ad5fc: 0xafa30360  sw          $v1, 0x360($sp)
    ctx->pc = 0x2ad5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 3));
    // 0x2ad600: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2ad600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ad604: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2AD604u;
    {
        const bool branch_taken_0x2ad604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD604u;
            // 0x2ad608: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad604) {
            ctx->pc = 0x2AD544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD60Cu;
    // 0x2ad60c: 0x8e251b2c  lw          $a1, 0x1B2C($s1)
    ctx->pc = 0x2ad60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6956)));
    // 0x2ad610: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2AD610u;
    SET_GPR_U32(ctx, 31, 0x2AD618u);
    ctx->pc = 0x2AD614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD610u;
            // 0x2ad614: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD618u; }
        if (ctx->pc != 0x2AD618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD618u; }
        if (ctx->pc != 0x2AD618u) { return; }
    }
    ctx->pc = 0x2AD618u;
label_2ad618:
    // 0x2ad618: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AD618u;
    SET_GPR_U32(ctx, 31, 0x2AD620u);
    ctx->pc = 0x2AD61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD618u;
            // 0x2ad61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD620u; }
        if (ctx->pc != 0x2AD620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD620u; }
        if (ctx->pc != 0x2AD620u) { return; }
    }
    ctx->pc = 0x2AD620u;
label_2ad620:
    // 0x2ad620: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AD620u;
    SET_GPR_U32(ctx, 31, 0x2AD628u);
    ctx->pc = 0x2AD624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD620u;
            // 0x2ad624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD628u; }
        if (ctx->pc != 0x2AD628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD628u; }
        if (ctx->pc != 0x2AD628u) { return; }
    }
    ctx->pc = 0x2AD628u;
label_2ad628:
    // 0x2ad628: 0x92830b91  lbu         $v1, 0xB91($s4)
    ctx->pc = 0x2ad628u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2961)));
    // 0x2ad62c: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x2AD62Cu;
    {
        const bool branch_taken_0x2ad62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad62c) {
            ctx->pc = 0x2AD830u;
            goto label_2ad830;
        }
    }
    ctx->pc = 0x2AD634u;
    // 0x2ad634: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2ad634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ad638: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD638u;
    {
        const bool branch_taken_0x2ad638 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD638u;
            // 0x2ad63c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad638) {
            ctx->pc = 0x2AD650u;
            goto label_2ad650;
        }
    }
    ctx->pc = 0x2AD640u;
    // 0x2ad640: 0xc6c10030  lwc1        $f1, 0x30($s6)
    ctx->pc = 0x2ad640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad644: 0xc6c00034  lwc1        $f0, 0x34($s6)
    ctx->pc = 0x2ad644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad648: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x2ad648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2ad64c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2ad64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2ad650:
    // 0x2ad650: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AD650u;
    SET_GPR_U32(ctx, 31, 0x2AD658u);
    ctx->pc = 0x2AD654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD650u;
            // 0x2ad654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD658u; }
        if (ctx->pc != 0x2AD658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD658u; }
        if (ctx->pc != 0x2AD658u) { return; }
    }
    ctx->pc = 0x2AD658u;
label_2ad658:
    // 0x2ad658: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ad658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ad65c: 0xdf839af8  ld          $v1, -0x6508($gp)
    ctx->pc = 0x2ad65cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294941432)));
    // 0x2ad660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad664: 0x27a604b0  addiu       $a2, $sp, 0x4B0
    ctx->pc = 0x2ad664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x2ad668: 0x46150300  add.s       $f12, $f0, $f21
    ctx->pc = 0x2ad668u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2ad66c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AD66Cu;
    SET_GPR_U32(ctx, 31, 0x2AD674u);
    ctx->pc = 0x2AD670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD66Cu;
            // 0x2ad670: 0xfcc30000  sd          $v1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD674u; }
        if (ctx->pc != 0x2AD674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD674u; }
        if (ctx->pc != 0x2AD674u) { return; }
    }
    ctx->pc = 0x2AD674u;
label_2ad674:
    // 0x2ad674: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad678: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AD678u;
    SET_GPR_U32(ctx, 31, 0x2AD680u);
    ctx->pc = 0x2AD67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD678u;
            // 0x2ad67c: 0xafa204b0  sw          $v0, 0x4B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD680u; }
        if (ctx->pc != 0x2AD680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD680u; }
        if (ctx->pc != 0x2AD680u) { return; }
    }
    ctx->pc = 0x2AD680u;
label_2ad680:
    // 0x2ad680: 0xafa204b4  sw          $v0, 0x4B4($sp)
    ctx->pc = 0x2ad680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
    // 0x2ad684: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ad684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad688: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad68c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad690: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AD690u;
    {
        const bool branch_taken_0x2ad690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD690u;
            // 0x2ad694: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad690) {
            ctx->pc = 0x2AD6C0u;
            goto label_2ad6c0;
        }
    }
    ctx->pc = 0x2AD698u;
label_2ad698:
    // 0x2ad698: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x2AD698u;
    SET_GPR_U32(ctx, 31, 0x2AD6A0u);
    ctx->pc = 0x2AD69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD698u;
            // 0x2ad69c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (runtime->hasFunction(0x1522C0u)) {
        auto targetFn = runtime->lookupFunction(0x1522C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD6A0u; }
        if (ctx->pc != 0x2AD6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFi_0x1522c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD6A0u; }
        if (ctx->pc != 0x2AD6A0u) { return; }
    }
    ctx->pc = 0x2AD6A0u;
label_2ad6a0:
    // 0x2ad6a0: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2ad6a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad6a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD6A4u;
    {
        const bool branch_taken_0x2ad6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad6a4) {
            ctx->pc = 0x2AD6B0u;
            goto label_2ad6b0;
        }
    }
    ctx->pc = 0x2AD6ACu;
    // 0x2ad6ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ad6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad6b0:
    // 0x2ad6b0: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2ad6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2ad6b4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2ad6b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ad6b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ad6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ad6bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ad6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ad6c0:
    // 0x2ad6c0: 0x8e820a80  lw          $v0, 0xA80($s4)
    ctx->pc = 0x2ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2688)));
    // 0x2ad6c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ad6c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ad6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad6cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2AD6CCu;
    {
        const bool branch_taken_0x2ad6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD6CCu;
            // 0x2ad6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6cc) {
            ctx->pc = 0x2AD698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad698;
        }
    }
    ctx->pc = 0x2AD6D4u;
    // 0x2ad6d4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2ad6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2ad6d8: 0x8fa204b0  lw          $v0, 0x4B0($sp)
    ctx->pc = 0x2ad6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2ad6dc: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x2ad6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x2ad6e0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x2ad6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2ad6e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2ad6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad6e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD6E8u;
    {
        const bool branch_taken_0x2ad6e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad6e8) {
            ctx->pc = 0x2AD6F4u;
            goto label_2ad6f4;
        }
    }
    ctx->pc = 0x2AD6F0u;
    // 0x2ad6f0: 0xafa304b0  sw          $v1, 0x4B0($sp)
    ctx->pc = 0x2ad6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 3));
label_2ad6f4:
    // 0x2ad6f4: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x2ad6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2ad6f8: 0x27b204b4  addiu       $s2, $sp, 0x4B4
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1204));
    // 0x2ad6fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad700: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x2ad700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x2ad704: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2ad704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ad708: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2ad708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad70c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD70Cu;
    {
        const bool branch_taken_0x2ad70c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD70Cu;
            // 0x2ad710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad70c) {
            ctx->pc = 0x2AD718u;
            goto label_2ad718;
        }
    }
    ctx->pc = 0x2AD714u;
    // 0x2ad714: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ad714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2ad718:
    // 0x2ad718: 0xc0876b0  jal         func_21DAC0
    ctx->pc = 0x2AD718u;
    SET_GPR_U32(ctx, 31, 0x2AD720u);
    ctx->pc = 0x2AD71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD718u;
            // 0x2ad71c: 0x27a504b0  addiu       $a1, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD720u; }
        if (ctx->pc != 0x2AD720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD720u; }
        if (ctx->pc != 0x2AD720u) { return; }
    }
    ctx->pc = 0x2AD720u;
label_2ad720:
    // 0x2ad720: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AD720u;
    SET_GPR_U32(ctx, 31, 0x2AD728u);
    ctx->pc = 0x2AD724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD720u;
            // 0x2ad724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD728u; }
        if (ctx->pc != 0x2AD728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD728u; }
        if (ctx->pc != 0x2AD728u) { return; }
    }
    ctx->pc = 0x2AD728u;
label_2ad728:
    // 0x2ad728: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AD728u;
    SET_GPR_U32(ctx, 31, 0x2AD730u);
    ctx->pc = 0x2AD72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD728u;
            // 0x2ad72c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD730u; }
        if (ctx->pc != 0x2AD730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD730u; }
        if (ctx->pc != 0x2AD730u) { return; }
    }
    ctx->pc = 0x2AD730u;
label_2ad730:
    // 0x2ad730: 0x8e82019c  lw          $v0, 0x19C($s4)
    ctx->pc = 0x2ad730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad734: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ad734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad738: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2AD738u;
    SET_GPR_U32(ctx, 31, 0x2AD740u);
    ctx->pc = 0x2AD73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD738u;
            // 0x2ad73c: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD740u; }
        if (ctx->pc != 0x2AD740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD740u; }
        if (ctx->pc != 0x2AD740u) { return; }
    }
    ctx->pc = 0x2AD740u;
label_2ad740:
    // 0x2ad740: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ad740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad744: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2ad744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2ad748: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ad748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ad74c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad750: 0xc7a204b0  lwc1        $f2, 0x4B0($sp)
    ctx->pc = 0x2ad750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad754: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2ad754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2ad758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad75c: 0x0  nop
    ctx->pc = 0x2ad75cu;
    // NOP
    // 0x2ad760: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ad760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ad764: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad768: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x2ad768u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad76c: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x2ad76cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ad770: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2AD770u;
    {
        const bool branch_taken_0x2ad770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD770u;
            // 0x2ad774: 0x46001d00  add.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad770) {
            ctx->pc = 0x2AD81Cu;
            goto label_2ad81c;
        }
    }
    ctx->pc = 0x2AD778u;
label_2ad778:
    // 0x2ad778: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x2ad778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2ad77c: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2ad77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2ad780: 0x84430b94  lh          $v1, 0xB94($v0)
    ctx->pc = 0x2ad780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2964)));
    // 0x2ad784: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2ad784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ad788: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2ad788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad78c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2ad78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ad790: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ad798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ad79c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AD79Cu;
    SET_GPR_U32(ctx, 31, 0x2AD7A4u);
    ctx->pc = 0x2AD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD79Cu;
            // 0x2ad7a0: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7A4u; }
        if (ctx->pc != 0x2AD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7A4u; }
        if (ctx->pc != 0x2AD7A4u) { return; }
    }
    ctx->pc = 0x2AD7A4u;
label_2ad7a4:
    // 0x2ad7a4: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2AD7A4u;
    SET_GPR_U32(ctx, 31, 0x2AD7ACu);
    ctx->pc = 0x2AD7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD7A4u;
            // 0x2ad7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7ACu; }
        if (ctx->pc != 0x2AD7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7ACu; }
        if (ctx->pc != 0x2AD7ACu) { return; }
    }
    ctx->pc = 0x2AD7ACu;
label_2ad7ac:
    // 0x2ad7ac: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AD7ACu;
    {
        const bool branch_taken_0x2ad7ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad7ac) {
            ctx->pc = 0x2AD7E0u;
            goto label_2ad7e0;
        }
    }
    ctx->pc = 0x2AD7B4u;
    // 0x2ad7b4: 0x8e84019c  lw          $a0, 0x19C($s4)
    ctx->pc = 0x2ad7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad7b8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2ad7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ad7bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad7bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad7c0: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2ad7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2ad7c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2ad7c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2ad7c8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2ad7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7cc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2ad7ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7d0: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AD7D0u;
    SET_GPR_U32(ctx, 31, 0x2AD7D8u);
    ctx->pc = 0x2AD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD7D0u;
            // 0x2ad7d4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7D8u; }
        if (ctx->pc != 0x2AD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD7D8u; }
        if (ctx->pc != 0x2AD7D8u) { return; }
    }
    ctx->pc = 0x2AD7D8u;
label_2ad7d8:
    // 0x2ad7d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AD7D8u;
    {
        const bool branch_taken_0x2ad7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad7d8) {
            ctx->pc = 0x2AD804u;
            goto label_2ad804;
        }
    }
    ctx->pc = 0x2AD7E0u;
label_2ad7e0:
    // 0x2ad7e0: 0x8e84019c  lw          $a0, 0x19C($s4)
    ctx->pc = 0x2ad7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x2ad7e4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2ad7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ad7e8: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2ad7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2ad7ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ad7f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2ad7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ad7f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2ad7f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2ad7f8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad7f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7fc: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2AD7FCu;
    SET_GPR_U32(ctx, 31, 0x2AD804u);
    ctx->pc = 0x2AD800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD7FCu;
            // 0x2ad800: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD804u; }
        if (ctx->pc != 0x2AD804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD804u; }
        if (ctx->pc != 0x2AD804u) { return; }
    }
    ctx->pc = 0x2AD804u;
label_2ad804:
    // 0x2ad804: 0x0  nop
    ctx->pc = 0x2ad804u;
    // NOP
    // 0x2ad808: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2ad808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2ad80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad810: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2ad810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2ad814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ad814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ad818: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2ad818u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2ad81c:
    // 0x2ad81c: 0x0  nop
    ctx->pc = 0x2ad81cu;
    // NOP
    // 0x2ad820: 0x8e830a84  lw          $v1, 0xA84($s4)
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2692)));
    // 0x2ad824: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2ad824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad828: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2AD828u;
    {
        const bool branch_taken_0x2ad828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad828) {
            ctx->pc = 0x2AD778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad778;
        }
    }
    ctx->pc = 0x2AD830u;
label_2ad830:
    // 0x2ad830: 0x92830b92  lbu         $v1, 0xB92($s4)
    ctx->pc = 0x2ad830u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2962)));
    // 0x2ad834: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD834u;
    {
        const bool branch_taken_0x2ad834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad834) {
            ctx->pc = 0x2AD858u;
            goto label_2ad858;
        }
    }
    ctx->pc = 0x2AD83Cu;
    // 0x2ad83c: 0x8fc51b2c  lw          $a1, 0x1B2C($fp)
    ctx->pc = 0x2ad83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6956)));
    // 0x2ad840: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2AD840u;
    SET_GPR_U32(ctx, 31, 0x2AD848u);
    ctx->pc = 0x2AD844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD840u;
            // 0x2ad844: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD848u; }
        if (ctx->pc != 0x2AD848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD848u; }
        if (ctx->pc != 0x2AD848u) { return; }
    }
    ctx->pc = 0x2AD848u;
label_2ad848:
    // 0x2ad848: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AD848u;
    SET_GPR_U32(ctx, 31, 0x2AD850u);
    ctx->pc = 0x2AD84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD848u;
            // 0x2ad84c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD850u; }
        if (ctx->pc != 0x2AD850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD850u; }
        if (ctx->pc != 0x2AD850u) { return; }
    }
    ctx->pc = 0x2AD850u;
label_2ad850:
    // 0x2ad850: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2AD850u;
    SET_GPR_U32(ctx, 31, 0x2AD858u);
    ctx->pc = 0x2AD854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD850u;
            // 0x2ad854: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD858u; }
        if (ctx->pc != 0x2AD858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD858u; }
        if (ctx->pc != 0x2AD858u) { return; }
    }
    ctx->pc = 0x2AD858u;
label_2ad858:
    // 0x2ad858: 0x8e830188  lw          $v1, 0x188($s4)
    ctx->pc = 0x2ad858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x2ad85c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AD85Cu;
    {
        const bool branch_taken_0x2ad85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad85c) {
            ctx->pc = 0x2AD8FCu;
            goto label_2ad8fc;
        }
    }
    ctx->pc = 0x2AD864u;
    // 0x2ad864: 0x9283018d  lbu         $v1, 0x18D($s4)
    ctx->pc = 0x2ad864u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 397)));
    // 0x2ad868: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2AD868u;
    {
        const bool branch_taken_0x2ad868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad868) {
            ctx->pc = 0x2AD8FCu;
            goto label_2ad8fc;
        }
    }
    ctx->pc = 0x2AD870u;
    // 0x2ad870: 0x8ec6002c  lw          $a2, 0x2C($s6)
    ctx->pc = 0x2ad870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x2ad874: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ad874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ad878: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ad878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ad87c: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x2ad87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x2ad880: 0x9285018c  lbu         $a1, 0x18C($s4)
    ctx->pc = 0x2ad880u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x2ad884: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ad884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad888: 0x26840190  addiu       $a0, $s4, 0x190
    ctx->pc = 0x2ad888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x2ad88c: 0x24c2fff1  addiu       $v0, $a2, -0xF
    ctx->pc = 0x2ad88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967281));
    // 0x2ad890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad894: 0x2462ffce  addiu       $v0, $v1, -0x32
    ctx->pc = 0x2ad894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x2ad898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad89c: 0x0  nop
    ctx->pc = 0x2ad89cu;
    // NOP
    // 0x2ad8a0: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x2ad8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2ad8a4: 0xc094514  jal         func_251450
    ctx->pc = 0x2AD8A4u;
    SET_GPR_U32(ctx, 31, 0x2AD8ACu);
    ctx->pc = 0x2AD8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8A4u;
            // 0x2ad8a8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8ACu; }
        if (ctx->pc != 0x2AD8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8ACu; }
        if (ctx->pc != 0x2AD8ACu) { return; }
    }
    ctx->pc = 0x2AD8ACu;
label_2ad8ac:
    // 0x2ad8ac: 0x9285018c  lbu         $a1, 0x18C($s4)
    ctx->pc = 0x2ad8acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x2ad8b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ad8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ad8b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ad8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ad8b8: 0x26840194  addiu       $a0, $s4, 0x194
    ctx->pc = 0x2ad8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 404));
    // 0x2ad8bc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ad8bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad8c0: 0xc094514  jal         func_251450
    ctx->pc = 0x2AD8C0u;
    SET_GPR_U32(ctx, 31, 0x2AD8C8u);
    ctx->pc = 0x2AD8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8C0u;
            // 0x2ad8c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8C8u; }
        if (ctx->pc != 0x2AD8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8C8u; }
        if (ctx->pc != 0x2AD8C8u) { return; }
    }
    ctx->pc = 0x2AD8C8u;
label_2ad8c8:
    // 0x2ad8c8: 0xa280018c  sb          $zero, 0x18C($s4)
    ctx->pc = 0x2ad8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 396), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad8cc: 0x8e820188  lw          $v0, 0x188($s4)
    ctx->pc = 0x2ad8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x2ad8d0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ad8d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad8d4: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2AD8D4u;
    SET_GPR_U32(ctx, 31, 0x2AD8DCu);
    ctx->pc = 0x2AD8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8D4u;
            // 0x2ad8d8: 0x27a404b8  addiu       $a0, $sp, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8DCu; }
        if (ctx->pc != 0x2AD8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8DCu; }
        if (ctx->pc != 0x2AD8DCu) { return; }
    }
    ctx->pc = 0x2AD8DCu;
label_2ad8dc:
    // 0x2ad8dc: 0x8e840188  lw          $a0, 0x188($s4)
    ctx->pc = 0x2ad8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x2ad8e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad8e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ad8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad8e8: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x2ad8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x2ad8ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ad8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ad8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8f4: 0xc088e94  jal         func_223A50
    ctx->pc = 0x2AD8F4u;
    SET_GPR_U32(ctx, 31, 0x2AD8FCu);
    ctx->pc = 0x2AD8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD8F4u;
            // 0x2ad8f8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8FCu; }
        if (ctx->pc != 0x2AD8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD8FCu; }
        if (ctx->pc != 0x2AD8FCu) { return; }
    }
    ctx->pc = 0x2AD8FCu;
label_2ad8fc:
    // 0x2ad8fc: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2ad900: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AD900u;
    {
        const bool branch_taken_0x2ad900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD900u;
            // 0x2ad904: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad900) {
            ctx->pc = 0x2AD98Cu;
            goto label_2ad98c;
        }
    }
    ctx->pc = 0x2AD908u;
    // 0x2ad908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ad908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ad90c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2ad90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2ad910: 0x27a404bc  addiu       $a0, $sp, 0x4BC
    ctx->pc = 0x2ad910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1212));
    // 0x2ad914: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2AD914u;
    SET_GPR_U32(ctx, 31, 0x2AD91Cu);
    ctx->pc = 0x2AD918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD914u;
            // 0x2ad918: 0xafa204bc  sw          $v0, 0x4BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD91Cu; }
        if (ctx->pc != 0x2AD91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD91Cu; }
        if (ctx->pc != 0x2AD91Cu) { return; }
    }
    ctx->pc = 0x2AD91Cu;
label_2ad91c:
    // 0x2ad91c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2ad91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2ad920: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ad920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ad924: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ad924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ad928: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ad928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ad92c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ad92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ad930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad934: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2ad934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2ad938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad93c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ad93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ad940: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ad940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ad944: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ad944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ad948: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x2AD948u;
    SET_GPR_U32(ctx, 31, 0x2AD950u);
    ctx->pc = 0x2AD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD948u;
            // 0x2ad94c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD950u; }
        if (ctx->pc != 0x2AD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD950u; }
        if (ctx->pc != 0x2AD950u) { return; }
    }
    ctx->pc = 0x2AD950u;
label_2ad950:
    // 0x2ad950: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2AD950u;
    SET_GPR_U32(ctx, 31, 0x2AD958u);
    ctx->pc = 0x2AD954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD950u;
            // 0x2ad954: 0x27a40380  addiu       $a0, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD958u; }
        if (ctx->pc != 0x2AD958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD958u; }
        if (ctx->pc != 0x2AD958u) { return; }
    }
    ctx->pc = 0x2AD958u;
label_2ad958:
    // 0x2ad958: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ad958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ad95c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2ad95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2ad960: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2AD960u;
    SET_GPR_U32(ctx, 31, 0x2AD968u);
    ctx->pc = 0x2AD964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD960u;
            // 0x2ad964: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD968u; }
        if (ctx->pc != 0x2AD968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD968u; }
        if (ctx->pc != 0x2AD968u) { return; }
    }
    ctx->pc = 0x2AD968u;
label_2ad968:
    // 0x2ad968: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2ad968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2ad96c: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x2ad96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x2ad970: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2AD970u;
    SET_GPR_U32(ctx, 31, 0x2AD978u);
    ctx->pc = 0x2AD974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD970u;
            // 0x2ad974: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD978u; }
        if (ctx->pc != 0x2AD978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD978u; }
        if (ctx->pc != 0x2AD978u) { return; }
    }
    ctx->pc = 0x2AD978u;
label_2ad978:
    // 0x2ad978: 0x8fa60414  lw          $a2, 0x414($sp)
    ctx->pc = 0x2ad978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1044)));
    // 0x2ad97c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2ad97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2ad980: 0x8fa70418  lw          $a3, 0x418($sp)
    ctx->pc = 0x2ad980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2ad984: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2AD984u;
    SET_GPR_U32(ctx, 31, 0x2AD98Cu);
    ctx->pc = 0x2AD988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD984u;
            // 0x2ad988: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD98Cu; }
        if (ctx->pc != 0x2AD98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD98Cu; }
        if (ctx->pc != 0x2AD98Cu) { return; }
    }
    ctx->pc = 0x2AD98Cu;
label_2ad98c:
    // 0x2ad98c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ad98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad990: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ad990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ad994: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ad994u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad998: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ad998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad99c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ad99cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad9a0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ad9a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad9a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ad9a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad9a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ad9a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad9ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ad9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad9b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ad9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad9b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ad9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad9b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ad9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD9BCu;
            // 0x2ad9c0: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD9C4u;
}
