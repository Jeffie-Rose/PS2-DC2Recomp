#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_REF_POS__FP12RS_STACKDATAi
// Address: 0x1e4510 - 0x1e4630
void ps2__GET_TARGET_REF_POS__FP12RS_STACKDATAi_0x1e4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_REF_POS__FP12RS_STACKDATAi_0x1e4510");
#endif

    switch (ctx->pc) {
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        case 0x1e453cu: goto label_1e453c;
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4544u: goto label_1e4544;
        case 0x1e4548u: goto label_1e4548;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e4550u: goto label_1e4550;
        case 0x1e4554u: goto label_1e4554;
        case 0x1e4558u: goto label_1e4558;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e4574u: goto label_1e4574;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4580u: goto label_1e4580;
        case 0x1e4584u: goto label_1e4584;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4590u: goto label_1e4590;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e4598u: goto label_1e4598;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45a4u: goto label_1e45a4;
        case 0x1e45a8u: goto label_1e45a8;
        case 0x1e45acu: goto label_1e45ac;
        case 0x1e45b0u: goto label_1e45b0;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45b8u: goto label_1e45b8;
        case 0x1e45bcu: goto label_1e45bc;
        case 0x1e45c0u: goto label_1e45c0;
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e45ccu: goto label_1e45cc;
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45d4u: goto label_1e45d4;
        case 0x1e45d8u: goto label_1e45d8;
        case 0x1e45dcu: goto label_1e45dc;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45e8u: goto label_1e45e8;
        case 0x1e45ecu: goto label_1e45ec;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45f4u: goto label_1e45f4;
        case 0x1e45f8u: goto label_1e45f8;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e4600u: goto label_1e4600;
        case 0x1e4604u: goto label_1e4604;
        case 0x1e4608u: goto label_1e4608;
        case 0x1e460cu: goto label_1e460c;
        case 0x1e4610u: goto label_1e4610;
        case 0x1e4614u: goto label_1e4614;
        case 0x1e4618u: goto label_1e4618;
        case 0x1e461cu: goto label_1e461c;
        case 0x1e4620u: goto label_1e4620;
        case 0x1e4624u: goto label_1e4624;
        case 0x1e4628u: goto label_1e4628;
        case 0x1e462cu: goto label_1e462c;
        default: break;
    }

    ctx->pc = 0x1e4510u;

label_1e4510:
    // 0x1e4510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e4510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e4514:
    // 0x1e4514: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e4514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e4518:
    // 0x1e4518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e451c:
    // 0x1e451c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e4520:
    // 0x1e4520: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e4520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e4524:
    // 0x1e4524: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4528:
    if (ctx->pc == 0x1E4528u) {
        ctx->pc = 0x1E4528u;
            // 0x1e4528: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1E452Cu;
        goto label_1e452c;
    }
    ctx->pc = 0x1E4524u;
    {
        const bool branch_taken_0x1e4524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4524u;
            // 0x1e4528: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4524) {
            ctx->pc = 0x1E4534u;
            goto label_1e4534;
        }
    }
    ctx->pc = 0x1E452Cu;
label_1e452c:
    // 0x1e452c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1e4530:
    if (ctx->pc == 0x1E4530u) {
        ctx->pc = 0x1E4530u;
            // 0x1e4530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4534u;
        goto label_1e4534;
    }
    ctx->pc = 0x1E452Cu;
    {
        const bool branch_taken_0x1e452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E452Cu;
            // 0x1e4530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e452c) {
            ctx->pc = 0x1E4618u;
            goto label_1e4618;
        }
    }
    ctx->pc = 0x1E4534u;
label_1e4534:
    // 0x1e4534: 0xc0781ac  jal         func_1E06B0
label_1e4538:
    if (ctx->pc == 0x1E4538u) {
        ctx->pc = 0x1E4538u;
            // 0x1e4538: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E453Cu;
        goto label_1e453c;
    }
    ctx->pc = 0x1E4534u;
    SET_GPR_U32(ctx, 31, 0x1E453Cu);
    ctx->pc = 0x1E4538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4534u;
            // 0x1e4538: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E453Cu; }
        if (ctx->pc != 0x1E453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E453Cu; }
        if (ctx->pc != 0x1E453Cu) { return; }
    }
    ctx->pc = 0x1E453Cu;
label_1e453c:
    // 0x1e453c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4540:
    // 0x1e4540: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e4540u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e4544:
    // 0x1e4544: 0xc0781ac  jal         func_1E06B0
label_1e4548:
    if (ctx->pc == 0x1E4548u) {
        ctx->pc = 0x1E4548u;
            // 0x1e4548: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E454Cu;
        goto label_1e454c;
    }
    ctx->pc = 0x1E4544u;
    SET_GPR_U32(ctx, 31, 0x1E454Cu);
    ctx->pc = 0x1E4548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4544u;
            // 0x1e4548: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E454Cu; }
        if (ctx->pc != 0x1E454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E454Cu; }
        if (ctx->pc != 0x1E454Cu) { return; }
    }
    ctx->pc = 0x1E454Cu;
label_1e454c:
    // 0x1e454c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4550:
    // 0x1e4550: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e4554:
    // 0x1e4554: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e4554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
label_1e4558:
    // 0x1e4558: 0xc0a0ed8  jal         func_283B60
label_1e455c:
    if (ctx->pc == 0x1E455Cu) {
        ctx->pc = 0x1E455Cu;
            // 0x1e455c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4560u;
        goto label_1e4560;
    }
    ctx->pc = 0x1E4558u;
    SET_GPR_U32(ctx, 31, 0x1E4560u);
    ctx->pc = 0x1E455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4558u;
            // 0x1e455c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4560u; }
        if (ctx->pc != 0x1E4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4560u; }
        if (ctx->pc != 0x1E4560u) { return; }
    }
    ctx->pc = 0x1E4560u;
label_1e4560:
    // 0x1e4560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4564:
    if (ctx->pc == 0x1E4564u) {
        ctx->pc = 0x1E4568u;
        goto label_1e4568;
    }
    ctx->pc = 0x1E4560u;
    {
        const bool branch_taken_0x1e4560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4560) {
            ctx->pc = 0x1E4570u;
            goto label_1e4570;
        }
    }
    ctx->pc = 0x1E4568u;
label_1e4568:
    // 0x1e4568: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1e456c:
    if (ctx->pc == 0x1E456Cu) {
        ctx->pc = 0x1E456Cu;
            // 0x1e456c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4570u;
        goto label_1e4570;
    }
    ctx->pc = 0x1E4568u;
    {
        const bool branch_taken_0x1e4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4568u;
            // 0x1e456c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4568) {
            ctx->pc = 0x1E4618u;
            goto label_1e4618;
        }
    }
    ctx->pc = 0x1E4570u;
label_1e4570:
    // 0x1e4570: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4574:
    // 0x1e4574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4578:
    // 0x1e4578: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e457c:
    // 0x1e457c: 0x320f809  jalr        $t9
label_1e4580:
    if (ctx->pc == 0x1E4580u) {
        ctx->pc = 0x1E4580u;
            // 0x1e4580: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E4584u;
        goto label_1e4584;
    }
    ctx->pc = 0x1E457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4584u);
        ctx->pc = 0x1E4580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E457Cu;
            // 0x1e4580: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4584u; }
            if (ctx->pc != 0x1E4584u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4584u;
label_1e4584:
    // 0x1e4584: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4588:
    // 0x1e4588: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e4588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e458c:
    // 0x1e458c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1e458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1e4590:
    // 0x1e4590: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e4590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4594:
    // 0x1e4594: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1e4594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_1e4598:
    // 0x1e4598: 0xc041be0  jal         func_106F80
label_1e459c:
    if (ctx->pc == 0x1E459Cu) {
        ctx->pc = 0x1E459Cu;
            // 0x1e459c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x1E45A0u;
        goto label_1e45a0;
    }
    ctx->pc = 0x1E4598u;
    SET_GPR_U32(ctx, 31, 0x1E45A0u);
    ctx->pc = 0x1E459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4598u;
            // 0x1e459c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45A0u; }
        if (ctx->pc != 0x1E45A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45A0u; }
        if (ctx->pc != 0x1E45A0u) { return; }
    }
    ctx->pc = 0x1E45A0u;
label_1e45a0:
    // 0x1e45a0: 0xc041c7a  jal         func_1071E8
label_1e45a4:
    if (ctx->pc == 0x1E45A4u) {
        ctx->pc = 0x1E45A4u;
            // 0x1e45a4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E45A8u;
        goto label_1e45a8;
    }
    ctx->pc = 0x1E45A0u;
    SET_GPR_U32(ctx, 31, 0x1E45A8u);
    ctx->pc = 0x1E45A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45A0u;
            // 0x1e45a4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45A8u; }
        if (ctx->pc != 0x1E45A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45A8u; }
        if (ctx->pc != 0x1E45A8u) { return; }
    }
    ctx->pc = 0x1E45A8u;
label_1e45a8:
    // 0x1e45a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e45ac:
    // 0x1e45ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e45acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e45b0:
    // 0x1e45b0: 0xc041cf6  jal         func_1073D8
label_1e45b4:
    if (ctx->pc == 0x1E45B4u) {
        ctx->pc = 0x1E45B4u;
            // 0x1e45b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E45B8u;
        goto label_1e45b8;
    }
    ctx->pc = 0x1E45B0u;
    SET_GPR_U32(ctx, 31, 0x1E45B8u);
    ctx->pc = 0x1E45B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45B0u;
            // 0x1e45b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45B8u; }
        if (ctx->pc != 0x1E45B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45B8u; }
        if (ctx->pc != 0x1E45B8u) { return; }
    }
    ctx->pc = 0x1E45B8u;
label_1e45b8:
    // 0x1e45b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e45bc:
    // 0x1e45bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e45bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e45c0:
    // 0x1e45c0: 0xc041bb0  jal         func_106EC0
label_1e45c4:
    if (ctx->pc == 0x1E45C4u) {
        ctx->pc = 0x1E45C4u;
            // 0x1e45c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C8u;
        goto label_1e45c8;
    }
    ctx->pc = 0x1E45C0u;
    SET_GPR_U32(ctx, 31, 0x1E45C8u);
    ctx->pc = 0x1E45C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45C0u;
            // 0x1e45c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45C8u; }
        if (ctx->pc != 0x1E45C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45C8u; }
        if (ctx->pc != 0x1E45C8u) { return; }
    }
    ctx->pc = 0x1E45C8u;
label_1e45c8:
    // 0x1e45c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e45cc:
    // 0x1e45cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e45ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e45d0:
    // 0x1e45d0: 0xc041c4a  jal         func_107128
label_1e45d4:
    if (ctx->pc == 0x1E45D4u) {
        ctx->pc = 0x1E45D4u;
            // 0x1e45d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E45D8u;
        goto label_1e45d8;
    }
    ctx->pc = 0x1E45D0u;
    SET_GPR_U32(ctx, 31, 0x1E45D8u);
    ctx->pc = 0x1E45D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45D0u;
            // 0x1e45d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45D8u; }
        if (ctx->pc != 0x1E45D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45D8u; }
        if (ctx->pc != 0x1E45D8u) { return; }
    }
    ctx->pc = 0x1E45D8u;
label_1e45d8:
    // 0x1e45d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e45dc:
    // 0x1e45dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e45dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e45e0:
    // 0x1e45e0: 0xc041c38  jal         func_1070E0
label_1e45e4:
    if (ctx->pc == 0x1E45E4u) {
        ctx->pc = 0x1E45E4u;
            // 0x1e45e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E45E8u;
        goto label_1e45e8;
    }
    ctx->pc = 0x1E45E0u;
    SET_GPR_U32(ctx, 31, 0x1E45E8u);
    ctx->pc = 0x1E45E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45E0u;
            // 0x1e45e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45E8u; }
        if (ctx->pc != 0x1E45E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45E8u; }
        if (ctx->pc != 0x1E45E8u) { return; }
    }
    ctx->pc = 0x1E45E8u;
label_1e45e8:
    // 0x1e45e8: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1e45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e45ec:
    // 0x1e45ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e45ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e45f0:
    // 0x1e45f0: 0xc0781c4  jal         func_1E0710
label_1e45f4:
    if (ctx->pc == 0x1E45F4u) {
        ctx->pc = 0x1E45F4u;
            // 0x1e45f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E45F8u;
        goto label_1e45f8;
    }
    ctx->pc = 0x1E45F0u;
    SET_GPR_U32(ctx, 31, 0x1E45F8u);
    ctx->pc = 0x1E45F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45F0u;
            // 0x1e45f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45F8u; }
        if (ctx->pc != 0x1E45F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45F8u; }
        if (ctx->pc != 0x1E45F8u) { return; }
    }
    ctx->pc = 0x1E45F8u;
label_1e45f8:
    // 0x1e45f8: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x1e45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e45fc:
    // 0x1e45fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e45fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4600:
    // 0x1e4600: 0xc0781c4  jal         func_1E0710
label_1e4604:
    if (ctx->pc == 0x1E4604u) {
        ctx->pc = 0x1E4604u;
            // 0x1e4604: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4608u;
        goto label_1e4608;
    }
    ctx->pc = 0x1E4600u;
    SET_GPR_U32(ctx, 31, 0x1E4608u);
    ctx->pc = 0x1E4604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4600u;
            // 0x1e4604: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4608u; }
        if (ctx->pc != 0x1E4608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4608u; }
        if (ctx->pc != 0x1E4608u) { return; }
    }
    ctx->pc = 0x1E4608u;
label_1e4608:
    // 0x1e4608: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x1e4608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e460c:
    // 0x1e460c: 0xc0781c4  jal         func_1E0710
label_1e4610:
    if (ctx->pc == 0x1E4610u) {
        ctx->pc = 0x1E4610u;
            // 0x1e4610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4614u;
        goto label_1e4614;
    }
    ctx->pc = 0x1E460Cu;
    SET_GPR_U32(ctx, 31, 0x1E4614u);
    ctx->pc = 0x1E4610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E460Cu;
            // 0x1e4610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4614u; }
        if (ctx->pc != 0x1E4614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4614u; }
        if (ctx->pc != 0x1E4614u) { return; }
    }
    ctx->pc = 0x1E4614u;
label_1e4614:
    // 0x1e4614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4618:
    // 0x1e4618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e461c:
    // 0x1e461c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e4620:
    // 0x1e4620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e4620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4624:
    // 0x1e4624: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e4628:
    // 0x1e4628: 0x3e00008  jr          $ra
label_1e462c:
    if (ctx->pc == 0x1E462Cu) {
        ctx->pc = 0x1E462Cu;
            // 0x1e462c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1E4630u;
        goto label_fallthrough_0x1e4628;
    }
    ctx->pc = 0x1E4628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4628u;
            // 0x1e462c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4628:
    ctx->pc = 0x1E4630u;
}
