#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkMoveImage__FP10mgCTexture9mgRect<i>P10mgCTextureiii
// Address: 0x144560 - 0x1445a0
void mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560");
#endif

    switch (ctx->pc) {
        case 0x144594u: goto label_144594;
        default: break;
    }

    ctx->pc = 0x144560u;

    // 0x144560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144568: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x144568u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14456c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x144570: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x144570u;
    {
        const bool branch_taken_0x144570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144570u;
            // 0x144574: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144570) {
            ctx->pc = 0x144594u;
            goto label_144594;
        }
    }
    ctx->pc = 0x144578u;
    // 0x144578: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x144578u;
    {
        const bool branch_taken_0x144578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x144578) {
            ctx->pc = 0x144588u;
            goto label_144588;
        }
    }
    ctx->pc = 0x144580u;
    // 0x144580: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x144580u;
    {
        const bool branch_taken_0x144580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144580u;
            // 0x144584: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144580) {
            ctx->pc = 0x144598u;
            goto label_144598;
        }
    }
    ctx->pc = 0x144588u;
label_144588:
    // 0x144588: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x144588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x14458c: 0xc051168  jal         func_1445A0
    ctx->pc = 0x14458Cu;
    SET_GPR_U32(ctx, 31, 0x144594u);
    ctx->pc = 0x144590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14458Cu;
            // 0x144590: 0x24c60038  addiu       $a2, $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1445A0u;
    if (runtime->hasFunction(0x1445A0u)) {
        auto targetFn = runtime->lookupFunction(0x1445A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144594u; }
        if (ctx->pc != 0x144594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144594u; }
        if (ctx->pc != 0x144594u) { return; }
    }
    ctx->pc = 0x144594u;
label_144594:
    // 0x144594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144598:
    // 0x144598: 0x3e00008  jr          $ra
    ctx->pc = 0x144598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144598u;
            // 0x14459c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1445A0u;
}
