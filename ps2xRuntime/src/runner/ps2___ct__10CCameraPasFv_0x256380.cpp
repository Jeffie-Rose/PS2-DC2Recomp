#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CCameraPasFv
// Address: 0x256380 - 0x2563bc
void ps2___ct__10CCameraPasFv_0x256380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CCameraPasFv_0x256380");
#endif

    switch (ctx->pc) {
        case 0x256398u: goto label_256398;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563a8u: goto label_2563a8;
        default: break;
    }

    ctx->pc = 0x256380u;

    // 0x256380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25638c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25638cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256390: 0xc0956f0  jal         func_255BC0
    ctx->pc = 0x256390u;
    SET_GPR_U32(ctx, 31, 0x256398u);
    ctx->pc = 0x256394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256390u;
            // 0x256394: 0x26040208  addiu       $a0, $s0, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BC0u;
    if (runtime->hasFunction(0x255BC0u)) {
        auto targetFn = runtime->lookupFunction(0x255BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256398u; }
        if (ctx->pc != 0x256398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9C3DSplineFv_0x255bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256398u; }
        if (ctx->pc != 0x256398u) { return; }
    }
    ctx->pc = 0x256398u;
label_256398:
    // 0x256398: 0xc0956f0  jal         func_255BC0
    ctx->pc = 0x256398u;
    SET_GPR_U32(ctx, 31, 0x2563A0u);
    ctx->pc = 0x25639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256398u;
            // 0x25639c: 0x260405a4  addiu       $a0, $s0, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BC0u;
    if (runtime->hasFunction(0x255BC0u)) {
        auto targetFn = runtime->lookupFunction(0x255BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2563A0u; }
        if (ctx->pc != 0x2563A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9C3DSplineFv_0x255bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2563A0u; }
        if (ctx->pc != 0x2563A0u) { return; }
    }
    ctx->pc = 0x2563A0u;
label_2563a0:
    // 0x2563a0: 0xc0959c4  jal         func_256710
    ctx->pc = 0x2563A0u;
    SET_GPR_U32(ctx, 31, 0x2563A8u);
    ctx->pc = 0x2563A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2563A0u;
            // 0x2563a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256710u;
    if (runtime->hasFunction(0x256710u)) {
        auto targetFn = runtime->lookupFunction(0x256710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2563A8u; }
        if (ctx->pc != 0x2563A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CCameraPasFv_0x256710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2563A8u; }
        if (ctx->pc != 0x2563A8u) { return; }
    }
    ctx->pc = 0x2563A8u;
label_2563a8:
    // 0x2563a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2563a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2563acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2563b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2563b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2563b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2563B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2563B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563B4u;
            // 0x2563b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2563BCu;
}
