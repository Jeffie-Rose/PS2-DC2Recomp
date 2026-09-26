#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVolSeSeq__Fii
// Address: 0x190320 - 0x190354
void SetVolSeSeq__Fii_0x190320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVolSeSeq__Fii_0x190320");
#endif

    switch (ctx->pc) {
        case 0x190330u: goto label_190330;
        default: break;
    }

    ctx->pc = 0x190320u;

    // 0x190320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190328: 0xc063298  jal         func_18CA60
    ctx->pc = 0x190328u;
    SET_GPR_U32(ctx, 31, 0x190330u);
    ctx->pc = 0x18CA60u;
    if (runtime->hasFunction(0x18CA60u)) {
        auto targetFn = runtime->lookupFunction(0x18CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190330u; }
        if (ctx->pc != 0x190330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSeq__Fi_0x18ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190330u; }
        if (ctx->pc != 0x190330u) { return; }
    }
    ctx->pc = 0x190330u;
label_190330:
    // 0x190330: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190330u;
    {
        const bool branch_taken_0x190330 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x190330) {
            ctx->pc = 0x19033Cu;
            goto label_19033c;
        }
    }
    ctx->pc = 0x190338u;
    // 0x190338: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_19033c:
    // 0x19033c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19033Cu;
    {
        const bool branch_taken_0x19033c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19033c) {
            ctx->pc = 0x190348u;
            goto label_190348;
        }
    }
    ctx->pc = 0x190344u;
    // 0x190344: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x190344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_190348:
    // 0x190348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19034c: 0x3e00008  jr          $ra
    ctx->pc = 0x19034Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19034Cu;
            // 0x190350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190354u;
}
