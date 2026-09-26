#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGameChapter__Fi
// Address: 0x31a740 - 0x31a770
void GetGameChapter__Fi_0x31a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGameChapter__Fi_0x31a740");
#endif

    switch (ctx->pc) {
        case 0x31a750u: goto label_31a750;
        default: break;
    }

    ctx->pc = 0x31a740u;

    // 0x31a740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a748: 0xc0c69c0  jal         func_31A700
    ctx->pc = 0x31A748u;
    SET_GPR_U32(ctx, 31, 0x31A750u);
    ctx->pc = 0x31A700u;
    if (runtime->hasFunction(0x31A700u)) {
        auto targetFn = runtime->lookupFunction(0x31A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A750u; }
        if (ctx->pc != 0x31A750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressInfo__Fi_0x31a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A750u; }
        if (ctx->pc != 0x31A750u) { return; }
    }
    ctx->pc = 0x31A750u;
label_31a750:
    // 0x31a750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A750u;
    {
        const bool branch_taken_0x31a750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a750) {
            ctx->pc = 0x31A760u;
            goto label_31a760;
        }
    }
    ctx->pc = 0x31A758u;
    // 0x31a758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31A758u;
    {
        const bool branch_taken_0x31a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A758u;
            // 0x31a75c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a758) {
            ctx->pc = 0x31A764u;
            goto label_31a764;
        }
    }
    ctx->pc = 0x31A760u;
label_31a760:
    // 0x31a760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a764:
    // 0x31a764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a768: 0x3e00008  jr          $ra
    ctx->pc = 0x31A768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A768u;
            // 0x31a76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A770u;
}
