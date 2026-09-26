#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExecOSD
// Address: 0x118fd8 - 0x119010
void ExecOSD_0x118fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecOSD_0x118fd8");
#endif

    switch (ctx->pc) {
        case 0x118ff4u: goto label_118ff4;
        default: break;
    }

    ctx->pc = 0x118fd8u;

    // 0x118fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118fdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118fe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118fec: 0xc0463c0  jal         func_118F00
    ctx->pc = 0x118FECu;
    SET_GPR_U32(ctx, 31, 0x118FF4u);
    ctx->pc = 0x118FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118FECu;
            // 0x118ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118F00u;
    if (runtime->hasFunction(0x118F00u)) {
        auto targetFn = runtime->lookupFunction(0x118F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FF4u; }
        if (ctx->pc != 0x118FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x118f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118FF4u; }
        if (ctx->pc != 0x118FF4u) { return; }
    }
    ctx->pc = 0x118FF4u;
label_118ff4:
    // 0x118ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x118ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119008: 0x8044140  j           func_110500
    ctx->pc = 0x119008u;
    ctx->pc = 0x11900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119008u;
            // 0x11900c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110500u;
    if (runtime->hasFunction(0x110500u)) {
        auto targetFn = runtime->lookupFunction(0x110500u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__ExecOSD_0x110500(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x119010u;
}
