#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckStay__13CVillagerMngrFi
// Address: 0x2cd540 - 0x2cd5a4
void CheckStay__13CVillagerMngrFi_0x2cd540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckStay__13CVillagerMngrFi_0x2cd540");
#endif

    switch (ctx->pc) {
        case 0x2cd554u: goto label_2cd554;
        default: break;
    }

    ctx->pc = 0x2cd540u;

    // 0x2cd540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cd548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd54c: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CD54Cu;
    SET_GPR_U32(ctx, 31, 0x2CD554u);
    ctx->pc = 0x2CD550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD54Cu;
            // 0x2cd550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD554u; }
        if (ctx->pc != 0x2CD554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD554u; }
        if (ctx->pc != 0x2CD554u) { return; }
    }
    ctx->pc = 0x2CD554u;
label_2cd554:
    // 0x2cd554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD554u;
    {
        const bool branch_taken_0x2cd554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd554) {
            ctx->pc = 0x2CD564u;
            goto label_2cd564;
        }
    }
    ctx->pc = 0x2CD55Cu;
    // 0x2cd55c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CD55Cu;
    {
        const bool branch_taken_0x2cd55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD55Cu;
            // 0x2cd560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd55c) {
            ctx->pc = 0x2CD594u;
            goto label_2cd594;
        }
    }
    ctx->pc = 0x2CD564u;
label_2cd564:
    // 0x2cd564: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2cd564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2cd568: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD568u;
    {
        const bool branch_taken_0x2cd568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd568) {
            ctx->pc = 0x2CD578u;
            goto label_2cd578;
        }
    }
    ctx->pc = 0x2CD570u;
    // 0x2cd570: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD570u;
    {
        const bool branch_taken_0x2cd570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD570u;
            // 0x2cd574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd570) {
            ctx->pc = 0x2CD594u;
            goto label_2cd594;
        }
    }
    ctx->pc = 0x2CD578u;
label_2cd578:
    // 0x2cd578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cd578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cd57c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD57Cu;
    {
        const bool branch_taken_0x2cd57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd57c) {
            ctx->pc = 0x2CD58Cu;
            goto label_2cd58c;
        }
    }
    ctx->pc = 0x2CD584u;
    // 0x2cd584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD584u;
    {
        const bool branch_taken_0x2cd584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD584u;
            // 0x2cd588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd584) {
            ctx->pc = 0x2CD594u;
            goto label_2cd594;
        }
    }
    ctx->pc = 0x2CD58Cu;
label_2cd58c:
    // 0x2cd58c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2cd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cd590: 0x0  nop
    ctx->pc = 0x2cd590u;
    // NOP
label_2cd594:
    // 0x2cd594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd59c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD59Cu;
            // 0x2cd5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD5A4u;
}
