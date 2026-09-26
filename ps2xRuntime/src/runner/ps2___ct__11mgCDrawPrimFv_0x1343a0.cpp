#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11mgCDrawPrimFv
// Address: 0x1343a0 - 0x134404
void ps2___ct__11mgCDrawPrimFv_0x1343a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11mgCDrawPrimFv_0x1343a0");
#endif

    switch (ctx->pc) {
        case 0x1343b8u: goto label_1343b8;
        case 0x1343c0u: goto label_1343c0;
        default: break;
    }

    ctx->pc = 0x1343a0u;

    // 0x1343a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1343a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1343a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1343a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1343a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1343a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1343ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1343acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343b0: 0xc04e214  jal         func_138850
    ctx->pc = 0x1343B0u;
    SET_GPR_U32(ctx, 31, 0x1343B8u);
    ctx->pc = 0x1343B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343B0u;
            // 0x1343b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138850u;
    if (runtime->hasFunction(0x138850u)) {
        auto targetFn = runtime->lookupFunction(0x138850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343B8u; }
        if (ctx->pc != 0x1343B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCDrawEnvFv_0x138850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343B8u; }
        if (ctx->pc != 0x1343B8u) { return; }
    }
    ctx->pc = 0x1343B8u;
label_1343b8:
    // 0x1343b8: 0xc04b120  jal         func_12C480
    ctx->pc = 0x1343B8u;
    SET_GPR_U32(ctx, 31, 0x1343C0u);
    ctx->pc = 0x1343BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343B8u;
            // 0x1343bc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343C0u; }
        if (ctx->pc != 0x1343C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343C0u; }
        if (ctx->pc != 0x1343C0u) { return; }
    }
    ctx->pc = 0x1343C0u;
label_1343c0:
    // 0x1343c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1343c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1343c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1343c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1343c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1343c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1343cc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1343ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1343d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1343d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1343d4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1343d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1343d8: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x1343d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x1343dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1343dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343e0: 0xae0400f8  sw          $a0, 0xF8($s0)
    ctx->pc = 0x1343e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 4));
    // 0x1343e4: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x1343e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x1343e8: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x1343e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x1343ec: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x1343ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    // 0x1343f0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x1343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x1343f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1343f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1343f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1343fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1343FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1343FCu;
            // 0x134400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134404u;
}
