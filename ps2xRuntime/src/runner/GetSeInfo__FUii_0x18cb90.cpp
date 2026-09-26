#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeInfo__FUii
// Address: 0x18cb90 - 0x18cbf0
void GetSeInfo__FUii_0x18cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeInfo__FUii_0x18cb90");
#endif

    switch (ctx->pc) {
        case 0x18cba0u: goto label_18cba0;
        default: break;
    }

    ctx->pc = 0x18cb90u;

    // 0x18cb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18cb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cb98: 0xc0632c8  jal         func_18CB20
    ctx->pc = 0x18CB98u;
    SET_GPR_U32(ctx, 31, 0x18CBA0u);
    ctx->pc = 0x18CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB98u;
            // 0x18cb9c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB20u;
    if (runtime->hasFunction(0x18CB20u)) {
        auto targetFn = runtime->lookupFunction(0x18CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA0u; }
        if (ctx->pc != 0x18CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankInfo__FUi_0x18cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA0u; }
        if (ctx->pc != 0x18CBA0u) { return; }
    }
    ctx->pc = 0x18CBA0u;
label_18cba0:
    // 0x18cba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CBA0u;
    {
        const bool branch_taken_0x18cba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cba0) {
            ctx->pc = 0x18CBB0u;
            goto label_18cbb0;
        }
    }
    ctx->pc = 0x18CBA8u;
    // 0x18cba8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18CBA8u;
    {
        const bool branch_taken_0x18cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBA8u;
            // 0x18cbac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cba8) {
            ctx->pc = 0x18CBE4u;
            goto label_18cbe4;
        }
    }
    ctx->pc = 0x18CBB0u;
label_18cbb0:
    // 0x18cbb0: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CBB0u;
    {
        const bool branch_taken_0x18cbb0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x18cbb0) {
            ctx->pc = 0x18CBC8u;
            goto label_18cbc8;
        }
    }
    ctx->pc = 0x18CBB8u;
    // 0x18cbb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cbbc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x18cbbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18cbc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CBC0u;
    {
        const bool branch_taken_0x18cbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cbc0) {
            ctx->pc = 0x18CBD0u;
            goto label_18cbd0;
        }
    }
    ctx->pc = 0x18CBC8u;
label_18cbc8:
    // 0x18cbc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18CBC8u;
    {
        const bool branch_taken_0x18cbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBC8u;
            // 0x18cbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cbc8) {
            ctx->pc = 0x18CBE4u;
            goto label_18cbe4;
        }
    }
    ctx->pc = 0x18CBD0u;
label_18cbd0:
    // 0x18cbd0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18cbd4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x18cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x18cbd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18cbdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cbe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cbe4:
    // 0x18cbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x18CBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBE8u;
            // 0x18cbec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CBF0u;
}
