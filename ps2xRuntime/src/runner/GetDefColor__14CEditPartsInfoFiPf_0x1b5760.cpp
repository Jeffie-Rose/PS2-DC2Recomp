#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefColor__14CEditPartsInfoFiPf
// Address: 0x1b5760 - 0x1b5790
void GetDefColor__14CEditPartsInfoFiPf_0x1b5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefColor__14CEditPartsInfoFiPf_0x1b5760");
#endif

    switch (ctx->pc) {
        case 0x1b5784u: goto label_1b5784;
        default: break;
    }

    ctx->pc = 0x1b5760u;

    // 0x1b5760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5768: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x1b5768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1b576c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B576Cu;
    {
        const bool branch_taken_0x1b576c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B576Cu;
            // 0x1b5770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b576c) {
            ctx->pc = 0x1B577Cu;
            goto label_1b577c;
        }
    }
    ctx->pc = 0x1B5774u;
    // 0x1b5774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5774u;
    {
        const bool branch_taken_0x1b5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5774u;
            // 0x1b5778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5774) {
            ctx->pc = 0x1B5788u;
            goto label_1b5788;
        }
    }
    ctx->pc = 0x1B577Cu;
label_1b577c:
    // 0x1b577c: 0xc0599fc  jal         func_1667F0
    ctx->pc = 0x1B577Cu;
    SET_GPR_U32(ctx, 31, 0x1B5784u);
    ctx->pc = 0x1667F0u;
    if (runtime->hasFunction(0x1667F0u)) {
        auto targetFn = runtime->lookupFunction(0x1667F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5784u; }
        if (ctx->pc != 0x1B5784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefColor__9CMapPartsFiPf_0x1667f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5784u; }
        if (ctx->pc != 0x1B5784u) { return; }
    }
    ctx->pc = 0x1B5784u;
label_1b5784:
    // 0x1b5784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5788:
    // 0x1b5788: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5788u;
            // 0x1b578c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5790u;
}
