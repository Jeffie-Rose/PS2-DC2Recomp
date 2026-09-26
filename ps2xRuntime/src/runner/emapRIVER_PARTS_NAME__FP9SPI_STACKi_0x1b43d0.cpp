#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapRIVER_PARTS_NAME__FP9SPI_STACKi
// Address: 0x1b43d0 - 0x1b4570
void emapRIVER_PARTS_NAME__FP9SPI_STACKi_0x1b43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapRIVER_PARTS_NAME__FP9SPI_STACKi_0x1b43d0");
#endif

    switch (ctx->pc) {
        case 0x1b43d0u: goto label_1b43d0;
        case 0x1b43d4u: goto label_1b43d4;
        case 0x1b43d8u: goto label_1b43d8;
        case 0x1b43dcu: goto label_1b43dc;
        case 0x1b43e0u: goto label_1b43e0;
        case 0x1b43e4u: goto label_1b43e4;
        case 0x1b43e8u: goto label_1b43e8;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b43f0u: goto label_1b43f0;
        case 0x1b43f4u: goto label_1b43f4;
        case 0x1b43f8u: goto label_1b43f8;
        case 0x1b43fcu: goto label_1b43fc;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4404u: goto label_1b4404;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b440cu: goto label_1b440c;
        case 0x1b4410u: goto label_1b4410;
        case 0x1b4414u: goto label_1b4414;
        case 0x1b4418u: goto label_1b4418;
        case 0x1b441cu: goto label_1b441c;
        case 0x1b4420u: goto label_1b4420;
        case 0x1b4424u: goto label_1b4424;
        case 0x1b4428u: goto label_1b4428;
        case 0x1b442cu: goto label_1b442c;
        case 0x1b4430u: goto label_1b4430;
        case 0x1b4434u: goto label_1b4434;
        case 0x1b4438u: goto label_1b4438;
        case 0x1b443cu: goto label_1b443c;
        case 0x1b4440u: goto label_1b4440;
        case 0x1b4444u: goto label_1b4444;
        case 0x1b4448u: goto label_1b4448;
        case 0x1b444cu: goto label_1b444c;
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4454u: goto label_1b4454;
        case 0x1b4458u: goto label_1b4458;
        case 0x1b445cu: goto label_1b445c;
        case 0x1b4460u: goto label_1b4460;
        case 0x1b4464u: goto label_1b4464;
        case 0x1b4468u: goto label_1b4468;
        case 0x1b446cu: goto label_1b446c;
        case 0x1b4470u: goto label_1b4470;
        case 0x1b4474u: goto label_1b4474;
        case 0x1b4478u: goto label_1b4478;
        case 0x1b447cu: goto label_1b447c;
        case 0x1b4480u: goto label_1b4480;
        case 0x1b4484u: goto label_1b4484;
        case 0x1b4488u: goto label_1b4488;
        case 0x1b448cu: goto label_1b448c;
        case 0x1b4490u: goto label_1b4490;
        case 0x1b4494u: goto label_1b4494;
        case 0x1b4498u: goto label_1b4498;
        case 0x1b449cu: goto label_1b449c;
        case 0x1b44a0u: goto label_1b44a0;
        case 0x1b44a4u: goto label_1b44a4;
        case 0x1b44a8u: goto label_1b44a8;
        case 0x1b44acu: goto label_1b44ac;
        case 0x1b44b0u: goto label_1b44b0;
        case 0x1b44b4u: goto label_1b44b4;
        case 0x1b44b8u: goto label_1b44b8;
        case 0x1b44bcu: goto label_1b44bc;
        case 0x1b44c0u: goto label_1b44c0;
        case 0x1b44c4u: goto label_1b44c4;
        case 0x1b44c8u: goto label_1b44c8;
        case 0x1b44ccu: goto label_1b44cc;
        case 0x1b44d0u: goto label_1b44d0;
        case 0x1b44d4u: goto label_1b44d4;
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44dcu: goto label_1b44dc;
        case 0x1b44e0u: goto label_1b44e0;
        case 0x1b44e4u: goto label_1b44e4;
        case 0x1b44e8u: goto label_1b44e8;
        case 0x1b44ecu: goto label_1b44ec;
        case 0x1b44f0u: goto label_1b44f0;
        case 0x1b44f4u: goto label_1b44f4;
        case 0x1b44f8u: goto label_1b44f8;
        case 0x1b44fcu: goto label_1b44fc;
        case 0x1b4500u: goto label_1b4500;
        case 0x1b4504u: goto label_1b4504;
        case 0x1b4508u: goto label_1b4508;
        case 0x1b450cu: goto label_1b450c;
        case 0x1b4510u: goto label_1b4510;
        case 0x1b4514u: goto label_1b4514;
        case 0x1b4518u: goto label_1b4518;
        case 0x1b451cu: goto label_1b451c;
        case 0x1b4520u: goto label_1b4520;
        case 0x1b4524u: goto label_1b4524;
        case 0x1b4528u: goto label_1b4528;
        case 0x1b452cu: goto label_1b452c;
        case 0x1b4530u: goto label_1b4530;
        case 0x1b4534u: goto label_1b4534;
        case 0x1b4538u: goto label_1b4538;
        case 0x1b453cu: goto label_1b453c;
        case 0x1b4540u: goto label_1b4540;
        case 0x1b4544u: goto label_1b4544;
        case 0x1b4548u: goto label_1b4548;
        case 0x1b454cu: goto label_1b454c;
        case 0x1b4550u: goto label_1b4550;
        case 0x1b4554u: goto label_1b4554;
        case 0x1b4558u: goto label_1b4558;
        case 0x1b455cu: goto label_1b455c;
        case 0x1b4560u: goto label_1b4560;
        case 0x1b4564u: goto label_1b4564;
        case 0x1b4568u: goto label_1b4568;
        case 0x1b456cu: goto label_1b456c;
        default: break;
    }

    ctx->pc = 0x1b43d0u;

label_1b43d0:
    // 0x1b43d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1b43d4:
    // 0x1b43d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b43d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b43d8:
    // 0x1b43d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b43dc:
    // 0x1b43dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b43dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b43e0:
    // 0x1b43e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b43e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b43e4:
    // 0x1b43e4: 0xc0518f8  jal         func_1463E0
label_1b43e8:
    if (ctx->pc == 0x1B43E8u) {
        ctx->pc = 0x1B43E8u;
            // 0x1b43e8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1B43ECu;
        goto label_1b43ec;
    }
    ctx->pc = 0x1B43E4u;
    SET_GPR_U32(ctx, 31, 0x1B43ECu);
    ctx->pc = 0x1B43E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43E4u;
            // 0x1b43e8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43ECu; }
        if (ctx->pc != 0x1B43ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43ECu; }
        if (ctx->pc != 0x1B43ECu) { return; }
    }
    ctx->pc = 0x1B43ECu;
label_1b43ec:
    // 0x1b43ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b43ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b43f0:
    // 0x1b43f0: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
label_1b43f4:
    if (ctx->pc == 0x1B43F4u) {
        ctx->pc = 0x1B43F4u;
            // 0x1b43f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B43F8u;
        goto label_1b43f8;
    }
    ctx->pc = 0x1B43F0u;
    {
        const bool branch_taken_0x1b43f0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B43F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43F0u;
            // 0x1b43f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43f0) {
            ctx->pc = 0x1B4408u;
            goto label_1b4408;
        }
    }
    ctx->pc = 0x1B43F8u;
label_1b43f8:
    // 0x1b43f8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1b43f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_1b43fc:
    // 0x1b43fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b4400:
    if (ctx->pc == 0x1B4400u) {
        ctx->pc = 0x1B4400u;
            // 0x1b4400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4404u;
        goto label_1b4404;
    }
    ctx->pc = 0x1B43FCu;
    {
        const bool branch_taken_0x1b43fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43FCu;
            // 0x1b4400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43fc) {
            ctx->pc = 0x1B4410u;
            goto label_1b4410;
        }
    }
    ctx->pc = 0x1B4404u;
label_1b4404:
    // 0x1b4404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4408:
    // 0x1b4408: 0x10000054  b           . + 4 + (0x54 << 2)
label_1b440c:
    if (ctx->pc == 0x1B440Cu) {
        ctx->pc = 0x1B440Cu;
            // 0x1b440c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1B4410u;
        goto label_1b4410;
    }
    ctx->pc = 0x1B4408u;
    {
        const bool branch_taken_0x1b4408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4408u;
            // 0x1b440c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4408) {
            ctx->pc = 0x1B455Cu;
            goto label_1b455c;
        }
    }
    ctx->pc = 0x1B4410u;
label_1b4410:
    // 0x1b4410: 0xc05191c  jal         func_146470
label_1b4414:
    if (ctx->pc == 0x1B4414u) {
        ctx->pc = 0x1B4414u;
            // 0x1b4414: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1B4418u;
        goto label_1b4418;
    }
    ctx->pc = 0x1B4410u;
    SET_GPR_U32(ctx, 31, 0x1B4418u);
    ctx->pc = 0x1B4414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4410u;
            // 0x1b4414: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4418u; }
        if (ctx->pc != 0x1B4418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4418u; }
        if (ctx->pc != 0x1B4418u) { return; }
    }
    ctx->pc = 0x1B4418u;
label_1b4418:
    // 0x1b4418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b441c:
    // 0x1b441c: 0xc05191c  jal         func_146470
label_1b4420:
    if (ctx->pc == 0x1B4420u) {
        ctx->pc = 0x1B4420u;
            // 0x1b4420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4424u;
        goto label_1b4424;
    }
    ctx->pc = 0x1B441Cu;
    SET_GPR_U32(ctx, 31, 0x1B4424u);
    ctx->pc = 0x1B4420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B441Cu;
            // 0x1b4420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4424u; }
        if (ctx->pc != 0x1B4424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4424u; }
        if (ctx->pc != 0x1B4424u) { return; }
    }
    ctx->pc = 0x1B4424u;
label_1b4424:
    // 0x1b4424: 0x8f848d18  lw          $a0, -0x72E8($gp)
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4428:
    // 0x1b4428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b442c:
    // 0x1b442c: 0xc057358  jal         func_15CD60
label_1b4430:
    if (ctx->pc == 0x1B4430u) {
        ctx->pc = 0x1B4430u;
            // 0x1b4430: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4434u;
        goto label_1b4434;
    }
    ctx->pc = 0x1B442Cu;
    SET_GPR_U32(ctx, 31, 0x1B4434u);
    ctx->pc = 0x1B4430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B442Cu;
            // 0x1b4430: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD60u;
    if (runtime->hasFunction(0x15CD60u)) {
        auto targetFn = runtime->lookupFunction(0x15CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4434u; }
        if (ctx->pc != 0x1B4434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetParts__4CMapFPc_0x15cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4434u; }
        if (ctx->pc != 0x1B4434u) { return; }
    }
    ctx->pc = 0x1B4434u;
label_1b4434:
    // 0x1b4434: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x1b4434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4438:
    // 0x1b4438: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1b443c:
    // 0x1b443c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1b4440:
    // 0x1b4440: 0xac620fac  sw          $v0, 0xFAC($v1)
    ctx->pc = 0x1b4440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4012), GPR_U32(ctx, 2));
label_1b4444:
    // 0x1b4444: 0x8f848d20  lw          $a0, -0x72E0($gp)
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1b4448:
    // 0x1b4448: 0xc04e748  jal         func_139D20
label_1b444c:
    if (ctx->pc == 0x1B444Cu) {
        ctx->pc = 0x1B444Cu;
            // 0x1b444c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1B4450u;
        goto label_1b4450;
    }
    ctx->pc = 0x1B4448u;
    SET_GPR_U32(ctx, 31, 0x1B4450u);
    ctx->pc = 0x1B444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4448u;
            // 0x1b444c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4450u; }
        if (ctx->pc != 0x1B4450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4450u; }
        if (ctx->pc != 0x1B4450u) { return; }
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1b4454:
    // 0x1b4454: 0xc04e638  jal         func_1398E0
label_1b4458:
    if (ctx->pc == 0x1B4458u) {
        ctx->pc = 0x1B4458u;
            // 0x1b4458: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B445Cu;
        goto label_1b445c;
    }
    ctx->pc = 0x1B4454u;
    SET_GPR_U32(ctx, 31, 0x1B445Cu);
    ctx->pc = 0x1B4458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4454u;
            // 0x1b4458: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B445Cu; }
        if (ctx->pc != 0x1B445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B445Cu; }
        if (ctx->pc != 0x1B445Cu) { return; }
    }
    ctx->pc = 0x1B445Cu;
label_1b445c:
    // 0x1b445c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b4460:
    if (ctx->pc == 0x1B4460u) {
        ctx->pc = 0x1B4460u;
            // 0x1b4460: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4464u;
        goto label_1b4464;
    }
    ctx->pc = 0x1B445Cu;
    {
        const bool branch_taken_0x1b445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B445Cu;
            // 0x1b4460: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b445c) {
            ctx->pc = 0x1B44D4u;
            goto label_1b44d4;
        }
    }
    ctx->pc = 0x1B4464u;
label_1b4464:
    // 0x1b4464: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b4468:
    // 0x1b4468: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1b4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1b446c:
    // 0x1b446c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b446cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b4470:
    // 0x1b4470: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b4470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4474:
    // 0x1b4474: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4478:
    // 0x1b4478: 0x320f809  jalr        $t9
label_1b447c:
    if (ctx->pc == 0x1B447Cu) {
        ctx->pc = 0x1B447Cu;
            // 0x1b447c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4480u;
        goto label_1b4480;
    }
    ctx->pc = 0x1B4478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B4480u);
        ctx->pc = 0x1B447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4478u;
            // 0x1b447c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4480u; }
            if (ctx->pc != 0x1B4480u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4480u;
label_1b4480:
    // 0x1b4480: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b4484:
    // 0x1b4484: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1b4488:
    // 0x1b4488: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b4488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b448c:
    // 0x1b448c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4490:
    // 0x1b4490: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b4490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b4494:
    // 0x1b4494: 0x320f809  jalr        $t9
label_1b4498:
    if (ctx->pc == 0x1B4498u) {
        ctx->pc = 0x1B4498u;
            // 0x1b4498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B449Cu;
        goto label_1b449c;
    }
    ctx->pc = 0x1B4494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B449Cu);
        ctx->pc = 0x1B4498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4494u;
            // 0x1b4498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B449Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B449Cu; }
            if (ctx->pc != 0x1B449Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B449Cu;
label_1b449c:
    // 0x1b449c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b44a0:
    // 0x1b44a0: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1b44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1b44a4:
    // 0x1b44a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b44a8:
    // 0x1b44a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b44ac:
    // 0x1b44ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b44acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b44b0:
    // 0x1b44b0: 0x320f809  jalr        $t9
label_1b44b4:
    if (ctx->pc == 0x1B44B4u) {
        ctx->pc = 0x1B44B4u;
            // 0x1b44b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B8u;
        goto label_1b44b8;
    }
    ctx->pc = 0x1B44B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B44B8u);
        ctx->pc = 0x1B44B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44B0u;
            // 0x1b44b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B44B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B44B8u; }
            if (ctx->pc != 0x1B44B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B44B8u;
label_1b44b8:
    // 0x1b44b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b44bc:
    // 0x1b44bc: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x1b44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
label_1b44c0:
    // 0x1b44c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b44c4:
    // 0x1b44c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1b44c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b44c8:
    // 0x1b44c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b44c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b44cc:
    // 0x1b44cc: 0x320f809  jalr        $t9
label_1b44d0:
    if (ctx->pc == 0x1B44D0u) {
        ctx->pc = 0x1B44D0u;
            // 0x1b44d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B44D4u;
        goto label_1b44d4;
    }
    ctx->pc = 0x1B44CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B44D4u);
        ctx->pc = 0x1B44D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44CCu;
            // 0x1b44d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B44D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B44D4u; }
            if (ctx->pc != 0x1B44D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B44D4u;
label_1b44d4:
    // 0x1b44d4: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b44d8:
    // 0x1b44d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b44dc:
    // 0x1b44dc: 0xac510fd0  sw          $s1, 0xFD0($v0)
    ctx->pc = 0x1b44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4048), GPR_U32(ctx, 17));
label_1b44e0:
    // 0x1b44e0: 0x8f848d18  lw          $a0, -0x72E8($gp)
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b44e4:
    // 0x1b44e4: 0xc05732c  jal         func_15CCB0
label_1b44e8:
    if (ctx->pc == 0x1B44E8u) {
        ctx->pc = 0x1B44E8u;
            // 0x1b44e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B44ECu;
        goto label_1b44ec;
    }
    ctx->pc = 0x1B44E4u;
    SET_GPR_U32(ctx, 31, 0x1B44ECu);
    ctx->pc = 0x1B44E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44E4u;
            // 0x1b44e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CCB0u;
    if (runtime->hasFunction(0x15CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44ECu; }
        if (ctx->pc != 0x1B44ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMDS__4CMapFPc_0x15ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B44ECu; }
        if (ctx->pc != 0x1B44ECu) { return; }
    }
    ctx->pc = 0x1B44ECu;
label_1b44ec:
    // 0x1b44ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b44ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b44f0:
    // 0x1b44f0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_1b44f4:
    if (ctx->pc == 0x1B44F4u) {
        ctx->pc = 0x1B44F4u;
            // 0x1b44f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B44F8u;
        goto label_1b44f8;
    }
    ctx->pc = 0x1B44F0u;
    {
        const bool branch_taken_0x1b44f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44F0u;
            // 0x1b44f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44f0) {
            ctx->pc = 0x1B4558u;
            goto label_1b4558;
        }
    }
    ctx->pc = 0x1B44F8u;
label_1b44f8:
    // 0x1b44f8: 0xc04d6d8  jal         func_135B60
label_1b44fc:
    if (ctx->pc == 0x1B44FCu) {
        ctx->pc = 0x1B44FCu;
            // 0x1b44fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B4500u;
        goto label_1b4500;
    }
    ctx->pc = 0x1B44F8u;
    SET_GPR_U32(ctx, 31, 0x1B4500u);
    ctx->pc = 0x1B44FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44F8u;
            // 0x1b44fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4500u; }
        if (ctx->pc != 0x1B4500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4500u; }
        if (ctx->pc != 0x1B4500u) { return; }
    }
    ctx->pc = 0x1B4500u;
label_1b4500:
    // 0x1b4500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4504:
    // 0x1b4504: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1b4504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1b4508:
    // 0x1b4508: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1b4508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1b450c:
    // 0x1b450c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b4510:
    // 0x1b4510: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1b4510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1b4514:
    // 0x1b4514: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1b4514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1b4518:
    // 0x1b4518: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b451c:
    // 0x1b451c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b4520:
    // 0x1b4520: 0x8c440fd0  lw          $a0, 0xFD0($v0)
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4048)));
label_1b4524:
    // 0x1b4524: 0xc05a148  jal         func_168520
label_1b4528:
    if (ctx->pc == 0x1B4528u) {
        ctx->pc = 0x1B4528u;
            // 0x1b4528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B452Cu;
        goto label_1b452c;
    }
    ctx->pc = 0x1B4524u;
    SET_GPR_U32(ctx, 31, 0x1B452Cu);
    ctx->pc = 0x1B4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4524u;
            // 0x1b4528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B452Cu; }
        if (ctx->pc != 0x1B452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMds__9CMapPieceFP8CMdsInfo_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B452Cu; }
        if (ctx->pc != 0x1B452Cu) { return; }
    }
    ctx->pc = 0x1B452Cu;
label_1b452c:
    // 0x1b452c: 0x8f828d18  lw          $v0, -0x72E8($gp)
    ctx->pc = 0x1b452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1b4530:
    // 0x1b4530: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b4530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b4534:
    // 0x1b4534: 0x8c420fd0  lw          $v0, 0xFD0($v0)
    ctx->pc = 0x1b4534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4048)));
label_1b4538:
    // 0x1b4538: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1b4538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1b453c:
    // 0x1b453c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b4540:
    if (ctx->pc == 0x1B4540u) {
        ctx->pc = 0x1B4540u;
            // 0x1b4540: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1B4544u;
        goto label_1b4544;
    }
    ctx->pc = 0x1B453Cu;
    {
        const bool branch_taken_0x1b453c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B453Cu;
            // 0x1b4540: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b453c) {
            ctx->pc = 0x1B4554u;
            goto label_1b4554;
        }
    }
    ctx->pc = 0x1B4544u;
label_1b4544:
    // 0x1b4544: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b4544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b4548:
    // 0x1b4548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b454c:
    // 0x1b454c: 0xc04de54  jal         func_137950
label_1b4550:
    if (ctx->pc == 0x1B4550u) {
        ctx->pc = 0x1B4550u;
            // 0x1b4550: 0x3447002a  ori         $a3, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->pc = 0x1B4554u;
        goto label_1b4554;
    }
    ctx->pc = 0x1B454Cu;
    SET_GPR_U32(ctx, 31, 0x1B4554u);
    ctx->pc = 0x1B4550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B454Cu;
            // 0x1b4550: 0x3447002a  ori         $a3, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4554u; }
        if (ctx->pc != 0x1B4554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4554u; }
        if (ctx->pc != 0x1B4554u) { return; }
    }
    ctx->pc = 0x1B4554u;
label_1b4554:
    // 0x1b4554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4558:
    // 0x1b4558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b4558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b455c:
    // 0x1b455c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b455cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4560:
    // 0x1b4560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4564:
    // 0x1b4564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4568:
    // 0x1b4568: 0x3e00008  jr          $ra
label_1b456c:
    if (ctx->pc == 0x1B456Cu) {
        ctx->pc = 0x1B456Cu;
            // 0x1b456c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1B4570u;
        goto label_fallthrough_0x1b4568;
    }
    ctx->pc = 0x1B4568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4568u;
            // 0x1b456c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b4568:
    ctx->pc = 0x1B4570u;
}
