#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: River__9CEditGridFii
// Address: 0x298040 - 0x298070
void River__9CEditGridFii_0x298040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("River__9CEditGridFii_0x298040");
#endif

    switch (ctx->pc) {
        case 0x298050u: goto label_298050;
        default: break;
    }

    ctx->pc = 0x298040u;

    // 0x298040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298048: 0xc0a5e40  jal         func_297900
    ctx->pc = 0x298048u;
    SET_GPR_U32(ctx, 31, 0x298050u);
    ctx->pc = 0x297900u;
    if (runtime->hasFunction(0x297900u)) {
        auto targetFn = runtime->lookupFunction(0x297900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298050u; }
        if (ctx->pc != 0x298050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__9CEditGridFii_0x297900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298050u; }
        if (ctx->pc != 0x298050u) { return; }
    }
    ctx->pc = 0x298050u;
label_298050:
    // 0x298050: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298050u;
    {
        const bool branch_taken_0x298050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298050) {
            ctx->pc = 0x298060u;
            goto label_298060;
        }
    }
    ctx->pc = 0x298058u;
    // 0x298058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298058u;
    {
        const bool branch_taken_0x298058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298058u;
            // 0x29805c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298058) {
            ctx->pc = 0x298064u;
            goto label_298064;
        }
    }
    ctx->pc = 0x298060u;
label_298060:
    // 0x298060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298064:
    // 0x298064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298068: 0x3e00008  jr          $ra
    ctx->pc = 0x298068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298068u;
            // 0x29806c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298070u;
}
