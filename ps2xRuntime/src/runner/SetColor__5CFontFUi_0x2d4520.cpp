#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__5CFontFUi
// Address: 0x2d4520 - 0x2d4564
void SetColor__5CFontFUi_0x2d4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__5CFontFUi_0x2d4520");
#endif

    switch (ctx->pc) {
        case 0x2d4538u: goto label_2d4538;
        case 0x2d4554u: goto label_2d4554;
        default: break;
    }

    ctx->pc = 0x2d4520u;

    // 0x2d4520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d452c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4530: 0xc0565c0  jal         func_159700
    ctx->pc = 0x2D4530u;
    SET_GPR_U32(ctx, 31, 0x2D4538u);
    ctx->pc = 0x2D4534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4530u;
            // 0x2d4534: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159700u;
    if (runtime->hasFunction(0x159700u)) {
        auto targetFn = runtime->lookupFunction(0x159700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4538u; }
        if (ctx->pc != 0x2D4538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbqToUint__FUi_0x159700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4538u; }
        if (ctx->pc != 0x2D4538u) { return; }
    }
    ctx->pc = 0x2D4538u;
label_2d4538:
    // 0x2d4538: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x2d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d453c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4540: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x2d4540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4544: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d4544u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d4548: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x2d4548u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d454c: 0xc0b513c  jal         func_2D44F0
    ctx->pc = 0x2D454Cu;
    SET_GPR_U32(ctx, 31, 0x2D4554u);
    ctx->pc = 0x2D4550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D454Cu;
            // 0x2d4550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44F0u;
    if (runtime->hasFunction(0x2D44F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4554u; }
        if (ctx->pc != 0x2D4554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontF10RGBAQ_TYPE_0x2d44f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4554u; }
        if (ctx->pc != 0x2D4554u) { return; }
    }
    ctx->pc = 0x2D4554u;
label_2d4554:
    // 0x2d4554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d455c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D455Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D455Cu;
            // 0x2d4560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4564u;
}
