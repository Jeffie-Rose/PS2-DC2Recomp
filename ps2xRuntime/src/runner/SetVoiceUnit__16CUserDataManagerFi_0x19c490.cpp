#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVoiceUnit__16CUserDataManagerFi
// Address: 0x19c490 - 0x19c4b4
void SetVoiceUnit__16CUserDataManagerFi_0x19c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVoiceUnit__16CUserDataManagerFi_0x19c490");
#endif

    switch (ctx->pc) {
        case 0x19c4a8u: goto label_19c4a8;
        default: break;
    }

    ctx->pc = 0x19c490u;

    // 0x19c490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c498: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C498u;
    {
        const bool branch_taken_0x19c498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C498u;
            // 0x19c49c: 0xa085467c  sb          $a1, 0x467C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 18044), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c498) {
            ctx->pc = 0x19C4A8u;
            goto label_19c4a8;
        }
    }
    ctx->pc = 0x19C4A0u;
    // 0x19c4a0: 0xc067134  jal         func_19C4D0
    ctx->pc = 0x19C4A0u;
    SET_GPR_U32(ctx, 31, 0x19C4A8u);
    ctx->pc = 0x19C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4A0u;
            // 0x19c4a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C4D0u;
    if (runtime->hasFunction(0x19C4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4A8u; }
        if (ctx->pc != 0x19C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoboVoiceFlag__16CUserDataManagerFi_0x19c4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4A8u; }
        if (ctx->pc != 0x19C4A8u) { return; }
    }
    ctx->pc = 0x19C4A8u;
label_19c4a8:
    // 0x19c4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4ACu;
            // 0x19c4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C4B4u;
}
