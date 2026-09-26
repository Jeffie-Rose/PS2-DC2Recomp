#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niNPC__FP9SPI_STACKi
// Address: 0x319820 - 0x319884
void niNPC__FP9SPI_STACKi_0x319820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niNPC__FP9SPI_STACKi_0x319820");
#endif

    switch (ctx->pc) {
        case 0x319830u: goto label_319830;
        case 0x319868u: goto label_319868;
        default: break;
    }

    ctx->pc = 0x319820u;

    // 0x319820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319828: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319828u;
    SET_GPR_U32(ctx, 31, 0x319830u);
    ctx->pc = 0x31982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319828u;
            // 0x31982c: 0xaf80a348  sw          $zero, -0x5CB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319830u; }
        if (ctx->pc != 0x319830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319830u; }
        if (ctx->pc != 0x319830u) { return; }
    }
    ctx->pc = 0x319830u;
label_319830:
    // 0x319830: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319830u;
    {
        const bool branch_taken_0x319830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x319834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319830u;
            // 0x319834: 0x28430200  slti        $v1, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319830) {
            ctx->pc = 0x319840u;
            goto label_319840;
        }
    }
    ctx->pc = 0x319838u;
    // 0x319838: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319838u;
    {
        const bool branch_taken_0x319838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319838u;
            // 0x31983c: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319838) {
            ctx->pc = 0x319848u;
            goto label_319848;
        }
    }
    ctx->pc = 0x319840u;
label_319840:
    // 0x319840: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x319840u;
    {
        const bool branch_taken_0x319840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319840u;
            // 0x319844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319840) {
            ctx->pc = 0x319878u;
            goto label_319878;
        }
    }
    ctx->pc = 0x319848u;
label_319848:
    // 0x319848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31984c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x319850: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x319850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
    // 0x319854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x319854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x319858: 0xaf82a348  sw          $v0, -0x5CB8($gp)
    ctx->pc = 0x319858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 2));
    // 0x31985c: 0x8f84a348  lw          $a0, -0x5CB8($gp)
    ctx->pc = 0x31985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x319860: 0xc049c86  jal         func_127218
    ctx->pc = 0x319860u;
    SET_GPR_U32(ctx, 31, 0x319868u);
    ctx->pc = 0x319864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319860u;
            // 0x319864: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319868u; }
        if (ctx->pc != 0x319868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319868u; }
        if (ctx->pc != 0x319868u) { return; }
    }
    ctx->pc = 0x319868u;
label_319868:
    // 0x319868: 0xaf80a34c  sw          $zero, -0x5CB4($gp)
    ctx->pc = 0x319868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 0));
    // 0x31986c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319870: 0xaf80a350  sw          $zero, -0x5CB0($gp)
    ctx->pc = 0x319870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943568), GPR_U32(ctx, 0));
    // 0x319874: 0xaf80a354  sw          $zero, -0x5CAC($gp)
    ctx->pc = 0x319874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943572), GPR_U32(ctx, 0));
label_319878:
    // 0x319878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31987c: 0x3e00008  jr          $ra
    ctx->pc = 0x31987Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31987Cu;
            // 0x319880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319884u;
}
