#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Exit
// Address: 0x118fb0 - 0x118fd8
void Exit_0x118fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exit_0x118fb0");
#endif

    switch (ctx->pc) {
        case 0x118fc4u: goto label_118fc4;
        default: break;
    }

    ctx->pc = 0x118fb0u;

    // 0x118fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118fbc: 0xc0463c0  jal         func_118F00
    ctx->pc = 0x118FBCu;
    SET_GPR_U32(ctx, 31, 0x118FC4u);
    ctx->pc = 0x118FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118FBCu;
            // 0x118fc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118F00u;
    if (runtime->hasFunction(0x118F00u)) {
        auto targetFn = runtime->lookupFunction(0x118F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FC4u; }
        if (ctx->pc != 0x118FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x118f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FC4u; }
        if (ctx->pc != 0x118FC4u) { return; }
    }
    ctx->pc = 0x118FC4u;
label_118fc4:
    // 0x118fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118fd0: 0x8043f40  j           func_10FD00
    ctx->pc = 0x118FD0u;
    ctx->pc = 0x118FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118FD0u;
            // 0x118fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD00u;
    if (runtime->hasFunction(0x10FD00u)) {
        auto targetFn = runtime->lookupFunction(0x10FD00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Exit_0x10fd00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x118FD8u;
}
