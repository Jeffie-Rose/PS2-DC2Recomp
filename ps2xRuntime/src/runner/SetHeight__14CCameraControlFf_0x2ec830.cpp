#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHeight__14CCameraControlFf
// Address: 0x2ec830 - 0x2ec884
void SetHeight__14CCameraControlFf_0x2ec830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHeight__14CCameraControlFf_0x2ec830");
#endif

    switch (ctx->pc) {
        case 0x2ec858u: goto label_2ec858;
        case 0x2ec860u: goto label_2ec860;
        default: break;
    }

    ctx->pc = 0x2ec830u;

    // 0x2ec830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ec834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ec834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ec838: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec83c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec844: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2ec844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2ec848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC848u;
    {
        const bool branch_taken_0x2ec848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC848u;
            // 0x2ec84c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec848) {
            ctx->pc = 0x2EC858u;
            goto label_2ec858;
        }
    }
    ctx->pc = 0x2EC850u;
    // 0x2ec850: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x2EC850u;
    SET_GPR_U32(ctx, 31, 0x2EC858u);
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC858u; }
        if (ctx->pc != 0x2EC858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC858u; }
        if (ctx->pc != 0x2EC858u) { return; }
    }
    ctx->pc = 0x2EC858u;
label_2ec858:
    // 0x2ec858: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2EC858u;
    SET_GPR_U32(ctx, 31, 0x2EC860u);
    ctx->pc = 0x2EC85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC858u;
            // 0x2ec85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC860u; }
        if (ctx->pc != 0x2EC860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC860u; }
        if (ctx->pc != 0x2EC860u) { return; }
    }
    ctx->pc = 0x2EC860u;
label_2ec860:
    // 0x2ec860: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2ec860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec864: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2ec864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2ec868: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2ec868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2ec86c: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2ec86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ec870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ec870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec874: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec87c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC87Cu;
            // 0x2ec880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC884u;
}
