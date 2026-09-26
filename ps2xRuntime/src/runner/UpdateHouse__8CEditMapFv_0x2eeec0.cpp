#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateHouse__8CEditMapFv
// Address: 0x2eeec0 - 0x2ef0a8
void UpdateHouse__8CEditMapFv_0x2eeec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateHouse__8CEditMapFv_0x2eeec0");
#endif

    switch (ctx->pc) {
        case 0x2eeec0u: goto label_2eeec0;
        case 0x2eeec4u: goto label_2eeec4;
        case 0x2eeec8u: goto label_2eeec8;
        case 0x2eeeccu: goto label_2eeecc;
        case 0x2eeed0u: goto label_2eeed0;
        case 0x2eeed4u: goto label_2eeed4;
        case 0x2eeed8u: goto label_2eeed8;
        case 0x2eeedcu: goto label_2eeedc;
        case 0x2eeee0u: goto label_2eeee0;
        case 0x2eeee4u: goto label_2eeee4;
        case 0x2eeee8u: goto label_2eeee8;
        case 0x2eeeecu: goto label_2eeeec;
        case 0x2eeef0u: goto label_2eeef0;
        case 0x2eeef4u: goto label_2eeef4;
        case 0x2eeef8u: goto label_2eeef8;
        case 0x2eeefcu: goto label_2eeefc;
        case 0x2eef00u: goto label_2eef00;
        case 0x2eef04u: goto label_2eef04;
        case 0x2eef08u: goto label_2eef08;
        case 0x2eef0cu: goto label_2eef0c;
        case 0x2eef10u: goto label_2eef10;
        case 0x2eef14u: goto label_2eef14;
        case 0x2eef18u: goto label_2eef18;
        case 0x2eef1cu: goto label_2eef1c;
        case 0x2eef20u: goto label_2eef20;
        case 0x2eef24u: goto label_2eef24;
        case 0x2eef28u: goto label_2eef28;
        case 0x2eef2cu: goto label_2eef2c;
        case 0x2eef30u: goto label_2eef30;
        case 0x2eef34u: goto label_2eef34;
        case 0x2eef38u: goto label_2eef38;
        case 0x2eef3cu: goto label_2eef3c;
        case 0x2eef40u: goto label_2eef40;
        case 0x2eef44u: goto label_2eef44;
        case 0x2eef48u: goto label_2eef48;
        case 0x2eef4cu: goto label_2eef4c;
        case 0x2eef50u: goto label_2eef50;
        case 0x2eef54u: goto label_2eef54;
        case 0x2eef58u: goto label_2eef58;
        case 0x2eef5cu: goto label_2eef5c;
        case 0x2eef60u: goto label_2eef60;
        case 0x2eef64u: goto label_2eef64;
        case 0x2eef68u: goto label_2eef68;
        case 0x2eef6cu: goto label_2eef6c;
        case 0x2eef70u: goto label_2eef70;
        case 0x2eef74u: goto label_2eef74;
        case 0x2eef78u: goto label_2eef78;
        case 0x2eef7cu: goto label_2eef7c;
        case 0x2eef80u: goto label_2eef80;
        case 0x2eef84u: goto label_2eef84;
        case 0x2eef88u: goto label_2eef88;
        case 0x2eef8cu: goto label_2eef8c;
        case 0x2eef90u: goto label_2eef90;
        case 0x2eef94u: goto label_2eef94;
        case 0x2eef98u: goto label_2eef98;
        case 0x2eef9cu: goto label_2eef9c;
        case 0x2eefa0u: goto label_2eefa0;
        case 0x2eefa4u: goto label_2eefa4;
        case 0x2eefa8u: goto label_2eefa8;
        case 0x2eefacu: goto label_2eefac;
        case 0x2eefb0u: goto label_2eefb0;
        case 0x2eefb4u: goto label_2eefb4;
        case 0x2eefb8u: goto label_2eefb8;
        case 0x2eefbcu: goto label_2eefbc;
        case 0x2eefc0u: goto label_2eefc0;
        case 0x2eefc4u: goto label_2eefc4;
        case 0x2eefc8u: goto label_2eefc8;
        case 0x2eefccu: goto label_2eefcc;
        case 0x2eefd0u: goto label_2eefd0;
        case 0x2eefd4u: goto label_2eefd4;
        case 0x2eefd8u: goto label_2eefd8;
        case 0x2eefdcu: goto label_2eefdc;
        case 0x2eefe0u: goto label_2eefe0;
        case 0x2eefe4u: goto label_2eefe4;
        case 0x2eefe8u: goto label_2eefe8;
        case 0x2eefecu: goto label_2eefec;
        case 0x2eeff0u: goto label_2eeff0;
        case 0x2eeff4u: goto label_2eeff4;
        case 0x2eeff8u: goto label_2eeff8;
        case 0x2eeffcu: goto label_2eeffc;
        case 0x2ef000u: goto label_2ef000;
        case 0x2ef004u: goto label_2ef004;
        case 0x2ef008u: goto label_2ef008;
        case 0x2ef00cu: goto label_2ef00c;
        case 0x2ef010u: goto label_2ef010;
        case 0x2ef014u: goto label_2ef014;
        case 0x2ef018u: goto label_2ef018;
        case 0x2ef01cu: goto label_2ef01c;
        case 0x2ef020u: goto label_2ef020;
        case 0x2ef024u: goto label_2ef024;
        case 0x2ef028u: goto label_2ef028;
        case 0x2ef02cu: goto label_2ef02c;
        case 0x2ef030u: goto label_2ef030;
        case 0x2ef034u: goto label_2ef034;
        case 0x2ef038u: goto label_2ef038;
        case 0x2ef03cu: goto label_2ef03c;
        case 0x2ef040u: goto label_2ef040;
        case 0x2ef044u: goto label_2ef044;
        case 0x2ef048u: goto label_2ef048;
        case 0x2ef04cu: goto label_2ef04c;
        case 0x2ef050u: goto label_2ef050;
        case 0x2ef054u: goto label_2ef054;
        case 0x2ef058u: goto label_2ef058;
        case 0x2ef05cu: goto label_2ef05c;
        case 0x2ef060u: goto label_2ef060;
        case 0x2ef064u: goto label_2ef064;
        case 0x2ef068u: goto label_2ef068;
        case 0x2ef06cu: goto label_2ef06c;
        case 0x2ef070u: goto label_2ef070;
        case 0x2ef074u: goto label_2ef074;
        case 0x2ef078u: goto label_2ef078;
        case 0x2ef07cu: goto label_2ef07c;
        case 0x2ef080u: goto label_2ef080;
        case 0x2ef084u: goto label_2ef084;
        case 0x2ef088u: goto label_2ef088;
        case 0x2ef08cu: goto label_2ef08c;
        case 0x2ef090u: goto label_2ef090;
        case 0x2ef094u: goto label_2ef094;
        case 0x2ef098u: goto label_2ef098;
        case 0x2ef09cu: goto label_2ef09c;
        case 0x2ef0a0u: goto label_2ef0a0;
        case 0x2ef0a4u: goto label_2ef0a4;
        default: break;
    }

    ctx->pc = 0x2eeec0u;

label_2eeec0:
    // 0x2eeec0: 0x27bdf740  addiu       $sp, $sp, -0x8C0
    ctx->pc = 0x2eeec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965056));
label_2eeec4:
    // 0x2eeec4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2eeec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2eeec8:
    // 0x2eeec8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2eeec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2eeecc:
    // 0x2eeecc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2eeeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2eeed0:
    // 0x2eeed0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2eeed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2eeed4:
    // 0x2eeed4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2eeed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eeed8:
    // 0x2eeed8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2eeed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2eeedc:
    // 0x2eeedc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2eeedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2eeee0:
    // 0x2eeee0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2eeee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2eeee4:
    // 0x2eeee4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eeee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2eeee8:
    // 0x2eeee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eeee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2eeeec:
    // 0x2eeeec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2eeeecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2eeef0:
    // 0x2eeef0: 0x8c950d44  lw          $s5, 0xD44($a0)
    ctx->pc = 0x2eeef0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
label_2eeef4:
    // 0x2eeef4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2eeef8:
    if (ctx->pc == 0x2EEEF8u) {
        ctx->pc = 0x2EEEF8u;
            // 0x2eeef8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEFCu;
        goto label_2eeefc;
    }
    ctx->pc = 0x2EEEF4u;
    {
        const bool branch_taken_0x2eeef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEEF4u;
            // 0x2eeef8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeef4) {
            ctx->pc = 0x2EF068u;
            goto label_2ef068;
        }
    }
    ctx->pc = 0x2EEEFCu;
label_2eeefc:
    // 0x2eeefc: 0xc0bb988  jal         func_2EE620
label_2eef00:
    if (ctx->pc == 0x2EEF00u) {
        ctx->pc = 0x2EEF00u;
            // 0x2eef00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF04u;
        goto label_2eef04;
    }
    ctx->pc = 0x2EEEFCu;
    SET_GPR_U32(ctx, 31, 0x2EEF04u);
    ctx->pc = 0x2EEF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEEFCu;
            // 0x2eef00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF04u; }
        if (ctx->pc != 0x2EEF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF04u; }
        if (ctx->pc != 0x2EEF04u) { return; }
    }
    ctx->pc = 0x2EEF04u;
label_2eef04:
    // 0x2eef04: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_2eef08:
    if (ctx->pc == 0x2EEF08u) {
        ctx->pc = 0x2EEF0Cu;
        goto label_2eef0c;
    }
    ctx->pc = 0x2EEF04u;
    {
        const bool branch_taken_0x2eef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef04) {
            ctx->pc = 0x2EF060u;
            goto label_2ef060;
        }
    }
    ctx->pc = 0x2EEF0Cu;
label_2eef0c:
    // 0x2eef0c: 0x8ea40328  lw          $a0, 0x328($s5)
    ctx->pc = 0x2eef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_2eef10:
    // 0x2eef10: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
label_2eef14:
    if (ctx->pc == 0x2EEF14u) {
        ctx->pc = 0x2EEF18u;
        goto label_2eef18;
    }
    ctx->pc = 0x2EEF10u;
    {
        const bool branch_taken_0x2eef10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef10) {
            ctx->pc = 0x2EF060u;
            goto label_2ef060;
        }
    }
    ctx->pc = 0x2EEF18u;
label_2eef18:
    // 0x2eef18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2eef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2eef1c:
    // 0x2eef1c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2eef1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2eef20:
    // 0x2eef20: 0xc06d5e4  jal         func_1B5790
label_2eef24:
    if (ctx->pc == 0x2EEF24u) {
        ctx->pc = 0x2EEF24u;
            // 0x2eef24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF28u;
        goto label_2eef28;
    }
    ctx->pc = 0x2EEF20u;
    SET_GPR_U32(ctx, 31, 0x2EEF28u);
    ctx->pc = 0x2EEF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF20u;
            // 0x2eef24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5790u;
    if (runtime->hasFunction(0x1B5790u)) {
        auto targetFn = runtime->lookupFunction(0x1B5790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF28u; }
        if (ctx->pc != 0x2EEF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LiveChara__10CEditHouseFv_0x1b5790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF28u; }
        if (ctx->pc != 0x2EEF28u) { return; }
    }
    ctx->pc = 0x2EEF28u;
label_2eef28:
    // 0x2eef28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2eef2c:
    if (ctx->pc == 0x2EEF2Cu) {
        ctx->pc = 0x2EEF2Cu;
            // 0x2eef2c: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->pc = 0x2EEF30u;
        goto label_2eef30;
    }
    ctx->pc = 0x2EEF28u;
    {
        const bool branch_taken_0x2eef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF28u;
            // 0x2eef2c: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef28) {
            ctx->pc = 0x2EEF38u;
            goto label_2eef38;
        }
    }
    ctx->pc = 0x2EEF30u;
label_2eef30:
    // 0x2eef30: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2eef30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eef34:
    // 0x2eef34: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2eef34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2eef38:
    // 0x2eef38: 0xe6b401e0  swc1        $f20, 0x1E0($s5)
    ctx->pc = 0x2eef38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 480), bits); }
label_2eef3c:
    // 0x2eef3c: 0x8eb100b0  lw          $s1, 0xB0($s5)
    ctx->pc = 0x2eef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_2eef40:
    // 0x2eef40: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_2eef44:
    if (ctx->pc == 0x2EEF44u) {
        ctx->pc = 0x2EEF48u;
        goto label_2eef48;
    }
    ctx->pc = 0x2EEF40u;
    {
        const bool branch_taken_0x2eef40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef40) {
            ctx->pc = 0x2EF004u;
            goto label_2ef004;
        }
    }
    ctx->pc = 0x2EEF48u;
label_2eef48:
    // 0x2eef48: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2eef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2eef4c:
    // 0x2eef4c: 0x2442cc20  addiu       $v0, $v0, -0x33E0
    ctx->pc = 0x2eef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954016));
label_2eef50:
    // 0x2eef50: 0x8e340090  lw          $s4, 0x90($s1)
    ctx->pc = 0x2eef50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2eef54:
    // 0x2eef54: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2eef54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2eef58:
    // 0x2eef58: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x2eef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_2eef5c:
    // 0x2eef5c: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x2eef5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2eef60:
    // 0x2eef60: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2eef60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2eef64:
    // 0x2eef64: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2eef64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2eef68:
    // 0x2eef68: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x2eef68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
label_2eef6c:
    // 0x2eef6c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2eef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_2eef70:
    // 0x2eef70: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
label_2eef74:
    if (ctx->pc == 0x2EEF74u) {
        ctx->pc = 0x2EEF74u;
            // 0x2eef74: 0x24120007  addiu       $s2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2EEF78u;
        goto label_2eef78;
    }
    ctx->pc = 0x2EEF70u;
    {
        const bool branch_taken_0x2eef70 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2EEF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF70u;
            // 0x2eef74: 0x24120007  addiu       $s2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef70) {
            ctx->pc = 0x2EEF98u;
            goto label_2eef98;
        }
    }
    ctx->pc = 0x2EEF78u;
label_2eef78:
    // 0x2eef78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2eef78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2eef7c:
    // 0x2eef7c: 0x27a408b0  addiu       $a0, $sp, 0x8B0
    ctx->pc = 0x2eef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
label_2eef80:
    // 0x2eef80: 0xc04a234  jal         func_1288D0
label_2eef84:
    if (ctx->pc == 0x2EEF84u) {
        ctx->pc = 0x2EEF84u;
            // 0x2eef84: 0x24a51508  addiu       $a1, $a1, 0x1508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5384));
        ctx->pc = 0x2EEF88u;
        goto label_2eef88;
    }
    ctx->pc = 0x2EEF80u;
    SET_GPR_U32(ctx, 31, 0x2EEF88u);
    ctx->pc = 0x2EEF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF80u;
            // 0x2eef84: 0x24a51508  addiu       $a1, $a1, 0x1508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF88u; }
        if (ctx->pc != 0x2EEF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF88u; }
        if (ctx->pc != 0x2EEF88u) { return; }
    }
    ctx->pc = 0x2EEF88u;
label_2eef88:
    // 0x2eef88: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2eef88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2eef8c:
    // 0x2eef8c: 0x27a408a0  addiu       $a0, $sp, 0x8A0
    ctx->pc = 0x2eef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_2eef90:
    // 0x2eef90: 0xc04a2da  jal         func_128B68
label_2eef94:
    if (ctx->pc == 0x2EEF94u) {
        ctx->pc = 0x2EEF94u;
            // 0x2eef94: 0x27a508b0  addiu       $a1, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->pc = 0x2EEF98u;
        goto label_2eef98;
    }
    ctx->pc = 0x2EEF90u;
    SET_GPR_U32(ctx, 31, 0x2EEF98u);
    ctx->pc = 0x2EEF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF90u;
            // 0x2eef94: 0x27a508b0  addiu       $a1, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF98u; }
        if (ctx->pc != 0x2EEF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEF98u; }
        if (ctx->pc != 0x2EEF98u) { return; }
    }
    ctx->pc = 0x2EEF98u;
label_2eef98:
    // 0x2eef98: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
label_2eef9c:
    if (ctx->pc == 0x2EEF9Cu) {
        ctx->pc = 0x2EEF9Cu;
            // 0x2eef9c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2EEFA0u;
        goto label_2eefa0;
    }
    ctx->pc = 0x2EEF98u;
    {
        const bool branch_taken_0x2eef98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF98u;
            // 0x2eef9c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef98) {
            ctx->pc = 0x2EEFF8u;
            goto label_2eeff8;
        }
    }
    ctx->pc = 0x2EEFA0u;
label_2eefa0:
    // 0x2eefa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eefa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2eefa4:
    // 0x2eefa4: 0x24a51510  addiu       $a1, $a1, 0x1510
    ctx->pc = 0x2eefa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5392));
label_2eefa8:
    // 0x2eefa8: 0xc04a4dc  jal         func_129370
label_2eefac:
    if (ctx->pc == 0x2EEFACu) {
        ctx->pc = 0x2EEFACu;
            // 0x2eefac: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2EEFB0u;
        goto label_2eefb0;
    }
    ctx->pc = 0x2EEFA8u;
    SET_GPR_U32(ctx, 31, 0x2EEFB0u);
    ctx->pc = 0x2EEFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFA8u;
            // 0x2eefac: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFB0u; }
        if (ctx->pc != 0x2EEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFB0u; }
        if (ctx->pc != 0x2EEFB0u) { return; }
    }
    ctx->pc = 0x2EEFB0u;
label_2eefb0:
    // 0x2eefb0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2eefb4:
    if (ctx->pc == 0x2EEFB4u) {
        ctx->pc = 0x2EEFB8u;
        goto label_2eefb8;
    }
    ctx->pc = 0x2EEFB0u;
    {
        const bool branch_taken_0x2eefb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eefb0) {
            ctx->pc = 0x2EEFF8u;
            goto label_2eeff8;
        }
    }
    ctx->pc = 0x2EEFB8u;
label_2eefb8:
    // 0x2eefb8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2eefb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eefbc:
    // 0x2eefbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eefbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eefc0:
    // 0x2eefc0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2eefc4:
    // 0x2eefc4: 0x320f809  jalr        $t9
label_2eefc8:
    if (ctx->pc == 0x2EEFC8u) {
        ctx->pc = 0x2EEFC8u;
            // 0x2eefc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFCCu;
        goto label_2eefcc;
    }
    ctx->pc = 0x2EEFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EEFCCu);
        ctx->pc = 0x2EEFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFC4u;
            // 0x2eefc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EEFCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFCCu; }
            if (ctx->pc != 0x2EEFCCu) { return; }
        }
        }
    }
    ctx->pc = 0x2EEFCCu;
label_2eefcc:
    // 0x2eefcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eefccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2eefd0:
    // 0x2eefd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2eefd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eefd4:
    // 0x2eefd4: 0xc04a4dc  jal         func_129370
label_2eefd8:
    if (ctx->pc == 0x2EEFD8u) {
        ctx->pc = 0x2EEFD8u;
            // 0x2eefd8: 0x27a508a0  addiu       $a1, $sp, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
        ctx->pc = 0x2EEFDCu;
        goto label_2eefdc;
    }
    ctx->pc = 0x2EEFD4u;
    SET_GPR_U32(ctx, 31, 0x2EEFDCu);
    ctx->pc = 0x2EEFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFD4u;
            // 0x2eefd8: 0x27a508a0  addiu       $a1, $sp, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFDCu; }
        if (ctx->pc != 0x2EEFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFDCu; }
        if (ctx->pc != 0x2EEFDCu) { return; }
    }
    ctx->pc = 0x2EEFDCu;
label_2eefdc:
    // 0x2eefdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2eefe0:
    if (ctx->pc == 0x2EEFE0u) {
        ctx->pc = 0x2EEFE4u;
        goto label_2eefe4;
    }
    ctx->pc = 0x2EEFDCu;
    {
        const bool branch_taken_0x2eefdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eefdc) {
            ctx->pc = 0x2EEFF8u;
            goto label_2eeff8;
        }
    }
    ctx->pc = 0x2EEFE4u;
label_2eefe4:
    // 0x2eefe4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2eefe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2eefe8:
    // 0x2eefe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eefe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eefec:
    // 0x2eefec: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2eefecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2eeff0:
    // 0x2eeff0: 0x320f809  jalr        $t9
label_2eeff4:
    if (ctx->pc == 0x2EEFF4u) {
        ctx->pc = 0x2EEFF4u;
            // 0x2eeff4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFF8u;
        goto label_2eeff8;
    }
    ctx->pc = 0x2EEFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EEFF8u);
        ctx->pc = 0x2EEFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFF0u;
            // 0x2eeff4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EEFF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EEFF8u; }
            if (ctx->pc != 0x2EEFF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2EEFF8u;
label_2eeff8:
    // 0x2eeff8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2eeff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eeffc:
    // 0x2eeffc: 0x1620ffd2  bnez        $s1, . + 4 + (-0x2E << 2)
label_2ef000:
    if (ctx->pc == 0x2EF000u) {
        ctx->pc = 0x2EF004u;
        goto label_2ef004;
    }
    ctx->pc = 0x2EEFFCu;
    {
        const bool branch_taken_0x2eeffc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeffc) {
            ctx->pc = 0x2EEF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eef48;
        }
    }
    ctx->pc = 0x2EF004u;
label_2ef004:
    // 0x2ef004: 0x0  nop
    ctx->pc = 0x2ef004u;
    // NOP
label_2ef008:
    // 0x2ef008: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ef008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ef00c:
    // 0x2ef00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef010:
    // 0x2ef010: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2ef014:
    // 0x2ef014: 0xc0bba8c  jal         func_2EEA30
label_2ef018:
    if (ctx->pc == 0x2EF018u) {
        ctx->pc = 0x2EF018u;
            // 0x2ef018: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2EF01Cu;
        goto label_2ef01c;
    }
    ctx->pc = 0x2EF014u;
    SET_GPR_U32(ctx, 31, 0x2EF01Cu);
    ctx->pc = 0x2EF018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF014u;
            // 0x2ef018: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA30u;
    if (runtime->hasFunction(0x2EEA30u)) {
        auto targetFn = runtime->lookupFunction(0x2EEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF01Cu; }
        if (ctx->pc != 0x2EF01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChildParts__8CEditMapFiPii_0x2eea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF01Cu; }
        if (ctx->pc != 0x2EF01Cu) { return; }
    }
    ctx->pc = 0x2EF01Cu;
label_2ef01c:
    // 0x2ef01c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ef01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef020:
    // 0x2ef020: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2ef020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2ef024:
    // 0x2ef024: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_2ef028:
    if (ctx->pc == 0x2EF028u) {
        ctx->pc = 0x2EF028u;
            // 0x2ef028: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF02Cu;
        goto label_2ef02c;
    }
    ctx->pc = 0x2EF024u;
    {
        const bool branch_taken_0x2ef024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF024u;
            // 0x2ef028: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef024) {
            ctx->pc = 0x2EF060u;
            goto label_2ef060;
        }
    }
    ctx->pc = 0x2EF02Cu;
label_2ef02c:
    // 0x2ef02c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef030:
    // 0x2ef030: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2ef030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2ef034:
    // 0x2ef034: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_2ef038:
    // 0x2ef038: 0xc06c310  jal         func_1B0C40
label_2ef03c:
    if (ctx->pc == 0x2EF03Cu) {
        ctx->pc = 0x2EF03Cu;
            // 0x2ef03c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF040u;
        goto label_2ef040;
    }
    ctx->pc = 0x2EF038u;
    SET_GPR_U32(ctx, 31, 0x2EF040u);
    ctx->pc = 0x2EF03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF038u;
            // 0x2ef03c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF040u; }
        if (ctx->pc != 0x2EF040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF040u; }
        if (ctx->pc != 0x2EF040u) { return; }
    }
    ctx->pc = 0x2EF040u;
label_2ef040:
    // 0x2ef040: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2ef044:
    if (ctx->pc == 0x2EF044u) {
        ctx->pc = 0x2EF048u;
        goto label_2ef048;
    }
    ctx->pc = 0x2EF040u;
    {
        const bool branch_taken_0x2ef040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef040) {
            ctx->pc = 0x2EF04Cu;
            goto label_2ef04c;
        }
    }
    ctx->pc = 0x2EF048u;
label_2ef048:
    // 0x2ef048: 0xe45401e0  swc1        $f20, 0x1E0($v0)
    ctx->pc = 0x2ef048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 480), bits); }
label_2ef04c:
    // 0x2ef04c: 0x0  nop
    ctx->pc = 0x2ef04cu;
    // NOP
label_2ef050:
    // 0x2ef050: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef054:
    // 0x2ef054: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x2ef054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2ef058:
    // 0x2ef058: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2ef05c:
    if (ctx->pc == 0x2EF05Cu) {
        ctx->pc = 0x2EF05Cu;
            // 0x2ef05c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2EF060u;
        goto label_2ef060;
    }
    ctx->pc = 0x2EF058u;
    {
        const bool branch_taken_0x2ef058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF058u;
            // 0x2ef05c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef058) {
            ctx->pc = 0x2EF030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef030;
        }
    }
    ctx->pc = 0x2EF060u;
label_2ef060:
    // 0x2ef060: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ef060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ef064:
    // 0x2ef064: 0x26b50330  addiu       $s5, $s5, 0x330
    ctx->pc = 0x2ef064u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 816));
label_2ef068:
    // 0x2ef068: 0x8ec30d40  lw          $v1, 0xD40($s6)
    ctx->pc = 0x2ef068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3392)));
label_2ef06c:
    // 0x2ef06c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2ef06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2ef070:
    // 0x2ef070: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
label_2ef074:
    if (ctx->pc == 0x2EF074u) {
        ctx->pc = 0x2EF074u;
            // 0x2ef074: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF078u;
        goto label_2ef078;
    }
    ctx->pc = 0x2EF070u;
    {
        const bool branch_taken_0x2ef070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF070u;
            // 0x2ef074: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef070) {
            ctx->pc = 0x2EEEFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eeefc;
        }
    }
    ctx->pc = 0x2EF078u;
label_2ef078:
    // 0x2ef078: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ef078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ef07c:
    // 0x2ef07c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ef07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef080:
    // 0x2ef080: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ef080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ef084:
    // 0x2ef084: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ef084u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ef088:
    // 0x2ef088: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ef088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef08c:
    // 0x2ef08c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ef08cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef090:
    // 0x2ef090: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ef090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef094:
    // 0x2ef094: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ef094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef098:
    // 0x2ef098: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ef098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef09c:
    // 0x2ef09c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ef09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef0a0:
    // 0x2ef0a0: 0x3e00008  jr          $ra
label_2ef0a4:
    if (ctx->pc == 0x2EF0A4u) {
        ctx->pc = 0x2EF0A4u;
            // 0x2ef0a4: 0x27bd08c0  addiu       $sp, $sp, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
        ctx->pc = 0x2EF0A8u;
        goto label_fallthrough_0x2ef0a0;
    }
    ctx->pc = 0x2EF0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0A0u;
            // 0x2ef0a4: 0x27bd08c0  addiu       $sp, $sp, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ef0a0:
    ctx->pc = 0x2EF0A8u;
}
