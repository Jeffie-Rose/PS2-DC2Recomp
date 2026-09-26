#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColor__10CEohMotherFiPf
// Address: 0x25f010 - 0x25f078
void GetColor__10CEohMotherFiPf_0x25f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColor__10CEohMotherFiPf_0x25f010");
#endif

    switch (ctx->pc) {
        case 0x25f068u: goto label_25f068;
        default: break;
    }

    ctx->pc = 0x25f010u;

    // 0x25f010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f014: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F014u;
    {
        const bool branch_taken_0x25f014 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F014u;
            // 0x25f018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f014) {
            ctx->pc = 0x25F028u;
            goto label_25f028;
        }
    }
    ctx->pc = 0x25F01Cu;
    // 0x25f01c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f020: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F020u;
    {
        const bool branch_taken_0x25f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F020u;
            // 0x25f024: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f020) {
            ctx->pc = 0x25F030u;
            goto label_25f030;
        }
    }
    ctx->pc = 0x25F028u;
label_25f028:
    // 0x25f028: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25F028u;
    {
        const bool branch_taken_0x25f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F028u;
            // 0x25f02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f028) {
            ctx->pc = 0x25F06Cu;
            goto label_25f06c;
        }
    }
    ctx->pc = 0x25F030u;
label_25f030:
    // 0x25f030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f034: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f038: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f03c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F03Cu;
    {
        const bool branch_taken_0x25f03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f03c) {
            ctx->pc = 0x25F04Cu;
            goto label_25f04c;
        }
    }
    ctx->pc = 0x25F044u;
    // 0x25f044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25F044u;
    {
        const bool branch_taken_0x25f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F044u;
            // 0x25f048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f044) {
            ctx->pc = 0x25F06Cu;
            goto label_25f06c;
        }
    }
    ctx->pc = 0x25F04Cu;
label_25f04c:
    // 0x25f04c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25f050: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F050u;
    {
        const bool branch_taken_0x25f050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F050u;
            // 0x25f054: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f050) {
            ctx->pc = 0x25F060u;
            goto label_25f060;
        }
    }
    ctx->pc = 0x25F058u;
    // 0x25f058: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25F058u;
    {
        const bool branch_taken_0x25f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F058u;
            // 0x25f05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f058) {
            ctx->pc = 0x25F06Cu;
            goto label_25f06c;
        }
    }
    ctx->pc = 0x25F060u;
label_25f060:
    // 0x25f060: 0xc0a4304  jal         func_290C10
    ctx->pc = 0x25F060u;
    SET_GPR_U32(ctx, 31, 0x25F068u);
    ctx->pc = 0x290C10u;
    if (runtime->hasFunction(0x290C10u)) {
        auto targetFn = runtime->lookupFunction(0x290C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F068u; }
        if (ctx->pc != 0x25F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__13CEventSprite2FPf_0x290c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F068u; }
        if (ctx->pc != 0x25F068u) { return; }
    }
    ctx->pc = 0x25F068u;
label_25f068:
    // 0x25f068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f06c:
    // 0x25f06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f070: 0x3e00008  jr          $ra
    ctx->pc = 0x25F070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F070u;
            // 0x25f074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F078u;
}
