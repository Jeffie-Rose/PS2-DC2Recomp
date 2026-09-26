#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDataType__9CGameDataFi
// Address: 0x195b80 - 0x195bb0
void GetDataType__9CGameDataFi_0x195b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDataType__9CGameDataFi_0x195b80");
#endif

    switch (ctx->pc) {
        case 0x195b90u: goto label_195b90;
        default: break;
    }

    ctx->pc = 0x195b80u;

    // 0x195b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195b88: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195B88u;
    SET_GPR_U32(ctx, 31, 0x195B90u);
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B90u; }
        if (ctx->pc != 0x195B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B90u; }
        if (ctx->pc != 0x195B90u) { return; }
    }
    ctx->pc = 0x195B90u;
label_195b90:
    // 0x195b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195B90u;
    {
        const bool branch_taken_0x195b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b90) {
            ctx->pc = 0x195BA0u;
            goto label_195ba0;
        }
    }
    ctx->pc = 0x195B98u;
    // 0x195b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195B98u;
    {
        const bool branch_taken_0x195b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B98u;
            // 0x195b9c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b98) {
            ctx->pc = 0x195BA4u;
            goto label_195ba4;
        }
    }
    ctx->pc = 0x195BA0u;
label_195ba0:
    // 0x195ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195ba4:
    // 0x195ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x195BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BA8u;
            // 0x195bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195BB0u;
}
