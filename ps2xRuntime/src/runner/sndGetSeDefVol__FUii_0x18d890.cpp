#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetSeDefVol__FUii
// Address: 0x18d890 - 0x18d8c0
void sndGetSeDefVol__FUii_0x18d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetSeDefVol__FUii_0x18d890");
#endif

    switch (ctx->pc) {
        case 0x18d8a0u: goto label_18d8a0;
        default: break;
    }

    ctx->pc = 0x18d890u;

    // 0x18d890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d898: 0xc0632e4  jal         func_18CB90
    ctx->pc = 0x18D898u;
    SET_GPR_U32(ctx, 31, 0x18D8A0u);
    ctx->pc = 0x18CB90u;
    if (runtime->hasFunction(0x18CB90u)) {
        auto targetFn = runtime->lookupFunction(0x18CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8A0u; }
        if (ctx->pc != 0x18D8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeInfo__FUii_0x18cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8A0u; }
        if (ctx->pc != 0x18D8A0u) { return; }
    }
    ctx->pc = 0x18D8A0u;
label_18d8a0:
    // 0x18d8a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D8A0u;
    {
        const bool branch_taken_0x18d8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8a0) {
            ctx->pc = 0x18D8B0u;
            goto label_18d8b0;
        }
    }
    ctx->pc = 0x18D8A8u;
    // 0x18d8a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D8A8u;
    {
        const bool branch_taken_0x18d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8A8u;
            // 0x18d8ac: 0x80420008  lb          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8a8) {
            ctx->pc = 0x18D8B4u;
            goto label_18d8b4;
        }
    }
    ctx->pc = 0x18D8B0u;
label_18d8b0:
    // 0x18d8b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d8b4:
    // 0x18d8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x18D8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8B8u;
            // 0x18d8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D8C0u;
}
