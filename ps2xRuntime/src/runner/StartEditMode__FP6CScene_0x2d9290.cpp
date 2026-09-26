#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartEditMode__FP6CScene
// Address: 0x2d9290 - 0x2d9408
void StartEditMode__FP6CScene_0x2d9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartEditMode__FP6CScene_0x2d9290");
#endif

    switch (ctx->pc) {
        case 0x2d9290u: goto label_2d9290;
        case 0x2d9294u: goto label_2d9294;
        case 0x2d9298u: goto label_2d9298;
        case 0x2d929cu: goto label_2d929c;
        case 0x2d92a0u: goto label_2d92a0;
        case 0x2d92a4u: goto label_2d92a4;
        case 0x2d92a8u: goto label_2d92a8;
        case 0x2d92acu: goto label_2d92ac;
        case 0x2d92b0u: goto label_2d92b0;
        case 0x2d92b4u: goto label_2d92b4;
        case 0x2d92b8u: goto label_2d92b8;
        case 0x2d92bcu: goto label_2d92bc;
        case 0x2d92c0u: goto label_2d92c0;
        case 0x2d92c4u: goto label_2d92c4;
        case 0x2d92c8u: goto label_2d92c8;
        case 0x2d92ccu: goto label_2d92cc;
        case 0x2d92d0u: goto label_2d92d0;
        case 0x2d92d4u: goto label_2d92d4;
        case 0x2d92d8u: goto label_2d92d8;
        case 0x2d92dcu: goto label_2d92dc;
        case 0x2d92e0u: goto label_2d92e0;
        case 0x2d92e4u: goto label_2d92e4;
        case 0x2d92e8u: goto label_2d92e8;
        case 0x2d92ecu: goto label_2d92ec;
        case 0x2d92f0u: goto label_2d92f0;
        case 0x2d92f4u: goto label_2d92f4;
        case 0x2d92f8u: goto label_2d92f8;
        case 0x2d92fcu: goto label_2d92fc;
        case 0x2d9300u: goto label_2d9300;
        case 0x2d9304u: goto label_2d9304;
        case 0x2d9308u: goto label_2d9308;
        case 0x2d930cu: goto label_2d930c;
        case 0x2d9310u: goto label_2d9310;
        case 0x2d9314u: goto label_2d9314;
        case 0x2d9318u: goto label_2d9318;
        case 0x2d931cu: goto label_2d931c;
        case 0x2d9320u: goto label_2d9320;
        case 0x2d9324u: goto label_2d9324;
        case 0x2d9328u: goto label_2d9328;
        case 0x2d932cu: goto label_2d932c;
        case 0x2d9330u: goto label_2d9330;
        case 0x2d9334u: goto label_2d9334;
        case 0x2d9338u: goto label_2d9338;
        case 0x2d933cu: goto label_2d933c;
        case 0x2d9340u: goto label_2d9340;
        case 0x2d9344u: goto label_2d9344;
        case 0x2d9348u: goto label_2d9348;
        case 0x2d934cu: goto label_2d934c;
        case 0x2d9350u: goto label_2d9350;
        case 0x2d9354u: goto label_2d9354;
        case 0x2d9358u: goto label_2d9358;
        case 0x2d935cu: goto label_2d935c;
        case 0x2d9360u: goto label_2d9360;
        case 0x2d9364u: goto label_2d9364;
        case 0x2d9368u: goto label_2d9368;
        case 0x2d936cu: goto label_2d936c;
        case 0x2d9370u: goto label_2d9370;
        case 0x2d9374u: goto label_2d9374;
        case 0x2d9378u: goto label_2d9378;
        case 0x2d937cu: goto label_2d937c;
        case 0x2d9380u: goto label_2d9380;
        case 0x2d9384u: goto label_2d9384;
        case 0x2d9388u: goto label_2d9388;
        case 0x2d938cu: goto label_2d938c;
        case 0x2d9390u: goto label_2d9390;
        case 0x2d9394u: goto label_2d9394;
        case 0x2d9398u: goto label_2d9398;
        case 0x2d939cu: goto label_2d939c;
        case 0x2d93a0u: goto label_2d93a0;
        case 0x2d93a4u: goto label_2d93a4;
        case 0x2d93a8u: goto label_2d93a8;
        case 0x2d93acu: goto label_2d93ac;
        case 0x2d93b0u: goto label_2d93b0;
        case 0x2d93b4u: goto label_2d93b4;
        case 0x2d93b8u: goto label_2d93b8;
        case 0x2d93bcu: goto label_2d93bc;
        case 0x2d93c0u: goto label_2d93c0;
        case 0x2d93c4u: goto label_2d93c4;
        case 0x2d93c8u: goto label_2d93c8;
        case 0x2d93ccu: goto label_2d93cc;
        case 0x2d93d0u: goto label_2d93d0;
        case 0x2d93d4u: goto label_2d93d4;
        case 0x2d93d8u: goto label_2d93d8;
        case 0x2d93dcu: goto label_2d93dc;
        case 0x2d93e0u: goto label_2d93e0;
        case 0x2d93e4u: goto label_2d93e4;
        case 0x2d93e8u: goto label_2d93e8;
        case 0x2d93ecu: goto label_2d93ec;
        case 0x2d93f0u: goto label_2d93f0;
        case 0x2d93f4u: goto label_2d93f4;
        case 0x2d93f8u: goto label_2d93f8;
        case 0x2d93fcu: goto label_2d93fc;
        case 0x2d9400u: goto label_2d9400;
        case 0x2d9404u: goto label_2d9404;
        default: break;
    }

    ctx->pc = 0x2d9290u;

label_2d9290:
    // 0x2d9290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9294:
    // 0x2d9294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2d9298:
    // 0x2d9298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d929c:
    // 0x2d929c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d92a0:
    // 0x2d92a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d92a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d92a4:
    // 0x2d92a4: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x2d92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_2d92a8:
    // 0x2d92a8: 0xc0a0ed8  jal         func_283B60
label_2d92ac:
    if (ctx->pc == 0x2D92ACu) {
        ctx->pc = 0x2D92ACu;
            // 0x2d92ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D92B0u;
        goto label_2d92b0;
    }
    ctx->pc = 0x2D92A8u;
    SET_GPR_U32(ctx, 31, 0x2D92B0u);
    ctx->pc = 0x2D92ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D92A8u;
            // 0x2d92ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D92B0u; }
        if (ctx->pc != 0x2D92B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D92B0u; }
        if (ctx->pc != 0x2D92B0u) { return; }
    }
    ctx->pc = 0x2D92B0u;
label_2d92b0:
    // 0x2d92b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2d92b4:
    if (ctx->pc == 0x2D92B4u) {
        ctx->pc = 0x2D92B8u;
        goto label_2d92b8;
    }
    ctx->pc = 0x2D92B0u;
    {
        const bool branch_taken_0x2d92b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92b0) {
            ctx->pc = 0x2D9308u;
            goto label_2d9308;
        }
    }
    ctx->pc = 0x2D92B8u;
label_2d92b8:
    // 0x2d92b8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2d92b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d92bc:
    // 0x2d92bc: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2d92bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2d92c0:
    // 0x2d92c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d92c4:
    // 0x2d92c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2d92c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2d92c8:
    // 0x2d92c8: 0x320f809  jalr        $t9
label_2d92cc:
    if (ctx->pc == 0x2D92CCu) {
        ctx->pc = 0x2D92CCu;
            // 0x2d92cc: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->pc = 0x2D92D0u;
        goto label_2d92d0;
    }
    ctx->pc = 0x2D92C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D92D0u);
        ctx->pc = 0x2D92CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D92C8u;
            // 0x2d92cc: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D92D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D92D0u; }
            if (ctx->pc != 0x2D92D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2D92D0u;
label_2d92d0:
    // 0x2d92d0: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2d92d4:
    // 0x2d92d4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d92d8:
    // 0x2d92d8: 0x24c688f0  addiu       $a2, $a2, -0x7710
    ctx->pc = 0x2d92d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936816));
label_2d92dc:
    // 0x2d92dc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2d92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2d92e0:
    // 0x2d92e0: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2d92e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d92e4:
    // 0x2d92e4: 0x24848920  addiu       $a0, $a0, -0x76E0
    ctx->pc = 0x2d92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
label_2d92e8:
    // 0x2d92e8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2d92ec:
    // 0x2d92ec: 0x24638910  addiu       $v1, $v1, -0x76F0
    ctx->pc = 0x2d92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936848));
label_2d92f0:
    // 0x2d92f0: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x2d92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
label_2d92f4:
    // 0x2d92f4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2d92f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2d92f8:
    // 0x2d92f8: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2d92f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d92fc:
    // 0x2d92fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2d92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2d9300:
    // 0x2d9300: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2d9300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d9304:
    // 0x2d9304: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d9304u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2d9308:
    // 0x2d9308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d930c:
    // 0x2d930c: 0xc0b6478  jal         func_2D91E0
label_2d9310:
    if (ctx->pc == 0x2D9310u) {
        ctx->pc = 0x2D9310u;
            // 0x2d9310: 0xaf829e0c  sw          $v0, -0x61F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942220), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9314u;
        goto label_2d9314;
    }
    ctx->pc = 0x2D930Cu;
    SET_GPR_U32(ctx, 31, 0x2D9314u);
    ctx->pc = 0x2D9310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D930Cu;
            // 0x2d9310: 0xaf829e0c  sw          $v0, -0x61F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D91E0u;
    if (runtime->hasFunction(0x2D91E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9314u; }
        if (ctx->pc != 0x2D9314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEditFlag__Fv_0x2d91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9314u; }
        if (ctx->pc != 0x2D9314u) { return; }
    }
    ctx->pc = 0x2D9314u;
label_2d9314:
    // 0x2d9314: 0xc0b6274  jal         func_2D89D0
label_2d9318:
    if (ctx->pc == 0x2D9318u) {
        ctx->pc = 0x2D931Cu;
        goto label_2d931c;
    }
    ctx->pc = 0x2D9314u;
    SET_GPR_U32(ctx, 31, 0x2D931Cu);
    ctx->pc = 0x2D89D0u;
    if (runtime->hasFunction(0x2D89D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D89D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D931Cu; }
        if (ctx->pc != 0x2D931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntiSystemMes__Fv_0x2d89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D931Cu; }
        if (ctx->pc != 0x2D931Cu) { return; }
    }
    ctx->pc = 0x2D931Cu;
label_2d931c:
    // 0x2d931c: 0x8e052e58  lw          $a1, 0x2E58($s0)
    ctx->pc = 0x2d931cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11864)));
label_2d9320:
    // 0x2d9320: 0xc0a0e30  jal         func_2838C0
label_2d9324:
    if (ctx->pc == 0x2D9324u) {
        ctx->pc = 0x2D9324u;
            // 0x2d9324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9328u;
        goto label_2d9328;
    }
    ctx->pc = 0x2D9320u;
    SET_GPR_U32(ctx, 31, 0x2D9328u);
    ctx->pc = 0x2D9324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9320u;
            // 0x2d9324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9328u; }
        if (ctx->pc != 0x2D9328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9328u; }
        if (ctx->pc != 0x2D9328u) { return; }
    }
    ctx->pc = 0x2D9328u;
label_2d9328:
    // 0x2d9328: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d9328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d932c:
    // 0x2d932c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d9330:
    if (ctx->pc == 0x2D9330u) {
        ctx->pc = 0x2D9330u;
            // 0x2d9330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9334u;
        goto label_2d9334;
    }
    ctx->pc = 0x2D932Cu;
    {
        const bool branch_taken_0x2d932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D932Cu;
            // 0x2d9330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d932c) {
            ctx->pc = 0x2D9340u;
            goto label_2d9340;
        }
    }
    ctx->pc = 0x2D9334u;
label_2d9334:
    // 0x2d9334: 0xc04c678  jal         func_1319E0
label_2d9338:
    if (ctx->pc == 0x2D9338u) {
        ctx->pc = 0x2D933Cu;
        goto label_2d933c;
    }
    ctx->pc = 0x2D9334u;
    SET_GPR_U32(ctx, 31, 0x2D933Cu);
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D933Cu; }
        if (ctx->pc != 0x2D933Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D933Cu; }
        if (ctx->pc != 0x2D933Cu) { return; }
    }
    ctx->pc = 0x2D933Cu;
label_2d933c:
    // 0x2d933c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d933cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d9340:
    // 0x2d9340: 0x8e052e54  lw          $a1, 0x2E54($s0)
    ctx->pc = 0x2d9340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
label_2d9344:
    // 0x2d9344: 0xc0a0e30  jal         func_2838C0
label_2d9348:
    if (ctx->pc == 0x2D9348u) {
        ctx->pc = 0x2D9348u;
            // 0x2d9348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D934Cu;
        goto label_2d934c;
    }
    ctx->pc = 0x2D9344u;
    SET_GPR_U32(ctx, 31, 0x2D934Cu);
    ctx->pc = 0x2D9348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9344u;
            // 0x2d9348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D934Cu; }
        if (ctx->pc != 0x2D934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D934Cu; }
        if (ctx->pc != 0x2D934Cu) { return; }
    }
    ctx->pc = 0x2D934Cu;
label_2d934c:
    // 0x2d934c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d934cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9350:
    // 0x2d9350: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_2d9354:
    if (ctx->pc == 0x2D9354u) {
        ctx->pc = 0x2D9354u;
            // 0x2d9354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9358u;
        goto label_2d9358;
    }
    ctx->pc = 0x2D9350u;
    {
        const bool branch_taken_0x2d9350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9350u;
            // 0x2d9354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9350) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D9358u;
label_2d9358:
    // 0x2d9358: 0xc04c668  jal         func_1319A0
label_2d935c:
    if (ctx->pc == 0x2D935Cu) {
        ctx->pc = 0x2D9360u;
        goto label_2d9360;
    }
    ctx->pc = 0x2D9358u;
    SET_GPR_U32(ctx, 31, 0x2D9360u);
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9360u; }
        if (ctx->pc != 0x2D9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9360u; }
        if (ctx->pc != 0x2D9360u) { return; }
    }
    ctx->pc = 0x2D9360u;
label_2d9360:
    // 0x2d9360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d9360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d9364:
    // 0x2d9364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9368:
    // 0x2d9368: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d9368u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d936c:
    // 0x2d936c: 0xc04c698  jal         func_131A60
label_2d9370:
    if (ctx->pc == 0x2D9370u) {
        ctx->pc = 0x2D9370u;
            // 0x2d9370: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D9374u;
        goto label_2d9374;
    }
    ctx->pc = 0x2D936Cu;
    SET_GPR_U32(ctx, 31, 0x2D9374u);
    ctx->pc = 0x2D9370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D936Cu;
            // 0x2d9370: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9374u; }
        if (ctx->pc != 0x2D9374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9374u; }
        if (ctx->pc != 0x2D9374u) { return; }
    }
    ctx->pc = 0x2D9374u;
label_2d9374:
    // 0x2d9374: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d9374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d9378:
    // 0x2d9378: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x2d9378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2d937c:
    // 0x2d937c: 0xc42c88f0  lwc1        $f12, -0x7710($at)
    ctx->pc = 0x2d937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d9380:
    // 0x2d9380: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2d9380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2d9384:
    // 0x2d9384: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d9384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d9388:
    // 0x2d9388: 0xc42d88f4  lwc1        $f13, -0x770C($at)
    ctx->pc = 0x2d9388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d938c:
    // 0x2d938c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d9390:
    // 0x2d9390: 0xc42e88f8  lwc1        $f14, -0x7708($at)
    ctx->pc = 0x2d9390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2d9394:
    // 0x2d9394: 0x320f809  jalr        $t9
label_2d9398:
    if (ctx->pc == 0x2D9398u) {
        ctx->pc = 0x2D9398u;
            // 0x2d9398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D939Cu;
        goto label_2d939c;
    }
    ctx->pc = 0x2D9394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D939Cu);
        ctx->pc = 0x2D9398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9394u;
            // 0x2d9398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D939Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D939Cu; }
            if (ctx->pc != 0x2D939Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2D939Cu;
label_2d939c:
    // 0x2d939c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2d93a0:
    // 0x2d93a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d93a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d93a4:
    // 0x2d93a4: 0xc04c68c  jal         func_131A30
label_2d93a8:
    if (ctx->pc == 0x2D93A8u) {
        ctx->pc = 0x2D93A8u;
            // 0x2d93a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D93ACu;
        goto label_2d93ac;
    }
    ctx->pc = 0x2D93A4u;
    SET_GPR_U32(ctx, 31, 0x2D93ACu);
    ctx->pc = 0x2D93A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93A4u;
            // 0x2d93a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93ACu; }
        if (ctx->pc != 0x2D93ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93ACu; }
        if (ctx->pc != 0x2D93ACu) { return; }
    }
    ctx->pc = 0x2D93ACu;
label_2d93ac:
    // 0x2d93ac: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2d93acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2d93b0:
    // 0x2d93b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d93b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d93b4:
    // 0x2d93b4: 0xc04c680  jal         func_131A00
label_2d93b8:
    if (ctx->pc == 0x2D93B8u) {
        ctx->pc = 0x2D93B8u;
            // 0x2d93b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D93BCu;
        goto label_2d93bc;
    }
    ctx->pc = 0x2D93B4u;
    SET_GPR_U32(ctx, 31, 0x2D93BCu);
    ctx->pc = 0x2D93B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93B4u;
            // 0x2d93b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93BCu; }
        if (ctx->pc != 0x2D93BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93BCu; }
        if (ctx->pc != 0x2D93BCu) { return; }
    }
    ctx->pc = 0x2D93BCu;
label_2d93bc:
    // 0x2d93bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d93bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d93c0:
    // 0x2d93c0: 0xc04c670  jal         func_1319C0
label_2d93c4:
    if (ctx->pc == 0x2D93C4u) {
        ctx->pc = 0x2D93C4u;
            // 0x2d93c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D93C8u;
        goto label_2d93c8;
    }
    ctx->pc = 0x2D93C0u;
    SET_GPR_U32(ctx, 31, 0x2D93C8u);
    ctx->pc = 0x2D93C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93C0u;
            // 0x2d93c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93C8u; }
        if (ctx->pc != 0x2D93C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93C8u; }
        if (ctx->pc != 0x2D93C8u) { return; }
    }
    ctx->pc = 0x2D93C8u;
label_2d93c8:
    // 0x2d93c8: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x2d93c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2d93cc:
    // 0x2d93cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d93ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d93d0:
    // 0x2d93d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d93d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d93d4:
    // 0x2d93d4: 0x320f809  jalr        $t9
label_2d93d8:
    if (ctx->pc == 0x2D93D8u) {
        ctx->pc = 0x2D93D8u;
            // 0x2d93d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D93DCu;
        goto label_2d93dc;
    }
    ctx->pc = 0x2D93D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D93DCu);
        ctx->pc = 0x2D93D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93D4u;
            // 0x2d93d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D93DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D93DCu; }
            if (ctx->pc != 0x2D93DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2D93DCu;
label_2d93dc:
    // 0x2d93dc: 0xc0beaf8  jal         func_2FABE0
label_2d93e0:
    if (ctx->pc == 0x2D93E0u) {
        ctx->pc = 0x2D93E4u;
        goto label_2d93e4;
    }
    ctx->pc = 0x2D93DCu;
    SET_GPR_U32(ctx, 31, 0x2D93E4u);
    ctx->pc = 0x2FABE0u;
    if (runtime->hasFunction(0x2FABE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93E4u; }
        if (ctx->pc != 0x2D93E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceEffect__Fv_0x2fabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93E4u; }
        if (ctx->pc != 0x2D93E4u) { return; }
    }
    ctx->pc = 0x2D93E4u;
label_2d93e4:
    // 0x2d93e4: 0xc0b7490  jal         func_2DD240
label_2d93e8:
    if (ctx->pc == 0x2D93E8u) {
        ctx->pc = 0x2D93E8u;
            // 0x2d93e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D93ECu;
        goto label_2d93ec;
    }
    ctx->pc = 0x2D93E4u;
    SET_GPR_U32(ctx, 31, 0x2D93ECu);
    ctx->pc = 0x2D93E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D93E4u;
            // 0x2d93e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD240u;
    if (runtime->hasFunction(0x2DD240u)) {
        auto targetFn = runtime->lookupFunction(0x2DD240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93ECu; }
        if (ctx->pc != 0x2D93ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBalanceDraw__FP6CScene_0x2dd240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D93ECu; }
        if (ctx->pc != 0x2D93ECu) { return; }
    }
    ctx->pc = 0x2D93ECu;
label_2d93ec:
    // 0x2d93ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d93ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d93f0:
    // 0x2d93f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d93f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d93f4:
    // 0x2d93f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d93f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d93f8:
    // 0x2d93f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d93fc:
    // 0x2d93fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d93fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9400:
    // 0x2d9400: 0x3e00008  jr          $ra
label_2d9404:
    if (ctx->pc == 0x2D9404u) {
        ctx->pc = 0x2D9404u;
            // 0x2d9404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D9408u;
        goto label_fallthrough_0x2d9400;
    }
    ctx->pc = 0x2D9400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9400u;
            // 0x2d9404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d9400:
    ctx->pc = 0x2D9408u;
}
