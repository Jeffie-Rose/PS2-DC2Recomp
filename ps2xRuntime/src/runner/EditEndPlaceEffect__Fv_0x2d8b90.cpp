#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditEndPlaceEffect__Fv
// Address: 0x2d8b90 - 0x2d8bd0
void EditEndPlaceEffect__Fv_0x2d8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditEndPlaceEffect__Fv_0x2d8b90");
#endif

    switch (ctx->pc) {
        case 0x2d8ba0u: goto label_2d8ba0;
        case 0x2d8ba8u: goto label_2d8ba8;
        default: break;
    }

    ctx->pc = 0x2d8b90u;

    // 0x2d8b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8b98: 0xc0bf108  jal         func_2FC420
    ctx->pc = 0x2D8B98u;
    SET_GPR_U32(ctx, 31, 0x2D8BA0u);
    ctx->pc = 0x2D8B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B98u;
            // 0x2d8b9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC420u;
    if (runtime->hasFunction(0x2FC420u)) {
        auto targetFn = runtime->lookupFunction(0x2FC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BA0u; }
        if (ctx->pc != 0x2D8BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPlaceAnimeEndCheck__Fv_0x2fc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BA0u; }
        if (ctx->pc != 0x2D8BA0u) { return; }
    }
    ctx->pc = 0x2D8BA0u;
label_2d8ba0:
    // 0x2d8ba0: 0xc0bec20  jal         func_2FB080
    ctx->pc = 0x2D8BA0u;
    SET_GPR_U32(ctx, 31, 0x2D8BA8u);
    ctx->pc = 0x2D8BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8BA0u;
            // 0x2d8ba4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FB080u;
    if (runtime->hasFunction(0x2FB080u)) {
        auto targetFn = runtime->lookupFunction(0x2FB080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BA8u; }
        if (ctx->pc != 0x2D8BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPEffectEndCheck__Fv_0x2fb080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BA8u; }
        if (ctx->pc != 0x2D8BA8u) { return; }
    }
    ctx->pc = 0x2D8BA8u;
label_2d8ba8:
    // 0x2d8ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8bac: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8BACu;
    {
        const bool branch_taken_0x2d8bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8bac) {
            ctx->pc = 0x2D8BBCu;
            goto label_2d8bbc;
        }
    }
    ctx->pc = 0x2D8BB4u;
    // 0x2d8bb4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8BB4u;
    {
        const bool branch_taken_0x2d8bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D8BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8BB4u;
            // 0x2d8bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bb4) {
            ctx->pc = 0x2D8BC0u;
            goto label_2d8bc0;
        }
    }
    ctx->pc = 0x2D8BBCu;
label_2d8bbc:
    // 0x2d8bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8bc0:
    // 0x2d8bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8BC8u;
            // 0x2d8bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8BD0u;
}
