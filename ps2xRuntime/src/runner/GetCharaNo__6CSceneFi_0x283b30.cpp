#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaNo__6CSceneFi
// Address: 0x283b30 - 0x283b60
void GetCharaNo__6CSceneFi_0x283b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaNo__6CSceneFi_0x283b30");
#endif

    switch (ctx->pc) {
        case 0x283b40u: goto label_283b40;
        default: break;
    }

    ctx->pc = 0x283b30u;

    // 0x283b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283b38: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x283B38u;
    SET_GPR_U32(ctx, 31, 0x283B40u);
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B40u; }
        if (ctx->pc != 0x283B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B40u; }
        if (ctx->pc != 0x283B40u) { return; }
    }
    ctx->pc = 0x283B40u;
label_283b40:
    // 0x283b40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283B40u;
    {
        const bool branch_taken_0x283b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b40) {
            ctx->pc = 0x283B50u;
            goto label_283b50;
        }
    }
    ctx->pc = 0x283B48u;
    // 0x283b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283B48u;
    {
        const bool branch_taken_0x283b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B48u;
            // 0x283b4c: 0x8c42003c  lw          $v0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b48) {
            ctx->pc = 0x283B54u;
            goto label_283b54;
        }
    }
    ctx->pc = 0x283B50u;
label_283b50:
    // 0x283b50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x283b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_283b54:
    // 0x283b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283b58: 0x3e00008  jr          $ra
    ctx->pc = 0x283B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B58u;
            // 0x283b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283B60u;
}
