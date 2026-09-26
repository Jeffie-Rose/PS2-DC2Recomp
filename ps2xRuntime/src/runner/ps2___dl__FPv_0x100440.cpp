#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __dl__FPv
// Address: 0x100440 - 0x100484
void ps2___dl__FPv_0x100440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dl__FPv_0x100440");
#endif

    switch (ctx->pc) {
        case 0x100454u: goto label_100454;
        case 0x100464u: goto label_100464;
        default: break;
    }

    ctx->pc = 0x100440u;

    // 0x100440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100448: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x100448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x10044c: 0xc049932  jal         func_1264C8
    ctx->pc = 0x10044Cu;
    SET_GPR_U32(ctx, 31, 0x100454u);
    ctx->pc = 0x100450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10044Cu;
            // 0x100450: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1264C8u;
    if (runtime->hasFunction(0x1264C8u)) {
        auto targetFn = runtime->lookupFunction(0x1264C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100454u; }
        if (ctx->pc != 0x100454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x1264c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100454u; }
        if (ctx->pc != 0x100454u) { return; }
    }
    ctx->pc = 0x100454u;
label_100454:
    // 0x100454: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x100454u;
    {
        const bool branch_taken_0x100454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100454) {
            ctx->pc = 0x10046Cu;
            goto label_10046c;
        }
    }
    ctx->pc = 0x10045Cu;
    // 0x10045c: 0xc04041c  jal         func_101070
    ctx->pc = 0x10045Cu;
    SET_GPR_U32(ctx, 31, 0x100464u);
    ctx->pc = 0x100460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10045Cu;
            // 0x100460: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101070u;
    if (runtime->hasFunction(0x101070u)) {
        auto targetFn = runtime->lookupFunction(0x101070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100464u; }
        if (ctx->pc != 0x100464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x101070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100464u; }
        if (ctx->pc != 0x100464u) { return; }
    }
    ctx->pc = 0x100464u;
label_100464:
    // 0x100464: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x100464u;
    {
        const bool branch_taken_0x100464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100464) {
            ctx->pc = 0x100464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100464;
        }
    }
    ctx->pc = 0x10046Cu;
label_10046c:
    // 0x10046c: 0x0  nop
    ctx->pc = 0x10046cu;
    // NOP
    // 0x100470: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x100474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100478: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x100478u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10047c: 0x3e00008  jr          $ra
    ctx->pc = 0x10047Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10047Cu;
            // 0x100480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100484u;
}
