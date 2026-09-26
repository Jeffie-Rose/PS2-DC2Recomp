#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CDACollisionFv
// Address: 0x17be20 - 0x17be5c
void Initialize__12CDACollisionFv_0x17be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CDACollisionFv_0x17be20");
#endif

    switch (ctx->pc) {
        case 0x17be38u: goto label_17be38;
        case 0x17be40u: goto label_17be40;
        default: break;
    }

    ctx->pc = 0x17be20u;

    // 0x17be20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17be2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17be2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be30: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17BE30u;
    SET_GPR_U32(ctx, 31, 0x17BE38u);
    ctx->pc = 0x17BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE30u;
            // 0x17be34: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE38u; }
        if (ctx->pc != 0x17BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE38u; }
        if (ctx->pc != 0x17BE38u) { return; }
    }
    ctx->pc = 0x17BE38u;
label_17be38:
    // 0x17be38: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17BE38u;
    SET_GPR_U32(ctx, 31, 0x17BE40u);
    ctx->pc = 0x17BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE38u;
            // 0x17be3c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE40u; }
        if (ctx->pc != 0x17BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE40u; }
        if (ctx->pc != 0x17BE40u) { return; }
    }
    ctx->pc = 0x17BE40u;
label_17be40:
    // 0x17be40: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x17be40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x17be44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17be44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x17be48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17be48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x17be4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17be50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be54: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE54u;
            // 0x17be58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BE5Cu;
}
