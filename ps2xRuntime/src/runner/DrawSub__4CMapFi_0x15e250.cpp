#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSub__4CMapFi
// Address: 0x15e250 - 0x15e3c8
void DrawSub__4CMapFi_0x15e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSub__4CMapFi_0x15e250");
#endif

    switch (ctx->pc) {
        case 0x15e250u: goto label_15e250;
        case 0x15e254u: goto label_15e254;
        case 0x15e258u: goto label_15e258;
        case 0x15e25cu: goto label_15e25c;
        case 0x15e260u: goto label_15e260;
        case 0x15e264u: goto label_15e264;
        case 0x15e268u: goto label_15e268;
        case 0x15e26cu: goto label_15e26c;
        case 0x15e270u: goto label_15e270;
        case 0x15e274u: goto label_15e274;
        case 0x15e278u: goto label_15e278;
        case 0x15e27cu: goto label_15e27c;
        case 0x15e280u: goto label_15e280;
        case 0x15e284u: goto label_15e284;
        case 0x15e288u: goto label_15e288;
        case 0x15e28cu: goto label_15e28c;
        case 0x15e290u: goto label_15e290;
        case 0x15e294u: goto label_15e294;
        case 0x15e298u: goto label_15e298;
        case 0x15e29cu: goto label_15e29c;
        case 0x15e2a0u: goto label_15e2a0;
        case 0x15e2a4u: goto label_15e2a4;
        case 0x15e2a8u: goto label_15e2a8;
        case 0x15e2acu: goto label_15e2ac;
        case 0x15e2b0u: goto label_15e2b0;
        case 0x15e2b4u: goto label_15e2b4;
        case 0x15e2b8u: goto label_15e2b8;
        case 0x15e2bcu: goto label_15e2bc;
        case 0x15e2c0u: goto label_15e2c0;
        case 0x15e2c4u: goto label_15e2c4;
        case 0x15e2c8u: goto label_15e2c8;
        case 0x15e2ccu: goto label_15e2cc;
        case 0x15e2d0u: goto label_15e2d0;
        case 0x15e2d4u: goto label_15e2d4;
        case 0x15e2d8u: goto label_15e2d8;
        case 0x15e2dcu: goto label_15e2dc;
        case 0x15e2e0u: goto label_15e2e0;
        case 0x15e2e4u: goto label_15e2e4;
        case 0x15e2e8u: goto label_15e2e8;
        case 0x15e2ecu: goto label_15e2ec;
        case 0x15e2f0u: goto label_15e2f0;
        case 0x15e2f4u: goto label_15e2f4;
        case 0x15e2f8u: goto label_15e2f8;
        case 0x15e2fcu: goto label_15e2fc;
        case 0x15e300u: goto label_15e300;
        case 0x15e304u: goto label_15e304;
        case 0x15e308u: goto label_15e308;
        case 0x15e30cu: goto label_15e30c;
        case 0x15e310u: goto label_15e310;
        case 0x15e314u: goto label_15e314;
        case 0x15e318u: goto label_15e318;
        case 0x15e31cu: goto label_15e31c;
        case 0x15e320u: goto label_15e320;
        case 0x15e324u: goto label_15e324;
        case 0x15e328u: goto label_15e328;
        case 0x15e32cu: goto label_15e32c;
        case 0x15e330u: goto label_15e330;
        case 0x15e334u: goto label_15e334;
        case 0x15e338u: goto label_15e338;
        case 0x15e33cu: goto label_15e33c;
        case 0x15e340u: goto label_15e340;
        case 0x15e344u: goto label_15e344;
        case 0x15e348u: goto label_15e348;
        case 0x15e34cu: goto label_15e34c;
        case 0x15e350u: goto label_15e350;
        case 0x15e354u: goto label_15e354;
        case 0x15e358u: goto label_15e358;
        case 0x15e35cu: goto label_15e35c;
        case 0x15e360u: goto label_15e360;
        case 0x15e364u: goto label_15e364;
        case 0x15e368u: goto label_15e368;
        case 0x15e36cu: goto label_15e36c;
        case 0x15e370u: goto label_15e370;
        case 0x15e374u: goto label_15e374;
        case 0x15e378u: goto label_15e378;
        case 0x15e37cu: goto label_15e37c;
        case 0x15e380u: goto label_15e380;
        case 0x15e384u: goto label_15e384;
        case 0x15e388u: goto label_15e388;
        case 0x15e38cu: goto label_15e38c;
        case 0x15e390u: goto label_15e390;
        case 0x15e394u: goto label_15e394;
        case 0x15e398u: goto label_15e398;
        case 0x15e39cu: goto label_15e39c;
        case 0x15e3a0u: goto label_15e3a0;
        case 0x15e3a4u: goto label_15e3a4;
        case 0x15e3a8u: goto label_15e3a8;
        case 0x15e3acu: goto label_15e3ac;
        case 0x15e3b0u: goto label_15e3b0;
        case 0x15e3b4u: goto label_15e3b4;
        case 0x15e3b8u: goto label_15e3b8;
        case 0x15e3bcu: goto label_15e3bc;
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3c4u: goto label_15e3c4;
        default: break;
    }

    ctx->pc = 0x15e250u;

label_15e250:
    // 0x15e250: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_15e254:
    // 0x15e254: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15e258:
    // 0x15e258: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15e25c:
    // 0x15e25c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15e260:
    // 0x15e260: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15e264:
    // 0x15e264: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15e268:
    // 0x15e268: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15e268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15e26c:
    // 0x15e26c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e270:
    // 0x15e270: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15e270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e274:
    // 0x15e274: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e278:
    // 0x15e278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e27c:
    // 0x15e27c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e280:
    // 0x15e280: 0xc050e44  jal         func_143910
label_15e284:
    if (ctx->pc == 0x15E284u) {
        ctx->pc = 0x15E284u;
            // 0x15e284: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15E288u;
        goto label_15e288;
    }
    ctx->pc = 0x15E280u;
    SET_GPR_U32(ctx, 31, 0x15E288u);
    ctx->pc = 0x15E284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E280u;
            // 0x15e284: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143910u;
    if (runtime->hasFunction(0x143910u)) {
        auto targetFn = runtime->lookupFunction(0x143910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E288u; }
        if (ctx->pc != 0x15E288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPlightEnable__Fv_0x143910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E288u; }
        if (ctx->pc != 0x15E288u) { return; }
    }
    ctx->pc = 0x15E288u;
label_15e288:
    // 0x15e288: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x15e288u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e28c:
    // 0x15e28c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e290:
    // 0x15e290: 0xc050dc8  jal         func_143720
label_15e294:
    if (ctx->pc == 0x15E294u) {
        ctx->pc = 0x15E294u;
            // 0x15e294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15E298u;
        goto label_15e298;
    }
    ctx->pc = 0x15E290u;
    SET_GPR_U32(ctx, 31, 0x15E298u);
    ctx->pc = 0x15E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E290u;
            // 0x15e294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E298u; }
        if (ctx->pc != 0x15E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E298u; }
        if (ctx->pc != 0x15E298u) { return; }
    }
    ctx->pc = 0x15E298u;
label_15e298:
    // 0x15e298: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x15e298u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e29c:
    // 0x15e29c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e2a0:
    // 0x15e2a0: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x15e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_15e2a4:
    // 0x15e2a4: 0xc0575cc  jal         func_15D730
label_15e2a8:
    if (ctx->pc == 0x15E2A8u) {
        ctx->pc = 0x15E2A8u;
            // 0x15e2a8: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->pc = 0x15E2ACu;
        goto label_15e2ac;
    }
    ctx->pc = 0x15E2A4u;
    SET_GPR_U32(ctx, 31, 0x15E2ACu);
    ctx->pc = 0x15E2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2A4u;
            // 0x15e2a8: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2ACu; }
        if (ctx->pc != 0x15E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2ACu; }
        if (ctx->pc != 0x15E2ACu) { return; }
    }
    ctx->pc = 0x15E2ACu;
label_15e2ac:
    // 0x15e2ac: 0x8eb00364  lw          $s0, 0x364($s5)
    ctx->pc = 0x15e2acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 868)));
label_15e2b0:
    // 0x15e2b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e2b4:
    // 0x15e2b4: 0xc05834c  jal         func_160D30
label_15e2b8:
    if (ctx->pc == 0x15E2B8u) {
        ctx->pc = 0x15E2B8u;
            // 0x15e2b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E2BCu;
        goto label_15e2bc;
    }
    ctx->pc = 0x15E2B4u;
    SET_GPR_U32(ctx, 31, 0x15E2BCu);
    ctx->pc = 0x15E2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2B4u;
            // 0x15e2b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2BCu; }
        if (ctx->pc != 0x15E2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2BCu; }
        if (ctx->pc != 0x15E2BCu) { return; }
    }
    ctx->pc = 0x15E2BCu;
label_15e2bc:
    // 0x15e2bc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_15e2c0:
    if (ctx->pc == 0x15E2C0u) {
        ctx->pc = 0x15E2C0u;
            // 0x15e2c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E2C4u;
        goto label_15e2c4;
    }
    ctx->pc = 0x15E2BCu;
    {
        const bool branch_taken_0x15e2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2BCu;
            // 0x15e2c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2bc) {
            ctx->pc = 0x15E368u;
            goto label_15e368;
        }
    }
    ctx->pc = 0x15E2C4u;
label_15e2c4:
    // 0x15e2c4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x15e2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e2c8:
    // 0x15e2c8: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_15e2cc:
    // 0x15e2cc: 0xc059e98  jal         func_167A60
label_15e2d0:
    if (ctx->pc == 0x15E2D0u) {
        ctx->pc = 0x15E2D0u;
            // 0x15e2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E2D4u;
        goto label_15e2d4;
    }
    ctx->pc = 0x15E2CCu;
    SET_GPR_U32(ctx, 31, 0x15E2D4u);
    ctx->pc = 0x15E2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2CCu;
            // 0x15e2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2D4u; }
        if (ctx->pc != 0x15E2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2D4u; }
        if (ctx->pc != 0x15E2D4u) { return; }
    }
    ctx->pc = 0x15E2D4u;
label_15e2d4:
    // 0x15e2d4: 0x8ea20cb0  lw          $v0, 0xCB0($s5)
    ctx->pc = 0x15e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3248)));
label_15e2d8:
    // 0x15e2d8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_15e2dc:
    // 0x15e2dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15e2e0:
    if (ctx->pc == 0x15E2E0u) {
        ctx->pc = 0x15E2E0u;
            // 0x15e2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E2E4u;
        goto label_15e2e4;
    }
    ctx->pc = 0x15E2DCu;
    {
        const bool branch_taken_0x15e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2DCu;
            // 0x15e2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2dc) {
            ctx->pc = 0x15E304u;
            goto label_15e304;
        }
    }
    ctx->pc = 0x15E2E4u;
label_15e2e4:
    // 0x15e2e4: 0xc059ca0  jal         func_167280
label_15e2e8:
    if (ctx->pc == 0x15E2E8u) {
        ctx->pc = 0x15E2E8u;
            // 0x15e2e8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15E2ECu;
        goto label_15e2ec;
    }
    ctx->pc = 0x15E2E4u;
    SET_GPR_U32(ctx, 31, 0x15E2ECu);
    ctx->pc = 0x15E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2E4u;
            // 0x15e2e8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167280u;
    if (runtime->hasFunction(0x167280u)) {
        auto targetFn = runtime->lookupFunction(0x167280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2ECu; }
        if (ctx->pc != 0x15E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundSphere__9CMapPartsFPf_0x167280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2ECu; }
        if (ctx->pc != 0x15E2ECu) { return; }
    }
    ctx->pc = 0x15E2ECu;
label_15e2ec:
    // 0x15e2ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e2f0:
    // 0x15e2f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x15e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15e2f4:
    // 0x15e2f4: 0xc05782c  jal         func_15E0B0
label_15e2f8:
    if (ctx->pc == 0x15E2F8u) {
        ctx->pc = 0x15E2F8u;
            // 0x15e2f8: 0x27a600b8  addiu       $a2, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->pc = 0x15E2FCu;
        goto label_15e2fc;
    }
    ctx->pc = 0x15E2F4u;
    SET_GPR_U32(ctx, 31, 0x15E2FCu);
    ctx->pc = 0x15E2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2F4u;
            // 0x15e2f8: 0x27a600b8  addiu       $a2, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E0B0u;
    if (runtime->hasFunction(0x15E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x15E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2FCu; }
        if (ctx->pc != 0x15E2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncPLight__4CMapFPfP15CFuncPointCheck_0x15e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2FCu; }
        if (ctx->pc != 0x15E2FCu) { return; }
    }
    ctx->pc = 0x15E2FCu;
label_15e2fc:
    // 0x15e2fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_15e300:
    if (ctx->pc == 0x15E300u) {
        ctx->pc = 0x15E300u;
            // 0x15e300: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E304u;
        goto label_15e304;
    }
    ctx->pc = 0x15E2FCu;
    {
        const bool branch_taken_0x15e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2FCu;
            // 0x15e300: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2fc) {
            ctx->pc = 0x15E30Cu;
            goto label_15e30c;
        }
    }
    ctx->pc = 0x15E304u;
label_15e304:
    // 0x15e304: 0x0  nop
    ctx->pc = 0x15e304u;
    // NOP
label_15e308:
    // 0x15e308: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15e308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e30c:
    // 0x15e30c: 0x0  nop
    ctx->pc = 0x15e30cu;
    // NOP
label_15e310:
    // 0x15e310: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
label_15e314:
    if (ctx->pc == 0x15E314u) {
        ctx->pc = 0x15E314u;
            // 0x15e314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15E318u;
        goto label_15e318;
    }
    ctx->pc = 0x15E310u;
    {
        const bool branch_taken_0x15e310 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x15E314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E310u;
            // 0x15e314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e310) {
            ctx->pc = 0x15E320u;
            goto label_15e320;
        }
    }
    ctx->pc = 0x15E318u;
label_15e318:
    // 0x15e318: 0xc050e40  jal         func_143900
label_15e31c:
    if (ctx->pc == 0x15E31Cu) {
        ctx->pc = 0x15E320u;
        goto label_15e320;
    }
    ctx->pc = 0x15E318u;
    SET_GPR_U32(ctx, 31, 0x15E320u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E320u; }
        if (ctx->pc != 0x15E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E320u; }
        if (ctx->pc != 0x15E320u) { return; }
    }
    ctx->pc = 0x15E320u;
label_15e320:
    // 0x15e320: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_15e324:
    if (ctx->pc == 0x15E324u) {
        ctx->pc = 0x15E328u;
        goto label_15e328;
    }
    ctx->pc = 0x15E320u;
    {
        const bool branch_taken_0x15e320 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e320) {
            ctx->pc = 0x15E340u;
            goto label_15e340;
        }
    }
    ctx->pc = 0x15E328u;
label_15e328:
    // 0x15e328: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15e328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15e32c:
    // 0x15e32c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x15e32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_15e330:
    // 0x15e330: 0x320f809  jalr        $t9
label_15e334:
    if (ctx->pc == 0x15E334u) {
        ctx->pc = 0x15E334u;
            // 0x15e334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E338u;
        goto label_15e338;
    }
    ctx->pc = 0x15E330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E338u);
        ctx->pc = 0x15E334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E330u;
            // 0x15e334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E338u; }
            if (ctx->pc != 0x15E338u) { return; }
        }
        }
    }
    ctx->pc = 0x15E338u;
label_15e338:
    // 0x15e338: 0x10000005  b           . + 4 + (0x5 << 2)
label_15e33c:
    if (ctx->pc == 0x15E33Cu) {
        ctx->pc = 0x15E340u;
        goto label_15e340;
    }
    ctx->pc = 0x15E338u;
    {
        const bool branch_taken_0x15e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e338) {
            ctx->pc = 0x15E350u;
            goto label_15e350;
        }
    }
    ctx->pc = 0x15E340u;
label_15e340:
    // 0x15e340: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x15e340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15e344:
    // 0x15e344: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15e348:
    // 0x15e348: 0x320f809  jalr        $t9
label_15e34c:
    if (ctx->pc == 0x15E34Cu) {
        ctx->pc = 0x15E34Cu;
            // 0x15e34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E350u;
        goto label_15e350;
    }
    ctx->pc = 0x15E348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E350u);
        ctx->pc = 0x15E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E348u;
            // 0x15e34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E350u; }
            if (ctx->pc != 0x15E350u) { return; }
        }
        }
    }
    ctx->pc = 0x15E350u;
label_15e350:
    // 0x15e350: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15e354:
    // 0x15e354: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15e354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e358:
    // 0x15e358: 0xc05787c  jal         func_15E1F0
label_15e35c:
    if (ctx->pc == 0x15E35Cu) {
        ctx->pc = 0x15E35Cu;
            // 0x15e35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E360u;
        goto label_15e360;
    }
    ctx->pc = 0x15E358u;
    SET_GPR_U32(ctx, 31, 0x15E360u);
    ctx->pc = 0x15E35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E358u;
            // 0x15e35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E1F0u;
    if (runtime->hasFunction(0x15E1F0u)) {
        auto targetFn = runtime->lookupFunction(0x15E1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E360u; }
        if (ctx->pc != 0x15E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFuncPLight__4CMapFi_0x15e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E360u; }
        if (ctx->pc != 0x15E360u) { return; }
    }
    ctx->pc = 0x15E360u;
label_15e360:
    // 0x15e360: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15e360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15e364:
    // 0x15e364: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15e364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_15e368:
    // 0x15e368: 0x8ea20360  lw          $v0, 0x360($s5)
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 864)));
label_15e36c:
    // 0x15e36c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x15e36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15e370:
    // 0x15e370: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_15e374:
    if (ctx->pc == 0x15E374u) {
        ctx->pc = 0x15E374u;
            // 0x15e374: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E378u;
        goto label_15e378;
    }
    ctx->pc = 0x15E370u;
    {
        const bool branch_taken_0x15e370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E370u;
            // 0x15e374: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e370) {
            ctx->pc = 0x15E2C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E378u;
label_15e378:
    // 0x15e378: 0xc050e40  jal         func_143900
label_15e37c:
    if (ctx->pc == 0x15E37Cu) {
        ctx->pc = 0x15E380u;
        goto label_15e380;
    }
    ctx->pc = 0x15E378u;
    SET_GPR_U32(ctx, 31, 0x15E380u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E380u; }
        if (ctx->pc != 0x15E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E380u; }
        if (ctx->pc != 0x15E380u) { return; }
    }
    ctx->pc = 0x15E380u;
label_15e380:
    // 0x15e380: 0x6e00005  bltz        $s7, . + 4 + (0x5 << 2)
label_15e384:
    if (ctx->pc == 0x15E384u) {
        ctx->pc = 0x15E384u;
            // 0x15e384: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E388u;
        goto label_15e388;
    }
    ctx->pc = 0x15E380u;
    {
        const bool branch_taken_0x15e380 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x15E384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E380u;
            // 0x15e384: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e380) {
            ctx->pc = 0x15E398u;
            goto label_15e398;
        }
    }
    ctx->pc = 0x15E388u;
label_15e388:
    // 0x15e388: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x15e388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15e38c:
    // 0x15e38c: 0xc050dc8  jal         func_143720
label_15e390:
    if (ctx->pc == 0x15E390u) {
        ctx->pc = 0x15E390u;
            // 0x15e390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E394u;
        goto label_15e394;
    }
    ctx->pc = 0x15E38Cu;
    SET_GPR_U32(ctx, 31, 0x15E394u);
    ctx->pc = 0x15E390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E38Cu;
            // 0x15e390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E394u; }
        if (ctx->pc != 0x15E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E394u; }
        if (ctx->pc != 0x15E394u) { return; }
    }
    ctx->pc = 0x15E394u;
label_15e394:
    // 0x15e394: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15e394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e398:
    // 0x15e398: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15e39c:
    // 0x15e39c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15e3a0:
    // 0x15e3a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e3a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15e3a4:
    // 0x15e3a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e3a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15e3a8:
    // 0x15e3a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e3ac:
    // 0x15e3ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e3acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e3b0:
    // 0x15e3b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e3b4:
    // 0x15e3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e3b8:
    // 0x15e3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e3bc:
    // 0x15e3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e3c0:
    // 0x15e3c0: 0x3e00008  jr          $ra
label_15e3c4:
    if (ctx->pc == 0x15E3C4u) {
        ctx->pc = 0x15E3C4u;
            // 0x15e3c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x15E3C8u;
        goto label_fallthrough_0x15e3c0;
    }
    ctx->pc = 0x15E3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3C0u;
            // 0x15e3c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15e3c0:
    ctx->pc = 0x15E3C8u;
}
