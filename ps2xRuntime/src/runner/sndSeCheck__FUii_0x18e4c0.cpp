#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSeCheck__FUii
// Address: 0x18e4c0 - 0x18e598
void sndSeCheck__FUii_0x18e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSeCheck__FUii_0x18e4c0");
#endif

    switch (ctx->pc) {
        case 0x18e4e0u: goto label_18e4e0;
        case 0x18e4e8u: goto label_18e4e8;
        case 0x18e4f4u: goto label_18e4f4;
        default: break;
    }

    ctx->pc = 0x18e4c0u;

    // 0x18e4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e4c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e4c8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E4C8u;
    {
        const bool branch_taken_0x18e4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4C8u;
            // 0x18e4cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4c8) {
            ctx->pc = 0x18E4D8u;
            goto label_18e4d8;
        }
    }
    ctx->pc = 0x18E4D0u;
    // 0x18e4d0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18E4D0u;
    {
        const bool branch_taken_0x18e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4D0u;
            // 0x18e4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4d0) {
            ctx->pc = 0x18E58Cu;
            goto label_18e58c;
        }
    }
    ctx->pc = 0x18E4D8u;
label_18e4d8:
    // 0x18e4d8: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18E4D8u;
    SET_GPR_U32(ctx, 31, 0x18E4E0u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4E0u; }
        if (ctx->pc != 0x18E4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4E0u; }
        if (ctx->pc != 0x18E4E0u) { return; }
    }
    ctx->pc = 0x18E4E0u;
label_18e4e0:
    // 0x18e4e0: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18E4E0u;
    SET_GPR_U32(ctx, 31, 0x18E4E8u);
    ctx->pc = 0x18E4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4E0u;
            // 0x18e4e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4E8u; }
        if (ctx->pc != 0x18E4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4E8u; }
        if (ctx->pc != 0x18E4E8u) { return; }
    }
    ctx->pc = 0x18E4E8u;
label_18e4e8:
    // 0x18e4e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4ec: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E4ECu;
    SET_GPR_U32(ctx, 31, 0x18E4F4u);
    ctx->pc = 0x18E4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4ECu;
            // 0x18e4f0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4F4u; }
        if (ctx->pc != 0x18E4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4F4u; }
        if (ctx->pc != 0x18E4F4u) { return; }
    }
    ctx->pc = 0x18E4F4u;
label_18e4f4:
    // 0x18e4f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E4F4u;
    {
        const bool branch_taken_0x18e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e4f4) {
            ctx->pc = 0x18E504u;
            goto label_18e504;
        }
    }
    ctx->pc = 0x18E4FCu;
    // 0x18e4fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18E4FCu;
    {
        const bool branch_taken_0x18e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4FCu;
            // 0x18e500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4fc) {
            ctx->pc = 0x18E58Cu;
            goto label_18e58c;
        }
    }
    ctx->pc = 0x18E504u;
label_18e504:
    // 0x18e504: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E504u;
    {
        const bool branch_taken_0x18e504 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E504u;
            // 0x18e508: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e504) {
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E50Cu;
    // 0x18e50c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18e510: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18e510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e514: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E514u;
    {
        const bool branch_taken_0x18e514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E514u;
            // 0x18e518: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e514) {
            ctx->pc = 0x18E528u;
            goto label_18e528;
        }
    }
    ctx->pc = 0x18E51Cu;
    // 0x18e51c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18e51cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e520:
    // 0x18e520: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E520u;
    {
        const bool branch_taken_0x18e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e520) {
            ctx->pc = 0x18E538u;
            goto label_18e538;
        }
    }
    ctx->pc = 0x18E528u;
label_18e528:
    // 0x18e528: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18e528u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18e52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e534: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_18e538:
    // 0x18e538: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E538u;
    {
        const bool branch_taken_0x18e538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E538u;
            // 0x18e53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e538) {
            ctx->pc = 0x18E548u;
            goto label_18e548;
        }
    }
    ctx->pc = 0x18E540u;
    // 0x18e540: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18E540u;
    {
        const bool branch_taken_0x18e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E540u;
            // 0x18e544: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e540) {
            ctx->pc = 0x18E590u;
            goto label_18e590;
        }
    }
    ctx->pc = 0x18E548u;
label_18e548:
    // 0x18e548: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E548u;
    {
        const bool branch_taken_0x18e548 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E548u;
            // 0x18e54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e548) {
            ctx->pc = 0x18E564u;
            goto label_18e564;
        }
    }
    ctx->pc = 0x18E550u;
    // 0x18e550: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18e554: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18e554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e558: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E558u;
    {
        const bool branch_taken_0x18e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e558) {
            ctx->pc = 0x18E56Cu;
            goto label_18e56c;
        }
    }
    ctx->pc = 0x18E560u;
    // 0x18e560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e564:
    // 0x18e564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E564u;
    {
        const bool branch_taken_0x18e564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e564) {
            ctx->pc = 0x18E580u;
            goto label_18e580;
        }
    }
    ctx->pc = 0x18E56Cu;
label_18e56c:
    // 0x18e56c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18e570: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x18e570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18e574: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18e578: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e580:
    // 0x18e580: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E580u;
    {
        const bool branch_taken_0x18e580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E580u;
            // 0x18e584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e580) {
            ctx->pc = 0x18E58Cu;
            goto label_18e58c;
        }
    }
    ctx->pc = 0x18E588u;
    // 0x18e588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e58c:
    // 0x18e58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e590:
    // 0x18e590: 0x3e00008  jr          $ra
    ctx->pc = 0x18E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E590u;
            // 0x18e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E598u;
}
