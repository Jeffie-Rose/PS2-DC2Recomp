#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DistCheck_Action2__FP6CSceneffPfiPi
// Address: 0x16c020 - 0x16c348
void DistCheck_Action2__FP6CSceneffPfiPi_0x16c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DistCheck_Action2__FP6CSceneffPfiPi_0x16c020");
#endif

    switch (ctx->pc) {
        case 0x16c020u: goto label_16c020;
        case 0x16c024u: goto label_16c024;
        case 0x16c028u: goto label_16c028;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c030u: goto label_16c030;
        case 0x16c034u: goto label_16c034;
        case 0x16c038u: goto label_16c038;
        case 0x16c03cu: goto label_16c03c;
        case 0x16c040u: goto label_16c040;
        case 0x16c044u: goto label_16c044;
        case 0x16c048u: goto label_16c048;
        case 0x16c04cu: goto label_16c04c;
        case 0x16c050u: goto label_16c050;
        case 0x16c054u: goto label_16c054;
        case 0x16c058u: goto label_16c058;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c060u: goto label_16c060;
        case 0x16c064u: goto label_16c064;
        case 0x16c068u: goto label_16c068;
        case 0x16c06cu: goto label_16c06c;
        case 0x16c070u: goto label_16c070;
        case 0x16c074u: goto label_16c074;
        case 0x16c078u: goto label_16c078;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c080u: goto label_16c080;
        case 0x16c084u: goto label_16c084;
        case 0x16c088u: goto label_16c088;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c090u: goto label_16c090;
        case 0x16c094u: goto label_16c094;
        case 0x16c098u: goto label_16c098;
        case 0x16c09cu: goto label_16c09c;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0a4u: goto label_16c0a4;
        case 0x16c0a8u: goto label_16c0a8;
        case 0x16c0acu: goto label_16c0ac;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b4u: goto label_16c0b4;
        case 0x16c0b8u: goto label_16c0b8;
        case 0x16c0bcu: goto label_16c0bc;
        case 0x16c0c0u: goto label_16c0c0;
        case 0x16c0c4u: goto label_16c0c4;
        case 0x16c0c8u: goto label_16c0c8;
        case 0x16c0ccu: goto label_16c0cc;
        case 0x16c0d0u: goto label_16c0d0;
        case 0x16c0d4u: goto label_16c0d4;
        case 0x16c0d8u: goto label_16c0d8;
        case 0x16c0dcu: goto label_16c0dc;
        case 0x16c0e0u: goto label_16c0e0;
        case 0x16c0e4u: goto label_16c0e4;
        case 0x16c0e8u: goto label_16c0e8;
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f0u: goto label_16c0f0;
        case 0x16c0f4u: goto label_16c0f4;
        case 0x16c0f8u: goto label_16c0f8;
        case 0x16c0fcu: goto label_16c0fc;
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        case 0x16c108u: goto label_16c108;
        case 0x16c10cu: goto label_16c10c;
        case 0x16c110u: goto label_16c110;
        case 0x16c114u: goto label_16c114;
        case 0x16c118u: goto label_16c118;
        case 0x16c11cu: goto label_16c11c;
        case 0x16c120u: goto label_16c120;
        case 0x16c124u: goto label_16c124;
        case 0x16c128u: goto label_16c128;
        case 0x16c12cu: goto label_16c12c;
        case 0x16c130u: goto label_16c130;
        case 0x16c134u: goto label_16c134;
        case 0x16c138u: goto label_16c138;
        case 0x16c13cu: goto label_16c13c;
        case 0x16c140u: goto label_16c140;
        case 0x16c144u: goto label_16c144;
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        case 0x16c168u: goto label_16c168;
        case 0x16c16cu: goto label_16c16c;
        case 0x16c170u: goto label_16c170;
        case 0x16c174u: goto label_16c174;
        case 0x16c178u: goto label_16c178;
        case 0x16c17cu: goto label_16c17c;
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        case 0x16c27cu: goto label_16c27c;
        case 0x16c280u: goto label_16c280;
        case 0x16c284u: goto label_16c284;
        case 0x16c288u: goto label_16c288;
        case 0x16c28cu: goto label_16c28c;
        case 0x16c290u: goto label_16c290;
        case 0x16c294u: goto label_16c294;
        case 0x16c298u: goto label_16c298;
        case 0x16c29cu: goto label_16c29c;
        case 0x16c2a0u: goto label_16c2a0;
        case 0x16c2a4u: goto label_16c2a4;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2acu: goto label_16c2ac;
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2b4u: goto label_16c2b4;
        case 0x16c2b8u: goto label_16c2b8;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c0u: goto label_16c2c0;
        case 0x16c2c4u: goto label_16c2c4;
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2d0u: goto label_16c2d0;
        case 0x16c2d4u: goto label_16c2d4;
        case 0x16c2d8u: goto label_16c2d8;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e0u: goto label_16c2e0;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2e8u: goto label_16c2e8;
        case 0x16c2ecu: goto label_16c2ec;
        case 0x16c2f0u: goto label_16c2f0;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2f8u: goto label_16c2f8;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c300u: goto label_16c300;
        case 0x16c304u: goto label_16c304;
        case 0x16c308u: goto label_16c308;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c310u: goto label_16c310;
        case 0x16c314u: goto label_16c314;
        case 0x16c318u: goto label_16c318;
        case 0x16c31cu: goto label_16c31c;
        case 0x16c320u: goto label_16c320;
        case 0x16c324u: goto label_16c324;
        case 0x16c328u: goto label_16c328;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c330u: goto label_16c330;
        case 0x16c334u: goto label_16c334;
        case 0x16c338u: goto label_16c338;
        case 0x16c33cu: goto label_16c33c;
        case 0x16c340u: goto label_16c340;
        case 0x16c344u: goto label_16c344;
        default: break;
    }

    ctx->pc = 0x16c020u;

label_16c020:
    // 0x16c020: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_16c024:
    // 0x16c024: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_16c028:
    // 0x16c028: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x16c028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_16c02c:
    // 0x16c02c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x16c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_16c030:
    // 0x16c030: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x16c030u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c034:
    // 0x16c034: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16c034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_16c038:
    // 0x16c038: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x16c038u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c03c:
    // 0x16c03c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x16c03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_16c040:
    // 0x16c040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c044:
    // 0x16c044: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16c048:
    // 0x16c048: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16c048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c04c:
    // 0x16c04c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16c04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16c050:
    // 0x16c050: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16c050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c054:
    // 0x16c054: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16c058:
    // 0x16c058: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16c05c:
    // 0x16c05c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16c060:
    // 0x16c060: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16c060u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16c064:
    // 0x16c064: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16c064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16c068:
    // 0x16c068: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x16c068u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_16c06c:
    // 0x16c06c: 0xc0a0ed8  jal         func_283B60
label_16c070:
    if (ctx->pc == 0x16C070u) {
        ctx->pc = 0x16C070u;
            // 0x16c070: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x16C074u;
        goto label_16c074;
    }
    ctx->pc = 0x16C06Cu;
    SET_GPR_U32(ctx, 31, 0x16C074u);
    ctx->pc = 0x16C070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C06Cu;
            // 0x16c070: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C074u; }
        if (ctx->pc != 0x16C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C074u; }
        if (ctx->pc != 0x16C074u) { return; }
    }
    ctx->pc = 0x16C074u;
label_16c074:
    // 0x16c074: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16c078:
    // 0x16c078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c07c:
    // 0x16c07c: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x16c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_16c080:
    // 0x16c080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c084:
    // 0x16c084: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16c084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16c088:
    // 0x16c088: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16c08c:
    // 0x16c08c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16c090:
    // 0x16c090: 0x320f809  jalr        $t9
label_16c094:
    if (ctx->pc == 0x16C094u) {
        ctx->pc = 0x16C094u;
            // 0x16c094: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16C098u;
        goto label_16c098;
    }
    ctx->pc = 0x16C090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C098u);
        ctx->pc = 0x16C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C090u;
            // 0x16c094: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C098u; }
            if (ctx->pc != 0x16C098u) { return; }
        }
        }
    }
    ctx->pc = 0x16C098u;
label_16c098:
    // 0x16c098: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16c098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16c09c:
    // 0x16c09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c0a0:
    // 0x16c0a0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16c0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16c0a4:
    // 0x16c0a4: 0x320f809  jalr        $t9
label_16c0a8:
    if (ctx->pc == 0x16C0A8u) {
        ctx->pc = 0x16C0A8u;
            // 0x16c0a8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x16C0ACu;
        goto label_16c0ac;
    }
    ctx->pc = 0x16C0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C0ACu);
        ctx->pc = 0x16C0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0A4u;
            // 0x16c0a8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C0ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C0ACu; }
            if (ctx->pc != 0x16C0ACu) { return; }
        }
        }
    }
    ctx->pc = 0x16C0ACu;
label_16c0ac:
    // 0x16c0ac: 0x26050690  addiu       $a1, $s0, 0x690
    ctx->pc = 0x16c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
label_16c0b0:
    // 0x16c0b0: 0xc041c5c  jal         func_107170
label_16c0b4:
    if (ctx->pc == 0x16C0B4u) {
        ctx->pc = 0x16C0B4u;
            // 0x16c0b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x16C0B8u;
        goto label_16c0b8;
    }
    ctx->pc = 0x16C0B0u;
    SET_GPR_U32(ctx, 31, 0x16C0B8u);
    ctx->pc = 0x16C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0B0u;
            // 0x16c0b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0B8u; }
        if (ctx->pc != 0x16C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0B8u; }
        if (ctx->pc != 0x16C0B8u) { return; }
    }
    ctx->pc = 0x16C0B8u;
label_16c0b8:
    // 0x16c0b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c0bc:
    // 0x16c0bc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x16c0bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c0c0:
    // 0x16c0c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16c0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c4:
    // 0x16c0c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c0c8:
    // 0x16c0c8: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_16c0cc:
    // 0x16c0cc: 0xc0a0ed8  jal         func_283B60
label_16c0d0:
    if (ctx->pc == 0x16C0D0u) {
        ctx->pc = 0x16C0D0u;
            // 0x16c0d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C0D4u;
        goto label_16c0d4;
    }
    ctx->pc = 0x16C0CCu;
    SET_GPR_U32(ctx, 31, 0x16C0D4u);
    ctx->pc = 0x16C0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0CCu;
            // 0x16c0d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0D4u; }
        if (ctx->pc != 0x16C0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0D4u; }
        if (ctx->pc != 0x16C0D4u) { return; }
    }
    ctx->pc = 0x16C0D4u;
label_16c0d4:
    // 0x16c0d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16c0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c0d8:
    // 0x16c0d8: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
label_16c0dc:
    if (ctx->pc == 0x16C0DCu) {
        ctx->pc = 0x16C0E0u;
        goto label_16c0e0;
    }
    ctx->pc = 0x16C0D8u;
    {
        const bool branch_taken_0x16c0d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c0d8) {
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C0E0u;
label_16c0e0:
    // 0x16c0e0: 0x8643068a  lh          $v1, 0x68A($s2)
    ctx->pc = 0x16c0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1674)));
label_16c0e4:
    // 0x16c0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c0e8:
    // 0x16c0e8: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_16c0ec:
    if (ctx->pc == 0x16C0ECu) {
        ctx->pc = 0x16C0F0u;
        goto label_16c0f0;
    }
    ctx->pc = 0x16C0E8u;
    {
        const bool branch_taken_0x16c0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c0e8) {
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C0F0u;
label_16c0f0:
    // 0x16c0f0: 0x8e421330  lw          $v0, 0x1330($s2)
    ctx->pc = 0x16c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4912)));
label_16c0f4:
    // 0x16c0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c0f8:
    // 0x16c0f8: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_16c0fc:
    if (ctx->pc == 0x16C0FCu) {
        ctx->pc = 0x16C100u;
        goto label_16c100;
    }
    ctx->pc = 0x16C0F8u;
    {
        const bool branch_taken_0x16c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c0f8) {
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C100u;
label_16c100:
    // 0x16c100: 0x86420730  lh          $v0, 0x730($s2)
    ctx->pc = 0x16c100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1840)));
label_16c104:
    // 0x16c104: 0x10430033  beq         $v0, $v1, . + 4 + (0x33 << 2)
label_16c108:
    if (ctx->pc == 0x16C108u) {
        ctx->pc = 0x16C10Cu;
        goto label_16c10c;
    }
    ctx->pc = 0x16C104u;
    {
        const bool branch_taken_0x16c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c104) {
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C10Cu;
label_16c10c:
    // 0x16c10c: 0x8e421348  lw          $v0, 0x1348($s2)
    ctx->pc = 0x16c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4936)));
label_16c110:
    // 0x16c110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16c114:
    // 0x16c114: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_16c118:
    if (ctx->pc == 0x16C118u) {
        ctx->pc = 0x16C118u;
            // 0x16c118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C11Cu;
        goto label_16c11c;
    }
    ctx->pc = 0x16C114u;
    {
        const bool branch_taken_0x16c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C114u;
            // 0x16c118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c114) {
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C11Cu;
label_16c11c:
    // 0x16c11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c120:
    // 0x16c120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c124:
    // 0x16c124: 0xc05d420  jal         func_175080
label_16c128:
    if (ctx->pc == 0x16C128u) {
        ctx->pc = 0x16C128u;
            // 0x16c128: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x16C12Cu;
        goto label_16c12c;
    }
    ctx->pc = 0x16C124u;
    SET_GPR_U32(ctx, 31, 0x16C12Cu);
    ctx->pc = 0x16C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C124u;
            // 0x16c128: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C12Cu; }
        if (ctx->pc != 0x16C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C12Cu; }
        if (ctx->pc != 0x16C12Cu) { return; }
    }
    ctx->pc = 0x16C12Cu;
label_16c12c:
    // 0x16c12c: 0xc65512f4  lwc1        $f21, 0x12F4($s2)
    ctx->pc = 0x16c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16c130:
    // 0x16c130: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x16c130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c134:
    // 0x16c134: 0x0  nop
    ctx->pc = 0x16c134u;
    // NOP
label_16c138:
    // 0x16c138: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_16c13c:
    if (ctx->pc == 0x16C13Cu) {
        ctx->pc = 0x16C140u;
        goto label_16c140;
    }
    ctx->pc = 0x16C138u;
    {
        const bool branch_taken_0x16c138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c138) {
            ctx->pc = 0x16C150u;
            goto label_16c150;
        }
    }
    ctx->pc = 0x16C140u;
label_16c140:
    // 0x16c140: 0x8e421150  lw          $v0, 0x1150($s2)
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4432)));
label_16c144:
    // 0x16c144: 0x8042006a  lb          $v0, 0x6A($v0)
    ctx->pc = 0x16c144u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
label_16c148:
    // 0x16c148: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_16c14c:
    if (ctx->pc == 0x16C14Cu) {
        ctx->pc = 0x16C150u;
        goto label_16c150;
    }
    ctx->pc = 0x16C148u;
    {
        const bool branch_taken_0x16c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c148) {
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C150u;
label_16c150:
    // 0x16c150: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x16c150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c154:
    // 0x16c154: 0x0  nop
    ctx->pc = 0x16c154u;
    // NOP
label_16c158:
    // 0x16c158: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16c15c:
    if (ctx->pc == 0x16C15Cu) {
        ctx->pc = 0x16C160u;
        goto label_16c160;
    }
    ctx->pc = 0x16C158u;
    {
        const bool branch_taken_0x16c158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c158) {
            ctx->pc = 0x16C170u;
            goto label_16c170;
        }
    }
    ctx->pc = 0x16C160u;
label_16c160:
    // 0x16c160: 0x8e421150  lw          $v0, 0x1150($s2)
    ctx->pc = 0x16c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4432)));
label_16c164:
    // 0x16c164: 0x8042006a  lb          $v0, 0x6A($v0)
    ctx->pc = 0x16c164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
label_16c168:
    // 0x16c168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16c16c:
    if (ctx->pc == 0x16C16Cu) {
        ctx->pc = 0x16C170u;
        goto label_16c170;
    }
    ctx->pc = 0x16C168u;
    {
        const bool branch_taken_0x16c168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c168) {
            ctx->pc = 0x16C178u;
            goto label_16c178;
        }
    }
    ctx->pc = 0x16C170u;
label_16c170:
    // 0x16c170: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x16c170u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c174:
    // 0x16c174: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x16c174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_16c178:
    // 0x16c178: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16c17c:
    // 0x16c17c: 0xc7a500e0  lwc1        $f5, 0xE0($sp)
    ctx->pc = 0x16c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_16c180:
    // 0x16c180: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16c180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c184:
    // 0x16c184: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x16c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16c188:
    // 0x16c188: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x16c188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16c18c:
    // 0x16c18c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x16c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c190:
    // 0x16c190: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x16c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c194:
    // 0x16c194: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x16c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c198:
    // 0x16c198: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x16c198u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_16c19c:
    // 0x16c19c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x16c19cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16c1a0:
    // 0x16c1a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c1a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16c1a4:
    // 0x16c1a4: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x16c1a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16c1a8:
    // 0x16c1a8: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x16c1a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_16c1ac:
    // 0x16c1ac: 0xc041be0  jal         func_106F80
label_16c1b0:
    if (ctx->pc == 0x16C1B0u) {
        ctx->pc = 0x16C1B0u;
            // 0x16c1b0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x16C1B4u;
        goto label_16c1b4;
    }
    ctx->pc = 0x16C1ACu;
    SET_GPR_U32(ctx, 31, 0x16C1B4u);
    ctx->pc = 0x16C1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1ACu;
            // 0x16c1b0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1B4u; }
        if (ctx->pc != 0x16C1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1B4u; }
        if (ctx->pc != 0x16C1B4u) { return; }
    }
    ctx->pc = 0x16C1B4u;
label_16c1b4:
    // 0x16c1b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16c1b8:
    // 0x16c1b8: 0xc041bd6  jal         func_106F58
label_16c1bc:
    if (ctx->pc == 0x16C1BCu) {
        ctx->pc = 0x16C1BCu;
            // 0x16c1bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x16C1C0u;
        goto label_16c1c0;
    }
    ctx->pc = 0x16C1B8u;
    SET_GPR_U32(ctx, 31, 0x16C1C0u);
    ctx->pc = 0x16C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1B8u;
            // 0x16c1bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1C0u; }
        if (ctx->pc != 0x16C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1C0u; }
        if (ctx->pc != 0x16C1C0u) { return; }
    }
    ctx->pc = 0x16C1C0u;
label_16c1c0:
    // 0x16c1c0: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_16c1c4:
    // 0x16c1c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16c1c8:
    // 0x16c1c8: 0xe4550100  swc1        $f21, 0x100($v0)
    ctx->pc = 0x16c1c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_16c1cc:
    // 0x16c1cc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_16c1d0:
    // 0x16c1d0: 0xac510160  sw          $s1, 0x160($v0)
    ctx->pc = 0x16c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 17));
label_16c1d4:
    // 0x16c1d4: 0x0  nop
    ctx->pc = 0x16c1d4u;
    // NOP
label_16c1d8:
    // 0x16c1d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16c1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16c1dc:
    // 0x16c1dc: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x16c1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_16c1e0:
    // 0x16c1e0: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_16c1e4:
    if (ctx->pc == 0x16C1E4u) {
        ctx->pc = 0x16C1E4u;
            // 0x16c1e4: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x16C1E8u;
        goto label_16c1e8;
    }
    ctx->pc = 0x16C1E0u;
    {
        const bool branch_taken_0x16c1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1E0u;
            // 0x16c1e4: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1e0) {
            ctx->pc = 0x16C0CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16c0cc;
        }
    }
    ctx->pc = 0x16C1E8u;
label_16c1e8:
    // 0x16c1e8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_16c1ec:
    if (ctx->pc == 0x16C1ECu) {
        ctx->pc = 0x16C1ECu;
            // 0x16c1ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x16C1F0u;
        goto label_16c1f0;
    }
    ctx->pc = 0x16C1E8u;
    {
        const bool branch_taken_0x16c1e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1E8u;
            // 0x16c1ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1e8) {
            ctx->pc = 0x16C1FCu;
            goto label_16c1fc;
        }
    }
    ctx->pc = 0x16C1F0u;
label_16c1f0:
    // 0x16c1f0: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x16c1f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_16c1f4:
    // 0x16c1f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_16c1f8:
    if (ctx->pc == 0x16C1F8u) {
        ctx->pc = 0x16C1F8u;
            // 0x16c1f8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x16C1FCu;
        goto label_16c1fc;
    }
    ctx->pc = 0x16C1F4u;
    {
        const bool branch_taken_0x16c1f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1F4u;
            // 0x16c1f8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1f4) {
            ctx->pc = 0x16C218u;
            goto label_16c218;
        }
    }
    ctx->pc = 0x16C1FCu;
label_16c1fc:
    // 0x16c1fc: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_16c200:
    if (ctx->pc == 0x16C200u) {
        ctx->pc = 0x16C204u;
        goto label_16c204;
    }
    ctx->pc = 0x16C1FCu;
    {
        const bool branch_taken_0x16c1fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c1fc) {
            ctx->pc = 0x16C20Cu;
            goto label_16c20c;
        }
    }
    ctx->pc = 0x16C204u;
label_16c204:
    // 0x16c204: 0x10000042  b           . + 4 + (0x42 << 2)
label_16c208:
    if (ctx->pc == 0x16C208u) {
        ctx->pc = 0x16C208u;
            // 0x16c208: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x16C20Cu;
        goto label_16c20c;
    }
    ctx->pc = 0x16C204u;
    {
        const bool branch_taken_0x16c204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C204u;
            // 0x16c208: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c204) {
            ctx->pc = 0x16C310u;
            goto label_16c310;
        }
    }
    ctx->pc = 0x16C20Cu;
label_16c20c:
    // 0x16c20c: 0xe6f40000  swc1        $f20, 0x0($s7)
    ctx->pc = 0x16c20cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_16c210:
    // 0x16c210: 0x1000003e  b           . + 4 + (0x3E << 2)
label_16c214:
    if (ctx->pc == 0x16C214u) {
        ctx->pc = 0x16C214u;
            // 0x16c214: 0x26c20018  addiu       $v0, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->pc = 0x16C218u;
        goto label_16c218;
    }
    ctx->pc = 0x16C210u;
    {
        const bool branch_taken_0x16c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C210u;
            // 0x16c214: 0x26c20018  addiu       $v0, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c210) {
            ctx->pc = 0x16C30Cu;
            goto label_16c30c;
        }
    }
    ctx->pc = 0x16C218u;
label_16c218:
    // 0x16c218: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_16c21c:
    if (ctx->pc == 0x16C21Cu) {
        ctx->pc = 0x16C21Cu;
            // 0x16c21c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C220u;
        goto label_16c220;
    }
    ctx->pc = 0x16C218u;
    {
        const bool branch_taken_0x16c218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C218u;
            // 0x16c21c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c218) {
            ctx->pc = 0x16C2D8u;
            goto label_16c2d8;
        }
    }
    ctx->pc = 0x16C220u;
label_16c220:
    // 0x16c220: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16c220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c224:
    // 0x16c224: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16c224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c228:
    // 0x16c228: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x16c228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16c22c:
    // 0x16c22c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16c22cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c230:
    // 0x16c230: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_16c234:
    if (ctx->pc == 0x16C234u) {
        ctx->pc = 0x16C234u;
            // 0x16c234: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C238u;
        goto label_16c238;
    }
    ctx->pc = 0x16C230u;
    {
        const bool branch_taken_0x16c230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C230u;
            // 0x16c234: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c230) {
            ctx->pc = 0x16C288u;
            goto label_16c288;
        }
    }
    ctx->pc = 0x16C238u;
label_16c238:
    // 0x16c238: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c23c:
    // 0x16c23c: 0x0  nop
    ctx->pc = 0x16c23cu;
    // NOP
label_16c240:
    // 0x16c240: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
label_16c244:
    if (ctx->pc == 0x16C244u) {
        ctx->pc = 0x16C244u;
            // 0x16c244: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->pc = 0x16C248u;
        goto label_16c248;
    }
    ctx->pc = 0x16C240u;
    {
        const bool branch_taken_0x16c240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16C244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C240u;
            // 0x16c244: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c240) {
            ctx->pc = 0x16C278u;
            goto label_16c278;
        }
    }
    ctx->pc = 0x16C248u;
label_16c248:
    // 0x16c248: 0xc4420100  lwc1        $f2, 0x100($v0)
    ctx->pc = 0x16c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c24c:
    // 0x16c24c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16c24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c250:
    // 0x16c250: 0x0  nop
    ctx->pc = 0x16c250u;
    // NOP
label_16c254:
    // 0x16c254: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_16c258:
    if (ctx->pc == 0x16C258u) {
        ctx->pc = 0x16C258u;
            // 0x16c258: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x16C25Cu;
        goto label_16c25c;
    }
    ctx->pc = 0x16C254u;
    {
        const bool branch_taken_0x16c254 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C254u;
            // 0x16c258: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c254) {
            ctx->pc = 0x16C278u;
            goto label_16c278;
        }
    }
    ctx->pc = 0x16C25Cu;
label_16c25c:
    // 0x16c25c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_16c260:
    // 0x16c260: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x16c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c264:
    // 0x16c264: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16c264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c268:
    // 0x16c268: 0x0  nop
    ctx->pc = 0x16c268u;
    // NOP
label_16c26c:
    // 0x16c26c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16c270:
    if (ctx->pc == 0x16C270u) {
        ctx->pc = 0x16C274u;
        goto label_16c274;
    }
    ctx->pc = 0x16C26Cu;
    {
        const bool branch_taken_0x16c26c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c26c) {
            ctx->pc = 0x16C278u;
            goto label_16c278;
        }
    }
    ctx->pc = 0x16C274u;
label_16c274:
    // 0x16c274: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x16c274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c278:
    // 0x16c278: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16c278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16c27c:
    // 0x16c27c: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x16c27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16c280:
    // 0x16c280: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_16c284:
    if (ctx->pc == 0x16C284u) {
        ctx->pc = 0x16C284u;
            // 0x16c284: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x16C288u;
        goto label_16c288;
    }
    ctx->pc = 0x16C280u;
    {
        const bool branch_taken_0x16c280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C280u;
            // 0x16c284: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c280) {
            ctx->pc = 0x16C23Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16c23c;
        }
    }
    ctx->pc = 0x16C288u;
label_16c288:
    // 0x16c288: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_16c28c:
    if (ctx->pc == 0x16C28Cu) {
        ctx->pc = 0x16C28Cu;
            // 0x16c28c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x16C290u;
        goto label_16c290;
    }
    ctx->pc = 0x16C288u;
    {
        const bool branch_taken_0x16c288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C288u;
            // 0x16c28c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c288) {
            ctx->pc = 0x16C2C8u;
            goto label_16c2c8;
        }
    }
    ctx->pc = 0x16C290u;
label_16c290:
    // 0x16c290: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x16c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_16c294:
    // 0x16c294: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_16c298:
    // 0x16c298: 0x24650100  addiu       $a1, $v1, 0x100
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_16c29c:
    // 0x16c29c: 0x24660160  addiu       $a2, $v1, 0x160
    ctx->pc = 0x16c29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
label_16c2a0:
    // 0x16c2a0: 0x24480100  addiu       $t0, $v0, 0x100
    ctx->pc = 0x16c2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_16c2a4:
    // 0x16c2a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16c2a8:
    // 0x16c2a8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x16c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c2ac:
    // 0x16c2ac: 0x24490160  addiu       $t1, $v0, 0x160
    ctx->pc = 0x16c2acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
label_16c2b0:
    // 0x16c2b0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x16c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c2b4:
    // 0x16c2b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x16c2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_16c2b8:
    // 0x16c2b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x16c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_16c2bc:
    // 0x16c2bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x16c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_16c2c0:
    // 0x16c2c0: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x16c2c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_16c2c4:
    // 0x16c2c4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x16c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_16c2c8:
    // 0x16c2c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16c2cc:
    // 0x16c2cc: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x16c2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16c2d0:
    // 0x16c2d0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_16c2d4:
    if (ctx->pc == 0x16C2D4u) {
        ctx->pc = 0x16C2D4u;
            // 0x16c2d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x16C2D8u;
        goto label_16c2d8;
    }
    ctx->pc = 0x16C2D0u;
    {
        const bool branch_taken_0x16c2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2D0u;
            // 0x16c2d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2d0) {
            ctx->pc = 0x16C228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16c228;
        }
    }
    ctx->pc = 0x16C2D8u;
label_16c2d8:
    // 0x16c2d8: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x16c2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16c2dc:
    // 0x16c2dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16c2e0:
    if (ctx->pc == 0x16C2E0u) {
        ctx->pc = 0x16C2E0u;
            // 0x16c2e0: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x16C2E4u;
        goto label_16c2e4;
    }
    ctx->pc = 0x16C2DCu;
    {
        const bool branch_taken_0x16c2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2DCu;
            // 0x16c2e0: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2dc) {
            ctx->pc = 0x16C2ECu;
            goto label_16c2ec;
        }
    }
    ctx->pc = 0x16C2E4u;
label_16c2e4:
    // 0x16c2e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16c2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c2e8:
    // 0x16c2e8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x16c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_16c2ec:
    // 0x16c2ec: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x16c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_16c2f0:
    // 0x16c2f0: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x16c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c2f4:
    // 0x16c2f4: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_16c2f8:
    if (ctx->pc == 0x16C2F8u) {
        ctx->pc = 0x16C2F8u;
            // 0x16c2f8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->pc = 0x16C2FCu;
        goto label_16c2fc;
    }
    ctx->pc = 0x16C2F4u;
    {
        const bool branch_taken_0x16c2f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2F4u;
            // 0x16c2f8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2f4) {
            ctx->pc = 0x16C300u;
            goto label_16c300;
        }
    }
    ctx->pc = 0x16C2FCu;
label_16c2fc:
    // 0x16c2fc: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x16c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
label_16c300:
    // 0x16c300: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x16c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_16c304:
    // 0x16c304: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x16c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
label_16c308:
    // 0x16c308: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x16c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_16c30c:
    // 0x16c30c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x16c30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_16c310:
    // 0x16c310: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16c314:
    // 0x16c314: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x16c314u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16c318:
    // 0x16c318: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16c31c:
    // 0x16c31c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x16c31cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16c320:
    // 0x16c320: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16c324:
    // 0x16c324: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x16c324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16c328:
    // 0x16c328: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16c328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16c32c:
    // 0x16c32c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16c32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16c330:
    // 0x16c330: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16c330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16c334:
    // 0x16c334: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16c334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c338:
    // 0x16c338: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16c338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c33c:
    // 0x16c33c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c340:
    // 0x16c340: 0x3e00008  jr          $ra
label_16c344:
    if (ctx->pc == 0x16C344u) {
        ctx->pc = 0x16C344u;
            // 0x16c344: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x16C348u;
        goto label_fallthrough_0x16c340;
    }
    ctx->pc = 0x16C340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C340u;
            // 0x16c344: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16c340:
    ctx->pc = 0x16C348u;
}
