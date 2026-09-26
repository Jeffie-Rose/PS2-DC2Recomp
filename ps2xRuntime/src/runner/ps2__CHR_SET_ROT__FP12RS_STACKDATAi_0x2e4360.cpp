#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_ROT__FP12RS_STACKDATAi
// Address: 0x2e4360 - 0x2e4490
void ps2__CHR_SET_ROT__FP12RS_STACKDATAi_0x2e4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_ROT__FP12RS_STACKDATAi_0x2e4360");
#endif

    switch (ctx->pc) {
        case 0x2e4360u: goto label_2e4360;
        case 0x2e4364u: goto label_2e4364;
        case 0x2e4368u: goto label_2e4368;
        case 0x2e436cu: goto label_2e436c;
        case 0x2e4370u: goto label_2e4370;
        case 0x2e4374u: goto label_2e4374;
        case 0x2e4378u: goto label_2e4378;
        case 0x2e437cu: goto label_2e437c;
        case 0x2e4380u: goto label_2e4380;
        case 0x2e4384u: goto label_2e4384;
        case 0x2e4388u: goto label_2e4388;
        case 0x2e438cu: goto label_2e438c;
        case 0x2e4390u: goto label_2e4390;
        case 0x2e4394u: goto label_2e4394;
        case 0x2e4398u: goto label_2e4398;
        case 0x2e439cu: goto label_2e439c;
        case 0x2e43a0u: goto label_2e43a0;
        case 0x2e43a4u: goto label_2e43a4;
        case 0x2e43a8u: goto label_2e43a8;
        case 0x2e43acu: goto label_2e43ac;
        case 0x2e43b0u: goto label_2e43b0;
        case 0x2e43b4u: goto label_2e43b4;
        case 0x2e43b8u: goto label_2e43b8;
        case 0x2e43bcu: goto label_2e43bc;
        case 0x2e43c0u: goto label_2e43c0;
        case 0x2e43c4u: goto label_2e43c4;
        case 0x2e43c8u: goto label_2e43c8;
        case 0x2e43ccu: goto label_2e43cc;
        case 0x2e43d0u: goto label_2e43d0;
        case 0x2e43d4u: goto label_2e43d4;
        case 0x2e43d8u: goto label_2e43d8;
        case 0x2e43dcu: goto label_2e43dc;
        case 0x2e43e0u: goto label_2e43e0;
        case 0x2e43e4u: goto label_2e43e4;
        case 0x2e43e8u: goto label_2e43e8;
        case 0x2e43ecu: goto label_2e43ec;
        case 0x2e43f0u: goto label_2e43f0;
        case 0x2e43f4u: goto label_2e43f4;
        case 0x2e43f8u: goto label_2e43f8;
        case 0x2e43fcu: goto label_2e43fc;
        case 0x2e4400u: goto label_2e4400;
        case 0x2e4404u: goto label_2e4404;
        case 0x2e4408u: goto label_2e4408;
        case 0x2e440cu: goto label_2e440c;
        case 0x2e4410u: goto label_2e4410;
        case 0x2e4414u: goto label_2e4414;
        case 0x2e4418u: goto label_2e4418;
        case 0x2e441cu: goto label_2e441c;
        case 0x2e4420u: goto label_2e4420;
        case 0x2e4424u: goto label_2e4424;
        case 0x2e4428u: goto label_2e4428;
        case 0x2e442cu: goto label_2e442c;
        case 0x2e4430u: goto label_2e4430;
        case 0x2e4434u: goto label_2e4434;
        case 0x2e4438u: goto label_2e4438;
        case 0x2e443cu: goto label_2e443c;
        case 0x2e4440u: goto label_2e4440;
        case 0x2e4444u: goto label_2e4444;
        case 0x2e4448u: goto label_2e4448;
        case 0x2e444cu: goto label_2e444c;
        case 0x2e4450u: goto label_2e4450;
        case 0x2e4454u: goto label_2e4454;
        case 0x2e4458u: goto label_2e4458;
        case 0x2e445cu: goto label_2e445c;
        case 0x2e4460u: goto label_2e4460;
        case 0x2e4464u: goto label_2e4464;
        case 0x2e4468u: goto label_2e4468;
        case 0x2e446cu: goto label_2e446c;
        case 0x2e4470u: goto label_2e4470;
        case 0x2e4474u: goto label_2e4474;
        case 0x2e4478u: goto label_2e4478;
        case 0x2e447cu: goto label_2e447c;
        case 0x2e4480u: goto label_2e4480;
        case 0x2e4484u: goto label_2e4484;
        case 0x2e4488u: goto label_2e4488;
        case 0x2e448cu: goto label_2e448c;
        default: break;
    }

    ctx->pc = 0x2e4360u;

label_2e4360:
    // 0x2e4360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e4360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e4364:
    // 0x2e4364: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e4364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4368:
    // 0x2e4368: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e4368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e436c:
    // 0x2e436c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e4370:
    // 0x2e4370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e4374:
    // 0x2e4374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4378:
    // 0x2e4378: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e437c:
    // 0x2e437c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4380:
    // 0x2e4380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4384:
    if (ctx->pc == 0x2E4384u) {
        ctx->pc = 0x2E4384u;
            // 0x2e4384: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4388u;
        goto label_2e4388;
    }
    ctx->pc = 0x2E4380u;
    {
        const bool branch_taken_0x2e4380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4380u;
            // 0x2e4384: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4380) {
            ctx->pc = 0x2E4390u;
            goto label_2e4390;
        }
    }
    ctx->pc = 0x2E4388u;
label_2e4388:
    // 0x2e4388: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2e438c:
    if (ctx->pc == 0x2E438Cu) {
        ctx->pc = 0x2E438Cu;
            // 0x2e438c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4390u;
        goto label_2e4390;
    }
    ctx->pc = 0x2E4388u;
    {
        const bool branch_taken_0x2e4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4388u;
            // 0x2e438c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4388) {
            ctx->pc = 0x2E4478u;
            goto label_2e4478;
        }
    }
    ctx->pc = 0x2E4390u;
label_2e4390:
    // 0x2e4390: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e4390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e4394:
    // 0x2e4394: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2e4394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e4398:
    // 0x2e4398: 0xc0b8cbc  jal         func_2E32F0
label_2e439c:
    if (ctx->pc == 0x2E439Cu) {
        ctx->pc = 0x2E439Cu;
            // 0x2e439c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E43A0u;
        goto label_2e43a0;
    }
    ctx->pc = 0x2E4398u;
    SET_GPR_U32(ctx, 31, 0x2E43A0u);
    ctx->pc = 0x2E439Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4398u;
            // 0x2e439c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43A0u; }
        if (ctx->pc != 0x2E43A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43A0u; }
        if (ctx->pc != 0x2E43A0u) { return; }
    }
    ctx->pc = 0x2E43A0u;
label_2e43a0:
    // 0x2e43a0: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x2e43a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e43a4:
    // 0x2e43a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e43a8:
    if (ctx->pc == 0x2E43A8u) {
        ctx->pc = 0x2E43A8u;
            // 0x2e43a8: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->pc = 0x2E43ACu;
        goto label_2e43ac;
    }
    ctx->pc = 0x2E43A4u;
    {
        const bool branch_taken_0x2e43a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E43A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43A4u;
            // 0x2e43a8: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43a4) {
            ctx->pc = 0x2E43B8u;
            goto label_2e43b8;
        }
    }
    ctx->pc = 0x2E43ACu;
label_2e43ac:
    // 0x2e43ac: 0xc0b8ca0  jal         func_2E3280
label_2e43b0:
    if (ctx->pc == 0x2E43B0u) {
        ctx->pc = 0x2E43B0u;
            // 0x2e43b0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E43B4u;
        goto label_2e43b4;
    }
    ctx->pc = 0x2E43ACu;
    SET_GPR_U32(ctx, 31, 0x2E43B4u);
    ctx->pc = 0x2E43B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43ACu;
            // 0x2e43b0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43B4u; }
        if (ctx->pc != 0x2E43B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43B4u; }
        if (ctx->pc != 0x2E43B4u) { return; }
    }
    ctx->pc = 0x2E43B4u;
label_2e43b4:
    // 0x2e43b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e43b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e43b8:
    // 0x2e43b8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e43bc:
    // 0x2e43bc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e43c0:
    // 0x2e43c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e43c4:
    // 0x2e43c4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2e43c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2e43c8:
    // 0x2e43c8: 0x320f809  jalr        $t9
label_2e43cc:
    if (ctx->pc == 0x2E43CCu) {
        ctx->pc = 0x2E43CCu;
            // 0x2e43cc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E43D0u;
        goto label_2e43d0;
    }
    ctx->pc = 0x2E43C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E43D0u);
        ctx->pc = 0x2E43CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43C8u;
            // 0x2e43cc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E43D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E43D0u; }
            if (ctx->pc != 0x2E43D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E43D0u;
label_2e43d0:
    // 0x2e43d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e43d4:
    // 0x2e43d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e43d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e43d8:
    // 0x2e43d8: 0xc041c3e  jal         func_1070F8
label_2e43dc:
    if (ctx->pc == 0x2E43DCu) {
        ctx->pc = 0x2E43DCu;
            // 0x2e43dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E43E0u;
        goto label_2e43e0;
    }
    ctx->pc = 0x2E43D8u;
    SET_GPR_U32(ctx, 31, 0x2E43E0u);
    ctx->pc = 0x2E43DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43D8u;
            // 0x2e43dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43E0u; }
        if (ctx->pc != 0x2E43E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43E0u; }
        if (ctx->pc != 0x2E43E0u) { return; }
    }
    ctx->pc = 0x2E43E0u;
label_2e43e0:
    // 0x2e43e0: 0xc04c374  jal         func_130DD0
label_2e43e4:
    if (ctx->pc == 0x2E43E4u) {
        ctx->pc = 0x2E43E4u;
            // 0x2e43e4: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E43E8u;
        goto label_2e43e8;
    }
    ctx->pc = 0x2E43E0u;
    SET_GPR_U32(ctx, 31, 0x2E43E8u);
    ctx->pc = 0x2E43E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43E0u;
            // 0x2e43e4: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43E8u; }
        if (ctx->pc != 0x2E43E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43E8u; }
        if (ctx->pc != 0x2E43E8u) { return; }
    }
    ctx->pc = 0x2E43E8u;
label_2e43e8:
    // 0x2e43e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e43e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e43ec:
    // 0x2e43ec: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x2e43ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2e43f0:
    // 0x2e43f0: 0xc04c374  jal         func_130DD0
label_2e43f4:
    if (ctx->pc == 0x2E43F4u) {
        ctx->pc = 0x2E43F4u;
            // 0x2e43f4: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E43F8u;
        goto label_2e43f8;
    }
    ctx->pc = 0x2E43F0u;
    SET_GPR_U32(ctx, 31, 0x2E43F8u);
    ctx->pc = 0x2E43F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43F0u;
            // 0x2e43f4: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43F8u; }
        if (ctx->pc != 0x2E43F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E43F8u; }
        if (ctx->pc != 0x2E43F8u) { return; }
    }
    ctx->pc = 0x2E43F8u;
label_2e43f8:
    // 0x2e43f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e43f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2e43fc:
    // 0x2e43fc: 0x27b20048  addiu       $s2, $sp, 0x48
    ctx->pc = 0x2e43fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2e4400:
    // 0x2e4400: 0xc04c374  jal         func_130DD0
label_2e4404:
    if (ctx->pc == 0x2E4404u) {
        ctx->pc = 0x2E4404u;
            // 0x2e4404: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4408u;
        goto label_2e4408;
    }
    ctx->pc = 0x2E4400u;
    SET_GPR_U32(ctx, 31, 0x2E4408u);
    ctx->pc = 0x2E4404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4400u;
            // 0x2e4404: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4408u; }
        if (ctx->pc != 0x2E4408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4408u; }
        if (ctx->pc != 0x2E4408u) { return; }
    }
    ctx->pc = 0x2E4408u;
label_2e4408:
    // 0x2e4408: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2e4408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2e440c:
    // 0x2e440c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e4410:
    // 0x2e4410: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2e4410u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e4414:
    // 0x2e4414: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4418:
    // 0x2e4418: 0xc041c1e  jal         func_107078
label_2e441c:
    if (ctx->pc == 0x2E441Cu) {
        ctx->pc = 0x2E441Cu;
            // 0x2e441c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E4420u;
        goto label_2e4420;
    }
    ctx->pc = 0x2E4418u;
    SET_GPR_U32(ctx, 31, 0x2E4420u);
    ctx->pc = 0x2E441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4418u;
            // 0x2e441c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4420u; }
        if (ctx->pc != 0x2E4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4420u; }
        if (ctx->pc != 0x2E4420u) { return; }
    }
    ctx->pc = 0x2E4420u;
label_2e4420:
    // 0x2e4420: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e4420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e4424:
    // 0x2e4424: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e4424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e4428:
    // 0x2e4428: 0xc041c38  jal         func_1070E0
label_2e442c:
    if (ctx->pc == 0x2E442Cu) {
        ctx->pc = 0x2E442Cu;
            // 0x2e442c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4430u;
        goto label_2e4430;
    }
    ctx->pc = 0x2E4428u;
    SET_GPR_U32(ctx, 31, 0x2E4430u);
    ctx->pc = 0x2E442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4428u;
            // 0x2e442c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4430u; }
        if (ctx->pc != 0x2E4430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4430u; }
        if (ctx->pc != 0x2E4430u) { return; }
    }
    ctx->pc = 0x2E4430u;
label_2e4430:
    // 0x2e4430: 0xc04c374  jal         func_130DD0
label_2e4434:
    if (ctx->pc == 0x2E4434u) {
        ctx->pc = 0x2E4434u;
            // 0x2e4434: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4438u;
        goto label_2e4438;
    }
    ctx->pc = 0x2E4430u;
    SET_GPR_U32(ctx, 31, 0x2E4438u);
    ctx->pc = 0x2E4434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4430u;
            // 0x2e4434: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4438u; }
        if (ctx->pc != 0x2E4438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4438u; }
        if (ctx->pc != 0x2E4438u) { return; }
    }
    ctx->pc = 0x2E4438u;
label_2e4438:
    // 0x2e4438: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e4438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e443c:
    // 0x2e443c: 0xc04c374  jal         func_130DD0
label_2e4440:
    if (ctx->pc == 0x2E4440u) {
        ctx->pc = 0x2E4440u;
            // 0x2e4440: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4444u;
        goto label_2e4444;
    }
    ctx->pc = 0x2E443Cu;
    SET_GPR_U32(ctx, 31, 0x2E4444u);
    ctx->pc = 0x2E4440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E443Cu;
            // 0x2e4440: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4444u; }
        if (ctx->pc != 0x2E4444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4444u; }
        if (ctx->pc != 0x2E4444u) { return; }
    }
    ctx->pc = 0x2E4444u;
label_2e4444:
    // 0x2e4444: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e4444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2e4448:
    // 0x2e4448: 0xc04c374  jal         func_130DD0
label_2e444c:
    if (ctx->pc == 0x2E444Cu) {
        ctx->pc = 0x2E444Cu;
            // 0x2e444c: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4450u;
        goto label_2e4450;
    }
    ctx->pc = 0x2E4448u;
    SET_GPR_U32(ctx, 31, 0x2E4450u);
    ctx->pc = 0x2E444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4448u;
            // 0x2e444c: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4450u; }
        if (ctx->pc != 0x2E4450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4450u; }
        if (ctx->pc != 0x2E4450u) { return; }
    }
    ctx->pc = 0x2E4450u;
label_2e4450:
    // 0x2e4450: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2e4450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2e4454:
    // 0x2e4454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e4458:
    // 0x2e4458: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2e4458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2e445c:
    // 0x2e445c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4460:
    // 0x2e4460: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4464:
    // 0x2e4464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4468:
    // 0x2e4468: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2e446c:
    // 0x2e446c: 0x320f809  jalr        $t9
label_2e4470:
    if (ctx->pc == 0x2E4470u) {
        ctx->pc = 0x2E4470u;
            // 0x2e4470: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E4474u;
        goto label_2e4474;
    }
    ctx->pc = 0x2E446Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4474u);
        ctx->pc = 0x2E4470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E446Cu;
            // 0x2e4470: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4474u; }
            if (ctx->pc != 0x2E4474u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4474u;
label_2e4474:
    // 0x2e4474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4478:
    // 0x2e4478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e4478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e447c:
    // 0x2e447c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e447cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4480:
    // 0x2e4480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4484:
    // 0x2e4484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4488:
    // 0x2e4488: 0x3e00008  jr          $ra
label_2e448c:
    if (ctx->pc == 0x2E448Cu) {
        ctx->pc = 0x2E448Cu;
            // 0x2e448c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E4490u;
        goto label_fallthrough_0x2e4488;
    }
    ctx->pc = 0x2E4488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E448Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4488u;
            // 0x2e448c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4488:
    ctx->pc = 0x2E4490u;
}
