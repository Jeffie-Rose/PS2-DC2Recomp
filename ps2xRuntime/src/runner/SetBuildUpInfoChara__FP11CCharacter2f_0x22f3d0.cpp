#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBuildUpInfoChara__FP11CCharacter2f
// Address: 0x22f3d0 - 0x22f448
void SetBuildUpInfoChara__FP11CCharacter2f_0x22f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBuildUpInfoChara__FP11CCharacter2f_0x22f3d0");
#endif

    switch (ctx->pc) {
        case 0x22f3d0u: goto label_22f3d0;
        case 0x22f3d4u: goto label_22f3d4;
        case 0x22f3d8u: goto label_22f3d8;
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3e0u: goto label_22f3e0;
        case 0x22f3e4u: goto label_22f3e4;
        case 0x22f3e8u: goto label_22f3e8;
        case 0x22f3ecu: goto label_22f3ec;
        case 0x22f3f0u: goto label_22f3f0;
        case 0x22f3f4u: goto label_22f3f4;
        case 0x22f3f8u: goto label_22f3f8;
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f400u: goto label_22f400;
        case 0x22f404u: goto label_22f404;
        case 0x22f408u: goto label_22f408;
        case 0x22f40cu: goto label_22f40c;
        case 0x22f410u: goto label_22f410;
        case 0x22f414u: goto label_22f414;
        case 0x22f418u: goto label_22f418;
        case 0x22f41cu: goto label_22f41c;
        case 0x22f420u: goto label_22f420;
        case 0x22f424u: goto label_22f424;
        case 0x22f428u: goto label_22f428;
        case 0x22f42cu: goto label_22f42c;
        case 0x22f430u: goto label_22f430;
        case 0x22f434u: goto label_22f434;
        case 0x22f438u: goto label_22f438;
        case 0x22f43cu: goto label_22f43c;
        case 0x22f440u: goto label_22f440;
        case 0x22f444u: goto label_22f444;
        default: break;
    }

    ctx->pc = 0x22f3d0u;

label_22f3d0:
    // 0x22f3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22f3d4:
    // 0x22f3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22f3d8:
    // 0x22f3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22f3dc:
    // 0x22f3dc: 0x8f83948c  lw          $v1, -0x6B74($gp)
    ctx->pc = 0x22f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939788)));
label_22f3e0:
    // 0x22f3e0: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_22f3e4:
    if (ctx->pc == 0x22F3E4u) {
        ctx->pc = 0x22F3E4u;
            // 0x22f3e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22F3E8u;
        goto label_22f3e8;
    }
    ctx->pc = 0x22F3E0u;
    {
        const bool branch_taken_0x22f3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x22F3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3E0u;
            // 0x22f3e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3e0) {
            ctx->pc = 0x22F3ECu;
            goto label_22f3ec;
        }
    }
    ctx->pc = 0x22F3E8u;
label_22f3e8:
    // 0x22f3e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f3ec:
    // 0x22f3ec: 0xe78c9490  swc1        $f12, -0x6B70($gp)
    ctx->pc = 0x22f3ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939792), bits); }
label_22f3f0:
    // 0x22f3f0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_22f3f4:
    if (ctx->pc == 0x22F3F4u) {
        ctx->pc = 0x22F3F4u;
            // 0x22f3f4: 0xaf84948c  sw          $a0, -0x6B74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939788), GPR_U32(ctx, 4));
        ctx->pc = 0x22F3F8u;
        goto label_22f3f8;
    }
    ctx->pc = 0x22F3F0u;
    {
        const bool branch_taken_0x22f3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3F0u;
            // 0x22f3f4: 0xaf84948c  sw          $a0, -0x6B74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939788), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3f0) {
            ctx->pc = 0x22F438u;
            goto label_22f438;
        }
    }
    ctx->pc = 0x22F3F8u;
label_22f3f8:
    // 0x22f3f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22f3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22f3fc:
    // 0x22f3fc: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x22f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_22f400:
    // 0x22f400: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x22f400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_22f404:
    // 0x22f404: 0x320f809  jalr        $t9
label_22f408:
    if (ctx->pc == 0x22F408u) {
        ctx->pc = 0x22F408u;
            // 0x22f408: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->pc = 0x22F40Cu;
        goto label_22f40c;
    }
    ctx->pc = 0x22F404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22F40Cu);
        ctx->pc = 0x22F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F404u;
            // 0x22f408: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22F40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22F40Cu; }
            if (ctx->pc != 0x22F40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22F40Cu;
label_22f40c:
    // 0x22f40c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_22f410:
    // 0x22f410: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x22f410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_22f414:
    // 0x22f414: 0xc421d434  lwc1        $f1, -0x2BCC($at)
    ctx->pc = 0x22f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294956084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22f418:
    // 0x22f418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f41c:
    // 0x22f41c: 0x0  nop
    ctx->pc = 0x22f41cu;
    // NOP
label_22f420:
    // 0x22f420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22f420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22f424:
    // 0x22f424: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22f424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_22f428:
    // 0x22f428: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_22f42c:
    if (ctx->pc == 0x22F42Cu) {
        ctx->pc = 0x22F42Cu;
            // 0x22f42c: 0xe420d444  swc1        $f0, -0x2BBC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294956100), bits); }
        ctx->pc = 0x22F430u;
        goto label_22f430;
    }
    ctx->pc = 0x22F428u;
    {
        const bool branch_taken_0x22f428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F428u;
            // 0x22f42c: 0xe420d444  swc1        $f0, -0x2BBC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294956100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f428) {
            ctx->pc = 0x22F438u;
            goto label_22f438;
        }
    }
    ctx->pc = 0x22F430u;
label_22f430:
    // 0x22f430: 0xc08bcac  jal         func_22F2B0
label_22f434:
    if (ctx->pc == 0x22F434u) {
        ctx->pc = 0x22F438u;
        goto label_22f438;
    }
    ctx->pc = 0x22F430u;
    SET_GPR_U32(ctx, 31, 0x22F438u);
    ctx->pc = 0x22F2B0u;
    if (runtime->hasFunction(0x22F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F438u; }
        if (ctx->pc != 0x22F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitInitBuildUpInfoEffectPos__Fv_0x22f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F438u; }
        if (ctx->pc != 0x22F438u) { return; }
    }
    ctx->pc = 0x22F438u;
label_22f438:
    // 0x22f438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f43c:
    // 0x22f43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22f440:
    // 0x22f440: 0x3e00008  jr          $ra
label_22f444:
    if (ctx->pc == 0x22F444u) {
        ctx->pc = 0x22F444u;
            // 0x22f444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22F448u;
        goto label_fallthrough_0x22f440;
    }
    ctx->pc = 0x22F440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F440u;
            // 0x22f444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22f440:
    ctx->pc = 0x22F448u;
}
