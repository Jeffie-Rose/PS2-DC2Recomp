#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepLoadThread__Fv
// Address: 0x2fd040 - 0x2fd080
void StepLoadThread__Fv_0x2fd040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepLoadThread__Fv_0x2fd040");
#endif

    switch (ctx->pc) {
        case 0x2fd064u: goto label_2fd064;
        default: break;
    }

    ctx->pc = 0x2fd040u;

    // 0x2fd040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fd044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fd048: 0x8f82a080  lw          $v0, -0x5F80($gp)
    ctx->pc = 0x2fd048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942848)));
    // 0x2fd04c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD04Cu;
    {
        const bool branch_taken_0x2fd04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD04Cu;
            // 0x2fd050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd04c) {
            ctx->pc = 0x2FD05Cu;
            goto label_2fd05c;
        }
    }
    ctx->pc = 0x2FD054u;
    // 0x2fd054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD054u;
    {
        const bool branch_taken_0x2fd054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD054u;
            // 0x2fd058: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd054) {
            ctx->pc = 0x2FD078u;
            goto label_2fd078;
        }
    }
    ctx->pc = 0x2FD05Cu;
label_2fd05c:
    // 0x2fd05c: 0xc0bf3e4  jal         func_2FCF90
    ctx->pc = 0x2FD05Cu;
    SET_GPR_U32(ctx, 31, 0x2FD064u);
    ctx->pc = 0x2FCF90u;
    if (runtime->hasFunction(0x2FCF90u)) {
        auto targetFn = runtime->lookupFunction(0x2FCF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD064u; }
        if (ctx->pc != 0x2FD064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switch_thread__Fv_0x2fcf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD064u; }
        if (ctx->pc != 0x2FD064u) { return; }
    }
    ctx->pc = 0x2FD064u;
label_2fd064:
    // 0x2fd064: 0x8f82a084  lw          $v0, -0x5F7C($gp)
    ctx->pc = 0x2fd064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942852)));
    // 0x2fd068: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fd068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fd06c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fd06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fd070: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fd070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fd074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd078:
    // 0x2fd078: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD078u;
            // 0x2fd07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD080u;
}
