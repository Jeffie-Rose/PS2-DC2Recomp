#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeAllStop__6CSceneFv
// Address: 0x2a5fe0 - 0x2a6014
void SeAllStop__6CSceneFv_0x2a5fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeAllStop__6CSceneFv_0x2a5fe0");
#endif

    switch (ctx->pc) {
        case 0x2a5ff4u: goto label_2a5ff4;
        case 0x2a5ffcu: goto label_2a5ffc;
        case 0x2a6004u: goto label_2a6004;
        default: break;
    }

    ctx->pc = 0x2a5fe0u;

    // 0x2a5fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5fec: 0xc0a9fc0  jal         func_2A7F00
    ctx->pc = 0x2A5FECu;
    SET_GPR_U32(ctx, 31, 0x2A5FF4u);
    ctx->pc = 0x2A5FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FECu;
            // 0x2a5ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FF4u; }
        if (ctx->pc != 0x2A5FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FF4u; }
        if (ctx->pc != 0x2A5FF4u) { return; }
    }
    ctx->pc = 0x2A5FF4u;
label_2a5ff4:
    // 0x2a5ff4: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2A5FF4u;
    SET_GPR_U32(ctx, 31, 0x2A5FFCu);
    ctx->pc = 0x2A5FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FF4u;
            // 0x2a5ff8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FFCu; }
        if (ctx->pc != 0x2A5FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FFCu; }
        if (ctx->pc != 0x2A5FFCu) { return; }
    }
    ctx->pc = 0x2A5FFCu;
label_2a5ffc:
    // 0x2a5ffc: 0xc0a9818  jal         func_2A6060
    ctx->pc = 0x2A5FFCu;
    SET_GPR_U32(ctx, 31, 0x2A6004u);
    ctx->pc = 0x2A6000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FFCu;
            // 0x2a6000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6060u;
    if (runtime->hasFunction(0x2A6060u)) {
        auto targetFn = runtime->lookupFunction(0x2A6060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6004u; }
        if (ctx->pc != 0x2A6004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLooSeMngr__6CSceneFv_0x2a6060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6004u; }
        if (ctx->pc != 0x2A6004u) { return; }
    }
    ctx->pc = 0x2A6004u;
label_2a6004:
    // 0x2a6004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a600c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A600Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A600Cu;
            // 0x2a6010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6014u;
}
