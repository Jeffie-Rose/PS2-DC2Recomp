#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawExclamationMark__6CSceneFP8mgCFrame
// Address: 0x2c93d0 - 0x2c94e4
void DrawExclamationMark__6CSceneFP8mgCFrame_0x2c93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawExclamationMark__6CSceneFP8mgCFrame_0x2c93d0");
#endif

    switch (ctx->pc) {
        case 0x2c93d0u: goto label_2c93d0;
        case 0x2c93d4u: goto label_2c93d4;
        case 0x2c93d8u: goto label_2c93d8;
        case 0x2c93dcu: goto label_2c93dc;
        case 0x2c93e0u: goto label_2c93e0;
        case 0x2c93e4u: goto label_2c93e4;
        case 0x2c93e8u: goto label_2c93e8;
        case 0x2c93ecu: goto label_2c93ec;
        case 0x2c93f0u: goto label_2c93f0;
        case 0x2c93f4u: goto label_2c93f4;
        case 0x2c93f8u: goto label_2c93f8;
        case 0x2c93fcu: goto label_2c93fc;
        case 0x2c9400u: goto label_2c9400;
        case 0x2c9404u: goto label_2c9404;
        case 0x2c9408u: goto label_2c9408;
        case 0x2c940cu: goto label_2c940c;
        case 0x2c9410u: goto label_2c9410;
        case 0x2c9414u: goto label_2c9414;
        case 0x2c9418u: goto label_2c9418;
        case 0x2c941cu: goto label_2c941c;
        case 0x2c9420u: goto label_2c9420;
        case 0x2c9424u: goto label_2c9424;
        case 0x2c9428u: goto label_2c9428;
        case 0x2c942cu: goto label_2c942c;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c9434u: goto label_2c9434;
        case 0x2c9438u: goto label_2c9438;
        case 0x2c943cu: goto label_2c943c;
        case 0x2c9440u: goto label_2c9440;
        case 0x2c9444u: goto label_2c9444;
        case 0x2c9448u: goto label_2c9448;
        case 0x2c944cu: goto label_2c944c;
        case 0x2c9450u: goto label_2c9450;
        case 0x2c9454u: goto label_2c9454;
        case 0x2c9458u: goto label_2c9458;
        case 0x2c945cu: goto label_2c945c;
        case 0x2c9460u: goto label_2c9460;
        case 0x2c9464u: goto label_2c9464;
        case 0x2c9468u: goto label_2c9468;
        case 0x2c946cu: goto label_2c946c;
        case 0x2c9470u: goto label_2c9470;
        case 0x2c9474u: goto label_2c9474;
        case 0x2c9478u: goto label_2c9478;
        case 0x2c947cu: goto label_2c947c;
        case 0x2c9480u: goto label_2c9480;
        case 0x2c9484u: goto label_2c9484;
        case 0x2c9488u: goto label_2c9488;
        case 0x2c948cu: goto label_2c948c;
        case 0x2c9490u: goto label_2c9490;
        case 0x2c9494u: goto label_2c9494;
        case 0x2c9498u: goto label_2c9498;
        case 0x2c949cu: goto label_2c949c;
        case 0x2c94a0u: goto label_2c94a0;
        case 0x2c94a4u: goto label_2c94a4;
        case 0x2c94a8u: goto label_2c94a8;
        case 0x2c94acu: goto label_2c94ac;
        case 0x2c94b0u: goto label_2c94b0;
        case 0x2c94b4u: goto label_2c94b4;
        case 0x2c94b8u: goto label_2c94b8;
        case 0x2c94bcu: goto label_2c94bc;
        case 0x2c94c0u: goto label_2c94c0;
        case 0x2c94c4u: goto label_2c94c4;
        case 0x2c94c8u: goto label_2c94c8;
        case 0x2c94ccu: goto label_2c94cc;
        case 0x2c94d0u: goto label_2c94d0;
        case 0x2c94d4u: goto label_2c94d4;
        case 0x2c94d8u: goto label_2c94d8;
        case 0x2c94dcu: goto label_2c94dc;
        case 0x2c94e0u: goto label_2c94e0;
        default: break;
    }

    ctx->pc = 0x2c93d0u;

label_2c93d0:
    // 0x2c93d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c93d4:
    // 0x2c93d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c93d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c93d8:
    // 0x2c93d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c93dc:
    // 0x2c93dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c93dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c93e0:
    // 0x2c93e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c93e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c93e4:
    // 0x2c93e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c93e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c93e8:
    // 0x2c93e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c93e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c93ec:
    // 0x2c93ec: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
label_2c93f0:
    if (ctx->pc == 0x2C93F0u) {
        ctx->pc = 0x2C93F0u;
            // 0x2c93f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C93F4u;
        goto label_2c93f4;
    }
    ctx->pc = 0x2C93ECu;
    {
        const bool branch_taken_0x2c93ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93ECu;
            // 0x2c93f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93ec) {
            ctx->pc = 0x2C94C8u;
            goto label_2c94c8;
        }
    }
    ctx->pc = 0x2C93F4u;
label_2c93f4:
    // 0x2c93f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c93f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c93f8:
    // 0x2c93f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c93f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c93fc:
    // 0x2c93fc: 0xc0b22dc  jal         func_2C8B70
label_2c9400:
    if (ctx->pc == 0x2C9400u) {
        ctx->pc = 0x2C9400u;
            // 0x2c9400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9404u;
        goto label_2c9404;
    }
    ctx->pc = 0x2C93FCu;
    SET_GPR_U32(ctx, 31, 0x2C9404u);
    ctx->pc = 0x2C9400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93FCu;
            // 0x2c9400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9404u; }
        if (ctx->pc != 0x2C9404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9404u; }
        if (ctx->pc != 0x2C9404u) { return; }
    }
    ctx->pc = 0x2C9404u;
label_2c9404:
    // 0x2c9404: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2c9408:
    if (ctx->pc == 0x2C9408u) {
        ctx->pc = 0x2C9408u;
            // 0x2c9408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C940Cu;
        goto label_2c940c;
    }
    ctx->pc = 0x2C9404u;
    {
        const bool branch_taken_0x2c9404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9404u;
            // 0x2c9408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9404) {
            ctx->pc = 0x2C94B4u;
            goto label_2c94b4;
        }
    }
    ctx->pc = 0x2C940Cu;
label_2c940c:
    // 0x2c940c: 0xc0a0ed8  jal         func_283B60
label_2c9410:
    if (ctx->pc == 0x2C9410u) {
        ctx->pc = 0x2C9410u;
            // 0x2c9410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9414u;
        goto label_2c9414;
    }
    ctx->pc = 0x2C940Cu;
    SET_GPR_U32(ctx, 31, 0x2C9414u);
    ctx->pc = 0x2C9410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C940Cu;
            // 0x2c9410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9414u; }
        if (ctx->pc != 0x2C9414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9414u; }
        if (ctx->pc != 0x2C9414u) { return; }
    }
    ctx->pc = 0x2C9414u;
label_2c9414:
    // 0x2c9414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c9414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9418:
    // 0x2c9418: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_2c941c:
    if (ctx->pc == 0x2C941Cu) {
        ctx->pc = 0x2C941Cu;
            // 0x2c941c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9420u;
        goto label_2c9420;
    }
    ctx->pc = 0x2C9418u;
    {
        const bool branch_taken_0x2c9418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9418u;
            // 0x2c941c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9418) {
            ctx->pc = 0x2C94B4u;
            goto label_2c94b4;
        }
    }
    ctx->pc = 0x2C9420u;
label_2c9420:
    // 0x2c9420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9424:
    // 0x2c9424: 0xc0a11f0  jal         func_2847C0
label_2c9428:
    if (ctx->pc == 0x2C9428u) {
        ctx->pc = 0x2C9428u;
            // 0x2c9428: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C942Cu;
        goto label_2c942c;
    }
    ctx->pc = 0x2C9424u;
    SET_GPR_U32(ctx, 31, 0x2C942Cu);
    ctx->pc = 0x2C9428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9424u;
            // 0x2c9428: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847C0u;
    if (runtime->hasFunction(0x2847C0u)) {
        auto targetFn = runtime->lookupFunction(0x2847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C942Cu; }
        if (ctx->pc != 0x2C942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatus__6CSceneFii_0x2847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C942Cu; }
        if (ctx->pc != 0x2C942Cu) { return; }
    }
    ctx->pc = 0x2C942Cu;
label_2c942c:
    // 0x2c942c: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x2c942cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2c9430:
    // 0x2c9430: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_2c9434:
    if (ctx->pc == 0x2C9434u) {
        ctx->pc = 0x2C9438u;
        goto label_2c9438;
    }
    ctx->pc = 0x2C9430u;
    {
        const bool branch_taken_0x2c9430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9430) {
            ctx->pc = 0x2C94B4u;
            goto label_2c94b4;
        }
    }
    ctx->pc = 0x2C9438u;
label_2c9438:
    // 0x2c9438: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2c9438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c943c:
    // 0x2c943c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9440:
    // 0x2c9440: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2c9440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2c9444:
    // 0x2c9444: 0x320f809  jalr        $t9
label_2c9448:
    if (ctx->pc == 0x2C9448u) {
        ctx->pc = 0x2C9448u;
            // 0x2c9448: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C944Cu;
        goto label_2c944c;
    }
    ctx->pc = 0x2C9444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C944Cu);
        ctx->pc = 0x2C9448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9444u;
            // 0x2c9448: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C944Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C944Cu; }
            if (ctx->pc != 0x2C944Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C944Cu;
label_2c944c:
    // 0x2c944c: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x2c944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9450:
    // 0x2c9450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9454:
    // 0x2c9454: 0x0  nop
    ctx->pc = 0x2c9454u;
    // NOP
label_2c9458:
    // 0x2c9458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c9458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c945c:
    // 0x2c945c: 0x0  nop
    ctx->pc = 0x2c945cu;
    // NOP
label_2c9460:
    // 0x2c9460: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2c9464:
    if (ctx->pc == 0x2C9464u) {
        ctx->pc = 0x2C9464u;
            // 0x2c9464: 0x27a30054  addiu       $v1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->pc = 0x2C9468u;
        goto label_2c9468;
    }
    ctx->pc = 0x2C9460u;
    {
        const bool branch_taken_0x2c9460 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9460u;
            // 0x2c9464: 0x27a30054  addiu       $v1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9460) {
            ctx->pc = 0x2C9498u;
            goto label_2c9498;
        }
    }
    ctx->pc = 0x2C9468u;
label_2c9468:
    // 0x2c9468: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c9468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_2c946c:
    // 0x2c946c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9470:
    // 0x2c9470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9474:
    // 0x2c9474: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2c9478:
    // 0x2c9478: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c9478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2c947c:
    // 0x2c947c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c947cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c9480:
    // 0x2c9480: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c9480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2c9484:
    // 0x2c9484: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x2c9484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9488:
    // 0x2c9488: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c9488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c948c:
    // 0x2c948c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2c948cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2c9490:
    // 0x2c9490: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c9490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c9494:
    // 0x2c9494: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c9494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2c9498:
    // 0x2c9498: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2c9498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c949c:
    // 0x2c949c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c94a0:
    // 0x2c94a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2c94a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2c94a4:
    // 0x2c94a4: 0x320f809  jalr        $t9
label_2c94a8:
    if (ctx->pc == 0x2C94A8u) {
        ctx->pc = 0x2C94A8u;
            // 0x2c94a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C94ACu;
        goto label_2c94ac;
    }
    ctx->pc = 0x2C94A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C94ACu);
        ctx->pc = 0x2C94A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94A4u;
            // 0x2c94a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C94ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C94ACu; }
            if (ctx->pc != 0x2C94ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2C94ACu;
label_2c94ac:
    // 0x2c94ac: 0xc050bf4  jal         func_142FD0
label_2c94b0:
    if (ctx->pc == 0x2C94B0u) {
        ctx->pc = 0x2C94B0u;
            // 0x2c94b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C94B4u;
        goto label_2c94b4;
    }
    ctx->pc = 0x2C94ACu;
    SET_GPR_U32(ctx, 31, 0x2C94B4u);
    ctx->pc = 0x2C94B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94ACu;
            // 0x2c94b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C94B4u; }
        if (ctx->pc != 0x2C94B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C94B4u; }
        if (ctx->pc != 0x2C94B4u) { return; }
    }
    ctx->pc = 0x2C94B4u;
label_2c94b4:
    // 0x2c94b4: 0x0  nop
    ctx->pc = 0x2c94b4u;
    // NOP
label_2c94b8:
    // 0x2c94b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c94b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c94bc:
    // 0x2c94bc: 0x2a030080  slti        $v1, $s0, 0x80
    ctx->pc = 0x2c94bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
label_2c94c0:
    // 0x2c94c0: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_2c94c4:
    if (ctx->pc == 0x2C94C4u) {
        ctx->pc = 0x2C94C4u;
            // 0x2c94c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C94C8u;
        goto label_2c94c8;
    }
    ctx->pc = 0x2C94C0u;
    {
        const bool branch_taken_0x2c94c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C94C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94C0u;
            // 0x2c94c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94c0) {
            ctx->pc = 0x2C93FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c93fc;
        }
    }
    ctx->pc = 0x2C94C8u;
label_2c94c8:
    // 0x2c94c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c94c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c94cc:
    // 0x2c94cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c94ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c94d0:
    // 0x2c94d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c94d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c94d4:
    // 0x2c94d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c94d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c94d8:
    // 0x2c94d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c94d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c94dc:
    // 0x2c94dc: 0x3e00008  jr          $ra
label_2c94e0:
    if (ctx->pc == 0x2C94E0u) {
        ctx->pc = 0x2C94E0u;
            // 0x2c94e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C94E4u;
        goto label_fallthrough_0x2c94dc;
    }
    ctx->pc = 0x2C94DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C94E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94DCu;
            // 0x2c94e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c94dc:
    ctx->pc = 0x2C94E4u;
}
