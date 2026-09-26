#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCamWorldCoord__FP9mgCCamera
// Address: 0x25d7e0 - 0x25d84c
void SetCamWorldCoord__FP9mgCCamera_0x25d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCamWorldCoord__FP9mgCCamera_0x25d7e0");
#endif

    switch (ctx->pc) {
        case 0x25d808u: goto label_25d808;
        case 0x25d814u: goto label_25d814;
        case 0x25d81cu: goto label_25d81c;
        case 0x25d824u: goto label_25d824;
        case 0x25d830u: goto label_25d830;
        case 0x25d83cu: goto label_25d83c;
        default: break;
    }

    ctx->pc = 0x25d7e0u;

    // 0x25d7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d7ec: 0x8f8397f4  lw          $v1, -0x680C($gp)
    ctx->pc = 0x25d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940660)));
    // 0x25d7f0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25D7F0u;
    {
        const bool branch_taken_0x25d7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7F0u;
            // 0x25d7f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7f0) {
            ctx->pc = 0x25D83Cu;
            goto label_25d83c;
        }
    }
    ctx->pc = 0x25D7F8u;
    // 0x25d7f8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25D7F8u;
    {
        const bool branch_taken_0x25d7f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7F8u;
            // 0x25d7fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7f8) {
            ctx->pc = 0x25D83Cu;
            goto label_25d83c;
        }
    }
    ctx->pc = 0x25D800u;
    // 0x25d800: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x25D800u;
    SET_GPR_U32(ctx, 31, 0x25D808u);
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D808u; }
        if (ctx->pc != 0x25D808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D808u; }
        if (ctx->pc != 0x25D808u) { return; }
    }
    ctx->pc = 0x25D808u;
label_25d808:
    // 0x25d808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d80c: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x25D80Cu;
    SET_GPR_U32(ctx, 31, 0x25D814u);
    ctx->pc = 0x25D810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D80Cu;
            // 0x25d810: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D814u; }
        if (ctx->pc != 0x25D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D814u; }
        if (ctx->pc != 0x25D814u) { return; }
    }
    ctx->pc = 0x25D814u;
label_25d814:
    // 0x25d814: 0xc0975c0  jal         func_25D700
    ctx->pc = 0x25D814u;
    SET_GPR_U32(ctx, 31, 0x25D81Cu);
    ctx->pc = 0x25D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D814u;
            // 0x25d818: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D81Cu; }
        if (ctx->pc != 0x25D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D81Cu; }
        if (ctx->pc != 0x25D81Cu) { return; }
    }
    ctx->pc = 0x25D81Cu;
label_25d81c:
    // 0x25d81c: 0xc0975c0  jal         func_25D700
    ctx->pc = 0x25D81Cu;
    SET_GPR_U32(ctx, 31, 0x25D824u);
    ctx->pc = 0x25D820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D81Cu;
            // 0x25d820: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D824u; }
        if (ctx->pc != 0x25D824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D824u; }
        if (ctx->pc != 0x25D824u) { return; }
    }
    ctx->pc = 0x25D824u;
label_25d824:
    // 0x25d824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d828: 0xc04c504  jal         func_131410
    ctx->pc = 0x25D828u;
    SET_GPR_U32(ctx, 31, 0x25D830u);
    ctx->pc = 0x25D82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D828u;
            // 0x25d82c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D830u; }
        if (ctx->pc != 0x25D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D830u; }
        if (ctx->pc != 0x25D830u) { return; }
    }
    ctx->pc = 0x25D830u;
label_25d830:
    // 0x25d830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d834: 0xc04c518  jal         func_131460
    ctx->pc = 0x25D834u;
    SET_GPR_U32(ctx, 31, 0x25D83Cu);
    ctx->pc = 0x25D838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D834u;
            // 0x25d838: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D83Cu; }
        if (ctx->pc != 0x25D83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D83Cu; }
        if (ctx->pc != 0x25D83Cu) { return; }
    }
    ctx->pc = 0x25D83Cu;
label_25d83c:
    // 0x25d83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d844: 0x3e00008  jr          $ra
    ctx->pc = 0x25D844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D844u;
            // 0x25d848: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D84Cu;
}
