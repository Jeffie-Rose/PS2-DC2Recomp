#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteChara__6CSceneFi
// Address: 0x2853b0 - 0x2853e0
void DeleteChara__6CSceneFi_0x2853b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteChara__6CSceneFi_0x2853b0");
#endif

    switch (ctx->pc) {
        case 0x2853c0u: goto label_2853c0;
        case 0x2853d4u: goto label_2853d4;
        default: break;
    }

    ctx->pc = 0x2853b0u;

    // 0x2853b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2853b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2853b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2853b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2853b8: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x2853B8u;
    SET_GPR_U32(ctx, 31, 0x2853C0u);
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853C0u; }
        if (ctx->pc != 0x2853C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853C0u; }
        if (ctx->pc != 0x2853C0u) { return; }
    }
    ctx->pc = 0x2853C0u;
label_2853c0:
    // 0x2853c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2853c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2853C4u;
    {
        const bool branch_taken_0x2853c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2853c4) {
            ctx->pc = 0x2853D4u;
            goto label_2853d4;
        }
    }
    ctx->pc = 0x2853CCu;
    // 0x2853cc: 0xc0a0ad0  jal         func_282B40
    ctx->pc = 0x2853CCu;
    SET_GPR_U32(ctx, 31, 0x2853D4u);
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853D4u; }
        if (ctx->pc != 0x2853D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853D4u; }
        if (ctx->pc != 0x2853D4u) { return; }
    }
    ctx->pc = 0x2853D4u;
label_2853d4:
    // 0x2853d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2853d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2853d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2853D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2853DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853D8u;
            // 0x2853dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2853E0u;
}
