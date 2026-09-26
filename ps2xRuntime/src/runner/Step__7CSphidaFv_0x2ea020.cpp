#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__7CSphidaFv
// Address: 0x2ea020 - 0x2ea340
void Step__7CSphidaFv_0x2ea020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__7CSphidaFv_0x2ea020");
#endif

    switch (ctx->pc) {
        case 0x2ea020u: goto label_2ea020;
        case 0x2ea024u: goto label_2ea024;
        case 0x2ea028u: goto label_2ea028;
        case 0x2ea02cu: goto label_2ea02c;
        case 0x2ea030u: goto label_2ea030;
        case 0x2ea034u: goto label_2ea034;
        case 0x2ea038u: goto label_2ea038;
        case 0x2ea03cu: goto label_2ea03c;
        case 0x2ea040u: goto label_2ea040;
        case 0x2ea044u: goto label_2ea044;
        case 0x2ea048u: goto label_2ea048;
        case 0x2ea04cu: goto label_2ea04c;
        case 0x2ea050u: goto label_2ea050;
        case 0x2ea054u: goto label_2ea054;
        case 0x2ea058u: goto label_2ea058;
        case 0x2ea05cu: goto label_2ea05c;
        case 0x2ea060u: goto label_2ea060;
        case 0x2ea064u: goto label_2ea064;
        case 0x2ea068u: goto label_2ea068;
        case 0x2ea06cu: goto label_2ea06c;
        case 0x2ea070u: goto label_2ea070;
        case 0x2ea074u: goto label_2ea074;
        case 0x2ea078u: goto label_2ea078;
        case 0x2ea07cu: goto label_2ea07c;
        case 0x2ea080u: goto label_2ea080;
        case 0x2ea084u: goto label_2ea084;
        case 0x2ea088u: goto label_2ea088;
        case 0x2ea08cu: goto label_2ea08c;
        case 0x2ea090u: goto label_2ea090;
        case 0x2ea094u: goto label_2ea094;
        case 0x2ea098u: goto label_2ea098;
        case 0x2ea09cu: goto label_2ea09c;
        case 0x2ea0a0u: goto label_2ea0a0;
        case 0x2ea0a4u: goto label_2ea0a4;
        case 0x2ea0a8u: goto label_2ea0a8;
        case 0x2ea0acu: goto label_2ea0ac;
        case 0x2ea0b0u: goto label_2ea0b0;
        case 0x2ea0b4u: goto label_2ea0b4;
        case 0x2ea0b8u: goto label_2ea0b8;
        case 0x2ea0bcu: goto label_2ea0bc;
        case 0x2ea0c0u: goto label_2ea0c0;
        case 0x2ea0c4u: goto label_2ea0c4;
        case 0x2ea0c8u: goto label_2ea0c8;
        case 0x2ea0ccu: goto label_2ea0cc;
        case 0x2ea0d0u: goto label_2ea0d0;
        case 0x2ea0d4u: goto label_2ea0d4;
        case 0x2ea0d8u: goto label_2ea0d8;
        case 0x2ea0dcu: goto label_2ea0dc;
        case 0x2ea0e0u: goto label_2ea0e0;
        case 0x2ea0e4u: goto label_2ea0e4;
        case 0x2ea0e8u: goto label_2ea0e8;
        case 0x2ea0ecu: goto label_2ea0ec;
        case 0x2ea0f0u: goto label_2ea0f0;
        case 0x2ea0f4u: goto label_2ea0f4;
        case 0x2ea0f8u: goto label_2ea0f8;
        case 0x2ea0fcu: goto label_2ea0fc;
        case 0x2ea100u: goto label_2ea100;
        case 0x2ea104u: goto label_2ea104;
        case 0x2ea108u: goto label_2ea108;
        case 0x2ea10cu: goto label_2ea10c;
        case 0x2ea110u: goto label_2ea110;
        case 0x2ea114u: goto label_2ea114;
        case 0x2ea118u: goto label_2ea118;
        case 0x2ea11cu: goto label_2ea11c;
        case 0x2ea120u: goto label_2ea120;
        case 0x2ea124u: goto label_2ea124;
        case 0x2ea128u: goto label_2ea128;
        case 0x2ea12cu: goto label_2ea12c;
        case 0x2ea130u: goto label_2ea130;
        case 0x2ea134u: goto label_2ea134;
        case 0x2ea138u: goto label_2ea138;
        case 0x2ea13cu: goto label_2ea13c;
        case 0x2ea140u: goto label_2ea140;
        case 0x2ea144u: goto label_2ea144;
        case 0x2ea148u: goto label_2ea148;
        case 0x2ea14cu: goto label_2ea14c;
        case 0x2ea150u: goto label_2ea150;
        case 0x2ea154u: goto label_2ea154;
        case 0x2ea158u: goto label_2ea158;
        case 0x2ea15cu: goto label_2ea15c;
        case 0x2ea160u: goto label_2ea160;
        case 0x2ea164u: goto label_2ea164;
        case 0x2ea168u: goto label_2ea168;
        case 0x2ea16cu: goto label_2ea16c;
        case 0x2ea170u: goto label_2ea170;
        case 0x2ea174u: goto label_2ea174;
        case 0x2ea178u: goto label_2ea178;
        case 0x2ea17cu: goto label_2ea17c;
        case 0x2ea180u: goto label_2ea180;
        case 0x2ea184u: goto label_2ea184;
        case 0x2ea188u: goto label_2ea188;
        case 0x2ea18cu: goto label_2ea18c;
        case 0x2ea190u: goto label_2ea190;
        case 0x2ea194u: goto label_2ea194;
        case 0x2ea198u: goto label_2ea198;
        case 0x2ea19cu: goto label_2ea19c;
        case 0x2ea1a0u: goto label_2ea1a0;
        case 0x2ea1a4u: goto label_2ea1a4;
        case 0x2ea1a8u: goto label_2ea1a8;
        case 0x2ea1acu: goto label_2ea1ac;
        case 0x2ea1b0u: goto label_2ea1b0;
        case 0x2ea1b4u: goto label_2ea1b4;
        case 0x2ea1b8u: goto label_2ea1b8;
        case 0x2ea1bcu: goto label_2ea1bc;
        case 0x2ea1c0u: goto label_2ea1c0;
        case 0x2ea1c4u: goto label_2ea1c4;
        case 0x2ea1c8u: goto label_2ea1c8;
        case 0x2ea1ccu: goto label_2ea1cc;
        case 0x2ea1d0u: goto label_2ea1d0;
        case 0x2ea1d4u: goto label_2ea1d4;
        case 0x2ea1d8u: goto label_2ea1d8;
        case 0x2ea1dcu: goto label_2ea1dc;
        case 0x2ea1e0u: goto label_2ea1e0;
        case 0x2ea1e4u: goto label_2ea1e4;
        case 0x2ea1e8u: goto label_2ea1e8;
        case 0x2ea1ecu: goto label_2ea1ec;
        case 0x2ea1f0u: goto label_2ea1f0;
        case 0x2ea1f4u: goto label_2ea1f4;
        case 0x2ea1f8u: goto label_2ea1f8;
        case 0x2ea1fcu: goto label_2ea1fc;
        case 0x2ea200u: goto label_2ea200;
        case 0x2ea204u: goto label_2ea204;
        case 0x2ea208u: goto label_2ea208;
        case 0x2ea20cu: goto label_2ea20c;
        case 0x2ea210u: goto label_2ea210;
        case 0x2ea214u: goto label_2ea214;
        case 0x2ea218u: goto label_2ea218;
        case 0x2ea21cu: goto label_2ea21c;
        case 0x2ea220u: goto label_2ea220;
        case 0x2ea224u: goto label_2ea224;
        case 0x2ea228u: goto label_2ea228;
        case 0x2ea22cu: goto label_2ea22c;
        case 0x2ea230u: goto label_2ea230;
        case 0x2ea234u: goto label_2ea234;
        case 0x2ea238u: goto label_2ea238;
        case 0x2ea23cu: goto label_2ea23c;
        case 0x2ea240u: goto label_2ea240;
        case 0x2ea244u: goto label_2ea244;
        case 0x2ea248u: goto label_2ea248;
        case 0x2ea24cu: goto label_2ea24c;
        case 0x2ea250u: goto label_2ea250;
        case 0x2ea254u: goto label_2ea254;
        case 0x2ea258u: goto label_2ea258;
        case 0x2ea25cu: goto label_2ea25c;
        case 0x2ea260u: goto label_2ea260;
        case 0x2ea264u: goto label_2ea264;
        case 0x2ea268u: goto label_2ea268;
        case 0x2ea26cu: goto label_2ea26c;
        case 0x2ea270u: goto label_2ea270;
        case 0x2ea274u: goto label_2ea274;
        case 0x2ea278u: goto label_2ea278;
        case 0x2ea27cu: goto label_2ea27c;
        case 0x2ea280u: goto label_2ea280;
        case 0x2ea284u: goto label_2ea284;
        case 0x2ea288u: goto label_2ea288;
        case 0x2ea28cu: goto label_2ea28c;
        case 0x2ea290u: goto label_2ea290;
        case 0x2ea294u: goto label_2ea294;
        case 0x2ea298u: goto label_2ea298;
        case 0x2ea29cu: goto label_2ea29c;
        case 0x2ea2a0u: goto label_2ea2a0;
        case 0x2ea2a4u: goto label_2ea2a4;
        case 0x2ea2a8u: goto label_2ea2a8;
        case 0x2ea2acu: goto label_2ea2ac;
        case 0x2ea2b0u: goto label_2ea2b0;
        case 0x2ea2b4u: goto label_2ea2b4;
        case 0x2ea2b8u: goto label_2ea2b8;
        case 0x2ea2bcu: goto label_2ea2bc;
        case 0x2ea2c0u: goto label_2ea2c0;
        case 0x2ea2c4u: goto label_2ea2c4;
        case 0x2ea2c8u: goto label_2ea2c8;
        case 0x2ea2ccu: goto label_2ea2cc;
        case 0x2ea2d0u: goto label_2ea2d0;
        case 0x2ea2d4u: goto label_2ea2d4;
        case 0x2ea2d8u: goto label_2ea2d8;
        case 0x2ea2dcu: goto label_2ea2dc;
        case 0x2ea2e0u: goto label_2ea2e0;
        case 0x2ea2e4u: goto label_2ea2e4;
        case 0x2ea2e8u: goto label_2ea2e8;
        case 0x2ea2ecu: goto label_2ea2ec;
        case 0x2ea2f0u: goto label_2ea2f0;
        case 0x2ea2f4u: goto label_2ea2f4;
        case 0x2ea2f8u: goto label_2ea2f8;
        case 0x2ea2fcu: goto label_2ea2fc;
        case 0x2ea300u: goto label_2ea300;
        case 0x2ea304u: goto label_2ea304;
        case 0x2ea308u: goto label_2ea308;
        case 0x2ea30cu: goto label_2ea30c;
        case 0x2ea310u: goto label_2ea310;
        case 0x2ea314u: goto label_2ea314;
        case 0x2ea318u: goto label_2ea318;
        case 0x2ea31cu: goto label_2ea31c;
        case 0x2ea320u: goto label_2ea320;
        case 0x2ea324u: goto label_2ea324;
        case 0x2ea328u: goto label_2ea328;
        case 0x2ea32cu: goto label_2ea32c;
        case 0x2ea330u: goto label_2ea330;
        case 0x2ea334u: goto label_2ea334;
        case 0x2ea338u: goto label_2ea338;
        case 0x2ea33cu: goto label_2ea33c;
        default: break;
    }

    ctx->pc = 0x2ea020u;

label_2ea020:
    // 0x2ea020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ea024:
    // 0x2ea024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ea024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ea028:
    // 0x2ea028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ea02c:
    // 0x2ea02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ea02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ea030:
    // 0x2ea030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ea030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ea034:
    // 0x2ea034: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2ea034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2ea038:
    // 0x2ea038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ea03c:
    if (ctx->pc == 0x2EA03Cu) {
        ctx->pc = 0x2EA03Cu;
            // 0x2ea03c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA040u;
        goto label_2ea040;
    }
    ctx->pc = 0x2EA038u;
    {
        const bool branch_taken_0x2ea038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA038u;
            // 0x2ea03c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea038) {
            ctx->pc = 0x2EA048u;
            goto label_2ea048;
        }
    }
    ctx->pc = 0x2EA040u;
label_2ea040:
    // 0x2ea040: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2ea044:
    if (ctx->pc == 0x2EA044u) {
        ctx->pc = 0x2EA044u;
            // 0x2ea044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA048u;
        goto label_2ea048;
    }
    ctx->pc = 0x2EA040u;
    {
        const bool branch_taken_0x2ea040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA040u;
            // 0x2ea044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea040) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA048u;
label_2ea048:
    // 0x2ea048: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x2ea048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea04c:
    // 0x2ea04c: 0xc0a0ed8  jal         func_283B60
label_2ea050:
    if (ctx->pc == 0x2EA050u) {
        ctx->pc = 0x2EA050u;
            // 0x2ea050: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x2EA054u;
        goto label_2ea054;
    }
    ctx->pc = 0x2EA04Cu;
    SET_GPR_U32(ctx, 31, 0x2EA054u);
    ctx->pc = 0x2EA050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA04Cu;
            // 0x2ea050: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA054u; }
        if (ctx->pc != 0x2EA054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA054u; }
        if (ctx->pc != 0x2EA054u) { return; }
    }
    ctx->pc = 0x2EA054u;
label_2ea054:
    // 0x2ea054: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2ea054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea058:
    // 0x2ea058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ea058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ea05c:
    // 0x2ea05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea060:
    // 0x2ea060: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ea060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ea064:
    // 0x2ea064: 0x320f809  jalr        $t9
label_2ea068:
    if (ctx->pc == 0x2EA068u) {
        ctx->pc = 0x2EA068u;
            // 0x2ea068: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2EA06Cu;
        goto label_2ea06c;
    }
    ctx->pc = 0x2EA064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EA06Cu);
        ctx->pc = 0x2EA068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA064u;
            // 0x2ea068: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EA06Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EA06Cu; }
            if (ctx->pc != 0x2EA06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EA06Cu;
label_2ea06c:
    // 0x2ea06c: 0xc0ba3c8  jal         func_2E8F20
label_2ea070:
    if (ctx->pc == 0x2EA070u) {
        ctx->pc = 0x2EA070u;
            // 0x2ea070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA074u;
        goto label_2ea074;
    }
    ctx->pc = 0x2EA06Cu;
    SET_GPR_U32(ctx, 31, 0x2EA074u);
    ctx->pc = 0x2EA070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA06Cu;
            // 0x2ea070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8F20u;
    if (runtime->hasFunction(0x2E8F20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA074u; }
        if (ctx->pc != 0x2EA074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__8CPowGageFv_0x2e8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA074u; }
        if (ctx->pc != 0x2EA074u) { return; }
    }
    ctx->pc = 0x2EA074u;
label_2ea074:
    // 0x2ea074: 0xc05a930  jal         func_16A4C0
label_2ea078:
    if (ctx->pc == 0x2EA078u) {
        ctx->pc = 0x2EA078u;
            // 0x2ea078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA07Cu;
        goto label_2ea07c;
    }
    ctx->pc = 0x2EA074u;
    SET_GPR_U32(ctx, 31, 0x2EA07Cu);
    ctx->pc = 0x2EA078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA074u;
            // 0x2ea078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA07Cu; }
        if (ctx->pc != 0x2EA07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA07Cu; }
        if (ctx->pc != 0x2EA07Cu) { return; }
    }
    ctx->pc = 0x2EA07Cu;
label_2ea07c:
    // 0x2ea07c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ea080:
    if (ctx->pc == 0x2EA080u) {
        ctx->pc = 0x2EA080u;
            // 0x2ea080: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x2EA084u;
        goto label_2ea084;
    }
    ctx->pc = 0x2EA07Cu;
    {
        const bool branch_taken_0x2ea07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA07Cu;
            // 0x2ea080: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea07c) {
            ctx->pc = 0x2EA090u;
            goto label_2ea090;
        }
    }
    ctx->pc = 0x2EA084u;
label_2ea084:
    // 0x2ea084: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea088:
    // 0x2ea088: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2ea08c:
    if (ctx->pc == 0x2EA08Cu) {
        ctx->pc = 0x2EA08Cu;
            // 0x2ea08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA090u;
        goto label_2ea090;
    }
    ctx->pc = 0x2EA088u;
    {
        const bool branch_taken_0x2ea088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA088u;
            // 0x2ea08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea088) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA090u;
label_2ea090:
    // 0x2ea090: 0x8c22f6e8  lw          $v0, -0x918($at)
    ctx->pc = 0x2ea090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_2ea094:
    // 0x2ea094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ea098:
    if (ctx->pc == 0x2EA098u) {
        ctx->pc = 0x2EA09Cu;
        goto label_2ea09c;
    }
    ctx->pc = 0x2EA094u;
    {
        const bool branch_taken_0x2ea094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea094) {
            ctx->pc = 0x2EA0A8u;
            goto label_2ea0a8;
        }
    }
    ctx->pc = 0x2EA09Cu;
label_2ea09c:
    // 0x2ea09c: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea0a0:
    // 0x2ea0a0: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_2ea0a4:
    if (ctx->pc == 0x2EA0A4u) {
        ctx->pc = 0x2EA0A4u;
            // 0x2ea0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0A8u;
        goto label_2ea0a8;
    }
    ctx->pc = 0x2EA0A0u;
    {
        const bool branch_taken_0x2ea0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0A0u;
            // 0x2ea0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0a0) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA0A8u;
label_2ea0a8:
    // 0x2ea0a8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x2ea0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea0ac:
    // 0x2ea0ac: 0x24822f90  addiu       $v0, $a0, 0x2F90
    ctx->pc = 0x2ea0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
label_2ea0b0:
    // 0x2ea0b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ea0b4:
    if (ctx->pc == 0x2EA0B4u) {
        ctx->pc = 0x2EA0B8u;
        goto label_2ea0b8;
    }
    ctx->pc = 0x2EA0B0u;
    {
        const bool branch_taken_0x2ea0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0b0) {
            ctx->pc = 0x2EA0D4u;
            goto label_2ea0d4;
        }
    }
    ctx->pc = 0x2EA0B8u;
label_2ea0b8:
    // 0x2ea0b8: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x2ea0b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_2ea0bc:
    // 0x2ea0bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ea0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ea0c0:
    // 0x2ea0c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ea0c4:
    if (ctx->pc == 0x2EA0C4u) {
        ctx->pc = 0x2EA0C8u;
        goto label_2ea0c8;
    }
    ctx->pc = 0x2EA0C0u;
    {
        const bool branch_taken_0x2ea0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea0c0) {
            ctx->pc = 0x2EA0D4u;
            goto label_2ea0d4;
        }
    }
    ctx->pc = 0x2EA0C8u;
label_2ea0c8:
    // 0x2ea0c8: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea0cc:
    // 0x2ea0cc: 0x10000096  b           . + 4 + (0x96 << 2)
label_2ea0d0:
    if (ctx->pc == 0x2EA0D0u) {
        ctx->pc = 0x2EA0D0u;
            // 0x2ea0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0D4u;
        goto label_2ea0d4;
    }
    ctx->pc = 0x2EA0CCu;
    {
        const bool branch_taken_0x2ea0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0CCu;
            // 0x2ea0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0cc) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA0D4u;
label_2ea0d4:
    // 0x2ea0d4: 0x8c822e88  lw          $v0, 0x2E88($a0)
    ctx->pc = 0x2ea0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11912)));
label_2ea0d8:
    // 0x2ea0d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ea0dc:
    if (ctx->pc == 0x2EA0DCu) {
        ctx->pc = 0x2EA0DCu;
            // 0x2ea0dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2EA0E0u;
        goto label_2ea0e0;
    }
    ctx->pc = 0x2EA0D8u;
    {
        const bool branch_taken_0x2ea0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0D8u;
            // 0x2ea0dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0d8) {
            ctx->pc = 0x2EA0ECu;
            goto label_2ea0ec;
        }
    }
    ctx->pc = 0x2EA0E0u;
label_2ea0e0:
    // 0x2ea0e0: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea0e4:
    // 0x2ea0e4: 0x10000090  b           . + 4 + (0x90 << 2)
label_2ea0e8:
    if (ctx->pc == 0x2EA0E8u) {
        ctx->pc = 0x2EA0E8u;
            // 0x2ea0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0ECu;
        goto label_2ea0ec;
    }
    ctx->pc = 0x2EA0E4u;
    {
        const bool branch_taken_0x2ea0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0E4u;
            // 0x2ea0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0e4) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA0ECu;
label_2ea0ec:
    // 0x2ea0ec: 0xc04c018  jal         func_130060
label_2ea0f0:
    if (ctx->pc == 0x2EA0F0u) {
        ctx->pc = 0x2EA0F0u;
            // 0x2ea0f0: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x2EA0F4u;
        goto label_2ea0f4;
    }
    ctx->pc = 0x2EA0ECu;
    SET_GPR_U32(ctx, 31, 0x2EA0F4u);
    ctx->pc = 0x2EA0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0ECu;
            // 0x2ea0f0: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA0F4u; }
        if (ctx->pc != 0x2EA0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA0F4u; }
        if (ctx->pc != 0x2EA0F4u) { return; }
    }
    ctx->pc = 0x2EA0F4u;
label_2ea0f4:
    // 0x2ea0f4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2ea0f8:
    // 0x2ea0f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ea0fc:
    // 0x2ea0fc: 0x0  nop
    ctx->pc = 0x2ea0fcu;
    // NOP
label_2ea100:
    // 0x2ea100: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ea104:
    // 0x2ea104: 0x0  nop
    ctx->pc = 0x2ea104u;
    // NOP
label_2ea108:
    // 0x2ea108: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_2ea10c:
    if (ctx->pc == 0x2EA10Cu) {
        ctx->pc = 0x2EA110u;
        goto label_2ea110;
    }
    ctx->pc = 0x2EA108u;
    {
        const bool branch_taken_0x2ea108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea108) {
            ctx->pc = 0x2EA208u;
            goto label_2ea208;
        }
    }
    ctx->pc = 0x2EA110u;
label_2ea110:
    // 0x2ea110: 0x8e5900c0  lw          $t9, 0xC0($s2)
    ctx->pc = 0x2ea110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2ea114:
    // 0x2ea114: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x2ea114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_2ea118:
    // 0x2ea118: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ea118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ea11c:
    // 0x2ea11c: 0x320f809  jalr        $t9
label_2ea120:
    if (ctx->pc == 0x2EA120u) {
        ctx->pc = 0x2EA120u;
            // 0x2ea120: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2EA124u;
        goto label_2ea124;
    }
    ctx->pc = 0x2EA11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EA124u);
        ctx->pc = 0x2EA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA11Cu;
            // 0x2ea120: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EA124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EA124u; }
            if (ctx->pc != 0x2EA124u) { return; }
        }
        }
    }
    ctx->pc = 0x2EA124u;
label_2ea124:
    // 0x2ea124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea128:
    // 0x2ea128: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x2ea128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
label_2ea12c:
    // 0x2ea12c: 0x8e5900c0  lw          $t9, 0xC0($s2)
    ctx->pc = 0x2ea12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2ea130:
    // 0x2ea130: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2ea130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2ea134:
    // 0x2ea134: 0x320f809  jalr        $t9
label_2ea138:
    if (ctx->pc == 0x2EA138u) {
        ctx->pc = 0x2EA138u;
            // 0x2ea138: 0x264400c0  addiu       $a0, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->pc = 0x2EA13Cu;
        goto label_2ea13c;
    }
    ctx->pc = 0x2EA134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EA13Cu);
        ctx->pc = 0x2EA138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA134u;
            // 0x2ea138: 0x264400c0  addiu       $a0, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EA13Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EA13Cu; }
            if (ctx->pc != 0x2EA13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EA13Cu;
label_2ea13c:
    // 0x2ea13c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ea13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2ea140:
    // 0x2ea140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea144:
    // 0x2ea144: 0xc0bb538  jal         func_2ED4E0
label_2ea148:
    if (ctx->pc == 0x2EA148u) {
        ctx->pc = 0x2EA148u;
            // 0x2ea148: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x2EA14Cu;
        goto label_2ea14c;
    }
    ctx->pc = 0x2EA144u;
    SET_GPR_U32(ctx, 31, 0x2EA14Cu);
    ctx->pc = 0x2EA148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA144u;
            // 0x2ea148: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA14Cu; }
        if (ctx->pc != 0x2EA14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA14Cu; }
        if (ctx->pc != 0x2EA14Cu) { return; }
    }
    ctx->pc = 0x2EA14Cu;
label_2ea14c:
    // 0x2ea14c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2ea150:
    if (ctx->pc == 0x2EA150u) {
        ctx->pc = 0x2EA154u;
        goto label_2ea154;
    }
    ctx->pc = 0x2EA14Cu;
    {
        const bool branch_taken_0x2ea14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea14c) {
            ctx->pc = 0x2EA20Cu;
            goto label_2ea20c;
        }
    }
    ctx->pc = 0x2EA154u;
label_2ea154:
    // 0x2ea154: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ea154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ea158:
    // 0x2ea158: 0x8c22f6e0  lw          $v0, -0x920($at)
    ctx->pc = 0x2ea158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_2ea15c:
    // 0x2ea15c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2ea160:
    if (ctx->pc == 0x2EA160u) {
        ctx->pc = 0x2EA164u;
        goto label_2ea164;
    }
    ctx->pc = 0x2EA15Cu;
    {
        const bool branch_taken_0x2ea15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea15c) {
            ctx->pc = 0x2EA20Cu;
            goto label_2ea20c;
        }
    }
    ctx->pc = 0x2EA164u;
label_2ea164:
    // 0x2ea164: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2ea164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2ea168:
    // 0x2ea168: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x2ea168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_2ea16c:
    // 0x2ea16c: 0x24845a20  addiu       $a0, $a0, 0x5A20
    ctx->pc = 0x2ea16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
label_2ea170:
    // 0x2ea170: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x2ea170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_2ea174:
    // 0x2ea174: 0xc049c18  jal         func_127060
label_2ea178:
    if (ctx->pc == 0x2EA178u) {
        ctx->pc = 0x2EA178u;
            // 0x2ea178: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x2EA17Cu;
        goto label_2ea17c;
    }
    ctx->pc = 0x2EA174u;
    SET_GPR_U32(ctx, 31, 0x2EA17Cu);
    ctx->pc = 0x2EA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA174u;
            // 0x2ea178: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA17Cu; }
        if (ctx->pc != 0x2EA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA17Cu; }
        if (ctx->pc != 0x2EA17Cu) { return; }
    }
    ctx->pc = 0x2EA17Cu;
label_2ea17c:
    // 0x2ea17c: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x2ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea180:
    // 0x2ea180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea184:
    // 0x2ea184: 0xac432e54  sw          $v1, 0x2E54($v0)
    ctx->pc = 0x2ea184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 3));
label_2ea188:
    // 0x2ea188: 0xc0953f8  jal         func_254FE0
label_2ea18c:
    if (ctx->pc == 0x2EA18Cu) {
        ctx->pc = 0x2EA18Cu;
            // 0x2ea18c: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x2EA190u;
        goto label_2ea190;
    }
    ctx->pc = 0x2EA188u;
    SET_GPR_U32(ctx, 31, 0x2EA190u);
    ctx->pc = 0x2EA18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA188u;
            // 0x2ea18c: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA190u; }
        if (ctx->pc != 0x2EA190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA190u; }
        if (ctx->pc != 0x2EA190u) { return; }
    }
    ctx->pc = 0x2EA190u;
label_2ea190:
    // 0x2ea190: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x2ea190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea194:
    // 0x2ea194: 0xc09542c  jal         func_2550B0
label_2ea198:
    if (ctx->pc == 0x2EA198u) {
        ctx->pc = 0x2EA198u;
            // 0x2ea198: 0x24040bb8  addiu       $a0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->pc = 0x2EA19Cu;
        goto label_2ea19c;
    }
    ctx->pc = 0x2EA194u;
    SET_GPR_U32(ctx, 31, 0x2EA19Cu);
    ctx->pc = 0x2EA198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA194u;
            // 0x2ea198: 0x24040bb8  addiu       $a0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA19Cu; }
        if (ctx->pc != 0x2EA19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA19Cu; }
        if (ctx->pc != 0x2EA19Cu) { return; }
    }
    ctx->pc = 0x2EA19Cu;
label_2ea19c:
    // 0x2ea19c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2ea1a0:
    if (ctx->pc == 0x2EA1A0u) {
        ctx->pc = 0x2EA1A4u;
        goto label_2ea1a4;
    }
    ctx->pc = 0x2EA19Cu;
    {
        const bool branch_taken_0x2ea19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea19c) {
            ctx->pc = 0x2EA20Cu;
            goto label_2ea20c;
        }
    }
    ctx->pc = 0x2EA1A4u;
label_2ea1a4:
    // 0x2ea1a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ea1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ea1a8:
    // 0x2ea1a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ea1ac:
    // 0x2ea1ac: 0xac20f6f8  sw          $zero, -0x908($at)
    ctx->pc = 0x2ea1acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964984), GPR_U32(ctx, 0));
label_2ea1b0:
    // 0x2ea1b0: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x2ea1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_2ea1b4:
    // 0x2ea1b4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ea1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ea1b8:
    // 0x2ea1b8: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x2ea1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_2ea1bc:
    // 0x2ea1bc: 0xac22f6e0  sw          $v0, -0x920($at)
    ctx->pc = 0x2ea1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 2));
label_2ea1c0:
    // 0x2ea1c0: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x2ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea1c4:
    // 0x2ea1c4: 0xc041c5c  jal         func_107170
label_2ea1c8:
    if (ctx->pc == 0x2EA1C8u) {
        ctx->pc = 0x2EA1C8u;
            // 0x2ea1c8: 0xac402e58  sw          $zero, 0x2E58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
        ctx->pc = 0x2EA1CCu;
        goto label_2ea1cc;
    }
    ctx->pc = 0x2EA1C4u;
    SET_GPR_U32(ctx, 31, 0x2EA1CCu);
    ctx->pc = 0x2EA1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1C4u;
            // 0x2ea1c8: 0xac402e58  sw          $zero, 0x2E58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA1CCu; }
        if (ctx->pc != 0x2EA1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA1CCu; }
        if (ctx->pc != 0x2EA1CCu) { return; }
    }
    ctx->pc = 0x2EA1CCu;
label_2ea1cc:
    // 0x2ea1cc: 0x8f828da4  lw          $v0, -0x725C($gp)
    ctx->pc = 0x2ea1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_2ea1d0:
    // 0x2ea1d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ea1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2ea1d4:
    // 0x2ea1d4: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2ea1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_2ea1d8:
    // 0x2ea1d8: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2ea1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2ea1dc:
    // 0x2ea1dc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2ea1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2ea1e0:
    // 0x2ea1e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2ea1e4:
    if (ctx->pc == 0x2EA1E4u) {
        ctx->pc = 0x2EA1E8u;
        goto label_2ea1e8;
    }
    ctx->pc = 0x2EA1E0u;
    {
        const bool branch_taken_0x2ea1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1e0) {
            ctx->pc = 0x2EA1ECu;
            goto label_2ea1ec;
        }
    }
    ctx->pc = 0x2EA1E8u;
label_2ea1e8:
    // 0x2ea1e8: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x2ea1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
label_2ea1ec:
    // 0x2ea1ec: 0xae4001f8  sw          $zero, 0x1F8($s2)
    ctx->pc = 0x2ea1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 0));
label_2ea1f0:
    // 0x2ea1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea1f4:
    // 0x2ea1f4: 0xc05acf0  jal         func_16B3C0
label_2ea1f8:
    if (ctx->pc == 0x2EA1F8u) {
        ctx->pc = 0x2EA1F8u;
            // 0x2ea1f8: 0xae4001f4  sw          $zero, 0x1F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 0));
        ctx->pc = 0x2EA1FCu;
        goto label_2ea1fc;
    }
    ctx->pc = 0x2EA1F4u;
    SET_GPR_U32(ctx, 31, 0x2EA1FCu);
    ctx->pc = 0x2EA1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1F4u;
            // 0x2ea1f8: 0xae4001f4  sw          $zero, 0x1F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B3C0u;
    if (runtime->hasFunction(0x16B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA1FCu; }
        if (ctx->pc != 0x2EA1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveThrowItem__12CActionCharaFv_0x16b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA1FCu; }
        if (ctx->pc != 0x2EA1FCu) { return; }
    }
    ctx->pc = 0x2EA1FCu;
label_2ea1fc:
    // 0x2ea1fc: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea200:
    // 0x2ea200: 0x10000049  b           . + 4 + (0x49 << 2)
label_2ea204:
    if (ctx->pc == 0x2EA204u) {
        ctx->pc = 0x2EA204u;
            // 0x2ea204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2EA208u;
        goto label_2ea208;
    }
    ctx->pc = 0x2EA200u;
    {
        const bool branch_taken_0x2ea200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA200u;
            // 0x2ea204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea200) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA208u;
label_2ea208:
    // 0x2ea208: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea20c:
    // 0x2ea20c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ea20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2ea210:
    // 0x2ea210: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ea210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ea214:
    // 0x2ea214: 0xc052d0c  jal         func_14B430
label_2ea218:
    if (ctx->pc == 0x2EA218u) {
        ctx->pc = 0x2EA218u;
            // 0x2ea218: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2EA21Cu;
        goto label_2ea21c;
    }
    ctx->pc = 0x2EA214u;
    SET_GPR_U32(ctx, 31, 0x2EA21Cu);
    ctx->pc = 0x2EA218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA214u;
            // 0x2ea218: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA21Cu; }
        if (ctx->pc != 0x2EA21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA21Cu; }
        if (ctx->pc != 0x2EA21Cu) { return; }
    }
    ctx->pc = 0x2EA21Cu;
label_2ea21c:
    // 0x2ea21c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_2ea220:
    if (ctx->pc == 0x2EA220u) {
        ctx->pc = 0x2EA220u;
            // 0x2ea220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA224u;
        goto label_2ea224;
    }
    ctx->pc = 0x2EA21Cu;
    {
        const bool branch_taken_0x2ea21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA21Cu;
            // 0x2ea220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea21c) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA224u;
label_2ea224:
    // 0x2ea224: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ea224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ea228:
    // 0x2ea228: 0x8c22f6e0  lw          $v0, -0x920($at)
    ctx->pc = 0x2ea228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_2ea22c:
    // 0x2ea22c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_2ea230:
    if (ctx->pc == 0x2EA230u) {
        ctx->pc = 0x2EA234u;
        goto label_2ea234;
    }
    ctx->pc = 0x2EA22Cu;
    {
        const bool branch_taken_0x2ea22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea22c) {
            ctx->pc = 0x2EA324u;
            goto label_2ea324;
        }
    }
    ctx->pc = 0x2EA234u;
label_2ea234:
    // 0x2ea234: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x2ea234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_2ea238:
    // 0x2ea238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ea23c:
    if (ctx->pc == 0x2EA23Cu) {
        ctx->pc = 0x2EA23Cu;
            // 0x2ea23c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2EA240u;
        goto label_2ea240;
    }
    ctx->pc = 0x2EA238u;
    {
        const bool branch_taken_0x2ea238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA238u;
            // 0x2ea23c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea238) {
            ctx->pc = 0x2EA248u;
            goto label_2ea248;
        }
    }
    ctx->pc = 0x2EA240u;
label_2ea240:
    // 0x2ea240: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2ea244:
    if (ctx->pc == 0x2EA244u) {
        ctx->pc = 0x2EA244u;
            // 0x2ea244: 0x24110bb9  addiu       $s1, $zero, 0xBB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3001));
        ctx->pc = 0x2EA248u;
        goto label_2ea248;
    }
    ctx->pc = 0x2EA240u;
    {
        const bool branch_taken_0x2ea240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA240u;
            // 0x2ea244: 0x24110bb9  addiu       $s1, $zero, 0xBB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea240) {
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA248u;
label_2ea248:
    // 0x2ea248: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ea248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2ea24c:
    // 0x2ea24c: 0xc04c018  jal         func_130060
label_2ea250:
    if (ctx->pc == 0x2EA250u) {
        ctx->pc = 0x2EA250u;
            // 0x2ea250: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x2EA254u;
        goto label_2ea254;
    }
    ctx->pc = 0x2EA24Cu;
    SET_GPR_U32(ctx, 31, 0x2EA254u);
    ctx->pc = 0x2EA250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA24Cu;
            // 0x2ea250: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA254u; }
        if (ctx->pc != 0x2EA254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA254u; }
        if (ctx->pc != 0x2EA254u) { return; }
    }
    ctx->pc = 0x2EA254u;
label_2ea254:
    // 0x2ea254: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_2ea258:
    // 0x2ea258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ea25c:
    // 0x2ea25c: 0x0  nop
    ctx->pc = 0x2ea25cu;
    // NOP
label_2ea260:
    // 0x2ea260: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ea264:
    // 0x2ea264: 0x0  nop
    ctx->pc = 0x2ea264u;
    // NOP
label_2ea268:
    // 0x2ea268: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2ea26c:
    if (ctx->pc == 0x2EA26Cu) {
        ctx->pc = 0x2EA270u;
        goto label_2ea270;
    }
    ctx->pc = 0x2EA268u;
    {
        const bool branch_taken_0x2ea268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea268) {
            ctx->pc = 0x2EA29Cu;
            goto label_2ea29c;
        }
    }
    ctx->pc = 0x2EA270u;
label_2ea270:
    // 0x2ea270: 0x8e420204  lw          $v0, 0x204($s2)
    ctx->pc = 0x2ea270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
label_2ea274:
    // 0x2ea274: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2ea278:
    if (ctx->pc == 0x2EA278u) {
        ctx->pc = 0x2EA27Cu;
        goto label_2ea27c;
    }
    ctx->pc = 0x2EA274u;
    {
        const bool branch_taken_0x2ea274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea274) {
            ctx->pc = 0x2EA29Cu;
            goto label_2ea29c;
        }
    }
    ctx->pc = 0x2EA27Cu;
label_2ea27c:
    // 0x2ea27c: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2ea27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2ea280:
    // 0x2ea280: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2ea280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ea284:
    // 0x2ea284: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2ea288:
    if (ctx->pc == 0x2EA288u) {
        ctx->pc = 0x2EA288u;
            // 0x2ea288: 0x24110bb9  addiu       $s1, $zero, 0xBB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3001));
        ctx->pc = 0x2EA28Cu;
        goto label_2ea28c;
    }
    ctx->pc = 0x2EA284u;
    {
        const bool branch_taken_0x2ea284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA284u;
            // 0x2ea288: 0x24110bb9  addiu       $s1, $zero, 0xBB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea284) {
            ctx->pc = 0x2EA294u;
            goto label_2ea294;
        }
    }
    ctx->pc = 0x2EA28Cu;
label_2ea28c:
    // 0x2ea28c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ea290:
    if (ctx->pc == 0x2EA290u) {
        ctx->pc = 0x2EA290u;
            // 0x2ea290: 0x24110bba  addiu       $s1, $zero, 0xBBA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3002));
        ctx->pc = 0x2EA294u;
        goto label_2ea294;
    }
    ctx->pc = 0x2EA28Cu;
    {
        const bool branch_taken_0x2ea28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA28Cu;
            // 0x2ea290: 0x24110bba  addiu       $s1, $zero, 0xBBA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea28c) {
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA294u;
label_2ea294:
    // 0x2ea294: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ea298:
    if (ctx->pc == 0x2EA298u) {
        ctx->pc = 0x2EA29Cu;
        goto label_2ea29c;
    }
    ctx->pc = 0x2EA294u;
    {
        const bool branch_taken_0x2ea294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea294) {
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA29Cu;
label_2ea29c:
    // 0x2ea29c: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x2ea29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_2ea2a0:
    // 0x2ea2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea2a4:
    // 0x2ea2a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2ea2a8:
    if (ctx->pc == 0x2EA2A8u) {
        ctx->pc = 0x2EA2ACu;
        goto label_2ea2ac;
    }
    ctx->pc = 0x2EA2A4u;
    {
        const bool branch_taken_0x2ea2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea2a4) {
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA2ACu;
label_2ea2ac:
    // 0x2ea2ac: 0x24110bbb  addiu       $s1, $zero, 0xBBB
    ctx->pc = 0x2ea2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3003));
label_2ea2b0:
    // 0x2ea2b0: 0x620001c  bltz        $s1, . + 4 + (0x1C << 2)
label_2ea2b4:
    if (ctx->pc == 0x2EA2B4u) {
        ctx->pc = 0x2EA2B4u;
            // 0x2ea2b4: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x2EA2B8u;
        goto label_2ea2b8;
    }
    ctx->pc = 0x2EA2B0u;
    {
        const bool branch_taken_0x2ea2b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2EA2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2B0u;
            // 0x2ea2b4: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2b0) {
            ctx->pc = 0x2EA324u;
            goto label_2ea324;
        }
    }
    ctx->pc = 0x2EA2B8u;
label_2ea2b8:
    // 0x2ea2b8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x2ea2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_2ea2bc:
    // 0x2ea2bc: 0x24845a20  addiu       $a0, $a0, 0x5A20
    ctx->pc = 0x2ea2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
label_2ea2c0:
    // 0x2ea2c0: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_2ea2c4:
    // 0x2ea2c4: 0xc049c18  jal         func_127060
label_2ea2c8:
    if (ctx->pc == 0x2EA2C8u) {
        ctx->pc = 0x2EA2C8u;
            // 0x2ea2c8: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x2EA2CCu;
        goto label_2ea2cc;
    }
    ctx->pc = 0x2EA2C4u;
    SET_GPR_U32(ctx, 31, 0x2EA2CCu);
    ctx->pc = 0x2EA2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2C4u;
            // 0x2ea2c8: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2CCu; }
        if (ctx->pc != 0x2EA2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2CCu; }
        if (ctx->pc != 0x2EA2CCu) { return; }
    }
    ctx->pc = 0x2EA2CCu;
label_2ea2cc:
    // 0x2ea2cc: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x2ea2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea2d0:
    // 0x2ea2d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea2d4:
    // 0x2ea2d4: 0xac432e54  sw          $v1, 0x2E54($v0)
    ctx->pc = 0x2ea2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 3));
label_2ea2d8:
    // 0x2ea2d8: 0xc0953f8  jal         func_254FE0
label_2ea2dc:
    if (ctx->pc == 0x2EA2DCu) {
        ctx->pc = 0x2EA2DCu;
            // 0x2ea2dc: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x2EA2E0u;
        goto label_2ea2e0;
    }
    ctx->pc = 0x2EA2D8u;
    SET_GPR_U32(ctx, 31, 0x2EA2E0u);
    ctx->pc = 0x2EA2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2D8u;
            // 0x2ea2dc: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2E0u; }
        if (ctx->pc != 0x2EA2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2E0u; }
        if (ctx->pc != 0x2EA2E0u) { return; }
    }
    ctx->pc = 0x2EA2E0u;
label_2ea2e0:
    // 0x2ea2e0: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x2ea2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea2e4:
    // 0x2ea2e4: 0xc09542c  jal         func_2550B0
label_2ea2e8:
    if (ctx->pc == 0x2EA2E8u) {
        ctx->pc = 0x2EA2E8u;
            // 0x2ea2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2ECu;
        goto label_2ea2ec;
    }
    ctx->pc = 0x2EA2E4u;
    SET_GPR_U32(ctx, 31, 0x2EA2ECu);
    ctx->pc = 0x2EA2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2E4u;
            // 0x2ea2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2ECu; }
        if (ctx->pc != 0x2EA2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2ECu; }
        if (ctx->pc != 0x2EA2ECu) { return; }
    }
    ctx->pc = 0x2EA2ECu;
label_2ea2ec:
    // 0x2ea2ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ea2f0:
    if (ctx->pc == 0x2EA2F0u) {
        ctx->pc = 0x2EA2F4u;
        goto label_2ea2f4;
    }
    ctx->pc = 0x2EA2ECu;
    {
        const bool branch_taken_0x2ea2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2ec) {
            ctx->pc = 0x2EA324u;
            goto label_2ea324;
        }
    }
    ctx->pc = 0x2EA2F4u;
label_2ea2f4:
    // 0x2ea2f4: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x2ea2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2ea2f8:
    // 0x2ea2f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ea2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ea2fc:
    // 0x2ea2fc: 0xac20f6f8  sw          $zero, -0x908($at)
    ctx->pc = 0x2ea2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964984), GPR_U32(ctx, 0));
label_2ea300:
    // 0x2ea300: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ea300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ea304:
    // 0x2ea304: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2ea304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2ea308:
    // 0x2ea308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ea30c:
    // 0x2ea30c: 0xac23f6e0  sw          $v1, -0x920($at)
    ctx->pc = 0x2ea30cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 3));
label_2ea310:
    // 0x2ea310: 0xc05acf0  jal         func_16B3C0
label_2ea314:
    if (ctx->pc == 0x2EA314u) {
        ctx->pc = 0x2EA314u;
            // 0x2ea314: 0xac402e58  sw          $zero, 0x2E58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
        ctx->pc = 0x2EA318u;
        goto label_2ea318;
    }
    ctx->pc = 0x2EA310u;
    SET_GPR_U32(ctx, 31, 0x2EA318u);
    ctx->pc = 0x2EA314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA310u;
            // 0x2ea314: 0xac402e58  sw          $zero, 0x2E58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B3C0u;
    if (runtime->hasFunction(0x16B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA318u; }
        if (ctx->pc != 0x2EA318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveThrowItem__12CActionCharaFv_0x16b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA318u; }
        if (ctx->pc != 0x2EA318u) { return; }
    }
    ctx->pc = 0x2EA318u;
label_2ea318:
    // 0x2ea318: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x2ea318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_2ea31c:
    // 0x2ea31c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ea320:
    if (ctx->pc == 0x2EA320u) {
        ctx->pc = 0x2EA320u;
            // 0x2ea320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2EA324u;
        goto label_2ea324;
    }
    ctx->pc = 0x2EA31Cu;
    {
        const bool branch_taken_0x2ea31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA31Cu;
            // 0x2ea320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea31c) {
            ctx->pc = 0x2EA328u;
            goto label_2ea328;
        }
    }
    ctx->pc = 0x2EA324u;
label_2ea324:
    // 0x2ea324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea328:
    // 0x2ea328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ea328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea32c:
    // 0x2ea32c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ea32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ea330:
    // 0x2ea330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea334:
    // 0x2ea334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ea334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea338:
    // 0x2ea338: 0x3e00008  jr          $ra
label_2ea33c:
    if (ctx->pc == 0x2EA33Cu) {
        ctx->pc = 0x2EA33Cu;
            // 0x2ea33c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2EA340u;
        goto label_fallthrough_0x2ea338;
    }
    ctx->pc = 0x2EA338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA338u;
            // 0x2ea33c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ea338:
    ctx->pc = 0x2EA340u;
}
