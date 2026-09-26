#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Add__14CFuncPointMngrFiP19CList<10CFuncPoint>
// Address: 0x29d450 - 0x29d4d4
void Add__14CFuncPointMngrFiP19CList_10CFuncPoint__0x29d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add__14CFuncPointMngrFiP19CList_10CFuncPoint__0x29d450");
#endif

    switch (ctx->pc) {
        case 0x29d4a4u: goto label_29d4a4;
        default: break;
    }

    ctx->pc = 0x29d450u;

    // 0x29d450: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D450u;
    {
        const bool branch_taken_0x29d450 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D450u;
            // 0x29d454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d450) {
            ctx->pc = 0x29D460u;
            goto label_29d460;
        }
    }
    ctx->pc = 0x29D458u;
    // 0x29d458: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29D458u;
    {
        const bool branch_taken_0x29d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d458) {
            ctx->pc = 0x29D4CCu;
            goto label_29d4cc;
        }
    }
    ctx->pc = 0x29D460u;
label_29d460:
    // 0x29d460: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D460u;
    {
        const bool branch_taken_0x29d460 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D460u;
            // 0x29d464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d460) {
            ctx->pc = 0x29D478u;
            goto label_29d478;
        }
    }
    ctx->pc = 0x29D468u;
    // 0x29d468: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x29d468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d46c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D46Cu;
    {
        const bool branch_taken_0x29d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D46Cu;
            // 0x29d470: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d46c) {
            ctx->pc = 0x29D480u;
            goto label_29d480;
        }
    }
    ctx->pc = 0x29D474u;
    // 0x29d474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d478:
    // 0x29d478: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29D478u;
    {
        const bool branch_taken_0x29d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d478) {
            ctx->pc = 0x29D4CCu;
            goto label_29d4cc;
        }
    }
    ctx->pc = 0x29D480u;
label_29d480:
    // 0x29d480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29d484: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x29d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d488: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29d48c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D48Cu;
    {
        const bool branch_taken_0x29d48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d48c) {
            ctx->pc = 0x29D49Cu;
            goto label_29d49c;
        }
    }
    ctx->pc = 0x29D494u;
    // 0x29d494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29D494u;
    {
        const bool branch_taken_0x29d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D494u;
            // 0x29d498: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d494) {
            ctx->pc = 0x29D4C4u;
            goto label_29d4c4;
        }
    }
    ctx->pc = 0x29D49Cu;
label_29d49c:
    // 0x29d49c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D49Cu;
    {
        const bool branch_taken_0x29d49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d49c) {
            ctx->pc = 0x29D4B8u;
            goto label_29d4b8;
        }
    }
    ctx->pc = 0x29D4A4u;
label_29d4a4:
    // 0x29d4a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d4a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D4A8u;
    {
        const bool branch_taken_0x29d4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d4a8) {
            ctx->pc = 0x29D4B8u;
            goto label_29d4b8;
        }
    }
    ctx->pc = 0x29D4B0u;
    // 0x29d4b0: 0x1460fffc  bnez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x29D4B0u;
    {
        const bool branch_taken_0x29d4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D4B0u;
            // 0x29d4b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4b0) {
            ctx->pc = 0x29D4A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d4a4;
        }
    }
    ctx->pc = 0x29D4B8u;
label_29d4b8:
    // 0x29d4b8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D4B8u;
    {
        const bool branch_taken_0x29d4b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D4B8u;
            // 0x29d4bc: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4b8) {
            ctx->pc = 0x29D4C4u;
            goto label_29d4c4;
        }
    }
    ctx->pc = 0x29D4C0u;
    // 0x29d4c0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x29d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_29d4c4:
    // 0x29d4c4: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x29d4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x29d4c8: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x29d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_29d4cc:
    // 0x29d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D4D4u;
}
