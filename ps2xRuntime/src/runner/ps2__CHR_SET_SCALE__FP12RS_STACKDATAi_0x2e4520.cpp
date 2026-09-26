#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_SCALE__FP12RS_STACKDATAi
// Address: 0x2e4520 - 0x2e4570
void ps2__CHR_SET_SCALE__FP12RS_STACKDATAi_0x2e4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_SCALE__FP12RS_STACKDATAi_0x2e4520");
#endif

    switch (ctx->pc) {
        case 0x2e4520u: goto label_2e4520;
        case 0x2e4524u: goto label_2e4524;
        case 0x2e4528u: goto label_2e4528;
        case 0x2e452cu: goto label_2e452c;
        case 0x2e4530u: goto label_2e4530;
        case 0x2e4534u: goto label_2e4534;
        case 0x2e4538u: goto label_2e4538;
        case 0x2e453cu: goto label_2e453c;
        case 0x2e4540u: goto label_2e4540;
        case 0x2e4544u: goto label_2e4544;
        case 0x2e4548u: goto label_2e4548;
        case 0x2e454cu: goto label_2e454c;
        case 0x2e4550u: goto label_2e4550;
        case 0x2e4554u: goto label_2e4554;
        case 0x2e4558u: goto label_2e4558;
        case 0x2e455cu: goto label_2e455c;
        case 0x2e4560u: goto label_2e4560;
        case 0x2e4564u: goto label_2e4564;
        case 0x2e4568u: goto label_2e4568;
        case 0x2e456cu: goto label_2e456c;
        default: break;
    }

    ctx->pc = 0x2e4520u;

label_2e4520:
    // 0x2e4520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e4524:
    // 0x2e4524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e4528:
    // 0x2e4528: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e452c:
    // 0x2e452c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4530:
    // 0x2e4530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4534:
    if (ctx->pc == 0x2E4534u) {
        ctx->pc = 0x2E4534u;
            // 0x2e4534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4538u;
        goto label_2e4538;
    }
    ctx->pc = 0x2E4530u;
    {
        const bool branch_taken_0x2e4530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4530u;
            // 0x2e4534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4530) {
            ctx->pc = 0x2E4540u;
            goto label_2e4540;
        }
    }
    ctx->pc = 0x2E4538u;
label_2e4538:
    // 0x2e4538: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e453c:
    if (ctx->pc == 0x2E453Cu) {
        ctx->pc = 0x2E453Cu;
            // 0x2e453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4540u;
        goto label_2e4540;
    }
    ctx->pc = 0x2E4538u;
    {
        const bool branch_taken_0x2e4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4538u;
            // 0x2e453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4538) {
            ctx->pc = 0x2E4564u;
            goto label_2e4564;
        }
    }
    ctx->pc = 0x2E4540u;
label_2e4540:
    // 0x2e4540: 0xc0b8cbc  jal         func_2E32F0
label_2e4544:
    if (ctx->pc == 0x2E4544u) {
        ctx->pc = 0x2E4544u;
            // 0x2e4544: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E4548u;
        goto label_2e4548;
    }
    ctx->pc = 0x2E4540u;
    SET_GPR_U32(ctx, 31, 0x2E4548u);
    ctx->pc = 0x2E4544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4540u;
            // 0x2e4544: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4548u; }
        if (ctx->pc != 0x2E4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4548u; }
        if (ctx->pc != 0x2E4548u) { return; }
    }
    ctx->pc = 0x2E4548u;
label_2e4548:
    // 0x2e4548: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e454c:
    // 0x2e454c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4550:
    // 0x2e4550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4554:
    // 0x2e4554: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2e4554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2e4558:
    // 0x2e4558: 0x320f809  jalr        $t9
label_2e455c:
    if (ctx->pc == 0x2E455Cu) {
        ctx->pc = 0x2E455Cu;
            // 0x2e455c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E4560u;
        goto label_2e4560;
    }
    ctx->pc = 0x2E4558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4560u);
        ctx->pc = 0x2E455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4558u;
            // 0x2e455c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4560u; }
            if (ctx->pc != 0x2E4560u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4560u;
label_2e4560:
    // 0x2e4560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4564:
    // 0x2e4564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4568:
    // 0x2e4568: 0x3e00008  jr          $ra
label_2e456c:
    if (ctx->pc == 0x2E456Cu) {
        ctx->pc = 0x2E456Cu;
            // 0x2e456c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4570u;
        goto label_fallthrough_0x2e4568;
    }
    ctx->pc = 0x2E4568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4568u;
            // 0x2e456c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4568:
    ctx->pc = 0x2E4570u;
}
