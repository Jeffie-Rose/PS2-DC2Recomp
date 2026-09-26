#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchRandomStone__11CAutoMapGenFPff
// Address: 0x1d93f0 - 0x1d949c
void SearchRandomStone__11CAutoMapGenFPff_0x1d93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchRandomStone__11CAutoMapGenFPff_0x1d93f0");
#endif

    switch (ctx->pc) {
        case 0x1d93f0u: goto label_1d93f0;
        case 0x1d93f4u: goto label_1d93f4;
        case 0x1d93f8u: goto label_1d93f8;
        case 0x1d93fcu: goto label_1d93fc;
        case 0x1d9400u: goto label_1d9400;
        case 0x1d9404u: goto label_1d9404;
        case 0x1d9408u: goto label_1d9408;
        case 0x1d940cu: goto label_1d940c;
        case 0x1d9410u: goto label_1d9410;
        case 0x1d9414u: goto label_1d9414;
        case 0x1d9418u: goto label_1d9418;
        case 0x1d941cu: goto label_1d941c;
        case 0x1d9420u: goto label_1d9420;
        case 0x1d9424u: goto label_1d9424;
        case 0x1d9428u: goto label_1d9428;
        case 0x1d942cu: goto label_1d942c;
        case 0x1d9430u: goto label_1d9430;
        case 0x1d9434u: goto label_1d9434;
        case 0x1d9438u: goto label_1d9438;
        case 0x1d943cu: goto label_1d943c;
        case 0x1d9440u: goto label_1d9440;
        case 0x1d9444u: goto label_1d9444;
        case 0x1d9448u: goto label_1d9448;
        case 0x1d944cu: goto label_1d944c;
        case 0x1d9450u: goto label_1d9450;
        case 0x1d9454u: goto label_1d9454;
        case 0x1d9458u: goto label_1d9458;
        case 0x1d945cu: goto label_1d945c;
        case 0x1d9460u: goto label_1d9460;
        case 0x1d9464u: goto label_1d9464;
        case 0x1d9468u: goto label_1d9468;
        case 0x1d946cu: goto label_1d946c;
        case 0x1d9470u: goto label_1d9470;
        case 0x1d9474u: goto label_1d9474;
        case 0x1d9478u: goto label_1d9478;
        case 0x1d947cu: goto label_1d947c;
        case 0x1d9480u: goto label_1d9480;
        case 0x1d9484u: goto label_1d9484;
        case 0x1d9488u: goto label_1d9488;
        case 0x1d948cu: goto label_1d948c;
        case 0x1d9490u: goto label_1d9490;
        case 0x1d9494u: goto label_1d9494;
        case 0x1d9498u: goto label_1d9498;
        default: break;
    }

    ctx->pc = 0x1d93f0u;

label_1d93f0:
    // 0x1d93f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d93f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d93f4:
    // 0x1d93f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d93f8:
    // 0x1d93f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d93f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d93fc:
    // 0x1d93fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d93fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d9400:
    // 0x1d9400: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d9400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d9404:
    // 0x1d9404: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d9408:
    // 0x1d9408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d9408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d940c:
    // 0x1d940c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d9410:
    // 0x1d9410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d9410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9414:
    // 0x1d9414: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d9418:
    // 0x1d9418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d941c:
    // 0x1d941c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d941cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1d9420:
    // 0x1d9420: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1d9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d9424:
    // 0x1d9424: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d9424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9428:
    // 0x1d9428: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1d942c:
    if (ctx->pc == 0x1D942Cu) {
        ctx->pc = 0x1D9430u;
        goto label_1d9430;
    }
    ctx->pc = 0x1D9428u;
    {
        const bool branch_taken_0x1d9428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9428) {
            ctx->pc = 0x1D9468u;
            goto label_1d9468;
        }
    }
    ctx->pc = 0x1D9430u;
label_1d9430:
    // 0x1d9430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d9430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9434:
    // 0x1d9434: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d9434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d9438:
    // 0x1d9438: 0x320f809  jalr        $t9
label_1d943c:
    if (ctx->pc == 0x1D943Cu) {
        ctx->pc = 0x1D943Cu;
            // 0x1d943c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D9440u;
        goto label_1d9440;
    }
    ctx->pc = 0x1D9438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9440u);
        ctx->pc = 0x1D943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9438u;
            // 0x1d943c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9440u; }
            if (ctx->pc != 0x1D9440u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9440u;
label_1d9440:
    // 0x1d9440: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9444:
    // 0x1d9444: 0xc04c018  jal         func_130060
label_1d9448:
    if (ctx->pc == 0x1D9448u) {
        ctx->pc = 0x1D9448u;
            // 0x1d9448: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D944Cu;
        goto label_1d944c;
    }
    ctx->pc = 0x1D9444u;
    SET_GPR_U32(ctx, 31, 0x1D944Cu);
    ctx->pc = 0x1D9448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9444u;
            // 0x1d9448: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D944Cu; }
        if (ctx->pc != 0x1D944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D944Cu; }
        if (ctx->pc != 0x1D944Cu) { return; }
    }
    ctx->pc = 0x1D944Cu;
label_1d944c:
    // 0x1d944c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d944cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d9450:
    // 0x1d9450: 0x0  nop
    ctx->pc = 0x1d9450u;
    // NOP
label_1d9454:
    // 0x1d9454: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d9458:
    if (ctx->pc == 0x1D9458u) {
        ctx->pc = 0x1D9458u;
            // 0x1d9458: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1D945Cu;
        goto label_1d945c;
    }
    ctx->pc = 0x1D9454u;
    {
        const bool branch_taken_0x1d9454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9454u;
            // 0x1d9458: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9454) {
            ctx->pc = 0x1D9468u;
            goto label_1d9468;
        }
    }
    ctx->pc = 0x1D945Cu;
label_1d945c:
    // 0x1d945c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d9460:
    // 0x1d9460: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d9464:
    if (ctx->pc == 0x1D9464u) {
        ctx->pc = 0x1D9464u;
            // 0x1d9464: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1D9468u;
        goto label_1d9468;
    }
    ctx->pc = 0x1D9460u;
    {
        const bool branch_taken_0x1d9460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9460u;
            // 0x1d9464: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9460) {
            ctx->pc = 0x1D947Cu;
            goto label_1d947c;
        }
    }
    ctx->pc = 0x1D9468u;
label_1d9468:
    // 0x1d9468: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d9468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d946c:
    // 0x1d946c: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x1d946cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_1d9470:
    // 0x1d9470: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1d9474:
    if (ctx->pc == 0x1D9474u) {
        ctx->pc = 0x1D9474u;
            // 0x1d9474: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1D9478u;
        goto label_1d9478;
    }
    ctx->pc = 0x1D9470u;
    {
        const bool branch_taken_0x1d9470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9470u;
            // 0x1d9474: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9470) {
            ctx->pc = 0x1D9420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9420;
        }
    }
    ctx->pc = 0x1D9478u;
label_1d9478:
    // 0x1d9478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d947c:
    // 0x1d947c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d947cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d9480:
    // 0x1d9480: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d9484:
    // 0x1d9484: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d9484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d9488:
    // 0x1d9488: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d9488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d948c:
    // 0x1d948c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d948cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9490:
    // 0x1d9490: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9494:
    // 0x1d9494: 0x3e00008  jr          $ra
label_1d9498:
    if (ctx->pc == 0x1D9498u) {
        ctx->pc = 0x1D9498u;
            // 0x1d9498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1D949Cu;
        goto label_fallthrough_0x1d9494;
    }
    ctx->pc = 0x1D9494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9494u;
            // 0x1d9498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d9494:
    ctx->pc = 0x1D949Cu;
}
