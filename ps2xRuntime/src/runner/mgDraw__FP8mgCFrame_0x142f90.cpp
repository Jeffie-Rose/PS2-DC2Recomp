#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDraw__FP8mgCFrame
// Address: 0x142f90 - 0x142fc4
void mgDraw__FP8mgCFrame_0x142f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDraw__FP8mgCFrame_0x142f90");
#endif

    switch (ctx->pc) {
        case 0x142f90u: goto label_142f90;
        case 0x142f94u: goto label_142f94;
        case 0x142f98u: goto label_142f98;
        case 0x142f9cu: goto label_142f9c;
        case 0x142fa0u: goto label_142fa0;
        case 0x142fa4u: goto label_142fa4;
        case 0x142fa8u: goto label_142fa8;
        case 0x142facu: goto label_142fac;
        case 0x142fb0u: goto label_142fb0;
        case 0x142fb4u: goto label_142fb4;
        case 0x142fb8u: goto label_142fb8;
        case 0x142fbcu: goto label_142fbc;
        case 0x142fc0u: goto label_142fc0;
        default: break;
    }

    ctx->pc = 0x142f90u;

label_142f90:
    // 0x142f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_142f94:
    // 0x142f94: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_142f98:
    if (ctx->pc == 0x142F98u) {
        ctx->pc = 0x142F98u;
            // 0x142f98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x142F9Cu;
        goto label_142f9c;
    }
    ctx->pc = 0x142F94u;
    {
        const bool branch_taken_0x142f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F94u;
            // 0x142f98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f94) {
            ctx->pc = 0x142FB4u;
            goto label_142fb4;
        }
    }
    ctx->pc = 0x142F9Cu;
label_142f9c:
    // 0x142f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x142f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142fa0:
    // 0x142fa0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_142fa4:
    // 0x142fa4: 0x320f809  jalr        $t9
label_142fa8:
    if (ctx->pc == 0x142FA8u) {
        ctx->pc = 0x142FACu;
        goto label_142fac;
    }
    ctx->pc = 0x142FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x142FACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x142FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x142FACu; }
            if (ctx->pc != 0x142FACu) { return; }
        }
        }
    }
    ctx->pc = 0x142FACu;
label_142fac:
    // 0x142fac: 0x10000003  b           . + 4 + (0x3 << 2)
label_142fb0:
    if (ctx->pc == 0x142FB0u) {
        ctx->pc = 0x142FB0u;
            // 0x142fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x142FB4u;
        goto label_142fb4;
    }
    ctx->pc = 0x142FACu;
    {
        const bool branch_taken_0x142fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FACu;
            // 0x142fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fac) {
            ctx->pc = 0x142FBCu;
            goto label_142fbc;
        }
    }
    ctx->pc = 0x142FB4u;
label_142fb4:
    // 0x142fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x142fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142fb8:
    // 0x142fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142fbc:
    // 0x142fbc: 0x3e00008  jr          $ra
label_142fc0:
    if (ctx->pc == 0x142FC0u) {
        ctx->pc = 0x142FC0u;
            // 0x142fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x142FC4u;
        goto label_fallthrough_0x142fbc;
    }
    ctx->pc = 0x142FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FBCu;
            // 0x142fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x142fbc:
    ctx->pc = 0x142FC4u;
}
