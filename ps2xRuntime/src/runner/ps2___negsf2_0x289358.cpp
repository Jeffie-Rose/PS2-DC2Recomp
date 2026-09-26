#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __negsf2
// Address: 0x289358 - 0x289390
void ps2___negsf2_0x289358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negsf2_0x289358");
#endif

    switch (ctx->pc) {
        case 0x289370u: goto label_289370;
        case 0x289384u: goto label_289384;
        default: break;
    }

    ctx->pc = 0x289358u;

    // 0x289358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28935c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x289360: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x289360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289364: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x289364u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x289368: 0xc0a224c  jal         func_288930
    ctx->pc = 0x289368u;
    SET_GPR_U32(ctx, 31, 0x289370u);
    ctx->pc = 0x28936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289368u;
            // 0x28936c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289370u; }
        if (ctx->pc != 0x289370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289370u; }
        if (ctx->pc != 0x289370u) { return; }
    }
    ctx->pc = 0x289370u;
label_289370:
    // 0x289370: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x289374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x289374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289378: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x289378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28937c: 0xc0a2208  jal         func_288820
    ctx->pc = 0x28937Cu;
    SET_GPR_U32(ctx, 31, 0x289384u);
    ctx->pc = 0x289380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28937Cu;
            // 0x289380: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289384u; }
        if (ctx->pc != 0x289384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289384u; }
        if (ctx->pc != 0x289384u) { return; }
    }
    ctx->pc = 0x289384u;
label_289384:
    // 0x289384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289388: 0x3e00008  jr          $ra
    ctx->pc = 0x289388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289388u;
            // 0x28938c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289390u;
}
