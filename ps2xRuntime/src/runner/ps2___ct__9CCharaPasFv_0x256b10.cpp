#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CCharaPasFv
// Address: 0x256b10 - 0x256b44
void ps2___ct__9CCharaPasFv_0x256b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CCharaPasFv_0x256b10");
#endif

    switch (ctx->pc) {
        case 0x256b28u: goto label_256b28;
        case 0x256b30u: goto label_256b30;
        default: break;
    }

    ctx->pc = 0x256b10u;

    // 0x256b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b20: 0xc0956f0  jal         func_255BC0
    ctx->pc = 0x256B20u;
    SET_GPR_U32(ctx, 31, 0x256B28u);
    ctx->pc = 0x256B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256B20u;
            // 0x256b24: 0x26040108  addiu       $a0, $s0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BC0u;
    if (runtime->hasFunction(0x255BC0u)) {
        auto targetFn = runtime->lookupFunction(0x255BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256B28u; }
        if (ctx->pc != 0x256B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9C3DSplineFv_0x255bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256B28u; }
        if (ctx->pc != 0x256B28u) { return; }
    }
    ctx->pc = 0x256B28u;
label_256b28:
    // 0x256b28: 0xc095ad4  jal         func_256B50
    ctx->pc = 0x256B28u;
    SET_GPR_U32(ctx, 31, 0x256B30u);
    ctx->pc = 0x256B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256B28u;
            // 0x256b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256B50u;
    if (runtime->hasFunction(0x256B50u)) {
        auto targetFn = runtime->lookupFunction(0x256B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256B30u; }
        if (ctx->pc != 0x256B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CCharaPasFv_0x256b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256B30u; }
        if (ctx->pc != 0x256B30u) { return; }
    }
    ctx->pc = 0x256B30u;
label_256b30:
    // 0x256b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x256b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x256B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256B3Cu;
            // 0x256b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256B44u;
}
