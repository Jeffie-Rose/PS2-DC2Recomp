#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CFishFoodFv
// Address: 0x20f310 - 0x20f3f0
void ps2___ct__9CFishFoodFv_0x20f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CFishFoodFv_0x20f310");
#endif

    switch (ctx->pc) {
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        case 0x20f330u: goto label_20f330;
        case 0x20f334u: goto label_20f334;
        case 0x20f338u: goto label_20f338;
        case 0x20f33cu: goto label_20f33c;
        case 0x20f340u: goto label_20f340;
        case 0x20f344u: goto label_20f344;
        case 0x20f348u: goto label_20f348;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f350u: goto label_20f350;
        case 0x20f354u: goto label_20f354;
        case 0x20f358u: goto label_20f358;
        case 0x20f35cu: goto label_20f35c;
        case 0x20f360u: goto label_20f360;
        case 0x20f364u: goto label_20f364;
        case 0x20f368u: goto label_20f368;
        case 0x20f36cu: goto label_20f36c;
        case 0x20f370u: goto label_20f370;
        case 0x20f374u: goto label_20f374;
        case 0x20f378u: goto label_20f378;
        case 0x20f37cu: goto label_20f37c;
        case 0x20f380u: goto label_20f380;
        case 0x20f384u: goto label_20f384;
        case 0x20f388u: goto label_20f388;
        case 0x20f38cu: goto label_20f38c;
        case 0x20f390u: goto label_20f390;
        case 0x20f394u: goto label_20f394;
        case 0x20f398u: goto label_20f398;
        case 0x20f39cu: goto label_20f39c;
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f3a4u: goto label_20f3a4;
        case 0x20f3a8u: goto label_20f3a8;
        case 0x20f3acu: goto label_20f3ac;
        case 0x20f3b0u: goto label_20f3b0;
        case 0x20f3b4u: goto label_20f3b4;
        case 0x20f3b8u: goto label_20f3b8;
        case 0x20f3bcu: goto label_20f3bc;
        case 0x20f3c0u: goto label_20f3c0;
        case 0x20f3c4u: goto label_20f3c4;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3ccu: goto label_20f3cc;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f3d4u: goto label_20f3d4;
        case 0x20f3d8u: goto label_20f3d8;
        case 0x20f3dcu: goto label_20f3dc;
        case 0x20f3e0u: goto label_20f3e0;
        case 0x20f3e4u: goto label_20f3e4;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f3ecu: goto label_20f3ec;
        default: break;
    }

    ctx->pc = 0x20f310u;

label_20f310:
    // 0x20f310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20f314:
    // 0x20f314: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20f318:
    // 0x20f318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20f31c:
    // 0x20f31c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x20f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_20f320:
    // 0x20f320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f324:
    // 0x20f324: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20f324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20f328:
    // 0x20f328: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20f328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20f32c:
    // 0x20f32c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20f32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20f330:
    // 0x20f330: 0x320f809  jalr        $t9
label_20f334:
    if (ctx->pc == 0x20F334u) {
        ctx->pc = 0x20F334u;
            // 0x20f334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F338u;
        goto label_20f338;
    }
    ctx->pc = 0x20F330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F338u);
        ctx->pc = 0x20F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F330u;
            // 0x20f334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F338u; }
            if (ctx->pc != 0x20F338u) { return; }
        }
        }
    }
    ctx->pc = 0x20F338u;
label_20f338:
    // 0x20f338: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20f33c:
    // 0x20f33c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x20f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_20f340:
    // 0x20f340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20f340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20f344:
    // 0x20f344: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f348:
    // 0x20f348: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20f34c:
    // 0x20f34c: 0x320f809  jalr        $t9
label_20f350:
    if (ctx->pc == 0x20F350u) {
        ctx->pc = 0x20F350u;
            // 0x20f350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F354u;
        goto label_20f354;
    }
    ctx->pc = 0x20F34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F354u);
        ctx->pc = 0x20F350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F34Cu;
            // 0x20f350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F354u; }
            if (ctx->pc != 0x20F354u) { return; }
        }
        }
    }
    ctx->pc = 0x20F354u;
label_20f354:
    // 0x20f354: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20f358:
    // 0x20f358: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x20f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_20f35c:
    // 0x20f35c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20f360:
    // 0x20f360: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20f360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f364:
    // 0x20f364: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20f364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20f368:
    // 0x20f368: 0x320f809  jalr        $t9
label_20f36c:
    if (ctx->pc == 0x20F36Cu) {
        ctx->pc = 0x20F36Cu;
            // 0x20f36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F370u;
        goto label_20f370;
    }
    ctx->pc = 0x20F368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F370u);
        ctx->pc = 0x20F36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F368u;
            // 0x20f36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F370u; }
            if (ctx->pc != 0x20F370u) { return; }
        }
        }
    }
    ctx->pc = 0x20F370u;
label_20f370:
    // 0x20f370: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20f370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20f374:
    // 0x20f374: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_20f378:
    // 0x20f378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20f378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20f37c:
    // 0x20f37c: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x20f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_20f380:
    // 0x20f380: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x20f380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_20f384:
    // 0x20f384: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x20f384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_20f388:
    // 0x20f388: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20f388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f38c:
    // 0x20f38c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20f38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20f390:
    // 0x20f390: 0x320f809  jalr        $t9
label_20f394:
    if (ctx->pc == 0x20F394u) {
        ctx->pc = 0x20F394u;
            // 0x20f394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F398u;
        goto label_20f398;
    }
    ctx->pc = 0x20F390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F398u);
        ctx->pc = 0x20F394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F390u;
            // 0x20f394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F398u; }
            if (ctx->pc != 0x20F398u) { return; }
        }
        }
    }
    ctx->pc = 0x20F398u;
label_20f398:
    // 0x20f398: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20f398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20f39c:
    // 0x20f39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f3a0:
    // 0x20f3a0: 0x24425d80  addiu       $v0, $v0, 0x5D80
    ctx->pc = 0x20f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23936));
label_20f3a4:
    // 0x20f3a4: 0xc05d4d0  jal         func_175340
label_20f3a8:
    if (ctx->pc == 0x20F3A8u) {
        ctx->pc = 0x20F3A8u;
            // 0x20f3a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20F3ACu;
        goto label_20f3ac;
    }
    ctx->pc = 0x20F3A4u;
    SET_GPR_U32(ctx, 31, 0x20F3ACu);
    ctx->pc = 0x20F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3A4u;
            // 0x20f3a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3ACu; }
        if (ctx->pc != 0x20F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3ACu; }
        if (ctx->pc != 0x20F3ACu) { return; }
    }
    ctx->pc = 0x20F3ACu;
label_20f3ac:
    // 0x20f3ac: 0xc04bc8c  jal         func_12F230
label_20f3b0:
    if (ctx->pc == 0x20F3B0u) {
        ctx->pc = 0x20F3B0u;
            // 0x20f3b0: 0x26040660  addiu       $a0, $s0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
        ctx->pc = 0x20F3B4u;
        goto label_20f3b4;
    }
    ctx->pc = 0x20F3ACu;
    SET_GPR_U32(ctx, 31, 0x20F3B4u);
    ctx->pc = 0x20F3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3ACu;
            // 0x20f3b0: 0x26040660  addiu       $a0, $s0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3B4u; }
        if (ctx->pc != 0x20F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F3B4u; }
        if (ctx->pc != 0x20F3B4u) { return; }
    }
    ctx->pc = 0x20F3B4u;
label_20f3b4:
    // 0x20f3b4: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x20f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
label_20f3b8:
    // 0x20f3b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20f3bc:
    // 0x20f3bc: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x20f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
label_20f3c0:
    // 0x20f3c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20f3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f3c4:
    // 0x20f3c4: 0xae000678  sw          $zero, 0x678($s0)
    ctx->pc = 0x20f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
label_20f3c8:
    // 0x20f3c8: 0xae03067c  sw          $v1, 0x67C($s0)
    ctx->pc = 0x20f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 3));
label_20f3cc:
    // 0x20f3cc: 0xa6000680  sh          $zero, 0x680($s0)
    ctx->pc = 0x20f3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1664), (uint16_t)GPR_U32(ctx, 0));
label_20f3d0:
    // 0x20f3d0: 0xae000684  sw          $zero, 0x684($s0)
    ctx->pc = 0x20f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
label_20f3d4:
    // 0x20f3d4: 0xae000688  sw          $zero, 0x688($s0)
    ctx->pc = 0x20f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 0));
label_20f3d8:
    // 0x20f3d8: 0xae00068c  sw          $zero, 0x68C($s0)
    ctx->pc = 0x20f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
label_20f3dc:
    // 0x20f3dc: 0xa2000690  sb          $zero, 0x690($s0)
    ctx->pc = 0x20f3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1680), (uint8_t)GPR_U32(ctx, 0));
label_20f3e0:
    // 0x20f3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f3e4:
    // 0x20f3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f3e8:
    // 0x20f3e8: 0x3e00008  jr          $ra
label_20f3ec:
    if (ctx->pc == 0x20F3ECu) {
        ctx->pc = 0x20F3ECu;
            // 0x20f3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20F3F0u;
        goto label_fallthrough_0x20f3e8;
    }
    ctx->pc = 0x20F3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F3E8u;
            // 0x20f3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20f3e8:
    ctx->pc = 0x20F3F0u;
}
