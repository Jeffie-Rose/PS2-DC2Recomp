#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawShadow__12CTreasureBoxFPfPf
// Address: 0x28c300 - 0x28c428
void DrawShadow__12CTreasureBoxFPfPf_0x28c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawShadow__12CTreasureBoxFPfPf_0x28c300");
#endif

    switch (ctx->pc) {
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        default: break;
    }

    ctx->pc = 0x28c300u;

label_28c300:
    // 0x28c300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28c304:
    // 0x28c304: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28c308:
    // 0x28c308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28c30c:
    // 0x28c30c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c310:
    // 0x28c310: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c314:
    // 0x28c314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28c318:
    // 0x28c318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c31c:
    // 0x28c31c: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x28c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_28c320:
    // 0x28c320: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_28c324:
    if (ctx->pc == 0x28C324u) {
        ctx->pc = 0x28C324u;
            // 0x28c324: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C328u;
        goto label_28c328;
    }
    ctx->pc = 0x28C320u;
    {
        const bool branch_taken_0x28c320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C320u;
            // 0x28c324: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c320) {
            ctx->pc = 0x28C410u;
            goto label_28c410;
        }
    }
    ctx->pc = 0x28C328u;
label_28c328:
    // 0x28c328: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28c328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_28c32c:
    // 0x28c32c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x28c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28c330:
    // 0x28c330: 0x24423f30  addiu       $v0, $v0, 0x3F30
    ctx->pc = 0x28c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16176));
label_28c334:
    // 0x28c334: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x28c334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28c338:
    // 0x28c338: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x28c338u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_28c33c:
    // 0x28c33c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c340:
    // 0x28c340: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28c340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28c344:
    // 0x28c344: 0x320f809  jalr        $t9
label_28c348:
    if (ctx->pc == 0x28C348u) {
        ctx->pc = 0x28C348u;
            // 0x28c348: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x28C34Cu;
        goto label_28c34c;
    }
    ctx->pc = 0x28C344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C34Cu);
        ctx->pc = 0x28C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C344u;
            // 0x28c348: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C34Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C34Cu; }
            if (ctx->pc != 0x28C34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28C34Cu;
label_28c34c:
    // 0x28c34c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x28c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c350:
    // 0x28c350: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x28c350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_28c354:
    // 0x28c354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c358:
    // 0x28c358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c35c:
    // 0x28c35c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x28c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_28c360:
    // 0x28c360: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x28c360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28c364:
    // 0x28c364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28c364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28c368:
    // 0x28c368: 0xc050e30  jal         func_1438C0
label_28c36c:
    if (ctx->pc == 0x28C36Cu) {
        ctx->pc = 0x28C36Cu;
            // 0x28c36c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->pc = 0x28C370u;
        goto label_28c370;
    }
    ctx->pc = 0x28C368u;
    SET_GPR_U32(ctx, 31, 0x28C370u);
    ctx->pc = 0x28C36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C368u;
            // 0x28c36c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (runtime->hasFunction(0x1438C0u)) {
        auto targetFn = runtime->lookupFunction(0x1438C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C370u; }
        if (ctx->pc != 0x28C370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDropShadowMatrix__FPfPfPf_0x1438c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C370u; }
        if (ctx->pc != 0x28C370u) { return; }
    }
    ctx->pc = 0x28C370u;
label_28c370:
    // 0x28c370: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x28c370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c374:
    // 0x28c374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c378:
    // 0x28c378: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28c37c:
    // 0x28c37c: 0x320f809  jalr        $t9
label_28c380:
    if (ctx->pc == 0x28C380u) {
        ctx->pc = 0x28C380u;
            // 0x28c380: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28C384u;
        goto label_28c384;
    }
    ctx->pc = 0x28C37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C384u);
        ctx->pc = 0x28C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C37Cu;
            // 0x28c380: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C384u; }
            if (ctx->pc != 0x28C384u) { return; }
        }
        }
    }
    ctx->pc = 0x28C384u;
label_28c384:
    // 0x28c384: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c388:
    // 0x28c388: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_28c38c:
    // 0x28c38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c390:
    // 0x28c390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c394:
    // 0x28c394: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28c394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28c398:
    // 0x28c398: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x28c398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_28c39c:
    // 0x28c39c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x28c39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c3a0:
    // 0x28c3a0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28c3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_28c3a4:
    // 0x28c3a4: 0x320f809  jalr        $t9
label_28c3a8:
    if (ctx->pc == 0x28C3A8u) {
        ctx->pc = 0x28C3A8u;
            // 0x28c3a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28C3ACu;
        goto label_28c3ac;
    }
    ctx->pc = 0x28C3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C3ACu);
        ctx->pc = 0x28C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3A4u;
            // 0x28c3a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C3ACu; }
            if (ctx->pc != 0x28C3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x28C3ACu;
label_28c3ac:
    // 0x28c3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c3b0:
    // 0x28c3b0: 0xc04c018  jal         func_130060
label_28c3b4:
    if (ctx->pc == 0x28C3B4u) {
        ctx->pc = 0x28C3B4u;
            // 0x28c3b4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28C3B8u;
        goto label_28c3b8;
    }
    ctx->pc = 0x28C3B0u;
    SET_GPR_U32(ctx, 31, 0x28C3B8u);
    ctx->pc = 0x28C3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3B0u;
            // 0x28c3b4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3B8u; }
        if (ctx->pc != 0x28C3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3B8u; }
        if (ctx->pc != 0x28C3B8u) { return; }
    }
    ctx->pc = 0x28C3B8u;
label_28c3b8:
    // 0x28c3b8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x28c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_28c3bc:
    // 0x28c3bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c3c0:
    // 0x28c3c0: 0x0  nop
    ctx->pc = 0x28c3c0u;
    // NOP
label_28c3c4:
    // 0x28c3c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28c3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c3c8:
    // 0x28c3c8: 0x0  nop
    ctx->pc = 0x28c3c8u;
    // NOP
label_28c3cc:
    // 0x28c3cc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_28c3d0:
    if (ctx->pc == 0x28C3D0u) {
        ctx->pc = 0x28C3D4u;
        goto label_28c3d4;
    }
    ctx->pc = 0x28C3CCu;
    {
        const bool branch_taken_0x28c3cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c3cc) {
            ctx->pc = 0x28C410u;
            goto label_28c410;
        }
    }
    ctx->pc = 0x28C3D4u;
label_28c3d4:
    // 0x28c3d4: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28c3d8:
    // 0x28c3d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c3dc:
    // 0x28c3dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28c3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28c3e0:
    // 0x28c3e0: 0x320f809  jalr        $t9
label_28c3e4:
    if (ctx->pc == 0x28C3E4u) {
        ctx->pc = 0x28C3E4u;
            // 0x28c3e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28C3E8u;
        goto label_28c3e8;
    }
    ctx->pc = 0x28C3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C3E8u);
        ctx->pc = 0x28C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3E0u;
            // 0x28c3e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C3E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C3E8u; }
            if (ctx->pc != 0x28C3E8u) { return; }
        }
        }
    }
    ctx->pc = 0x28C3E8u;
label_28c3e8:
    // 0x28c3e8: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x28c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28c3ec:
    // 0x28c3ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c3f0:
    // 0x28c3f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x28c3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_28c3f4:
    // 0x28c3f4: 0x320f809  jalr        $t9
label_28c3f8:
    if (ctx->pc == 0x28C3F8u) {
        ctx->pc = 0x28C3F8u;
            // 0x28c3f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28C3FCu;
        goto label_28c3fc;
    }
    ctx->pc = 0x28C3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C3FCu);
        ctx->pc = 0x28C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3F4u;
            // 0x28c3f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C3FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C3FCu; }
            if (ctx->pc != 0x28C3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x28C3FCu;
label_28c3fc:
    // 0x28c3fc: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x28c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28c400:
    // 0x28c400: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c404:
    // 0x28c404: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x28c404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_28c408:
    // 0x28c408: 0x320f809  jalr        $t9
label_28c40c:
    if (ctx->pc == 0x28C40Cu) {
        ctx->pc = 0x28C410u;
        goto label_28c410;
    }
    ctx->pc = 0x28C408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C410u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C410u; }
            if (ctx->pc != 0x28C410u) { return; }
        }
        }
    }
    ctx->pc = 0x28C410u;
label_28c410:
    // 0x28c410: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28c414:
    // 0x28c414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c418:
    // 0x28c418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c41c:
    // 0x28c41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28c420:
    // 0x28c420: 0x3e00008  jr          $ra
label_28c424:
    if (ctx->pc == 0x28C424u) {
        ctx->pc = 0x28C424u;
            // 0x28c424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x28C428u;
        goto label_fallthrough_0x28c420;
    }
    ctx->pc = 0x28C420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C420u;
            // 0x28c424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28c420:
    ctx->pc = 0x28C428u;
}
