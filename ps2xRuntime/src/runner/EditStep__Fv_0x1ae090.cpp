#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditStep__Fv
// Address: 0x1ae090 - 0x1ae3cc
void EditStep__Fv_0x1ae090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditStep__Fv_0x1ae090");
#endif

    switch (ctx->pc) {
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae094u: goto label_1ae094;
        case 0x1ae098u: goto label_1ae098;
        case 0x1ae09cu: goto label_1ae09c;
        case 0x1ae0a0u: goto label_1ae0a0;
        case 0x1ae0a4u: goto label_1ae0a4;
        case 0x1ae0a8u: goto label_1ae0a8;
        case 0x1ae0acu: goto label_1ae0ac;
        case 0x1ae0b0u: goto label_1ae0b0;
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0b8u: goto label_1ae0b8;
        case 0x1ae0bcu: goto label_1ae0bc;
        case 0x1ae0c0u: goto label_1ae0c0;
        case 0x1ae0c4u: goto label_1ae0c4;
        case 0x1ae0c8u: goto label_1ae0c8;
        case 0x1ae0ccu: goto label_1ae0cc;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0d4u: goto label_1ae0d4;
        case 0x1ae0d8u: goto label_1ae0d8;
        case 0x1ae0dcu: goto label_1ae0dc;
        case 0x1ae0e0u: goto label_1ae0e0;
        case 0x1ae0e4u: goto label_1ae0e4;
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae0ecu: goto label_1ae0ec;
        case 0x1ae0f0u: goto label_1ae0f0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae0f8u: goto label_1ae0f8;
        case 0x1ae0fcu: goto label_1ae0fc;
        case 0x1ae100u: goto label_1ae100;
        case 0x1ae104u: goto label_1ae104;
        case 0x1ae108u: goto label_1ae108;
        case 0x1ae10cu: goto label_1ae10c;
        case 0x1ae110u: goto label_1ae110;
        case 0x1ae114u: goto label_1ae114;
        case 0x1ae118u: goto label_1ae118;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae120u: goto label_1ae120;
        case 0x1ae124u: goto label_1ae124;
        case 0x1ae128u: goto label_1ae128;
        case 0x1ae12cu: goto label_1ae12c;
        case 0x1ae130u: goto label_1ae130;
        case 0x1ae134u: goto label_1ae134;
        case 0x1ae138u: goto label_1ae138;
        case 0x1ae13cu: goto label_1ae13c;
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae1f4u: goto label_1ae1f4;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae1fcu: goto label_1ae1fc;
        case 0x1ae200u: goto label_1ae200;
        case 0x1ae204u: goto label_1ae204;
        case 0x1ae208u: goto label_1ae208;
        case 0x1ae20cu: goto label_1ae20c;
        case 0x1ae210u: goto label_1ae210;
        case 0x1ae214u: goto label_1ae214;
        case 0x1ae218u: goto label_1ae218;
        case 0x1ae21cu: goto label_1ae21c;
        case 0x1ae220u: goto label_1ae220;
        case 0x1ae224u: goto label_1ae224;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae238u: goto label_1ae238;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae244u: goto label_1ae244;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae24cu: goto label_1ae24c;
        case 0x1ae250u: goto label_1ae250;
        case 0x1ae254u: goto label_1ae254;
        case 0x1ae258u: goto label_1ae258;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae260u: goto label_1ae260;
        case 0x1ae264u: goto label_1ae264;
        case 0x1ae268u: goto label_1ae268;
        case 0x1ae26cu: goto label_1ae26c;
        case 0x1ae270u: goto label_1ae270;
        case 0x1ae274u: goto label_1ae274;
        case 0x1ae278u: goto label_1ae278;
        case 0x1ae27cu: goto label_1ae27c;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae288u: goto label_1ae288;
        case 0x1ae28cu: goto label_1ae28c;
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae294u: goto label_1ae294;
        case 0x1ae298u: goto label_1ae298;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2a0u: goto label_1ae2a0;
        case 0x1ae2a4u: goto label_1ae2a4;
        case 0x1ae2a8u: goto label_1ae2a8;
        case 0x1ae2acu: goto label_1ae2ac;
        case 0x1ae2b0u: goto label_1ae2b0;
        case 0x1ae2b4u: goto label_1ae2b4;
        case 0x1ae2b8u: goto label_1ae2b8;
        case 0x1ae2bcu: goto label_1ae2bc;
        case 0x1ae2c0u: goto label_1ae2c0;
        case 0x1ae2c4u: goto label_1ae2c4;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2ccu: goto label_1ae2cc;
        case 0x1ae2d0u: goto label_1ae2d0;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2d8u: goto label_1ae2d8;
        case 0x1ae2dcu: goto label_1ae2dc;
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae380u: goto label_1ae380;
        case 0x1ae384u: goto label_1ae384;
        case 0x1ae388u: goto label_1ae388;
        case 0x1ae38cu: goto label_1ae38c;
        case 0x1ae390u: goto label_1ae390;
        case 0x1ae394u: goto label_1ae394;
        case 0x1ae398u: goto label_1ae398;
        case 0x1ae39cu: goto label_1ae39c;
        case 0x1ae3a0u: goto label_1ae3a0;
        case 0x1ae3a4u: goto label_1ae3a4;
        case 0x1ae3a8u: goto label_1ae3a8;
        case 0x1ae3acu: goto label_1ae3ac;
        case 0x1ae3b0u: goto label_1ae3b0;
        case 0x1ae3b4u: goto label_1ae3b4;
        case 0x1ae3b8u: goto label_1ae3b8;
        case 0x1ae3bcu: goto label_1ae3bc;
        case 0x1ae3c0u: goto label_1ae3c0;
        case 0x1ae3c4u: goto label_1ae3c4;
        case 0x1ae3c8u: goto label_1ae3c8;
        default: break;
    }

    ctx->pc = 0x1ae090u;

label_1ae090:
    // 0x1ae090: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ae090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1ae094:
    // 0x1ae094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ae094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ae098:
    // 0x1ae098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ae09c:
    // 0x1ae09c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ae0a0:
    // 0x1ae0a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ae0a4:
    // 0x1ae0a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae0a8:
    // 0x1ae0a8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae0ac:
    // 0x1ae0ac: 0xc0a0ed8  jal         func_283B60
label_1ae0b0:
    if (ctx->pc == 0x1AE0B0u) {
        ctx->pc = 0x1AE0B0u;
            // 0x1ae0b0: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AE0B4u;
        goto label_1ae0b4;
    }
    ctx->pc = 0x1AE0ACu;
    SET_GPR_U32(ctx, 31, 0x1AE0B4u);
    ctx->pc = 0x1AE0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0ACu;
            // 0x1ae0b0: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0B4u; }
        if (ctx->pc != 0x1AE0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0B4u; }
        if (ctx->pc != 0x1AE0B4u) { return; }
    }
    ctx->pc = 0x1AE0B4u;
label_1ae0b4:
    // 0x1ae0b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ae0b8:
    if (ctx->pc == 0x1AE0B8u) {
        ctx->pc = 0x1AE0B8u;
            // 0x1ae0b8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->pc = 0x1AE0BCu;
        goto label_1ae0bc;
    }
    ctx->pc = 0x1AE0B4u;
    {
        const bool branch_taken_0x1ae0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0B4u;
            // 0x1ae0b8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b4) {
            ctx->pc = 0x1AE0D0u;
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE0BCu;
label_1ae0bc:
    // 0x1ae0bc: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ae0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae0c0:
    // 0x1ae0c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ae0c4:
    // 0x1ae0c4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ae0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1ae0c8:
    // 0x1ae0c8: 0x8c23a498  lw          $v1, -0x5B68($at)
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
label_1ae0cc:
    // 0x1ae0cc: 0xac43057c  sw          $v1, 0x57C($v0)
    ctx->pc = 0x1ae0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 3));
label_1ae0d0:
    // 0x1ae0d0: 0xc06a708  jal         func_1A9C20
label_1ae0d4:
    if (ctx->pc == 0x1AE0D4u) {
        ctx->pc = 0x1AE0D4u;
            // 0x1ae0d4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE0D8u;
        goto label_1ae0d8;
    }
    ctx->pc = 0x1AE0D0u;
    SET_GPR_U32(ctx, 31, 0x1AE0D8u);
    ctx->pc = 0x1AE0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0D0u;
            // 0x1ae0d4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C20u;
    if (runtime->hasFunction(0x1A9C20u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0D8u; }
        if (ctx->pc != 0x1AE0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditModeChgStep__FP6CScene_0x1a9c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0D8u; }
        if (ctx->pc != 0x1AE0D8u) { return; }
    }
    ctx->pc = 0x1AE0D8u;
label_1ae0d8:
    // 0x1ae0d8: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ae0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae0dc:
    // 0x1ae0dc: 0x8c622e88  lw          $v0, 0x2E88($v1)
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11912)));
label_1ae0e0:
    // 0x1ae0e0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1ae0e4:
    if (ctx->pc == 0x1AE0E4u) {
        ctx->pc = 0x1AE0E8u;
        goto label_1ae0e8;
    }
    ctx->pc = 0x1AE0E0u;
    {
        const bool branch_taken_0x1ae0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0e0) {
            ctx->pc = 0x1AE1F8u;
            goto label_1ae1f8;
        }
    }
    ctx->pc = 0x1AE0E8u;
label_1ae0e8:
    // 0x1ae0e8: 0x8c712e8c  lw          $s1, 0x2E8C($v1)
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11916)));
label_1ae0ec:
    // 0x1ae0ec: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ae0f0:
    // 0x1ae0f0: 0x24846418  addiu       $a0, $a0, 0x6418
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25624));
label_1ae0f4:
    // 0x1ae0f4: 0xc04a0d2  jal         func_128348
label_1ae0f8:
    if (ctx->pc == 0x1AE0F8u) {
        ctx->pc = 0x1AE0F8u;
            // 0x1ae0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0FCu;
        goto label_1ae0fc;
    }
    ctx->pc = 0x1AE0F4u;
    SET_GPR_U32(ctx, 31, 0x1AE0FCu);
    ctx->pc = 0x1AE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0F4u;
            // 0x1ae0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0FCu; }
        if (ctx->pc != 0x1AE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE0FCu; }
        if (ctx->pc != 0x1AE0FCu) { return; }
    }
    ctx->pc = 0x1AE0FCu;
label_1ae0fc:
    // 0x1ae0fc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae100:
    // 0x1ae100: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ae104:
    // 0x1ae104: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x1ae104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_1ae108:
    // 0x1ae108: 0x1622002b  bne         $s1, $v0, . + 4 + (0x2B << 2)
label_1ae10c:
    if (ctx->pc == 0x1AE10Cu) {
        ctx->pc = 0x1AE10Cu;
            // 0x1ae10c: 0x24902e90  addiu       $s0, $a0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
        ctx->pc = 0x1AE110u;
        goto label_1ae110;
    }
    ctx->pc = 0x1AE108u;
    {
        const bool branch_taken_0x1ae108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE108u;
            // 0x1ae10c: 0x24902e90  addiu       $s0, $a0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae108) {
            ctx->pc = 0x1AE1B8u;
            goto label_1ae1b8;
        }
    }
    ctx->pc = 0x1AE110u;
label_1ae110:
    // 0x1ae110: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ae110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ae114:
    // 0x1ae114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae118:
    // 0x1ae118: 0xc0bbe78  jal         func_2EF9E0
label_1ae11c:
    if (ctx->pc == 0x1AE11Cu) {
        ctx->pc = 0x1AE11Cu;
            // 0x1ae11c: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->pc = 0x1AE120u;
        goto label_1ae120;
    }
    ctx->pc = 0x1AE118u;
    SET_GPR_U32(ctx, 31, 0x1AE120u);
    ctx->pc = 0x1AE11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE118u;
            // 0x1ae11c: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9E0u;
    if (runtime->hasFunction(0x2EF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE120u; }
        if (ctx->pc != 0x1AE120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEvent__10CEditEventFP15CSceneEventData_0x2ef9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE120u; }
        if (ctx->pc != 0x1AE120u) { return; }
    }
    ctx->pc = 0x1AE120u;
label_1ae120:
    // 0x1ae120: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1ae124:
    if (ctx->pc == 0x1AE124u) {
        ctx->pc = 0x1AE128u;
        goto label_1ae128;
    }
    ctx->pc = 0x1AE120u;
    {
        const bool branch_taken_0x1ae120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae120) {
            ctx->pc = 0x1AE1F0u;
            goto label_1ae1f0;
        }
    }
    ctx->pc = 0x1AE128u;
label_1ae128:
    // 0x1ae128: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae12c:
    // 0x1ae12c: 0xc0a0e30  jal         func_2838C0
label_1ae130:
    if (ctx->pc == 0x1AE130u) {
        ctx->pc = 0x1AE130u;
            // 0x1ae130: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1AE134u;
        goto label_1ae134;
    }
    ctx->pc = 0x1AE12Cu;
    SET_GPR_U32(ctx, 31, 0x1AE134u);
    ctx->pc = 0x1AE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE12Cu;
            // 0x1ae130: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE134u; }
        if (ctx->pc != 0x1AE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE134u; }
        if (ctx->pc != 0x1AE134u) { return; }
    }
    ctx->pc = 0x1AE134u;
label_1ae134:
    // 0x1ae134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae138:
    if (ctx->pc == 0x1AE138u) {
        ctx->pc = 0x1AE13Cu;
        goto label_1ae13c;
    }
    ctx->pc = 0x1AE134u;
    {
        const bool branch_taken_0x1ae134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae134) {
            ctx->pc = 0x1AE158u;
            goto label_1ae158;
        }
    }
    ctx->pc = 0x1AE13Cu;
label_1ae13c:
    // 0x1ae13c: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae140:
    // 0x1ae140: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1ae140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1ae144:
    // 0x1ae144: 0x320f809  jalr        $t9
label_1ae148:
    if (ctx->pc == 0x1AE148u) {
        ctx->pc = 0x1AE148u;
            // 0x1ae148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE14Cu;
        goto label_1ae14c;
    }
    ctx->pc = 0x1AE144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE14Cu);
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE144u;
            // 0x1ae148: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE14Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE14Cu; }
            if (ctx->pc != 0x1AE14Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AE14Cu;
label_1ae14c:
    // 0x1ae14c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1ae14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ae150:
    // 0x1ae150: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1ae154:
    if (ctx->pc == 0x1AE154u) {
        ctx->pc = 0x1AE158u;
        goto label_1ae158;
    }
    ctx->pc = 0x1AE150u;
    {
        const bool branch_taken_0x1ae150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ae150) {
            ctx->pc = 0x1AE160u;
            goto label_1ae160;
        }
    }
    ctx->pc = 0x1AE158u;
label_1ae158:
    // 0x1ae158: 0x10000095  b           . + 4 + (0x95 << 2)
label_1ae15c:
    if (ctx->pc == 0x1AE15Cu) {
        ctx->pc = 0x1AE15Cu;
            // 0x1ae15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE160u;
        goto label_1ae160;
    }
    ctx->pc = 0x1AE158u;
    {
        const bool branch_taken_0x1ae158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE158u;
            // 0x1ae15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae158) {
            ctx->pc = 0x1AE3B0u;
            goto label_1ae3b0;
        }
    }
    ctx->pc = 0x1AE160u;
label_1ae160:
    // 0x1ae160: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae164:
    // 0x1ae164: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ae164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1ae168:
    // 0x1ae168: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ae16c:
    if (ctx->pc == 0x1AE16Cu) {
        ctx->pc = 0x1AE170u;
        goto label_1ae170;
    }
    ctx->pc = 0x1AE168u;
    {
        const bool branch_taken_0x1ae168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae168) {
            ctx->pc = 0x1AE1A8u;
            goto label_1ae1a8;
        }
    }
    ctx->pc = 0x1AE170u;
label_1ae170:
    // 0x1ae170: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ae174:
    // 0x1ae174: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
label_1ae178:
    if (ctx->pc == 0x1AE178u) {
        ctx->pc = 0x1AE178u;
            // 0x1ae178: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AE17Cu;
        goto label_1ae17c;
    }
    ctx->pc = 0x1AE174u;
    {
        const bool branch_taken_0x1ae174 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1AE178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE174u;
            // 0x1ae178: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae174) {
            ctx->pc = 0x1AE1A8u;
            goto label_1ae1a8;
        }
    }
    ctx->pc = 0x1AE17Cu;
label_1ae17c:
    // 0x1ae17c: 0xc04a0d2  jal         func_128348
label_1ae180:
    if (ctx->pc == 0x1AE180u) {
        ctx->pc = 0x1AE180u;
            // 0x1ae180: 0x24846428  addiu       $a0, $a0, 0x6428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25640));
        ctx->pc = 0x1AE184u;
        goto label_1ae184;
    }
    ctx->pc = 0x1AE17Cu;
    SET_GPR_U32(ctx, 31, 0x1AE184u);
    ctx->pc = 0x1AE180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE17Cu;
            // 0x1ae180: 0x24846428  addiu       $a0, $a0, 0x6428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE184u; }
        if (ctx->pc != 0x1AE184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE184u; }
        if (ctx->pc != 0x1AE184u) { return; }
    }
    ctx->pc = 0x1AE184u;
label_1ae184:
    // 0x1ae184: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae188:
    // 0x1ae188: 0xc09542c  jal         func_2550B0
label_1ae18c:
    if (ctx->pc == 0x1AE18Cu) {
        ctx->pc = 0x1AE18Cu;
            // 0x1ae18c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1AE190u;
        goto label_1ae190;
    }
    ctx->pc = 0x1AE188u;
    SET_GPR_U32(ctx, 31, 0x1AE190u);
    ctx->pc = 0x1AE18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE188u;
            // 0x1ae18c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE190u; }
        if (ctx->pc != 0x1AE190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE190u; }
        if (ctx->pc != 0x1AE190u) { return; }
    }
    ctx->pc = 0x1AE190u;
label_1ae190:
    // 0x1ae190: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1ae194:
    if (ctx->pc == 0x1AE194u) {
        ctx->pc = 0x1AE198u;
        goto label_1ae198;
    }
    ctx->pc = 0x1AE190u;
    {
        const bool branch_taken_0x1ae190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ae190) {
            ctx->pc = 0x1AE1A8u;
            goto label_1ae1a8;
        }
    }
    ctx->pc = 0x1AE198u;
label_1ae198:
    // 0x1ae198: 0xc0698d8  jal         func_1A6360
label_1ae19c:
    if (ctx->pc == 0x1AE19Cu) {
        ctx->pc = 0x1AE19Cu;
            // 0x1ae19c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE1A0u;
        goto label_1ae1a0;
    }
    ctx->pc = 0x1AE198u;
    SET_GPR_U32(ctx, 31, 0x1AE1A0u);
    ctx->pc = 0x1AE19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE198u;
            // 0x1ae19c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6360u;
    if (runtime->hasFunction(0x1A6360u)) {
        auto targetFn = runtime->lookupFunction(0x1A6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1A0u; }
        if (ctx->pc != 0x1AE1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetViewMode__FP6CScene_0x1a6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1A0u; }
        if (ctx->pc != 0x1AE1A0u) { return; }
    }
    ctx->pc = 0x1AE1A0u;
label_1ae1a0:
    // 0x1ae1a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae1a4:
    // 0x1ae1a4: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ae1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ae1a8:
    // 0x1ae1a8: 0xc06a6d8  jal         func_1A9B60
label_1ae1ac:
    if (ctx->pc == 0x1AE1ACu) {
        ctx->pc = 0x1AE1B0u;
        goto label_1ae1b0;
    }
    ctx->pc = 0x1AE1A8u;
    SET_GPR_U32(ctx, 31, 0x1AE1B0u);
    ctx->pc = 0x1A9B60u;
    if (runtime->hasFunction(0x1A9B60u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1B0u; }
        if (ctx->pc != 0x1AE1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LockCharaCtrl__Fv_0x1a9b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1B0u; }
        if (ctx->pc != 0x1AE1B0u) { return; }
    }
    ctx->pc = 0x1AE1B0u;
label_1ae1b0:
    // 0x1ae1b0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1ae1b4:
    if (ctx->pc == 0x1AE1B4u) {
        ctx->pc = 0x1AE1B4u;
            // 0x1ae1b4: 0x8f828cb0  lw          $v0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE1B8u;
        goto label_1ae1b8;
    }
    ctx->pc = 0x1AE1B0u;
    {
        const bool branch_taken_0x1ae1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1B0u;
            // 0x1ae1b4: 0x8f828cb0  lw          $v0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1b0) {
            ctx->pc = 0x1AE1F4u;
            goto label_1ae1f4;
        }
    }
    ctx->pc = 0x1AE1B8u;
label_1ae1b8:
    // 0x1ae1b8: 0xc0953f8  jal         func_254FE0
label_1ae1bc:
    if (ctx->pc == 0x1AE1BCu) {
        ctx->pc = 0x1AE1C0u;
        goto label_1ae1c0;
    }
    ctx->pc = 0x1AE1B8u;
    SET_GPR_U32(ctx, 31, 0x1AE1C0u);
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1C0u; }
        if (ctx->pc != 0x1AE1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1C0u; }
        if (ctx->pc != 0x1AE1C0u) { return; }
    }
    ctx->pc = 0x1AE1C0u;
label_1ae1c0:
    // 0x1ae1c0: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae1c4:
    // 0x1ae1c4: 0x8c622e54  lw          $v0, 0x2E54($v1)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11860)));
label_1ae1c8:
    // 0x1ae1c8: 0xac622e58  sw          $v0, 0x2E58($v1)
    ctx->pc = 0x1ae1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11864), GPR_U32(ctx, 2));
label_1ae1cc:
    // 0x1ae1cc: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1ae1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae1d0:
    // 0x1ae1d0: 0xc09542c  jal         func_2550B0
label_1ae1d4:
    if (ctx->pc == 0x1AE1D4u) {
        ctx->pc = 0x1AE1D4u;
            // 0x1ae1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1D8u;
        goto label_1ae1d8;
    }
    ctx->pc = 0x1AE1D0u;
    SET_GPR_U32(ctx, 31, 0x1AE1D8u);
    ctx->pc = 0x1AE1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1D0u;
            // 0x1ae1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1D8u; }
        if (ctx->pc != 0x1AE1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1D8u; }
        if (ctx->pc != 0x1AE1D8u) { return; }
    }
    ctx->pc = 0x1AE1D8u;
label_1ae1d8:
    // 0x1ae1d8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1ae1dc:
    if (ctx->pc == 0x1AE1DCu) {
        ctx->pc = 0x1AE1E0u;
        goto label_1ae1e0;
    }
    ctx->pc = 0x1AE1D8u;
    {
        const bool branch_taken_0x1ae1d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ae1d8) {
            ctx->pc = 0x1AE1F0u;
            goto label_1ae1f0;
        }
    }
    ctx->pc = 0x1AE1E0u;
label_1ae1e0:
    // 0x1ae1e0: 0xc0698d8  jal         func_1A6360
label_1ae1e4:
    if (ctx->pc == 0x1AE1E4u) {
        ctx->pc = 0x1AE1E4u;
            // 0x1ae1e4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE1E8u;
        goto label_1ae1e8;
    }
    ctx->pc = 0x1AE1E0u;
    SET_GPR_U32(ctx, 31, 0x1AE1E8u);
    ctx->pc = 0x1AE1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1E0u;
            // 0x1ae1e4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6360u;
    if (runtime->hasFunction(0x1A6360u)) {
        auto targetFn = runtime->lookupFunction(0x1A6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1E8u; }
        if (ctx->pc != 0x1AE1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetViewMode__FP6CScene_0x1a6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1E8u; }
        if (ctx->pc != 0x1AE1E8u) { return; }
    }
    ctx->pc = 0x1AE1E8u;
label_1ae1e8:
    // 0x1ae1e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae1ec:
    // 0x1ae1ec: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ae1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ae1f0:
    // 0x1ae1f0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae1f4:
    // 0x1ae1f4: 0xac402e88  sw          $zero, 0x2E88($v0)
    ctx->pc = 0x1ae1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11912), GPR_U32(ctx, 0));
label_1ae1f8:
    // 0x1ae1f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1ae1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1ae1fc:
    // 0x1ae1fc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae200:
    // 0x1ae200: 0xc052d1c  jal         func_14B470
label_1ae204:
    if (ctx->pc == 0x1AE204u) {
        ctx->pc = 0x1AE204u;
            // 0x1ae204: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1AE208u;
        goto label_1ae208;
    }
    ctx->pc = 0x1AE200u;
    SET_GPR_U32(ctx, 31, 0x1AE208u);
    ctx->pc = 0x1AE204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE200u;
            // 0x1ae204: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE208u; }
        if (ctx->pc != 0x1AE208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE208u; }
        if (ctx->pc != 0x1AE208u) { return; }
    }
    ctx->pc = 0x1AE208u;
label_1ae208:
    // 0x1ae208: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1ae20c:
    if (ctx->pc == 0x1AE20Cu) {
        ctx->pc = 0x1AE210u;
        goto label_1ae210;
    }
    ctx->pc = 0x1AE208u;
    {
        const bool branch_taken_0x1ae208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae208) {
            ctx->pc = 0x1AE244u;
            goto label_1ae244;
        }
    }
    ctx->pc = 0x1AE210u;
label_1ae210:
    // 0x1ae210: 0xc0953f8  jal         func_254FE0
label_1ae214:
    if (ctx->pc == 0x1AE214u) {
        ctx->pc = 0x1AE214u;
            // 0x1ae214: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE218u;
        goto label_1ae218;
    }
    ctx->pc = 0x1AE210u;
    SET_GPR_U32(ctx, 31, 0x1AE218u);
    ctx->pc = 0x1AE214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE210u;
            // 0x1ae214: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE218u; }
        if (ctx->pc != 0x1AE218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE218u; }
        if (ctx->pc != 0x1AE218u) { return; }
    }
    ctx->pc = 0x1AE218u;
label_1ae218:
    // 0x1ae218: 0xc0b7d00  jal         func_2DF400
label_1ae21c:
    if (ctx->pc == 0x1AE21Cu) {
        ctx->pc = 0x1AE220u;
        goto label_1ae220;
    }
    ctx->pc = 0x1AE218u;
    SET_GPR_U32(ctx, 31, 0x1AE220u);
    ctx->pc = 0x2DF400u;
    if (runtime->hasFunction(0x2DF400u)) {
        auto targetFn = runtime->lookupFunction(0x2DF400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE220u; }
        if (ctx->pc != 0x1AE220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadMapScript__Fv_0x2df400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE220u; }
        if (ctx->pc != 0x1AE220u) { return; }
    }
    ctx->pc = 0x1AE220u;
label_1ae220:
    // 0x1ae220: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ae220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae224:
    // 0x1ae224: 0x8c622e54  lw          $v0, 0x2E54($v1)
    ctx->pc = 0x1ae224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11860)));
label_1ae228:
    // 0x1ae228: 0xac622e58  sw          $v0, 0x2E58($v1)
    ctx->pc = 0x1ae228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11864), GPR_U32(ctx, 2));
label_1ae22c:
    // 0x1ae22c: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae230:
    // 0x1ae230: 0xc09542c  jal         func_2550B0
label_1ae234:
    if (ctx->pc == 0x1AE234u) {
        ctx->pc = 0x1AE234u;
            // 0x1ae234: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->pc = 0x1AE238u;
        goto label_1ae238;
    }
    ctx->pc = 0x1AE230u;
    SET_GPR_U32(ctx, 31, 0x1AE238u);
    ctx->pc = 0x1AE234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE230u;
            // 0x1ae234: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE238u; }
        if (ctx->pc != 0x1AE238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE238u; }
        if (ctx->pc != 0x1AE238u) { return; }
    }
    ctx->pc = 0x1AE238u;
label_1ae238:
    // 0x1ae238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ae23c:
    if (ctx->pc == 0x1AE23Cu) {
        ctx->pc = 0x1AE23Cu;
            // 0x1ae23c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AE240u;
        goto label_1ae240;
    }
    ctx->pc = 0x1AE238u;
    {
        const bool branch_taken_0x1ae238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE238u;
            // 0x1ae23c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae238) {
            ctx->pc = 0x1AE244u;
            goto label_1ae244;
        }
    }
    ctx->pc = 0x1AE240u;
label_1ae240:
    // 0x1ae240: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ae240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ae244:
    // 0x1ae244: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae248:
    // 0x1ae248: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae24c:
    // 0x1ae24c: 0xc0a1214  jal         func_284850
label_1ae250:
    if (ctx->pc == 0x1AE250u) {
        ctx->pc = 0x1AE250u;
            // 0x1ae250: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1AE254u;
        goto label_1ae254;
    }
    ctx->pc = 0x1AE24Cu;
    SET_GPR_U32(ctx, 31, 0x1AE254u);
    ctx->pc = 0x1AE250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE24Cu;
            // 0x1ae250: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE254u; }
        if (ctx->pc != 0x1AE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE254u; }
        if (ctx->pc != 0x1AE254u) { return; }
    }
    ctx->pc = 0x1AE254u;
label_1ae254:
    // 0x1ae254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae258:
    // 0x1ae258: 0x8f828c74  lw          $v0, -0x738C($gp)
    ctx->pc = 0x1ae258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
label_1ae25c:
    // 0x1ae25c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1ae260:
    if (ctx->pc == 0x1AE260u) {
        ctx->pc = 0x1AE264u;
        goto label_1ae264;
    }
    ctx->pc = 0x1AE25Cu;
    {
        const bool branch_taken_0x1ae25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae25c) {
            ctx->pc = 0x1AE2D8u;
            goto label_1ae2d8;
        }
    }
    ctx->pc = 0x1AE264u;
label_1ae264:
    // 0x1ae264: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1ae264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae268:
    // 0x1ae268: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1ae26c:
    // 0x1ae26c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae270:
    // 0x1ae270: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ae274:
    // 0x1ae274: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1ae274u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1ae278:
    // 0x1ae278: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ae278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae27c:
    // 0x1ae27c: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x1ae27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae280:
    // 0x1ae280: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1ae284:
    if (ctx->pc == 0x1AE284u) {
        ctx->pc = 0x1AE284u;
            // 0x1ae284: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->pc = 0x1AE288u;
        goto label_1ae288;
    }
    ctx->pc = 0x1AE280u;
    {
        const bool branch_taken_0x1ae280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE280u;
            // 0x1ae284: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae280) {
            ctx->pc = 0x1AE2D8u;
            goto label_1ae2d8;
        }
    }
    ctx->pc = 0x1AE288u;
label_1ae288:
    // 0x1ae288: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae28c:
    // 0x1ae28c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1ae28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1ae290:
    // 0x1ae290: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x1ae290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1ae294:
    // 0x1ae294: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1ae294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ae298:
    // 0x1ae298: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1ae29c:
    if (ctx->pc == 0x1AE29Cu) {
        ctx->pc = 0x1AE2A0u;
        goto label_1ae2a0;
    }
    ctx->pc = 0x1AE298u;
    {
        const bool branch_taken_0x1ae298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae298) {
            ctx->pc = 0x1AE2C4u;
            goto label_1ae2c4;
        }
    }
    ctx->pc = 0x1AE2A0u;
label_1ae2a0:
    // 0x1ae2a0: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1ae2a4:
    // 0x1ae2a4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1ae2a8:
    // 0x1ae2a8: 0x320f809  jalr        $t9
label_1ae2ac:
    if (ctx->pc == 0x1AE2ACu) {
        ctx->pc = 0x1AE2ACu;
            // 0x1ae2ac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1AE2B0u;
        goto label_1ae2b0;
    }
    ctx->pc = 0x1AE2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE2B0u);
        ctx->pc = 0x1AE2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2A8u;
            // 0x1ae2ac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2B0u; }
            if (ctx->pc != 0x1AE2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE2B0u;
label_1ae2b0:
    // 0x1ae2b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1ae2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ae2b4:
    // 0x1ae2b4: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1ae2b8:
    // 0x1ae2b8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1ae2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1ae2bc:
    // 0x1ae2bc: 0x320f809  jalr        $t9
label_1ae2c0:
    if (ctx->pc == 0x1AE2C0u) {
        ctx->pc = 0x1AE2C4u;
        goto label_1ae2c4;
    }
    ctx->pc = 0x1AE2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE2C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE2C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2C4u; }
            if (ctx->pc != 0x1AE2C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE2C4u;
label_1ae2c4:
    // 0x1ae2c4: 0x0  nop
    ctx->pc = 0x1ae2c4u;
    // NOP
label_1ae2c8:
    // 0x1ae2c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae2cc:
    // 0x1ae2cc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1ae2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1ae2d0:
    // 0x1ae2d0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1ae2d4:
    if (ctx->pc == 0x1AE2D4u) {
        ctx->pc = 0x1AE2D4u;
            // 0x1ae2d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1AE2D8u;
        goto label_1ae2d8;
    }
    ctx->pc = 0x1AE2D0u;
    {
        const bool branch_taken_0x1ae2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2D0u;
            // 0x1ae2d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2d0) {
            ctx->pc = 0x1AE28Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE2D8u;
label_1ae2d8:
    // 0x1ae2d8: 0xc0a9d80  jal         func_2A7600
label_1ae2dc:
    if (ctx->pc == 0x1AE2DCu) {
        ctx->pc = 0x1AE2DCu;
            // 0x1ae2dc: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE2E0u;
        goto label_1ae2e0;
    }
    ctx->pc = 0x1AE2D8u;
    SET_GPR_U32(ctx, 31, 0x1AE2E0u);
    ctx->pc = 0x1AE2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2D8u;
            // 0x1ae2dc: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7600u;
    if (runtime->hasFunction(0x2A7600u)) {
        auto targetFn = runtime->lookupFunction(0x2A7600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2E0u; }
        if (ctx->pc != 0x1AE2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrePlaySeSrc__6CSceneFv_0x2a7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2E0u; }
        if (ctx->pc != 0x1AE2E0u) { return; }
    }
    ctx->pc = 0x1AE2E0u;
label_1ae2e0:
    // 0x1ae2e0: 0xc0a9fec  jal         func_2A7FB0
label_1ae2e4:
    if (ctx->pc == 0x1AE2E4u) {
        ctx->pc = 0x1AE2E4u;
            // 0x1ae2e4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE2E8u;
        goto label_1ae2e8;
    }
    ctx->pc = 0x1AE2E0u;
    SET_GPR_U32(ctx, 31, 0x1AE2E8u);
    ctx->pc = 0x1AE2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2E0u;
            // 0x1ae2e4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7FB0u;
    if (runtime->hasFunction(0x2A7FB0u)) {
        auto targetFn = runtime->lookupFunction(0x2A7FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2E8u; }
        if (ctx->pc != 0x1AE2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayMapSeSrc__6CSceneFv_0x2a7fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2E8u; }
        if (ctx->pc != 0x1AE2E8u) { return; }
    }
    ctx->pc = 0x1AE2E8u;
label_1ae2e8:
    // 0x1ae2e8: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ae2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ae2ec:
    // 0x1ae2ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae2f0:
    // 0x1ae2f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ae2f4:
    if (ctx->pc == 0x1AE2F4u) {
        ctx->pc = 0x1AE2F8u;
        goto label_1ae2f8;
    }
    ctx->pc = 0x1AE2F0u;
    {
        const bool branch_taken_0x1ae2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae2f0) {
            ctx->pc = 0x1AE300u;
            goto label_1ae300;
        }
    }
    ctx->pc = 0x1AE2F8u;
label_1ae2f8:
    // 0x1ae2f8: 0xc069db0  jal         func_1A76C0
label_1ae2fc:
    if (ctx->pc == 0x1AE2FCu) {
        ctx->pc = 0x1AE2FCu;
            // 0x1ae2fc: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE300u;
        goto label_1ae300;
    }
    ctx->pc = 0x1AE2F8u;
    SET_GPR_U32(ctx, 31, 0x1AE300u);
    ctx->pc = 0x1AE2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2F8u;
            // 0x1ae2fc: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A76C0u;
    if (runtime->hasFunction(0x1A76C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A76C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE300u; }
        if (ctx->pc != 0x1AE300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditStepChara__FP6CScene_0x1a76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE300u; }
        if (ctx->pc != 0x1AE300u) { return; }
    }
    ctx->pc = 0x1AE300u;
label_1ae300:
    // 0x1ae300: 0xc0b21e4  jal         func_2C8790
label_1ae304:
    if (ctx->pc == 0x1AE304u) {
        ctx->pc = 0x1AE304u;
            // 0x1ae304: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE308u;
        goto label_1ae308;
    }
    ctx->pc = 0x1AE300u;
    SET_GPR_U32(ctx, 31, 0x1AE308u);
    ctx->pc = 0x1AE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE300u;
            // 0x1ae304: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8790u;
    if (runtime->hasFunction(0x2C8790u)) {
        auto targetFn = runtime->lookupFunction(0x2C8790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE308u; }
        if (ctx->pc != 0x1AE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStep__6CSceneFv_0x2c8790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE308u; }
        if (ctx->pc != 0x1AE308u) { return; }
    }
    ctx->pc = 0x1AE308u;
label_1ae308:
    // 0x1ae308: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae30c:
    // 0x1ae30c: 0xc0a115c  jal         func_284570
label_1ae310:
    if (ctx->pc == 0x1AE310u) {
        ctx->pc = 0x1AE310u;
            // 0x1ae310: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AE314u;
        goto label_1ae314;
    }
    ctx->pc = 0x1AE30Cu;
    SET_GPR_U32(ctx, 31, 0x1AE314u);
    ctx->pc = 0x1AE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE30Cu;
            // 0x1ae310: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284570u;
    if (runtime->hasFunction(0x284570u)) {
        auto targetFn = runtime->lookupFunction(0x284570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE314u; }
        if (ctx->pc != 0x1AE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepEffectScript__6CSceneFi_0x284570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE314u; }
        if (ctx->pc != 0x1AE314u) { return; }
    }
    ctx->pc = 0x1AE314u;
label_1ae314:
    // 0x1ae314: 0xc0b7d7c  jal         func_2DF5F0
label_1ae318:
    if (ctx->pc == 0x1AE318u) {
        ctx->pc = 0x1AE31Cu;
        goto label_1ae31c;
    }
    ctx->pc = 0x1AE314u;
    SET_GPR_U32(ctx, 31, 0x1AE31Cu);
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE31Cu; }
        if (ctx->pc != 0x1AE31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE31Cu; }
        if (ctx->pc != 0x1AE31Cu) { return; }
    }
    ctx->pc = 0x1AE31Cu;
label_1ae31c:
    // 0x1ae31c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ae320:
    if (ctx->pc == 0x1AE320u) {
        ctx->pc = 0x1AE324u;
        goto label_1ae324;
    }
    ctx->pc = 0x1AE31Cu;
    {
        const bool branch_taken_0x1ae31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae31c) {
            ctx->pc = 0x1AE334u;
            goto label_1ae334;
        }
    }
    ctx->pc = 0x1AE324u;
label_1ae324:
    // 0x1ae324: 0xc0bdf38  jal         func_2F7CE0
label_1ae328:
    if (ctx->pc == 0x1AE328u) {
        ctx->pc = 0x1AE328u;
            // 0x1ae328: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE32Cu;
        goto label_1ae32c;
    }
    ctx->pc = 0x1AE324u;
    SET_GPR_U32(ctx, 31, 0x1AE32Cu);
    ctx->pc = 0x1AE328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE324u;
            // 0x1ae328: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7CE0u;
    if (runtime->hasFunction(0x2F7CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE32Cu; }
        if (ctx->pc != 0x1AE32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFirePowder__FP6CScene_0x2f7ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE32Cu; }
        if (ctx->pc != 0x1AE32Cu) { return; }
    }
    ctx->pc = 0x1AE32Cu;
label_1ae32c:
    // 0x1ae32c: 0xc0be2b0  jal         func_2F8AC0
label_1ae330:
    if (ctx->pc == 0x1AE330u) {
        ctx->pc = 0x1AE330u;
            // 0x1ae330: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AE334u;
        goto label_1ae334;
    }
    ctx->pc = 0x1AE32Cu;
    SET_GPR_U32(ctx, 31, 0x1AE334u);
    ctx->pc = 0x1AE330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE32Cu;
            // 0x1ae330: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8AC0u;
    if (runtime->hasFunction(0x2F8AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F8AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE334u; }
        if (ctx->pc != 0x1AE334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepGeyserEffect__FP6CScene_0x2f8ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE334u; }
        if (ctx->pc != 0x1AE334u) { return; }
    }
    ctx->pc = 0x1AE334u;
label_1ae334:
    // 0x1ae334: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae338:
    // 0x1ae338: 0xc0a0e30  jal         func_2838C0
label_1ae33c:
    if (ctx->pc == 0x1AE33Cu) {
        ctx->pc = 0x1AE33Cu;
            // 0x1ae33c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1AE340u;
        goto label_1ae340;
    }
    ctx->pc = 0x1AE338u;
    SET_GPR_U32(ctx, 31, 0x1AE340u);
    ctx->pc = 0x1AE33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE338u;
            // 0x1ae33c: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE340u; }
        if (ctx->pc != 0x1AE340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE340u; }
        if (ctx->pc != 0x1AE340u) { return; }
    }
    ctx->pc = 0x1AE340u;
label_1ae340:
    // 0x1ae340: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ae344:
    if (ctx->pc == 0x1AE344u) {
        ctx->pc = 0x1AE348u;
        goto label_1ae348;
    }
    ctx->pc = 0x1AE340u;
    {
        const bool branch_taken_0x1ae340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae340) {
            ctx->pc = 0x1AE35Cu;
            goto label_1ae35c;
        }
    }
    ctx->pc = 0x1AE348u;
label_1ae348:
    // 0x1ae348: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x1ae348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae34c:
    // 0x1ae34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae350:
    // 0x1ae350: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ae350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ae354:
    // 0x1ae354: 0x320f809  jalr        $t9
label_1ae358:
    if (ctx->pc == 0x1AE358u) {
        ctx->pc = 0x1AE358u;
            // 0x1ae358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AE35Cu;
        goto label_1ae35c;
    }
    ctx->pc = 0x1AE354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE35Cu);
        ctx->pc = 0x1AE358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE354u;
            // 0x1ae358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE35Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE35Cu; }
            if (ctx->pc != 0x1AE35Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AE35Cu;
label_1ae35c:
    // 0x1ae35c: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1ae35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ae360:
    // 0x1ae360: 0xc0bdd10  jal         func_2F7440
label_1ae364:
    if (ctx->pc == 0x1AE364u) {
        ctx->pc = 0x1AE364u;
            // 0x1ae364: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->pc = 0x1AE368u;
        goto label_1ae368;
    }
    ctx->pc = 0x1AE360u;
    SET_GPR_U32(ctx, 31, 0x1AE368u);
    ctx->pc = 0x1AE364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE360u;
            // 0x1ae364: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7440u;
    if (runtime->hasFunction(0x2F7440u)) {
        auto targetFn = runtime->lookupFunction(0x2F7440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE368u; }
        if (ctx->pc != 0x1AE368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditExceptionStep__FiP6CScene_0x2f7440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE368u; }
        if (ctx->pc != 0x1AE368u) { return; }
    }
    ctx->pc = 0x1AE368u;
label_1ae368:
    // 0x1ae368: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ae36c:
    // 0x1ae36c: 0xc054ee8  jal         func_153BA0
label_1ae370:
    if (ctx->pc == 0x1AE370u) {
        ctx->pc = 0x1AE370u;
            // 0x1ae370: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
        ctx->pc = 0x1AE374u;
        goto label_1ae374;
    }
    ctx->pc = 0x1AE36Cu;
    SET_GPR_U32(ctx, 31, 0x1AE374u);
    ctx->pc = 0x1AE370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE36Cu;
            // 0x1ae370: 0x2484c660  addiu       $a0, $a0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE374u; }
        if (ctx->pc != 0x1AE374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE374u; }
        if (ctx->pc != 0x1AE374u) { return; }
    }
    ctx->pc = 0x1AE374u;
label_1ae374:
    // 0x1ae374: 0xc0659dc  jal         func_196770
label_1ae378:
    if (ctx->pc == 0x1AE378u) {
        ctx->pc = 0x1AE37Cu;
        goto label_1ae37c;
    }
    ctx->pc = 0x1AE374u;
    SET_GPR_U32(ctx, 31, 0x1AE37Cu);
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE37Cu; }
        if (ctx->pc != 0x1AE37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE37Cu; }
        if (ctx->pc != 0x1AE37Cu) { return; }
    }
    ctx->pc = 0x1AE37Cu;
label_1ae37c:
    // 0x1ae37c: 0xc054ee8  jal         func_153BA0
label_1ae380:
    if (ctx->pc == 0x1AE380u) {
        ctx->pc = 0x1AE380u;
            // 0x1ae380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE384u;
        goto label_1ae384;
    }
    ctx->pc = 0x1AE37Cu;
    SET_GPR_U32(ctx, 31, 0x1AE384u);
    ctx->pc = 0x1AE380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE37Cu;
            // 0x1ae380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE384u; }
        if (ctx->pc != 0x1AE384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE384u; }
        if (ctx->pc != 0x1AE384u) { return; }
    }
    ctx->pc = 0x1AE384u;
label_1ae384:
    // 0x1ae384: 0xc0659e0  jal         func_196780
label_1ae388:
    if (ctx->pc == 0x1AE388u) {
        ctx->pc = 0x1AE388u;
            // 0x1ae388: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AE38Cu;
        goto label_1ae38c;
    }
    ctx->pc = 0x1AE384u;
    SET_GPR_U32(ctx, 31, 0x1AE38Cu);
    ctx->pc = 0x1AE388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE384u;
            // 0x1ae388: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE38Cu; }
        if (ctx->pc != 0x1AE38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE38Cu; }
        if (ctx->pc != 0x1AE38Cu) { return; }
    }
    ctx->pc = 0x1AE38Cu;
label_1ae38c:
    // 0x1ae38c: 0xc054ee8  jal         func_153BA0
label_1ae390:
    if (ctx->pc == 0x1AE390u) {
        ctx->pc = 0x1AE390u;
            // 0x1ae390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE394u;
        goto label_1ae394;
    }
    ctx->pc = 0x1AE38Cu;
    SET_GPR_U32(ctx, 31, 0x1AE394u);
    ctx->pc = 0x1AE390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE38Cu;
            // 0x1ae390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE394u; }
        if (ctx->pc != 0x1AE394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE394u; }
        if (ctx->pc != 0x1AE394u) { return; }
    }
    ctx->pc = 0x1AE394u;
label_1ae394:
    // 0x1ae394: 0xc0659e0  jal         func_196780
label_1ae398:
    if (ctx->pc == 0x1AE398u) {
        ctx->pc = 0x1AE398u;
            // 0x1ae398: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AE39Cu;
        goto label_1ae39c;
    }
    ctx->pc = 0x1AE394u;
    SET_GPR_U32(ctx, 31, 0x1AE39Cu);
    ctx->pc = 0x1AE398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE394u;
            // 0x1ae398: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE39Cu; }
        if (ctx->pc != 0x1AE39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE39Cu; }
        if (ctx->pc != 0x1AE39Cu) { return; }
    }
    ctx->pc = 0x1AE39Cu;
label_1ae39c:
    // 0x1ae39c: 0xc054ee8  jal         func_153BA0
label_1ae3a0:
    if (ctx->pc == 0x1AE3A0u) {
        ctx->pc = 0x1AE3A0u;
            // 0x1ae3a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3A4u;
        goto label_1ae3a4;
    }
    ctx->pc = 0x1AE39Cu;
    SET_GPR_U32(ctx, 31, 0x1AE3A4u);
    ctx->pc = 0x1AE3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE39Cu;
            // 0x1ae3a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3A4u; }
        if (ctx->pc != 0x1AE3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3A4u; }
        if (ctx->pc != 0x1AE3A4u) { return; }
    }
    ctx->pc = 0x1AE3A4u;
label_1ae3a4:
    // 0x1ae3a4: 0xc0c64f4  jal         func_3193D0
label_1ae3a8:
    if (ctx->pc == 0x1AE3A8u) {
        ctx->pc = 0x1AE3ACu;
        goto label_1ae3ac;
    }
    ctx->pc = 0x1AE3A4u;
    SET_GPR_U32(ctx, 31, 0x1AE3ACu);
    ctx->pc = 0x3193D0u;
    if (runtime->hasFunction(0x3193D0u)) {
        auto targetFn = runtime->lookupFunction(0x3193D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3ACu; }
        if (ctx->pc != 0x1AE3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepHelpMes__Fv_0x3193d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3ACu; }
        if (ctx->pc != 0x1AE3ACu) { return; }
    }
    ctx->pc = 0x1AE3ACu;
label_1ae3ac:
    // 0x1ae3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae3b0:
    // 0x1ae3b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ae3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae3b4:
    // 0x1ae3b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ae3b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae3b8:
    // 0x1ae3b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae3bc:
    // 0x1ae3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae3c0:
    // 0x1ae3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae3c4:
    // 0x1ae3c4: 0x3e00008  jr          $ra
label_1ae3c8:
    if (ctx->pc == 0x1AE3C8u) {
        ctx->pc = 0x1AE3C8u;
            // 0x1ae3c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AE3CCu;
        goto label_fallthrough_0x1ae3c4;
    }
    ctx->pc = 0x1AE3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3C4u;
            // 0x1ae3c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ae3c4:
    ctx->pc = 0x1AE3CCu;
}
