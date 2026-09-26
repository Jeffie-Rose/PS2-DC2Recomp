#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVolfBGM__6CSceneFv
// Address: 0x2a6420 - 0x2a6440
void GetVolfBGM__6CSceneFv_0x2a6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVolfBGM__6CSceneFv_0x2a6420");
#endif

    switch (ctx->pc) {
        case 0x2a6430u: goto label_2a6430;
        default: break;
    }

    ctx->pc = 0x2a6420u;

    // 0x2a6420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6428: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6428u;
    SET_GPR_U32(ctx, 31, 0x2A6430u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6430u; }
        if (ctx->pc != 0x2A6430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6430u; }
        if (ctx->pc != 0x2A6430u) { return; }
    }
    ctx->pc = 0x2A6430u;
label_2a6430:
    // 0x2a6430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6434: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2a6434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6438: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6438u;
            // 0x2a643c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6440u;
}
