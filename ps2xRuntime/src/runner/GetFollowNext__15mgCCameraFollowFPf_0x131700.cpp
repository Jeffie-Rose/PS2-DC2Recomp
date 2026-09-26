#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFollowNext__15mgCCameraFollowFPf
// Address: 0x131700 - 0x13173c
void GetFollowNext__15mgCCameraFollowFPf_0x131700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFollowNext__15mgCCameraFollowFPf_0x131700");
#endif

    switch (ctx->pc) {
        case 0x13171cu: goto label_13171c;
        case 0x131728u: goto label_131728;
        default: break;
    }

    ctx->pc = 0x131700u;

    // 0x131700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13170c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131714: 0xc04c69c  jal         func_131A70
    ctx->pc = 0x131714u;
    SET_GPR_U32(ctx, 31, 0x13171Cu);
    ctx->pc = 0x131718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131714u;
            // 0x131718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A70u;
    if (runtime->hasFunction(0x131A70u)) {
        auto targetFn = runtime->lookupFunction(0x131A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13171Cu; }
        if (ctx->pc != 0x13171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollow__15mgCCameraFollowFPf_0x131a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13171Cu; }
        if (ctx->pc != 0x13171Cu) { return; }
    }
    ctx->pc = 0x13171Cu;
label_13171c:
    // 0x13171c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131720: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x131720u;
    SET_GPR_U32(ctx, 31, 0x131728u);
    ctx->pc = 0x131724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131720u;
            // 0x131724: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131728u; }
        if (ctx->pc != 0x131728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131728u; }
        if (ctx->pc != 0x131728u) { return; }
    }
    ctx->pc = 0x131728u;
label_131728:
    // 0x131728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13172c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13172cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131734: 0x3e00008  jr          $ra
    ctx->pc = 0x131734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131734u;
            // 0x131738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13173Cu;
}
