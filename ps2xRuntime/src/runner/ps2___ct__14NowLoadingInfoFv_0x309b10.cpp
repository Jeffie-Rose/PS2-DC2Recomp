#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14NowLoadingInfoFv
// Address: 0x309b10 - 0x309b4c
void ps2___ct__14NowLoadingInfoFv_0x309b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14NowLoadingInfoFv_0x309b10");
#endif

    switch (ctx->pc) {
        case 0x309b28u: goto label_309b28;
        default: break;
    }

    ctx->pc = 0x309b10u;

    // 0x309b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x309b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x309b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x309b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x309b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b20: 0xc04e640  jal         func_139900
    ctx->pc = 0x309B20u;
    SET_GPR_U32(ctx, 31, 0x309B28u);
    ctx->pc = 0x309B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309B20u;
            // 0x309b24: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B28u; }
        if (ctx->pc != 0x309B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309B28u; }
        if (ctx->pc != 0x309B28u) { return; }
    }
    ctx->pc = 0x309B28u;
label_309b28:
    // 0x309b28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x309b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x309b34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x309b38: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x309b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x309b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x309b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x309b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309b44: 0x3e00008  jr          $ra
    ctx->pc = 0x309B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B44u;
            // 0x309b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309B4Cu;
}
