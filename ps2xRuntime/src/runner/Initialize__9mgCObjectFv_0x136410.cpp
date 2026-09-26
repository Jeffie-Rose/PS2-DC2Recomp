#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9mgCObjectFv
// Address: 0x136410 - 0x136490
void Initialize__9mgCObjectFv_0x136410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9mgCObjectFv_0x136410");
#endif

    switch (ctx->pc) {
        case 0x136410u: goto label_136410;
        case 0x136414u: goto label_136414;
        case 0x136418u: goto label_136418;
        case 0x13641cu: goto label_13641c;
        case 0x136420u: goto label_136420;
        case 0x136424u: goto label_136424;
        case 0x136428u: goto label_136428;
        case 0x13642cu: goto label_13642c;
        case 0x136430u: goto label_136430;
        case 0x136434u: goto label_136434;
        case 0x136438u: goto label_136438;
        case 0x13643cu: goto label_13643c;
        case 0x136440u: goto label_136440;
        case 0x136444u: goto label_136444;
        case 0x136448u: goto label_136448;
        case 0x13644cu: goto label_13644c;
        case 0x136450u: goto label_136450;
        case 0x136454u: goto label_136454;
        case 0x136458u: goto label_136458;
        case 0x13645cu: goto label_13645c;
        case 0x136460u: goto label_136460;
        case 0x136464u: goto label_136464;
        case 0x136468u: goto label_136468;
        case 0x13646cu: goto label_13646c;
        case 0x136470u: goto label_136470;
        case 0x136474u: goto label_136474;
        case 0x136478u: goto label_136478;
        case 0x13647cu: goto label_13647c;
        case 0x136480u: goto label_136480;
        case 0x136484u: goto label_136484;
        case 0x136488u: goto label_136488;
        case 0x13648cu: goto label_13648c;
        default: break;
    }

    ctx->pc = 0x136410u;

label_136410:
    // 0x136410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_136414:
    // 0x136414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_136418:
    // 0x136418: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x136418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13641c:
    // 0x13641c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136420:
    // 0x136420: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136424:
    // 0x136424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136428:
    // 0x136428: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x136428u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_13642c:
    // 0x13642c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x13642cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_136430:
    // 0x136430: 0x320f809  jalr        $t9
label_136434:
    if (ctx->pc == 0x136434u) {
        ctx->pc = 0x136434u;
            // 0x136434: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x136438u;
        goto label_136438;
    }
    ctx->pc = 0x136430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136438u);
        ctx->pc = 0x136434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136430u;
            // 0x136434: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136438u; }
            if (ctx->pc != 0x136438u) { return; }
        }
        }
    }
    ctx->pc = 0x136438u;
label_136438:
    // 0x136438: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x136438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13643c:
    // 0x13643c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136440:
    // 0x136440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136444:
    // 0x136444: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x136444u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_136448:
    // 0x136448: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x136448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13644c:
    // 0x13644c: 0x320f809  jalr        $t9
label_136450:
    if (ctx->pc == 0x136450u) {
        ctx->pc = 0x136450u;
            // 0x136450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x136454u;
        goto label_136454;
    }
    ctx->pc = 0x13644Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136454u);
        ctx->pc = 0x136450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13644Cu;
            // 0x136450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136454u; }
            if (ctx->pc != 0x136454u) { return; }
        }
        }
    }
    ctx->pc = 0x136454u;
label_136454:
    // 0x136454: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x136454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_136458:
    // 0x136458: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x136458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_13645c:
    // 0x13645c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13645cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136460:
    // 0x136460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136464:
    // 0x136464: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x136464u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_136468:
    // 0x136468: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x136468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_13646c:
    // 0x13646c: 0x320f809  jalr        $t9
label_136470:
    if (ctx->pc == 0x136470u) {
        ctx->pc = 0x136470u;
            // 0x136470: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x136474u;
        goto label_136474;
    }
    ctx->pc = 0x13646Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136474u);
        ctx->pc = 0x136470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13646Cu;
            // 0x136470: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136474u; }
            if (ctx->pc != 0x136474u) { return; }
        }
        }
    }
    ctx->pc = 0x136474u;
label_136474:
    // 0x136474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136478:
    // 0x136478: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x136478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_13647c:
    // 0x13647c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x13647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_136480:
    // 0x136480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136484:
    // 0x136484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136488:
    // 0x136488: 0x3e00008  jr          $ra
label_13648c:
    if (ctx->pc == 0x13648Cu) {
        ctx->pc = 0x13648Cu;
            // 0x13648c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x136490u;
        goto label_fallthrough_0x136488;
    }
    ctx->pc = 0x136488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136488u;
            // 0x13648c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x136488:
    ctx->pc = 0x136490u;
}
