#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAquariumData__Fv
// Address: 0x196c60 - 0x196c90
void GetAquariumData__Fv_0x196c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAquariumData__Fv_0x196c60");
#endif

    switch (ctx->pc) {
        case 0x196c70u: goto label_196c70;
        default: break;
    }

    ctx->pc = 0x196c60u;

    // 0x196c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196c68: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x196C68u;
    SET_GPR_U32(ctx, 31, 0x196C70u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C70u; }
        if (ctx->pc != 0x196C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C70u; }
        if (ctx->pc != 0x196C70u) { return; }
    }
    ctx->pc = 0x196C70u;
label_196c70:
    // 0x196c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196C70u;
    {
        const bool branch_taken_0x196c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196c70) {
            ctx->pc = 0x196C80u;
            goto label_196c80;
        }
    }
    ctx->pc = 0x196C78u;
    // 0x196c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196C78u;
    {
        const bool branch_taken_0x196c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C78u;
            // 0x196c7c: 0x24424958  addiu       $v0, $v0, 0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c78) {
            ctx->pc = 0x196C84u;
            goto label_196c84;
        }
    }
    ctx->pc = 0x196C80u;
label_196c80:
    // 0x196c80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c84:
    // 0x196c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196c88: 0x3e00008  jr          $ra
    ctx->pc = 0x196C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C88u;
            // 0x196c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196C90u;
}
