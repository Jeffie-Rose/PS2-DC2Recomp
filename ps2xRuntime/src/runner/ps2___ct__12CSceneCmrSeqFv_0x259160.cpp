#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CSceneCmrSeqFv
// Address: 0x259160 - 0x259194
void ps2___ct__12CSceneCmrSeqFv_0x259160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CSceneCmrSeqFv_0x259160");
#endif

    switch (ctx->pc) {
        case 0x259178u: goto label_259178;
        case 0x259180u: goto label_259180;
        default: break;
    }

    ctx->pc = 0x259160u;

    // 0x259160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25916c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25916cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259170: 0xc0958e0  jal         func_256380
    ctx->pc = 0x259170u;
    SET_GPR_U32(ctx, 31, 0x259178u);
    ctx->pc = 0x259174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259170u;
            // 0x259174: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256380u;
    if (runtime->hasFunction(0x256380u)) {
        auto targetFn = runtime->lookupFunction(0x256380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259178u; }
        if (ctx->pc != 0x259178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CCameraPasFv_0x256380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259178u; }
        if (ctx->pc != 0x259178u) { return; }
    }
    ctx->pc = 0x259178u;
label_259178:
    // 0x259178: 0xc096468  jal         func_2591A0
    ctx->pc = 0x259178u;
    SET_GPR_U32(ctx, 31, 0x259180u);
    ctx->pc = 0x25917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259178u;
            // 0x25917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2591A0u;
    if (runtime->hasFunction(0x2591A0u)) {
        auto targetFn = runtime->lookupFunction(0x2591A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259180u; }
        if (ctx->pc != 0x259180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZeroInitialize__12CSceneCmrSeqFv_0x2591a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259180u; }
        if (ctx->pc != 0x259180u) { return; }
    }
    ctx->pc = 0x259180u;
label_259180:
    // 0x259180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25918c: 0x3e00008  jr          $ra
    ctx->pc = 0x25918Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25918Cu;
            // 0x259190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259194u;
}
