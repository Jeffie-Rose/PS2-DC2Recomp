#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeMotion__FP8mgCFrameP14tagMOTION_TYPEUiUifP9mgCCamera
// Address: 0x14d310 - 0x14d390
void ChangeMotion__FP8mgCFrameP14tagMOTION_TYPEUiUifP9mgCCamera_0x14d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeMotion__FP8mgCFrameP14tagMOTION_TYPEUiUifP9mgCCamera_0x14d310");
#endif

    switch (ctx->pc) {
        case 0x14d34cu: goto label_14d34c;
        case 0x14d360u: goto label_14d360;
        default: break;
    }

    ctx->pc = 0x14d310u;

    // 0x14d310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14d314: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14d318: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14d31c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14d320: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14d320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d324: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d328: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14d328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d32c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d330: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14d330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d334: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14d334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14d338: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x14d338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d33c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14d340: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x14D340u;
    {
        const bool branch_taken_0x14d340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D340u;
            // 0x14d344: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d340) {
            ctx->pc = 0x14D36Cu;
            goto label_14d36c;
        }
    }
    ctx->pc = 0x14D348u;
    // 0x14d348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14d34c:
    // 0x14d34c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d350: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14d350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d354: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x14d354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d358: 0xc0530d4  jal         func_14C350
    ctx->pc = 0x14D358u;
    SET_GPR_U32(ctx, 31, 0x14D360u);
    ctx->pc = 0x14D35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D358u;
            // 0x14d35c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C350u;
    if (runtime->hasFunction(0x14C350u)) {
        auto targetFn = runtime->lookupFunction(0x14C350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D360u; }
        if (ctx->pc != 0x14D360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionProc__FP8mgCFrameUiUifP8Mot_ListP9mgCCamera_0x14c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D360u; }
        if (ctx->pc != 0x14D360u) { return; }
    }
    ctx->pc = 0x14D360u;
label_14d360:
    // 0x14d360: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14d360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d364: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D364u;
    {
        const bool branch_taken_0x14d364 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D364u;
            // 0x14d368: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d364) {
            ctx->pc = 0x14D34Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d34c;
        }
    }
    ctx->pc = 0x14D36Cu;
label_14d36c:
    // 0x14d36c: 0x0  nop
    ctx->pc = 0x14d36cu;
    // NOP
    // 0x14d370: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14d370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d374: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14d374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d37c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14d37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d388: 0x3e00008  jr          $ra
    ctx->pc = 0x14D388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D388u;
            // 0x14d38c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D390u;
}
