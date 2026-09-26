#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clash__5CBPotFPfPfPf
// Address: 0x2cc280 - 0x2cc3f0
void Clash__5CBPotFPfPfPf_0x2cc280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clash__5CBPotFPfPfPf_0x2cc280");
#endif

    switch (ctx->pc) {
        case 0x2cc280u: goto label_2cc280;
        case 0x2cc284u: goto label_2cc284;
        case 0x2cc288u: goto label_2cc288;
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc290u: goto label_2cc290;
        case 0x2cc294u: goto label_2cc294;
        case 0x2cc298u: goto label_2cc298;
        case 0x2cc29cu: goto label_2cc29c;
        case 0x2cc2a0u: goto label_2cc2a0;
        case 0x2cc2a4u: goto label_2cc2a4;
        case 0x2cc2a8u: goto label_2cc2a8;
        case 0x2cc2acu: goto label_2cc2ac;
        case 0x2cc2b0u: goto label_2cc2b0;
        case 0x2cc2b4u: goto label_2cc2b4;
        case 0x2cc2b8u: goto label_2cc2b8;
        case 0x2cc2bcu: goto label_2cc2bc;
        case 0x2cc2c0u: goto label_2cc2c0;
        case 0x2cc2c4u: goto label_2cc2c4;
        case 0x2cc2c8u: goto label_2cc2c8;
        case 0x2cc2ccu: goto label_2cc2cc;
        case 0x2cc2d0u: goto label_2cc2d0;
        case 0x2cc2d4u: goto label_2cc2d4;
        case 0x2cc2d8u: goto label_2cc2d8;
        case 0x2cc2dcu: goto label_2cc2dc;
        case 0x2cc2e0u: goto label_2cc2e0;
        case 0x2cc2e4u: goto label_2cc2e4;
        case 0x2cc2e8u: goto label_2cc2e8;
        case 0x2cc2ecu: goto label_2cc2ec;
        case 0x2cc2f0u: goto label_2cc2f0;
        case 0x2cc2f4u: goto label_2cc2f4;
        case 0x2cc2f8u: goto label_2cc2f8;
        case 0x2cc2fcu: goto label_2cc2fc;
        case 0x2cc300u: goto label_2cc300;
        case 0x2cc304u: goto label_2cc304;
        case 0x2cc308u: goto label_2cc308;
        case 0x2cc30cu: goto label_2cc30c;
        case 0x2cc310u: goto label_2cc310;
        case 0x2cc314u: goto label_2cc314;
        case 0x2cc318u: goto label_2cc318;
        case 0x2cc31cu: goto label_2cc31c;
        case 0x2cc320u: goto label_2cc320;
        case 0x2cc324u: goto label_2cc324;
        case 0x2cc328u: goto label_2cc328;
        case 0x2cc32cu: goto label_2cc32c;
        case 0x2cc330u: goto label_2cc330;
        case 0x2cc334u: goto label_2cc334;
        case 0x2cc338u: goto label_2cc338;
        case 0x2cc33cu: goto label_2cc33c;
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc344u: goto label_2cc344;
        case 0x2cc348u: goto label_2cc348;
        case 0x2cc34cu: goto label_2cc34c;
        case 0x2cc350u: goto label_2cc350;
        case 0x2cc354u: goto label_2cc354;
        case 0x2cc358u: goto label_2cc358;
        case 0x2cc35cu: goto label_2cc35c;
        case 0x2cc360u: goto label_2cc360;
        case 0x2cc364u: goto label_2cc364;
        case 0x2cc368u: goto label_2cc368;
        case 0x2cc36cu: goto label_2cc36c;
        case 0x2cc370u: goto label_2cc370;
        case 0x2cc374u: goto label_2cc374;
        case 0x2cc378u: goto label_2cc378;
        case 0x2cc37cu: goto label_2cc37c;
        case 0x2cc380u: goto label_2cc380;
        case 0x2cc384u: goto label_2cc384;
        case 0x2cc388u: goto label_2cc388;
        case 0x2cc38cu: goto label_2cc38c;
        case 0x2cc390u: goto label_2cc390;
        case 0x2cc394u: goto label_2cc394;
        case 0x2cc398u: goto label_2cc398;
        case 0x2cc39cu: goto label_2cc39c;
        case 0x2cc3a0u: goto label_2cc3a0;
        case 0x2cc3a4u: goto label_2cc3a4;
        case 0x2cc3a8u: goto label_2cc3a8;
        case 0x2cc3acu: goto label_2cc3ac;
        case 0x2cc3b0u: goto label_2cc3b0;
        case 0x2cc3b4u: goto label_2cc3b4;
        case 0x2cc3b8u: goto label_2cc3b8;
        case 0x2cc3bcu: goto label_2cc3bc;
        case 0x2cc3c0u: goto label_2cc3c0;
        case 0x2cc3c4u: goto label_2cc3c4;
        case 0x2cc3c8u: goto label_2cc3c8;
        case 0x2cc3ccu: goto label_2cc3cc;
        case 0x2cc3d0u: goto label_2cc3d0;
        case 0x2cc3d4u: goto label_2cc3d4;
        case 0x2cc3d8u: goto label_2cc3d8;
        case 0x2cc3dcu: goto label_2cc3dc;
        case 0x2cc3e0u: goto label_2cc3e0;
        case 0x2cc3e4u: goto label_2cc3e4;
        case 0x2cc3e8u: goto label_2cc3e8;
        case 0x2cc3ecu: goto label_2cc3ec;
        default: break;
    }

    ctx->pc = 0x2cc280u;

label_2cc280:
    // 0x2cc280: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2cc280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2cc284:
    // 0x2cc284: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2cc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2cc288:
    // 0x2cc288: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2cc288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2cc28c:
    // 0x2cc28c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cc28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2cc290:
    // 0x2cc290: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cc290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2cc294:
    // 0x2cc294: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2cc298:
    // 0x2cc298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cc29c:
    // 0x2cc29c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cc2a0:
    // 0x2cc2a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cc2a4:
    // 0x2cc2a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cc2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2a8:
    // 0x2cc2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cc2ac:
    // 0x2cc2ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cc2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2b0:
    // 0x2cc2b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cc2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2cc2b4:
    // 0x2cc2b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2cc2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2b8:
    // 0x2cc2b8: 0xc041c5c  jal         func_107170
label_2cc2bc:
    if (ctx->pc == 0x2CC2BCu) {
        ctx->pc = 0x2CC2BCu;
            // 0x2cc2bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x2CC2C0u;
        goto label_2cc2c0;
    }
    ctx->pc = 0x2CC2B8u;
    SET_GPR_U32(ctx, 31, 0x2CC2C0u);
    ctx->pc = 0x2CC2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC2B8u;
            // 0x2cc2bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC2C0u; }
        if (ctx->pc != 0x2CC2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC2C0u; }
        if (ctx->pc != 0x2CC2C0u) { return; }
    }
    ctx->pc = 0x2CC2C0u;
label_2cc2c0:
    // 0x2cc2c0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2cc2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2cc2c4:
    // 0x2cc2c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2cc2c8:
    if (ctx->pc == 0x2CC2C8u) {
        ctx->pc = 0x2CC2CCu;
        goto label_2cc2cc;
    }
    ctx->pc = 0x2CC2C4u;
    {
        const bool branch_taken_0x2cc2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc2c4) {
            ctx->pc = 0x2CC2F0u;
            goto label_2cc2f0;
        }
    }
    ctx->pc = 0x2CC2CCu;
label_2cc2cc:
    // 0x2cc2cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc2d0:
    // 0x2cc2d0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2cc2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2cc2d4:
    // 0x2cc2d4: 0x320f809  jalr        $t9
label_2cc2d8:
    if (ctx->pc == 0x2CC2D8u) {
        ctx->pc = 0x2CC2D8u;
            // 0x2cc2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC2DCu;
        goto label_2cc2dc;
    }
    ctx->pc = 0x2CC2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC2DCu);
        ctx->pc = 0x2CC2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC2D4u;
            // 0x2cc2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC2DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC2DCu; }
            if (ctx->pc != 0x2CC2DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2CC2DCu;
label_2cc2dc:
    // 0x2cc2dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2cc2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2cc2e0:
    // 0x2cc2e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc2e4:
    // 0x2cc2e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cc2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cc2e8:
    // 0x2cc2e8: 0x320f809  jalr        $t9
label_2cc2ec:
    if (ctx->pc == 0x2CC2ECu) {
        ctx->pc = 0x2CC2ECu;
            // 0x2cc2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2F0u;
        goto label_2cc2f0;
    }
    ctx->pc = 0x2CC2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC2F0u);
        ctx->pc = 0x2CC2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC2E8u;
            // 0x2cc2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC2F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC2F0u; }
            if (ctx->pc != 0x2CC2F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC2F0u;
label_2cc2f0:
    // 0x2cc2f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2cc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cc2f4:
    // 0x2cc2f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2cc2f8:
    if (ctx->pc == 0x2CC2F8u) {
        ctx->pc = 0x2CC2F8u;
            // 0x2cc2f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2FCu;
        goto label_2cc2fc;
    }
    ctx->pc = 0x2CC2F4u;
    {
        const bool branch_taken_0x2cc2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC2F4u;
            // 0x2cc2f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2f4) {
            ctx->pc = 0x2CC334u;
            goto label_2cc334;
        }
    }
    ctx->pc = 0x2CC2FCu;
label_2cc2fc:
    // 0x2cc2fc: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x2cc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2cc300:
    // 0x2cc300: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2cc304:
    if (ctx->pc == 0x2CC304u) {
        ctx->pc = 0x2CC308u;
        goto label_2cc308;
    }
    ctx->pc = 0x2CC300u;
    {
        const bool branch_taken_0x2cc300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc300) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC308u;
label_2cc308:
    // 0x2cc308: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2cc308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2cc30c:
    // 0x2cc30c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2cc30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2cc310:
    // 0x2cc310: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2cc310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2cc314:
    // 0x2cc314: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cc314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cc318:
    // 0x2cc318: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x2cc318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_2cc31c:
    // 0x2cc31c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2cc31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cc320:
    // 0x2cc320: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc324:
    // 0x2cc324: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cc324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cc328:
    // 0x2cc328: 0x320f809  jalr        $t9
label_2cc32c:
    if (ctx->pc == 0x2CC32Cu) {
        ctx->pc = 0x2CC32Cu;
            // 0x2cc32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC330u;
        goto label_2cc330;
    }
    ctx->pc = 0x2CC328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC330u);
        ctx->pc = 0x2CC32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC328u;
            // 0x2cc32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC330u; }
            if (ctx->pc != 0x2CC330u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC330u;
label_2cc330:
    // 0x2cc330: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cc330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc334:
    // 0x2cc334: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2cc334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc338:
    // 0x2cc338: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2cc33c:
    if (ctx->pc == 0x2CC33Cu) {
        ctx->pc = 0x2CC33Cu;
            // 0x2cc33c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC340u;
        goto label_2cc340;
    }
    ctx->pc = 0x2CC338u;
    {
        const bool branch_taken_0x2cc338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC338u;
            // 0x2cc33c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc338) {
            ctx->pc = 0x2CC3B8u;
            goto label_2cc3b8;
        }
    }
    ctx->pc = 0x2CC340u;
label_2cc340:
    // 0x2cc340: 0x8e430c40  lw          $v1, 0xC40($s2)
    ctx->pc = 0x2cc340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3136)));
label_2cc344:
    // 0x2cc344: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2cc344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_2cc348:
    // 0x2cc348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cc348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cc34c:
    // 0x2cc34c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2cc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2cc350:
    // 0x2cc350: 0xc041c4a  jal         func_107128
label_2cc354:
    if (ctx->pc == 0x2CC354u) {
        ctx->pc = 0x2CC354u;
            // 0x2cc354: 0x742821  addu        $a1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->pc = 0x2CC358u;
        goto label_2cc358;
    }
    ctx->pc = 0x2CC350u;
    SET_GPR_U32(ctx, 31, 0x2CC358u);
    ctx->pc = 0x2CC354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC350u;
            // 0x2cc354: 0x742821  addu        $a1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC358u; }
        if (ctx->pc != 0x2CC358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC358u; }
        if (ctx->pc != 0x2CC358u) { return; }
    }
    ctx->pc = 0x2CC358u;
label_2cc358:
    // 0x2cc358: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2cc358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2cc35c:
    // 0x2cc35c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cc360:
    // 0x2cc360: 0x27b6008c  addiu       $s6, $sp, 0x8C
    ctx->pc = 0x2cc360u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2cc364:
    // 0x2cc364: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cc364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc368:
    // 0x2cc368: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2cc368u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_2cc36c:
    // 0x2cc36c: 0xc041c38  jal         func_1070E0
label_2cc370:
    if (ctx->pc == 0x2CC370u) {
        ctx->pc = 0x2CC370u;
            // 0x2cc370: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC374u;
        goto label_2cc374;
    }
    ctx->pc = 0x2CC36Cu;
    SET_GPR_U32(ctx, 31, 0x2CC374u);
    ctx->pc = 0x2CC370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC36Cu;
            // 0x2cc370: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC374u; }
        if (ctx->pc != 0x2CC374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC374u; }
        if (ctx->pc != 0x2CC374u) { return; }
    }
    ctx->pc = 0x2CC374u;
label_2cc374:
    // 0x2cc374: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cc374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cc378:
    // 0x2cc378: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2cc378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cc37c:
    // 0x2cc37c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2cc37cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_2cc380:
    // 0x2cc380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc384:
    // 0x2cc384: 0x8e420c40  lw          $v0, 0xC40($s2)
    ctx->pc = 0x2cc384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3136)));
label_2cc388:
    // 0x2cc388: 0xc041c38  jal         func_1070E0
label_2cc38c:
    if (ctx->pc == 0x2CC38Cu) {
        ctx->pc = 0x2CC38Cu;
            // 0x2cc38c: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->pc = 0x2CC390u;
        goto label_2cc390;
    }
    ctx->pc = 0x2CC388u;
    SET_GPR_U32(ctx, 31, 0x2CC390u);
    ctx->pc = 0x2CC38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC388u;
            // 0x2cc38c: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC390u; }
        if (ctx->pc != 0x2CC390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC390u; }
        if (ctx->pc != 0x2CC390u) { return; }
    }
    ctx->pc = 0x2CC390u;
label_2cc390:
    // 0x2cc390: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2cc394:
    // 0x2cc394: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x2cc394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2cc398:
    // 0x2cc398: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x2cc398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_2cc39c:
    // 0x2cc39c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2cc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2cc3a0:
    // 0x2cc3a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cc3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cc3a4:
    // 0x2cc3a4: 0xc0b3074  jal         func_2CC1D0
label_2cc3a8:
    if (ctx->pc == 0x2CC3A8u) {
        ctx->pc = 0x2CC3A8u;
            // 0x2cc3a8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2CC3ACu;
        goto label_2cc3ac;
    }
    ctx->pc = 0x2CC3A4u;
    SET_GPR_U32(ctx, 31, 0x2CC3ACu);
    ctx->pc = 0x2CC3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC3A4u;
            // 0x2cc3a8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC1D0u;
    if (runtime->hasFunction(0x2CC1D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC3ACu; }
        if (ctx->pc != 0x2CC3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9CFragmentFPfPf_0x2cc1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC3ACu; }
        if (ctx->pc != 0x2CC3ACu) { return; }
    }
    ctx->pc = 0x2CC3ACu;
label_2cc3ac:
    // 0x2cc3ac: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2cc3acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2cc3b0:
    // 0x2cc3b0: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x2cc3b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2cc3b4:
    // 0x2cc3b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cc3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2cc3b8:
    // 0x2cc3b8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2cc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2cc3bc:
    // 0x2cc3bc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2cc3bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2cc3c0:
    // 0x2cc3c0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_2cc3c4:
    if (ctx->pc == 0x2CC3C4u) {
        ctx->pc = 0x2CC3C8u;
        goto label_2cc3c8;
    }
    ctx->pc = 0x2CC3C0u;
    {
        const bool branch_taken_0x2cc3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc3c0) {
            ctx->pc = 0x2CC340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc340;
        }
    }
    ctx->pc = 0x2CC3C8u;
label_2cc3c8:
    // 0x2cc3c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2cc3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2cc3cc:
    // 0x2cc3cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cc3ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cc3d0:
    // 0x2cc3d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cc3d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc3d4:
    // 0x2cc3d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cc3d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cc3d8:
    // 0x2cc3d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc3d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cc3dc:
    // 0x2cc3dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc3e0:
    // 0x2cc3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc3e4:
    // 0x2cc3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc3e8:
    // 0x2cc3e8: 0x3e00008  jr          $ra
label_2cc3ec:
    if (ctx->pc == 0x2CC3ECu) {
        ctx->pc = 0x2CC3ECu;
            // 0x2cc3ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2CC3F0u;
        goto label_fallthrough_0x2cc3e8;
    }
    ctx->pc = 0x2CC3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC3E8u;
            // 0x2cc3ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cc3e8:
    ctx->pc = 0x2CC3F0u;
}
