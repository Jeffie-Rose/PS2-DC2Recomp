#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetEditEvent__Fv
// Address: 0x1adff0 - 0x1ae028
void ResetEditEvent__Fv_0x1adff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetEditEvent__Fv_0x1adff0");
#endif

    switch (ctx->pc) {
        case 0x1ae014u: goto label_1ae014;
        case 0x1ae01cu: goto label_1ae01c;
        default: break;
    }

    ctx->pc = 0x1adff0u;

    // 0x1adff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1adff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1adff4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1adff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1adff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae000: 0x8c24ede4  lw          $a0, -0x121C($at)
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962660)));
    // 0x1ae004: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE004u;
    {
        const bool branch_taken_0x1ae004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE004u;
            // 0x1ae008: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae004) {
            ctx->pc = 0x1AE01Cu;
            goto label_1ae01c;
        }
    }
    ctx->pc = 0x1AE00Cu;
    // 0x1ae00c: 0xc0bbe6c  jal         func_2EF9B0
    ctx->pc = 0x1AE00Cu;
    SET_GPR_U32(ctx, 31, 0x1AE014u);
    ctx->pc = 0x1AE010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE00Cu;
            // 0x1ae010: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9B0u;
    if (runtime->hasFunction(0x2EF9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE014u; }
        if (ctx->pc != 0x1AE014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__10CEditEventFv_0x2ef9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE014u; }
        if (ctx->pc != 0x1AE014u) { return; }
    }
    ctx->pc = 0x1AE014u;
label_1ae014:
    // 0x1ae014: 0xc06a6dc  jal         func_1A9B70
    ctx->pc = 0x1AE014u;
    SET_GPR_U32(ctx, 31, 0x1AE01Cu);
    ctx->pc = 0x1A9B70u;
    if (runtime->hasFunction(0x1A9B70u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE01Cu; }
        if (ctx->pc != 0x1AE01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnLockCharaCtrl__Fv_0x1a9b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE01Cu; }
        if (ctx->pc != 0x1AE01Cu) { return; }
    }
    ctx->pc = 0x1AE01Cu;
label_1ae01c:
    // 0x1ae01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae020: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE020u;
            // 0x1ae024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE028u;
}
