#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUserData__Fv
// Address: 0x1a9b10 - 0x1a9b44
void GetUserData__Fv_0x1a9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUserData__Fv_0x1a9b10");
#endif

    switch (ctx->pc) {
        case 0x1a9b20u: goto label_1a9b20;
        default: break;
    }

    ctx->pc = 0x1a9b10u;

    // 0x1a9b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9b18: 0xc064220  jal         func_190880
    ctx->pc = 0x1A9B18u;
    SET_GPR_U32(ctx, 31, 0x1A9B20u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B20u; }
        if (ctx->pc != 0x1A9B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B20u; }
        if (ctx->pc != 0x1A9B20u) { return; }
    }
    ctx->pc = 0x1A9B20u;
label_1a9b20:
    // 0x1a9b20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9B20u;
    {
        const bool branch_taken_0x1a9b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B20u;
            // 0x1a9b24: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b20) {
            ctx->pc = 0x1A9B34u;
            goto label_1a9b34;
        }
    }
    ctx->pc = 0x1A9B28u;
    // 0x1a9b28: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x1a9b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x1a9b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9B2Cu;
    {
        const bool branch_taken_0x1a9b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B2Cu;
            // 0x1a9b30: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b2c) {
            ctx->pc = 0x1A9B38u;
            goto label_1a9b38;
        }
    }
    ctx->pc = 0x1A9B34u;
label_1a9b34:
    // 0x1a9b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b38:
    // 0x1a9b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B3Cu;
            // 0x1a9b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9B44u;
}
