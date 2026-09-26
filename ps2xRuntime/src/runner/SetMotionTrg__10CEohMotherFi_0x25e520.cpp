#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotionTrg__10CEohMotherFi
// Address: 0x25e520 - 0x25e598
void SetMotionTrg__10CEohMotherFi_0x25e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionTrg__10CEohMotherFi_0x25e520");
#endif

    ctx->pc = 0x25e520u;

    // 0x25e520: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E520u;
    {
        const bool branch_taken_0x25e520 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E520u;
            // 0x25e524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e520) {
            ctx->pc = 0x25E538u;
            goto label_25e538;
        }
    }
    ctx->pc = 0x25E528u;
    // 0x25e528: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25e52c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E52Cu;
    {
        const bool branch_taken_0x25e52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E52Cu;
            // 0x25e530: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e52c) {
            ctx->pc = 0x25E540u;
            goto label_25e540;
        }
    }
    ctx->pc = 0x25E534u;
    // 0x25e534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e538:
    // 0x25e538: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25E538u;
    {
        const bool branch_taken_0x25e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e538) {
            ctx->pc = 0x25E590u;
            goto label_25e590;
        }
    }
    ctx->pc = 0x25E540u;
label_25e540:
    // 0x25e540: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E548u;
    {
        const bool branch_taken_0x25e548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e548) {
            ctx->pc = 0x25E558u;
            goto label_25e558;
        }
    }
    ctx->pc = 0x25E550u;
    // 0x25e550: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25E550u;
    {
        const bool branch_taken_0x25e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E550u;
            // 0x25e554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e550) {
            ctx->pc = 0x25E584u;
            goto label_25e584;
        }
    }
    ctx->pc = 0x25E558u;
label_25e558:
    // 0x25e558: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25e55c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E55Cu;
    {
        const bool branch_taken_0x25e55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E55Cu;
            // 0x25e560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e55c) {
            ctx->pc = 0x25E56Cu;
            goto label_25e56c;
        }
    }
    ctx->pc = 0x25E564u;
    // 0x25e564: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E564u;
    {
        const bool branch_taken_0x25e564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e564) {
            ctx->pc = 0x25E590u;
            goto label_25e590;
        }
    }
    ctx->pc = 0x25E56Cu;
label_25e56c:
    // 0x25e56c: 0x8c830378  lw          $v1, 0x378($a0)
    ctx->pc = 0x25e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x25e570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e574: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E574u;
    {
        const bool branch_taken_0x25e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e574) {
            ctx->pc = 0x25E58Cu;
            goto label_25e58c;
        }
    }
    ctx->pc = 0x25E57Cu;
    // 0x25e57c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E57Cu;
    {
        const bool branch_taken_0x25e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E57Cu;
            // 0x25e580: 0xac8203bc  sw          $v0, 0x3BC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e57c) {
            ctx->pc = 0x25E58Cu;
            goto label_25e58c;
        }
    }
    ctx->pc = 0x25E584u;
label_25e584:
    // 0x25e584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25E584u;
    {
        const bool branch_taken_0x25e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e584) {
            ctx->pc = 0x25E590u;
            goto label_25e590;
        }
    }
    ctx->pc = 0x25E58Cu;
label_25e58c:
    // 0x25e58c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e590:
    // 0x25e590: 0x3e00008  jr          $ra
    ctx->pc = 0x25E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E598u;
}
