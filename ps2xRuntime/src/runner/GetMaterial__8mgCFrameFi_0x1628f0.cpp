#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaterial__8mgCFrameFi
// Address: 0x1628f0 - 0x162920
void GetMaterial__8mgCFrameFi_0x1628f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaterial__8mgCFrameFi_0x1628f0");
#endif

    switch (ctx->pc) {
        case 0x1628f0u: goto label_1628f0;
        case 0x1628f4u: goto label_1628f4;
        case 0x1628f8u: goto label_1628f8;
        case 0x1628fcu: goto label_1628fc;
        case 0x162900u: goto label_162900;
        case 0x162904u: goto label_162904;
        case 0x162908u: goto label_162908;
        case 0x16290cu: goto label_16290c;
        case 0x162910u: goto label_162910;
        case 0x162914u: goto label_162914;
        case 0x162918u: goto label_162918;
        case 0x16291cu: goto label_16291c;
        default: break;
    }

    ctx->pc = 0x1628f0u;

label_1628f0:
    // 0x1628f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1628f4:
    // 0x1628f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1628f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1628f8:
    // 0x1628f8: 0x8c8400f8  lw          $a0, 0xF8($a0)
    ctx->pc = 0x1628f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_1628fc:
    // 0x1628fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_162900:
    if (ctx->pc == 0x162900u) {
        ctx->pc = 0x162900u;
            // 0x162900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162904u;
        goto label_162904;
    }
    ctx->pc = 0x1628FCu;
    {
        const bool branch_taken_0x1628fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x162900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628FCu;
            // 0x162900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628fc) {
            ctx->pc = 0x162914u;
            goto label_162914;
        }
    }
    ctx->pc = 0x162904u;
label_162904:
    // 0x162904: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x162904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_162908:
    // 0x162908: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_16290c:
    // 0x16290c: 0x320f809  jalr        $t9
label_162910:
    if (ctx->pc == 0x162910u) {
        ctx->pc = 0x162914u;
        goto label_162914;
    }
    ctx->pc = 0x16290Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162914u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162914u; }
            if (ctx->pc != 0x162914u) { return; }
        }
        }
    }
    ctx->pc = 0x162914u;
label_162914:
    // 0x162914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162918:
    // 0x162918: 0x3e00008  jr          $ra
label_16291c:
    if (ctx->pc == 0x16291Cu) {
        ctx->pc = 0x16291Cu;
            // 0x16291c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162920u;
        goto label_fallthrough_0x162918;
    }
    ctx->pc = 0x162918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162918u;
            // 0x16291c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162918:
    ctx->pc = 0x162920u;
}
