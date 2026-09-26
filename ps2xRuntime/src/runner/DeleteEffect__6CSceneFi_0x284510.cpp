#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteEffect__6CSceneFi
// Address: 0x284510 - 0x284540
void DeleteEffect__6CSceneFi_0x284510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteEffect__6CSceneFi_0x284510");
#endif

    switch (ctx->pc) {
        case 0x284520u: goto label_284520;
        case 0x284534u: goto label_284534;
        default: break;
    }

    ctx->pc = 0x284510u;

    // 0x284510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284518: 0xc0a0d30  jal         func_2834C0
    ctx->pc = 0x284518u;
    SET_GPR_U32(ctx, 31, 0x284520u);
    ctx->pc = 0x2834C0u;
    if (runtime->hasFunction(0x2834C0u)) {
        auto targetFn = runtime->lookupFunction(0x2834C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284520u; }
        if (ctx->pc != 0x284520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneEffect__6CSceneFi_0x2834c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284520u; }
        if (ctx->pc != 0x284520u) { return; }
    }
    ctx->pc = 0x284520u;
label_284520:
    // 0x284520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284524: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284524u;
    {
        const bool branch_taken_0x284524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284524) {
            ctx->pc = 0x284534u;
            goto label_284534;
        }
    }
    ctx->pc = 0x28452Cu;
    // 0x28452c: 0xc0a0b6c  jal         func_282DB0
    ctx->pc = 0x28452Cu;
    SET_GPR_U32(ctx, 31, 0x284534u);
    ctx->pc = 0x282DB0u;
    if (runtime->hasFunction(0x282DB0u)) {
        auto targetFn = runtime->lookupFunction(0x282DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284534u; }
        if (ctx->pc != 0x284534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneEffectFv_0x282db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284534u; }
        if (ctx->pc != 0x284534u) { return; }
    }
    ctx->pc = 0x284534u;
label_284534:
    // 0x284534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284538: 0x3e00008  jr          $ra
    ctx->pc = 0x284538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284538u;
            // 0x28453c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284540u;
}
