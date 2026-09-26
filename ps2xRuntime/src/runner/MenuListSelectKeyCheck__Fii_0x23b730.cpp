#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuListSelectKeyCheck__Fii
// Address: 0x23b730 - 0x23b780
void MenuListSelectKeyCheck__Fii_0x23b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuListSelectKeyCheck__Fii_0x23b730");
#endif

    ctx->pc = 0x23b730u;

    // 0x23b730: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x23b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23b734: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B734u;
    {
        const bool branch_taken_0x23b734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B734u;
            // 0x23b738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b734) {
            ctx->pc = 0x23B744u;
            goto label_23b744;
        }
    }
    ctx->pc = 0x23B73Cu;
    // 0x23b73c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B73Cu;
    {
        const bool branch_taken_0x23b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B73Cu;
            // 0x23b740: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b73c) {
            ctx->pc = 0x23B754u;
            goto label_23b754;
        }
    }
    ctx->pc = 0x23B744u;
label_23b744:
    // 0x23b744: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x23b744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x23b748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B748u;
    {
        const bool branch_taken_0x23b748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B748u;
            // 0x23b74c: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b748) {
            ctx->pc = 0x23B758u;
            goto label_23b758;
        }
    }
    ctx->pc = 0x23B750u;
    // 0x23b750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23b754:
    // 0x23b754: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x23b754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_23b758:
    // 0x23b758: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B758u;
    {
        const bool branch_taken_0x23b758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B758u;
            // 0x23b75c: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b758) {
            ctx->pc = 0x23B76Cu;
            goto label_23b76c;
        }
    }
    ctx->pc = 0x23B760u;
    // 0x23b760: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23b764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B764u;
    {
        const bool branch_taken_0x23b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B764u;
            // 0x23b768: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b764) {
            ctx->pc = 0x23B778u;
            goto label_23b778;
        }
    }
    ctx->pc = 0x23B76Cu;
label_23b76c:
    // 0x23b76c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B76Cu;
    {
        const bool branch_taken_0x23b76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B76Cu;
            // 0x23b770: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b76c) {
            ctx->pc = 0x23B778u;
            goto label_23b778;
        }
    }
    ctx->pc = 0x23B774u;
    // 0x23b774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b778:
    // 0x23b778: 0x3e00008  jr          $ra
    ctx->pc = 0x23B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B780u;
}
