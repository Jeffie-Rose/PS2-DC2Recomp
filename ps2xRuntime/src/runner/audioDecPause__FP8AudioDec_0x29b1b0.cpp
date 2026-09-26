#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecPause__FP8AudioDec
// Address: 0x29b1b0 - 0x29b230
void audioDecPause__FP8AudioDec_0x29b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecPause__FP8AudioDec_0x29b1b0");
#endif

    switch (ctx->pc) {
        case 0x29b1d0u: goto label_29b1d0;
        case 0x29b1ecu: goto label_29b1ec;
        case 0x29b220u: goto label_29b220;
        default: break;
    }

    ctx->pc = 0x29b1b0u;

    // 0x29b1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b1b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b1b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29b1c8: 0xc0a6df4  jal         func_29B7D0
    ctx->pc = 0x29B1C8u;
    SET_GPR_U32(ctx, 31, 0x29B1D0u);
    ctx->pc = 0x29B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1C8u;
            // 0x29b1cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B7D0u;
    if (runtime->hasFunction(0x29B7D0u)) {
        auto targetFn = runtime->lookupFunction(0x29B7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1D0u; }
        if (ctx->pc != 0x29B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeInputVolume__FUi_0x29b7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1D0u; }
        if (ctx->pc != 0x29B1D0u) { return; }
    }
    ctx->pc = 0x29B1D0u;
label_29b1d0:
    // 0x29b1d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b1d4: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x29b1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x29b1d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29b1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b1e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29b1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1e4: 0xc046454  jal         func_119150
    ctx->pc = 0x29B1E4u;
    SET_GPR_U32(ctx, 31, 0x29B1ECu);
    ctx->pc = 0x29B1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1E4u;
            // 0x29b1e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1ECu; }
        if (ctx->pc != 0x29B1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B1ECu; }
        if (ctx->pc != 0x29B1ECu) { return; }
    }
    ctx->pc = 0x29B1ECu;
label_29b1ec:
    // 0x29b1ec: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x29b1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x29b1f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b1f4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x29b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x29b1f8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x29b1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x29b1fc: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x29b1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x29b200: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29b200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b208: 0x24094000  addiu       $t1, $zero, 0x4000
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x29b20c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b210: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x29b210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x29b214: 0x8e080058  lw          $t0, 0x58($s0)
    ctx->pc = 0x29b214u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x29b218: 0xc046454  jal         func_119150
    ctx->pc = 0x29B218u;
    SET_GPR_U32(ctx, 31, 0x29B220u);
    ctx->pc = 0x29B21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B218u;
            // 0x29b21c: 0x240a0800  addiu       $t2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B220u; }
        if (ctx->pc != 0x29B220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B220u; }
        if (ctx->pc != 0x29B220u) { return; }
    }
    ctx->pc = 0x29B220u;
label_29b220:
    // 0x29b220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b228: 0x3e00008  jr          $ra
    ctx->pc = 0x29B228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B228u;
            // 0x29b22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B230u;
}
