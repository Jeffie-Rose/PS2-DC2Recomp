#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNum__14CFuncPointMngrFi
// Address: 0x29d710 - 0x29d780
void GetNum__14CFuncPointMngrFi_0x29d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNum__14CFuncPointMngrFi_0x29d710");
#endif

    switch (ctx->pc) {
        case 0x29d754u: goto label_29d754;
        default: break;
    }

    ctx->pc = 0x29d710u;

    // 0x29d710: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D710u;
    {
        const bool branch_taken_0x29d710 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D710u;
            // 0x29d714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d710) {
            ctx->pc = 0x29D728u;
            goto label_29d728;
        }
    }
    ctx->pc = 0x29D718u;
    // 0x29d718: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x29d718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d71c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D71Cu;
    {
        const bool branch_taken_0x29d71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D71Cu;
            // 0x29d720: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d71c) {
            ctx->pc = 0x29D730u;
            goto label_29d730;
        }
    }
    ctx->pc = 0x29D724u;
    // 0x29d724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d728:
    // 0x29d728: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29D728u;
    {
        const bool branch_taken_0x29d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d728) {
            ctx->pc = 0x29D778u;
            goto label_29d778;
        }
    }
    ctx->pc = 0x29D730u;
label_29d730:
    // 0x29d730: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29d734: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29d738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D738u;
    {
        const bool branch_taken_0x29d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d738) {
            ctx->pc = 0x29D748u;
            goto label_29d748;
        }
    }
    ctx->pc = 0x29D740u;
    // 0x29d740: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29D740u;
    {
        const bool branch_taken_0x29d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D740u;
            // 0x29d744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d740) {
            ctx->pc = 0x29D778u;
            goto label_29d778;
        }
    }
    ctx->pc = 0x29D748u;
label_29d748:
    // 0x29d748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d74c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D74Cu;
    {
        const bool branch_taken_0x29d74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D74Cu;
            // 0x29d750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d74c) {
            ctx->pc = 0x29D774u;
            goto label_29d774;
        }
    }
    ctx->pc = 0x29D754u;
label_29d754:
    // 0x29d754: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d75c: 0x0  nop
    ctx->pc = 0x29d75cu;
    // NOP
    // 0x29d760: 0x0  nop
    ctx->pc = 0x29d760u;
    // NOP
    // 0x29d764: 0x0  nop
    ctx->pc = 0x29d764u;
    // NOP
    // 0x29d768: 0x0  nop
    ctx->pc = 0x29d768u;
    // NOP
    // 0x29d76c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D76Cu;
    {
        const bool branch_taken_0x29d76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d76c) {
            ctx->pc = 0x29D754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d754;
        }
    }
    ctx->pc = 0x29D774u;
label_29d774:
    // 0x29d774: 0x0  nop
    ctx->pc = 0x29d774u;
    // NOP
label_29d778:
    // 0x29d778: 0x3e00008  jr          $ra
    ctx->pc = 0x29D778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D780u;
}
