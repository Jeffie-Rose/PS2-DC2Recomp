#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_POS__FP12RS_STACKDATAi
// Address: 0x1e42d0 - 0x1e43b8
void ps2__GET_TARGET_POS__FP12RS_STACKDATAi_0x1e42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_POS__FP12RS_STACKDATAi_0x1e42d0");
#endif

    switch (ctx->pc) {
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        default: break;
    }

    ctx->pc = 0x1e42d0u;

label_1e42d0:
    // 0x1e42d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e42d4:
    // 0x1e42d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e42d8:
    // 0x1e42d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e42dc:
    // 0x1e42dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e42e0:
    // 0x1e42e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e42e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e42e4:
    // 0x1e42e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1e42e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e42e8:
    // 0x1e42e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e42ec:
    if (ctx->pc == 0x1E42ECu) {
        ctx->pc = 0x1E42ECu;
            // 0x1e42ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E42F0u;
        goto label_1e42f0;
    }
    ctx->pc = 0x1E42E8u;
    {
        const bool branch_taken_0x1e42e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42E8u;
            // 0x1e42ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42e8) {
            ctx->pc = 0x1E42FCu;
            goto label_1e42fc;
        }
    }
    ctx->pc = 0x1E42F0u;
label_1e42f0:
    // 0x1e42f0: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x1e42f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e42f4:
    // 0x1e42f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e42f8:
    if (ctx->pc == 0x1E42F8u) {
        ctx->pc = 0x1E42FCu;
        goto label_1e42fc;
    }
    ctx->pc = 0x1E42F4u;
    {
        const bool branch_taken_0x1e42f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e42f4) {
            ctx->pc = 0x1E4304u;
            goto label_1e4304;
        }
    }
    ctx->pc = 0x1E42FCu;
label_1e42fc:
    // 0x1e42fc: 0x10000029  b           . + 4 + (0x29 << 2)
label_1e4300:
    if (ctx->pc == 0x1E4300u) {
        ctx->pc = 0x1E4300u;
            // 0x1e4300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4304u;
        goto label_1e4304;
    }
    ctx->pc = 0x1E42FCu;
    {
        const bool branch_taken_0x1e42fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42FCu;
            // 0x1e4300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42fc) {
            ctx->pc = 0x1E43A4u;
            goto label_1e43a4;
        }
    }
    ctx->pc = 0x1E4304u;
label_1e4304:
    // 0x1e4304: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4308:
    // 0x1e4308: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
label_1e430c:
    // 0x1e430c: 0xc0a0ed8  jal         func_283B60
label_1e4310:
    if (ctx->pc == 0x1E4310u) {
        ctx->pc = 0x1E4310u;
            // 0x1e4310: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->pc = 0x1E4314u;
        goto label_1e4314;
    }
    ctx->pc = 0x1E430Cu;
    SET_GPR_U32(ctx, 31, 0x1E4314u);
    ctx->pc = 0x1E4310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E430Cu;
            // 0x1e4310: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4314u; }
        if (ctx->pc != 0x1E4314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4314u; }
        if (ctx->pc != 0x1E4314u) { return; }
    }
    ctx->pc = 0x1E4314u;
label_1e4314:
    // 0x1e4314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4318:
    if (ctx->pc == 0x1E4318u) {
        ctx->pc = 0x1E431Cu;
        goto label_1e431c;
    }
    ctx->pc = 0x1E4314u;
    {
        const bool branch_taken_0x1e4314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4314) {
            ctx->pc = 0x1E4324u;
            goto label_1e4324;
        }
    }
    ctx->pc = 0x1E431Cu;
label_1e431c:
    // 0x1e431c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e4320:
    if (ctx->pc == 0x1E4320u) {
        ctx->pc = 0x1E4320u;
            // 0x1e4320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4324u;
        goto label_1e4324;
    }
    ctx->pc = 0x1E431Cu;
    {
        const bool branch_taken_0x1e431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E431Cu;
            // 0x1e4320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e431c) {
            ctx->pc = 0x1E43A4u;
            goto label_1e43a4;
        }
    }
    ctx->pc = 0x1E4324u;
label_1e4324:
    // 0x1e4324: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e4324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4328:
    // 0x1e4328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e432c:
    // 0x1e432c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e432cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4330:
    // 0x1e4330: 0x320f809  jalr        $t9
label_1e4334:
    if (ctx->pc == 0x1E4334u) {
        ctx->pc = 0x1E4334u;
            // 0x1e4334: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4338u;
        goto label_1e4338;
    }
    ctx->pc = 0x1E4330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4338u);
        ctx->pc = 0x1E4334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4330u;
            // 0x1e4334: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4338u; }
            if (ctx->pc != 0x1E4338u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4338u;
label_1e4338:
    // 0x1e4338: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1e4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e433c:
    // 0x1e433c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4340:
    // 0x1e4340: 0xc0781c4  jal         func_1E0710
label_1e4344:
    if (ctx->pc == 0x1E4344u) {
        ctx->pc = 0x1E4344u;
            // 0x1e4344: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4348u;
        goto label_1e4348;
    }
    ctx->pc = 0x1E4340u;
    SET_GPR_U32(ctx, 31, 0x1E4348u);
    ctx->pc = 0x1E4344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4340u;
            // 0x1e4344: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4348u; }
        if (ctx->pc != 0x1E4348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4348u; }
        if (ctx->pc != 0x1E4348u) { return; }
    }
    ctx->pc = 0x1E4348u;
label_1e4348:
    // 0x1e4348: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1e4348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e434c:
    // 0x1e434c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4350:
    // 0x1e4350: 0xc0781c4  jal         func_1E0710
label_1e4354:
    if (ctx->pc == 0x1E4354u) {
        ctx->pc = 0x1E4354u;
            // 0x1e4354: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4358u;
        goto label_1e4358;
    }
    ctx->pc = 0x1E4350u;
    SET_GPR_U32(ctx, 31, 0x1E4358u);
    ctx->pc = 0x1E4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4350u;
            // 0x1e4354: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4358u; }
        if (ctx->pc != 0x1E4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4358u; }
        if (ctx->pc != 0x1E4358u) { return; }
    }
    ctx->pc = 0x1E4358u;
label_1e4358:
    // 0x1e4358: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1e4358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e435c:
    // 0x1e435c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4360:
    // 0x1e4360: 0xc0781c4  jal         func_1E0710
label_1e4364:
    if (ctx->pc == 0x1E4364u) {
        ctx->pc = 0x1E4364u;
            // 0x1e4364: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4368u;
        goto label_1e4368;
    }
    ctx->pc = 0x1E4360u;
    SET_GPR_U32(ctx, 31, 0x1E4368u);
    ctx->pc = 0x1E4364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4360u;
            // 0x1e4364: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4368u; }
        if (ctx->pc != 0x1E4368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4368u; }
        if (ctx->pc != 0x1E4368u) { return; }
    }
    ctx->pc = 0x1E4368u;
label_1e4368:
    // 0x1e4368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e436c:
    // 0x1e436c: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1e4370:
    if (ctx->pc == 0x1E4370u) {
        ctx->pc = 0x1E4370u;
            // 0x1e4370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E4374u;
        goto label_1e4374;
    }
    ctx->pc = 0x1E436Cu;
    {
        const bool branch_taken_0x1e436c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E436Cu;
            // 0x1e4370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e436c) {
            ctx->pc = 0x1E43A4u;
            goto label_1e43a4;
        }
    }
    ctx->pc = 0x1E4374u;
label_1e4374:
    // 0x1e4374: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4378:
    // 0x1e4378: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e437c:
    // 0x1e437c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e437cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4380:
    // 0x1e4380: 0x320f809  jalr        $t9
label_1e4384:
    if (ctx->pc == 0x1E4384u) {
        ctx->pc = 0x1E4384u;
            // 0x1e4384: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4388u;
        goto label_1e4388;
    }
    ctx->pc = 0x1E4380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4388u);
        ctx->pc = 0x1E4384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4380u;
            // 0x1e4384: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4388u; }
            if (ctx->pc != 0x1E4388u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4388u;
label_1e4388:
    // 0x1e4388: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e438c:
    // 0x1e438c: 0xc04c018  jal         func_130060
label_1e4390:
    if (ctx->pc == 0x1E4390u) {
        ctx->pc = 0x1E4390u;
            // 0x1e4390: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4394u;
        goto label_1e4394;
    }
    ctx->pc = 0x1E438Cu;
    SET_GPR_U32(ctx, 31, 0x1E4394u);
    ctx->pc = 0x1E4390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E438Cu;
            // 0x1e4390: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4394u; }
        if (ctx->pc != 0x1E4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4394u; }
        if (ctx->pc != 0x1E4394u) { return; }
    }
    ctx->pc = 0x1E4394u;
label_1e4394:
    // 0x1e4394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4398:
    // 0x1e4398: 0xc0781c4  jal         func_1E0710
label_1e439c:
    if (ctx->pc == 0x1E439Cu) {
        ctx->pc = 0x1E439Cu;
            // 0x1e439c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E43A0u;
        goto label_1e43a0;
    }
    ctx->pc = 0x1E4398u;
    SET_GPR_U32(ctx, 31, 0x1E43A0u);
    ctx->pc = 0x1E439Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4398u;
            // 0x1e439c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43A0u; }
        if (ctx->pc != 0x1E43A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43A0u; }
        if (ctx->pc != 0x1E43A0u) { return; }
    }
    ctx->pc = 0x1E43A0u;
label_1e43a0:
    // 0x1e43a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e43a4:
    // 0x1e43a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e43a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e43a8:
    // 0x1e43a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e43a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e43ac:
    // 0x1e43ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e43acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e43b0:
    // 0x1e43b0: 0x3e00008  jr          $ra
label_1e43b4:
    if (ctx->pc == 0x1E43B4u) {
        ctx->pc = 0x1E43B4u;
            // 0x1e43b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E43B8u;
        goto label_fallthrough_0x1e43b0;
    }
    ctx->pc = 0x1E43B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E43B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43B0u;
            // 0x1e43b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e43b0:
    ctx->pc = 0x1E43B8u;
}
