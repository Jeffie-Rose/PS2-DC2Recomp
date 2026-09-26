#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkMoveImage__FP10mgCTexture9mgRect<i>P10mgCTexture9mgRect<i>P10mgCDrawEnv
// Address: 0x144910 - 0x144964
void mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTexture9mgRect_i_P10mgCDrawEnv_0x144910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTexture9mgRect_i_P10mgCDrawEnv_0x144910");
#endif

    switch (ctx->pc) {
        case 0x144958u: goto label_144958;
        default: break;
    }

    ctx->pc = 0x144910u;

    // 0x144910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144914: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x144914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14491c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x14491cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x144920: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x144920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144924: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x144928: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x144928u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14492c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x14492cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x144930: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x144930u;
    {
        const bool branch_taken_0x144930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144930u;
            // 0x144934: 0x7d030000  sq          $v1, 0x0($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144930) {
            ctx->pc = 0x144958u;
            goto label_144958;
        }
    }
    ctx->pc = 0x144938u;
    // 0x144938: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x144938u;
    {
        const bool branch_taken_0x144938 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x144938) {
            ctx->pc = 0x144948u;
            goto label_144948;
        }
    }
    ctx->pc = 0x144940u;
    // 0x144940: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144940u;
    {
        const bool branch_taken_0x144940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144940u;
            // 0x144944: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144940) {
            ctx->pc = 0x14495Cu;
            goto label_14495c;
        }
    }
    ctx->pc = 0x144948u;
label_144948:
    // 0x144948: 0x84c70004  lh          $a3, 0x4($a2)
    ctx->pc = 0x144948u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14494c: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x14494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x144950: 0xc05125c  jal         func_144970
    ctx->pc = 0x144950u;
    SET_GPR_U32(ctx, 31, 0x144958u);
    ctx->pc = 0x144954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144950u;
            // 0x144954: 0x24c60038  addiu       $a2, $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144970u;
    if (runtime->hasFunction(0x144970u)) {
        auto targetFn = runtime->lookupFunction(0x144970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144958u; }
        if (ctx->pc != 0x144958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0i9mgRect_i_P10mgCDrawEnv_0x144970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144958u; }
        if (ctx->pc != 0x144958u) { return; }
    }
    ctx->pc = 0x144958u;
label_144958:
    // 0x144958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14495c:
    // 0x14495c: 0x3e00008  jr          $ra
    ctx->pc = 0x14495Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14495Cu;
            // 0x144960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144964u;
}
