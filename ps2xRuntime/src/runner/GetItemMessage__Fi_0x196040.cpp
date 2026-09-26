#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemMessage__Fi
// Address: 0x196040 - 0x196078
void GetItemMessage__Fi_0x196040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemMessage__Fi_0x196040");
#endif

    switch (ctx->pc) {
        case 0x196058u: goto label_196058;
        default: break;
    }

    ctx->pc = 0x196040u;

    // 0x196040: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x196040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196044: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196048: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x19604c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196050: 0xc0655dc  jal         func_195770
    ctx->pc = 0x196050u;
    SET_GPR_U32(ctx, 31, 0x196058u);
    ctx->pc = 0x196054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196050u;
            // 0x196054: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196058u; }
        if (ctx->pc != 0x196058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196058u; }
        if (ctx->pc != 0x196058u) { return; }
    }
    ctx->pc = 0x196058u;
label_196058:
    // 0x196058: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196058u;
    {
        const bool branch_taken_0x196058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196058) {
            ctx->pc = 0x196068u;
            goto label_196068;
        }
    }
    ctx->pc = 0x196060u;
    // 0x196060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196060u;
    {
        const bool branch_taken_0x196060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196060u;
            // 0x196064: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196060) {
            ctx->pc = 0x19606Cu;
            goto label_19606c;
        }
    }
    ctx->pc = 0x196068u;
label_196068:
    // 0x196068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19606c:
    // 0x19606c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196070: 0x3e00008  jr          $ra
    ctx->pc = 0x196070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196070u;
            // 0x196074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196078u;
}
