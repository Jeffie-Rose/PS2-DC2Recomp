#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFootSeId__10CEohMotherFii
// Address: 0x25f7f0 - 0x25f858
void SetFootSeId__10CEohMotherFii_0x25f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFootSeId__10CEohMotherFii_0x25f7f0");
#endif

    ctx->pc = 0x25f7f0u;

    // 0x25f7f0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F7F0u;
    {
        const bool branch_taken_0x25f7f0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7F0u;
            // 0x25f7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7f0) {
            ctx->pc = 0x25F808u;
            goto label_25f808;
        }
    }
    ctx->pc = 0x25F7F8u;
    // 0x25f7f8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f7fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F7FCu;
    {
        const bool branch_taken_0x25f7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F7FCu;
            // 0x25f800: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7fc) {
            ctx->pc = 0x25F810u;
            goto label_25f810;
        }
    }
    ctx->pc = 0x25F804u;
    // 0x25f804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f808:
    // 0x25f808: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25F808u;
    {
        const bool branch_taken_0x25f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f808) {
            ctx->pc = 0x25F850u;
            goto label_25f850;
        }
    }
    ctx->pc = 0x25F810u;
label_25f810:
    // 0x25f810: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f814: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F818u;
    {
        const bool branch_taken_0x25f818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f818) {
            ctx->pc = 0x25F828u;
            goto label_25f828;
        }
    }
    ctx->pc = 0x25F820u;
    // 0x25f820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F820u;
    {
        const bool branch_taken_0x25f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F820u;
            // 0x25f824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f820) {
            ctx->pc = 0x25F844u;
            goto label_25f844;
        }
    }
    ctx->pc = 0x25F828u;
label_25f828:
    // 0x25f828: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25f82c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F82Cu;
    {
        const bool branch_taken_0x25f82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f82c) {
            ctx->pc = 0x25F83Cu;
            goto label_25f83c;
        }
    }
    ctx->pc = 0x25F834u;
    // 0x25f834: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F834u;
    {
        const bool branch_taken_0x25f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F834u;
            // 0x25f838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f834) {
            ctx->pc = 0x25F850u;
            goto label_25f850;
        }
    }
    ctx->pc = 0x25F83Cu;
label_25f83c:
    // 0x25f83c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F83Cu;
    {
        const bool branch_taken_0x25f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F83Cu;
            // 0x25f840: 0xac46057c  sw          $a2, 0x57C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f83c) {
            ctx->pc = 0x25F84Cu;
            goto label_25f84c;
        }
    }
    ctx->pc = 0x25F844u;
label_25f844:
    // 0x25f844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25F844u;
    {
        const bool branch_taken_0x25f844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f844) {
            ctx->pc = 0x25F850u;
            goto label_25f850;
        }
    }
    ctx->pc = 0x25F84Cu;
label_25f84c:
    // 0x25f84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f850:
    // 0x25f850: 0x3e00008  jr          $ra
    ctx->pc = 0x25F850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F858u;
}
