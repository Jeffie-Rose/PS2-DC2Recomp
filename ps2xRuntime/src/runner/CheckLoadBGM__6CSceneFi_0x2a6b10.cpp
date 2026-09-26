#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadBGM__6CSceneFi
// Address: 0x2a6b10 - 0x2a6b50
void CheckLoadBGM__6CSceneFi_0x2a6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadBGM__6CSceneFi_0x2a6b10");
#endif

    switch (ctx->pc) {
        case 0x2a6b24u: goto label_2a6b24;
        default: break;
    }

    ctx->pc = 0x2a6b10u;

    // 0x2a6b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6b1c: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6B1Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B24u);
    ctx->pc = 0x2A6B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B1Cu;
            // 0x2a6b20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B24u; }
        if (ctx->pc != 0x2A6B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B24u; }
        if (ctx->pc != 0x2A6B24u) { return; }
    }
    ctx->pc = 0x2A6B24u;
label_2a6b24:
    // 0x2a6b24: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6B24u;
    {
        const bool branch_taken_0x2a6b24 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a6b24) {
            ctx->pc = 0x2A6B34u;
            goto label_2a6b34;
        }
    }
    ctx->pc = 0x2A6B2Cu;
    // 0x2a6b2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6B2Cu;
    {
        const bool branch_taken_0x2a6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B2Cu;
            // 0x2a6b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b2c) {
            ctx->pc = 0x2A6B40u;
            goto label_2a6b40;
        }
    }
    ctx->pc = 0x2A6B34u;
label_2a6b34:
    // 0x2a6b34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2a6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a6b38: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2a6b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2a6b3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a6b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6b40:
    // 0x2a6b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B48u;
            // 0x2a6b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6B50u;
}
