#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaStatusAttirbute__16CUserDataManagerFi
// Address: 0x19c2c0 - 0x19c2f0
void GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0");
#endif

    switch (ctx->pc) {
        case 0x19c2d0u: goto label_19c2d0;
        default: break;
    }

    ctx->pc = 0x19c2c0u;

    // 0x19c2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c2c8: 0xc067018  jal         func_19C060
    ctx->pc = 0x19C2C8u;
    SET_GPR_U32(ctx, 31, 0x19C2D0u);
    ctx->pc = 0x19C060u;
    if (runtime->hasFunction(0x19C060u)) {
        auto targetFn = runtime->lookupFunction(0x19C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2D0u; }
        if (ctx->pc != 0x19C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbutePtr__16CUserDataManagerFi_0x19c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2D0u; }
        if (ctx->pc != 0x19C2D0u) { return; }
    }
    ctx->pc = 0x19C2D0u;
label_19c2d0:
    // 0x19c2d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C2D0u;
    {
        const bool branch_taken_0x19c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2d0) {
            ctx->pc = 0x19C2E0u;
            goto label_19c2e0;
        }
    }
    ctx->pc = 0x19C2D8u;
    // 0x19c2d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C2D8u;
    {
        const bool branch_taken_0x19c2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2D8u;
            // 0x19c2dc: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2d8) {
            ctx->pc = 0x19C2E4u;
            goto label_19c2e4;
        }
    }
    ctx->pc = 0x19C2E0u;
label_19c2e0:
    // 0x19c2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c2e4:
    // 0x19c2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2E8u;
            // 0x19c2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C2F0u;
}
