#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_CHECK_PAUSE__FP12RS_STACKDATAi
// Address: 0x278740 - 0x278790
void ps2__DNG_CHECK_PAUSE__FP12RS_STACKDATAi_0x278740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_CHECK_PAUSE__FP12RS_STACKDATAi_0x278740");
#endif

    switch (ctx->pc) {
        case 0x278754u: goto label_278754;
        case 0x27877cu: goto label_27877c;
        default: break;
    }

    ctx->pc = 0x278740u;

    // 0x278740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27874c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27874Cu;
    SET_GPR_U32(ctx, 31, 0x278754u);
    ctx->pc = 0x278750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27874Cu;
            // 0x278750: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278754u; }
        if (ctx->pc != 0x278754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278754u; }
        if (ctx->pc != 0x278754u) { return; }
    }
    ctx->pc = 0x278754u;
label_278754:
    // 0x278754: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x278754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x278758: 0x24632f90  addiu       $v1, $v1, 0x2F90
    ctx->pc = 0x278758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x27875c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27875Cu;
    {
        const bool branch_taken_0x27875c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27875c) {
            ctx->pc = 0x27876Cu;
            goto label_27876c;
        }
    }
    ctx->pc = 0x278764u;
    // 0x278764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278764u;
    {
        const bool branch_taken_0x278764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278764u;
            // 0x278768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278764) {
            ctx->pc = 0x278780u;
            goto label_278780;
        }
    }
    ctx->pc = 0x27876Cu;
label_27876c:
    // 0x27876c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278774: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278774u;
    SET_GPR_U32(ctx, 31, 0x27877Cu);
    ctx->pc = 0x278778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278774u;
            // 0x278778: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27877Cu; }
        if (ctx->pc != 0x27877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27877Cu; }
        if (ctx->pc != 0x27877Cu) { return; }
    }
    ctx->pc = 0x27877Cu;
label_27877c:
    // 0x27877c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278780:
    // 0x278780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278788: 0x3e00008  jr          $ra
    ctx->pc = 0x278788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278788u;
            // 0x27878c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278790u;
}
