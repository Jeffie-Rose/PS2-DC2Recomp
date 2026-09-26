#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgVolumeNoOne__7CDC2MesFi
// Address: 0x21dee0 - 0x21df10
void SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0");
#endif

    switch (ctx->pc) {
        case 0x21df04u: goto label_21df04;
        default: break;
    }

    ctx->pc = 0x21dee0u;

    // 0x21dee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21dee4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21dee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21dee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21deec: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x21def0: 0xdf8282a8  ld          $v0, -0x7D58($gp)
    ctx->pc = 0x21def0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x21def4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x21def4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x21def8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x21def8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x21defc: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x21DEFCu;
    SET_GPR_U32(ctx, 31, 0x21DF04u);
    ctx->pc = 0x21DF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DEFCu;
            // 0x21df00: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF04u; }
        if (ctx->pc != 0x21DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF04u; }
        if (ctx->pc != 0x21DF04u) { return; }
    }
    ctx->pc = 0x21DF04u;
label_21df04:
    // 0x21df04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df08: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF08u;
            // 0x21df0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DF10u;
}
