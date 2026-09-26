#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventFirstDraw__Fv
// Address: 0x262050 - 0x26209c
void EdEventFirstDraw__Fv_0x262050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventFirstDraw__Fv_0x262050");
#endif

    switch (ctx->pc) {
        case 0x262068u: goto label_262068;
        case 0x262078u: goto label_262078;
        default: break;
    }

    ctx->pc = 0x262050u;

    // 0x262050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26205c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262060: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x262060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262064: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x262064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262068:
    // 0x262068: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x262068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x26206c: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x26206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x262070: 0xc0a4324  jal         func_290C90
    ctx->pc = 0x262070u;
    SET_GPR_U32(ctx, 31, 0x262078u);
    ctx->pc = 0x262074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262070u;
            // 0x262074: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290C90u;
    if (runtime->hasFunction(0x290C90u)) {
        auto targetFn = runtime->lookupFunction(0x290C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262078u; }
        if (ctx->pc != 0x262078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FirstDraw__13CEventSprite2Fv_0x290c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262078u; }
        if (ctx->pc != 0x262078u) { return; }
    }
    ctx->pc = 0x262078u;
label_262078:
    // 0x262078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26207c: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x26207cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x262080: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x262080u;
    {
        const bool branch_taken_0x262080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262080u;
            // 0x262084: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262080) {
            ctx->pc = 0x262068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262068;
        }
    }
    ctx->pc = 0x262088u;
    // 0x262088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26208c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26208cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262094: 0x3e00008  jr          $ra
    ctx->pc = 0x262094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262094u;
            // 0x262098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26209Cu;
}
