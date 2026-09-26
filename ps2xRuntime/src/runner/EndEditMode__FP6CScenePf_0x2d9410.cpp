#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndEditMode__FP6CScenePf
// Address: 0x2d9410 - 0x2d94c0
void EndEditMode__FP6CScenePf_0x2d9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndEditMode__FP6CScenePf_0x2d9410");
#endif

    switch (ctx->pc) {
        case 0x2d9410u: goto label_2d9410;
        case 0x2d9414u: goto label_2d9414;
        case 0x2d9418u: goto label_2d9418;
        case 0x2d941cu: goto label_2d941c;
        case 0x2d9420u: goto label_2d9420;
        case 0x2d9424u: goto label_2d9424;
        case 0x2d9428u: goto label_2d9428;
        case 0x2d942cu: goto label_2d942c;
        case 0x2d9430u: goto label_2d9430;
        case 0x2d9434u: goto label_2d9434;
        case 0x2d9438u: goto label_2d9438;
        case 0x2d943cu: goto label_2d943c;
        case 0x2d9440u: goto label_2d9440;
        case 0x2d9444u: goto label_2d9444;
        case 0x2d9448u: goto label_2d9448;
        case 0x2d944cu: goto label_2d944c;
        case 0x2d9450u: goto label_2d9450;
        case 0x2d9454u: goto label_2d9454;
        case 0x2d9458u: goto label_2d9458;
        case 0x2d945cu: goto label_2d945c;
        case 0x2d9460u: goto label_2d9460;
        case 0x2d9464u: goto label_2d9464;
        case 0x2d9468u: goto label_2d9468;
        case 0x2d946cu: goto label_2d946c;
        case 0x2d9470u: goto label_2d9470;
        case 0x2d9474u: goto label_2d9474;
        case 0x2d9478u: goto label_2d9478;
        case 0x2d947cu: goto label_2d947c;
        case 0x2d9480u: goto label_2d9480;
        case 0x2d9484u: goto label_2d9484;
        case 0x2d9488u: goto label_2d9488;
        case 0x2d948cu: goto label_2d948c;
        case 0x2d9490u: goto label_2d9490;
        case 0x2d9494u: goto label_2d9494;
        case 0x2d9498u: goto label_2d9498;
        case 0x2d949cu: goto label_2d949c;
        case 0x2d94a0u: goto label_2d94a0;
        case 0x2d94a4u: goto label_2d94a4;
        case 0x2d94a8u: goto label_2d94a8;
        case 0x2d94acu: goto label_2d94ac;
        case 0x2d94b0u: goto label_2d94b0;
        case 0x2d94b4u: goto label_2d94b4;
        case 0x2d94b8u: goto label_2d94b8;
        case 0x2d94bcu: goto label_2d94bc;
        default: break;
    }

    ctx->pc = 0x2d9410u;

label_2d9410:
    // 0x2d9410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d9414:
    // 0x2d9414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2d9418:
    // 0x2d9418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d941c:
    // 0x2d941c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d9420:
    // 0x2d9420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d9424:
    // 0x2d9424: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9428:
    // 0x2d9428: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2d9428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2d942c:
    // 0x2d942c: 0xc0a0f58  jal         func_283D60
label_2d9430:
    if (ctx->pc == 0x2D9430u) {
        ctx->pc = 0x2D9430u;
            // 0x2d9430: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9434u;
        goto label_2d9434;
    }
    ctx->pc = 0x2D942Cu;
    SET_GPR_U32(ctx, 31, 0x2D9434u);
    ctx->pc = 0x2D9430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D942Cu;
            // 0x2d9430: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9434u; }
        if (ctx->pc != 0x2D9434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9434u; }
        if (ctx->pc != 0x2D9434u) { return; }
    }
    ctx->pc = 0x2D9434u;
label_2d9434:
    // 0x2d9434: 0x8e452e50  lw          $a1, 0x2E50($s2)
    ctx->pc = 0x2d9434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11856)));
label_2d9438:
    // 0x2d9438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d943c:
    // 0x2d943c: 0xc0a0ed8  jal         func_283B60
label_2d9440:
    if (ctx->pc == 0x2D9440u) {
        ctx->pc = 0x2D9440u;
            // 0x2d9440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9444u;
        goto label_2d9444;
    }
    ctx->pc = 0x2D943Cu;
    SET_GPR_U32(ctx, 31, 0x2D9444u);
    ctx->pc = 0x2D9440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D943Cu;
            // 0x2d9440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9444u; }
        if (ctx->pc != 0x2D9444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9444u; }
        if (ctx->pc != 0x2D9444u) { return; }
    }
    ctx->pc = 0x2D9444u;
label_2d9444:
    // 0x2d9444: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2d9448:
    if (ctx->pc == 0x2D9448u) {
        ctx->pc = 0x2D9448u;
            // 0x2d9448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D944Cu;
        goto label_2d944c;
    }
    ctx->pc = 0x2D9444u;
    {
        const bool branch_taken_0x2d9444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9444u;
            // 0x2d9448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9444) {
            ctx->pc = 0x2D9484u;
            goto label_2d9484;
        }
    }
    ctx->pc = 0x2D944Cu;
label_2d944c:
    // 0x2d944c: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x2d944cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9450:
    // 0x2d9450: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d9450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9454:
    // 0x2d9454: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2d9454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_2d9458:
    // 0x2d9458: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2d9458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2d945c:
    // 0x2d945c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d945cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d9460:
    // 0x2d9460: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2d9460u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_2d9464:
    // 0x2d9464: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2d9464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d9468:
    // 0x2d9468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d9468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d946c:
    // 0x2d946c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2d946cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2d9470:
    // 0x2d9470: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2d9470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9474:
    // 0x2d9474: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2d9474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2d9478:
    // 0x2d9478: 0x320f809  jalr        $t9
label_2d947c:
    if (ctx->pc == 0x2D947Cu) {
        ctx->pc = 0x2D947Cu;
            // 0x2d947c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9480u;
        goto label_2d9480;
    }
    ctx->pc = 0x2D9478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9480u);
        ctx->pc = 0x2D947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9478u;
            // 0x2d947c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9480u; }
            if (ctx->pc != 0x2D9480u) { return; }
        }
        }
    }
    ctx->pc = 0x2D9480u;
label_2d9480:
    // 0x2d9480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9484:
    // 0x2d9484: 0xc0b6298  jal         func_2D8A60
label_2d9488:
    if (ctx->pc == 0x2D9488u) {
        ctx->pc = 0x2D948Cu;
        goto label_2d948c;
    }
    ctx->pc = 0x2D9484u;
    SET_GPR_U32(ctx, 31, 0x2D948Cu);
    ctx->pc = 0x2D8A60u;
    if (runtime->hasFunction(0x2D8A60u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D948Cu; }
        if (ctx->pc != 0x2D948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SystemMesClose__FP6CScene_0x2d8a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D948Cu; }
        if (ctx->pc != 0x2D948Cu) { return; }
    }
    ctx->pc = 0x2D948Cu;
label_2d948c:
    // 0x2d948c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2d9490:
    if (ctx->pc == 0x2D9490u) {
        ctx->pc = 0x2D9490u;
            // 0x2d9490: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D9494u;
        goto label_2d9494;
    }
    ctx->pc = 0x2D948Cu;
    {
        const bool branch_taken_0x2d948c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D948Cu;
            // 0x2d9490: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d948c) {
            ctx->pc = 0x2D9498u;
            goto label_2d9498;
        }
    }
    ctx->pc = 0x2D9494u;
label_2d9494:
    // 0x2d9494: 0xae020f64  sw          $v0, 0xF64($s0)
    ctx->pc = 0x2d9494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3940), GPR_U32(ctx, 2));
label_2d9498:
    // 0x2d9498: 0xc0beaf8  jal         func_2FABE0
label_2d949c:
    if (ctx->pc == 0x2D949Cu) {
        ctx->pc = 0x2D94A0u;
        goto label_2d94a0;
    }
    ctx->pc = 0x2D9498u;
    SET_GPR_U32(ctx, 31, 0x2D94A0u);
    ctx->pc = 0x2FABE0u;
    if (runtime->hasFunction(0x2FABE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94A0u; }
        if (ctx->pc != 0x2D94A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceEffect__Fv_0x2fabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94A0u; }
        if (ctx->pc != 0x2D94A0u) { return; }
    }
    ctx->pc = 0x2D94A0u;
label_2d94a0:
    // 0x2d94a0: 0xc0beeb0  jal         func_2FBAC0
label_2d94a4:
    if (ctx->pc == 0x2D94A4u) {
        ctx->pc = 0x2D94A8u;
        goto label_2d94a8;
    }
    ctx->pc = 0x2D94A0u;
    SET_GPR_U32(ctx, 31, 0x2D94A8u);
    ctx->pc = 0x2FBAC0u;
    if (runtime->hasFunction(0x2FBAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94A8u; }
        if (ctx->pc != 0x2D94A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceAnime__Fv_0x2fbac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94A8u; }
        if (ctx->pc != 0x2D94A8u) { return; }
    }
    ctx->pc = 0x2D94A8u;
label_2d94a8:
    // 0x2d94a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d94a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d94ac:
    // 0x2d94ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d94acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d94b0:
    // 0x2d94b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d94b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d94b4:
    // 0x2d94b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d94b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d94b8:
    // 0x2d94b8: 0x3e00008  jr          $ra
label_2d94bc:
    if (ctx->pc == 0x2D94BCu) {
        ctx->pc = 0x2D94BCu;
            // 0x2d94bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2D94C0u;
        goto label_fallthrough_0x2d94b8;
    }
    ctx->pc = 0x2D94B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D94BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D94B8u;
            // 0x2d94bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d94b8:
    ctx->pc = 0x2D94C0u;
}
