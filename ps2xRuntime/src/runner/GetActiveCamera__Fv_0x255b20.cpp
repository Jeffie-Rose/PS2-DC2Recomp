#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveCamera__Fv
// Address: 0x255b20 - 0x255b48
void GetActiveCamera__Fv_0x255b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveCamera__Fv_0x255b20");
#endif

    switch (ctx->pc) {
        case 0x255b3cu: goto label_255b3c;
        default: break;
    }

    ctx->pc = 0x255b20u;

    // 0x255b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255b28: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x255b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255b2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255B2Cu;
    {
        const bool branch_taken_0x255b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255B2Cu;
            // 0x255b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b2c) {
            ctx->pc = 0x255B3Cu;
            goto label_255b3c;
        }
    }
    ctx->pc = 0x255B34u;
    // 0x255b34: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x255B34u;
    SET_GPR_U32(ctx, 31, 0x255B3Cu);
    ctx->pc = 0x255B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255B34u;
            // 0x255b38: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B3Cu; }
        if (ctx->pc != 0x255B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B3Cu; }
        if (ctx->pc != 0x255B3Cu) { return; }
    }
    ctx->pc = 0x255B3Cu;
label_255b3c:
    // 0x255b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255b40: 0x3e00008  jr          $ra
    ctx->pc = 0x255B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255B40u;
            // 0x255b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255B48u;
}
