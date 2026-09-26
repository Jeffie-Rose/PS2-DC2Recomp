#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHealingTime__13CHealingPointFv
// Address: 0x1d5620 - 0x1d567c
void CheckHealingTime__13CHealingPointFv_0x1d5620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHealingTime__13CHealingPointFv_0x1d5620");
#endif

    switch (ctx->pc) {
        case 0x1d5660u: goto label_1d5660;
        default: break;
    }

    ctx->pc = 0x1d5620u;

    // 0x1d5620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d562c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5630u;
    {
        const bool branch_taken_0x1d5630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5630u;
            // 0x1d5634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5630) {
            ctx->pc = 0x1D5640u;
            goto label_1d5640;
        }
    }
    ctx->pc = 0x1D5638u;
    // 0x1d5638: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D5638u;
    {
        const bool branch_taken_0x1d5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5638u;
            // 0x1d563c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5638) {
            ctx->pc = 0x1D566Cu;
            goto label_1d566c;
        }
    }
    ctx->pc = 0x1D5640u;
label_1d5640:
    // 0x1d5640: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5644: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5644u;
    {
        const bool branch_taken_0x1d5644 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5644u;
            // 0x1d5648: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5644) {
            ctx->pc = 0x1D5654u;
            goto label_1d5654;
        }
    }
    ctx->pc = 0x1D564Cu;
    // 0x1d564c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D564Cu;
    {
        const bool branch_taken_0x1d564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D564Cu;
            // 0x1d5650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d564c) {
            ctx->pc = 0x1D566Cu;
            goto label_1d566c;
        }
    }
    ctx->pc = 0x1D5654u;
label_1d5654:
    // 0x1d5654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5658: 0xc07063c  jal         func_1C18F0
    ctx->pc = 0x1D5658u;
    SET_GPR_U32(ctx, 31, 0x1D5660u);
    ctx->pc = 0x1D565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5658u;
            // 0x1d565c: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C18F0u;
    if (runtime->hasFunction(0x1C18F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C18F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5660u; }
        if (ctx->pc != 0x1D5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMode__17CHealingEffectManFi_0x1c18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5660u; }
        if (ctx->pc != 0x1D5660u) { return; }
    }
    ctx->pc = 0x1D5660u;
label_1d5660:
    // 0x1d5660: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1d5660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1d5664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5668: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d5668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1d566c:
    // 0x1d566c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5674: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5674u;
            // 0x1d5678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D567Cu;
}
