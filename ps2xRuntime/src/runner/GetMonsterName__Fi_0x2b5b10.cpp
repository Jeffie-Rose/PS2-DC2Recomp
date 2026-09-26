#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterName__Fi
// Address: 0x2b5b10 - 0x2b5b40
void GetMonsterName__Fi_0x2b5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterName__Fi_0x2b5b10");
#endif

    switch (ctx->pc) {
        case 0x2b5b20u: goto label_2b5b20;
        default: break;
    }

    ctx->pc = 0x2b5b10u;

    // 0x2b5b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5b18: 0xc076b80  jal         func_1DAE00
    ctx->pc = 0x2B5B18u;
    SET_GPR_U32(ctx, 31, 0x2B5B20u);
    ctx->pc = 0x1DAE00u;
    if (runtime->hasFunction(0x1DAE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DAE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B20u; }
        if (ctx->pc != 0x2B5B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterTable__Fi_0x1dae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5B20u; }
        if (ctx->pc != 0x2B5B20u) { return; }
    }
    ctx->pc = 0x2B5B20u;
label_2b5b20:
    // 0x2b5b20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5B20u;
    {
        const bool branch_taken_0x2b5b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b20) {
            ctx->pc = 0x2B5B30u;
            goto label_2b5b30;
        }
    }
    ctx->pc = 0x2B5B28u;
    // 0x2b5b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5B28u;
    {
        const bool branch_taken_0x2b5b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B28u;
            // 0x2b5b2c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b28) {
            ctx->pc = 0x2B5B34u;
            goto label_2b5b34;
        }
    }
    ctx->pc = 0x2B5B30u;
label_2b5b30:
    // 0x2b5b30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5b34:
    // 0x2b5b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B38u;
            // 0x2b5b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5B40u;
}
