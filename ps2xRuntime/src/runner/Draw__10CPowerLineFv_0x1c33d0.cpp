#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__10CPowerLineFv
// Address: 0x1c33d0 - 0x1c3640
void Draw__10CPowerLineFv_0x1c33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__10CPowerLineFv_0x1c33d0");
#endif

    switch (ctx->pc) {
        case 0x1c340cu: goto label_1c340c;
        case 0x1c341cu: goto label_1c341c;
        case 0x1c3424u: goto label_1c3424;
        case 0x1c3430u: goto label_1c3430;
        case 0x1c343cu: goto label_1c343c;
        case 0x1c3448u: goto label_1c3448;
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3460u: goto label_1c3460;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3478u: goto label_1c3478;
        case 0x1c3484u: goto label_1c3484;
        case 0x1c3490u: goto label_1c3490;
        case 0x1c34c0u: goto label_1c34c0;
        case 0x1c34f0u: goto label_1c34f0;
        case 0x1c3550u: goto label_1c3550;
        case 0x1c3560u: goto label_1c3560;
        case 0x1c356cu: goto label_1c356c;
        case 0x1c357cu: goto label_1c357c;
        case 0x1c3588u: goto label_1c3588;
        case 0x1c3598u: goto label_1c3598;
        case 0x1c35a4u: goto label_1c35a4;
        case 0x1c35b4u: goto label_1c35b4;
        case 0x1c35c0u: goto label_1c35c0;
        case 0x1c35d0u: goto label_1c35d0;
        case 0x1c35dcu: goto label_1c35dc;
        case 0x1c35ecu: goto label_1c35ec;
        case 0x1c35f8u: goto label_1c35f8;
        case 0x1c3620u: goto label_1c3620;
        default: break;
    }

    ctx->pc = 0x1c33d0u;

    // 0x1c33d0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1c33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1c33d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c33d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c33d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c33d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c33dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c33dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c33e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c33e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c33e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c33e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c33e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c33e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c33ec: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1c33f0: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C33F0u;
    {
        const bool branch_taken_0x1c33f0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C33F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33F0u;
            // 0x1c33f4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33f0) {
            ctx->pc = 0x1C3404u;
            goto label_1c3404;
        }
    }
    ctx->pc = 0x1C33F8u;
    // 0x1c33f8: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x1c33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x1c33fc: 0x18600088  blez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C33FCu;
    {
        const bool branch_taken_0x1c33fc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c33fc) {
            ctx->pc = 0x1C3620u;
            goto label_1c3620;
        }
    }
    ctx->pc = 0x1C3404u;
label_1c3404:
    // 0x1c3404: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C3404u;
    SET_GPR_U32(ctx, 31, 0x1C340Cu);
    ctx->pc = 0x1C3408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3404u;
            // 0x1c3408: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C340Cu; }
        if (ctx->pc != 0x1C340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C340Cu; }
        if (ctx->pc != 0x1C340Cu) { return; }
    }
    ctx->pc = 0x1C340Cu;
label_1c340c:
    // 0x1c340c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3414: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C3414u;
    SET_GPR_U32(ctx, 31, 0x1C341Cu);
    ctx->pc = 0x1C3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3414u;
            // 0x1c3418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C341Cu; }
        if (ctx->pc != 0x1C341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C341Cu; }
        if (ctx->pc != 0x1C341Cu) { return; }
    }
    ctx->pc = 0x1C341Cu;
label_1c341c:
    // 0x1c341c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C341Cu;
    SET_GPR_U32(ctx, 31, 0x1C3424u);
    ctx->pc = 0x1C3420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C341Cu;
            // 0x1c3420: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3424u; }
        if (ctx->pc != 0x1C3424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3424u; }
        if (ctx->pc != 0x1C3424u) { return; }
    }
    ctx->pc = 0x1C3424u;
label_1c3424:
    // 0x1c3424: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3428: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C3428u;
    SET_GPR_U32(ctx, 31, 0x1C3430u);
    ctx->pc = 0x1C342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3428u;
            // 0x1c342c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3430u; }
        if (ctx->pc != 0x1C3430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3430u; }
        if (ctx->pc != 0x1C3430u) { return; }
    }
    ctx->pc = 0x1C3430u;
label_1c3430:
    // 0x1c3430: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3434: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C3434u;
    SET_GPR_U32(ctx, 31, 0x1C343Cu);
    ctx->pc = 0x1C3438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3434u;
            // 0x1c3438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C343Cu; }
        if (ctx->pc != 0x1C343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C343Cu; }
        if (ctx->pc != 0x1C343Cu) { return; }
    }
    ctx->pc = 0x1C343Cu;
label_1c343c:
    // 0x1c343c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3440: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C3440u;
    SET_GPR_U32(ctx, 31, 0x1C3448u);
    ctx->pc = 0x1C3444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3440u;
            // 0x1c3444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3448u; }
        if (ctx->pc != 0x1C3448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3448u; }
        if (ctx->pc != 0x1C3448u) { return; }
    }
    ctx->pc = 0x1C3448u;
label_1c3448:
    // 0x1c3448: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c344c: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C344Cu;
    SET_GPR_U32(ctx, 31, 0x1C3454u);
    ctx->pc = 0x1C3450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C344Cu;
            // 0x1c3450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3454u; }
        if (ctx->pc != 0x1C3454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3454u; }
        if (ctx->pc != 0x1C3454u) { return; }
    }
    ctx->pc = 0x1C3454u;
label_1c3454:
    // 0x1c3454: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3458: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C3458u;
    SET_GPR_U32(ctx, 31, 0x1C3460u);
    ctx->pc = 0x1C345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3458u;
            // 0x1c345c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3460u; }
        if (ctx->pc != 0x1C3460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3460u; }
        if (ctx->pc != 0x1C3460u) { return; }
    }
    ctx->pc = 0x1C3460u;
label_1c3460:
    // 0x1c3460: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3464: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C3464u;
    SET_GPR_U32(ctx, 31, 0x1C346Cu);
    ctx->pc = 0x1C3468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3464u;
            // 0x1c3468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C346Cu; }
        if (ctx->pc != 0x1C346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C346Cu; }
        if (ctx->pc != 0x1C346Cu) { return; }
    }
    ctx->pc = 0x1C346Cu;
label_1c346c:
    // 0x1c346c: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c3470: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C3470u;
    SET_GPR_U32(ctx, 31, 0x1C3478u);
    ctx->pc = 0x1C3474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3470u;
            // 0x1c3474: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3478u; }
        if (ctx->pc != 0x1C3478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3478u; }
        if (ctx->pc != 0x1C3478u) { return; }
    }
    ctx->pc = 0x1C3478u;
label_1c3478:
    // 0x1c3478: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c347c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1C347Cu;
    SET_GPR_U32(ctx, 31, 0x1C3484u);
    ctx->pc = 0x1C3480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C347Cu;
            // 0x1c3480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3484u; }
        if (ctx->pc != 0x1C3484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3484u; }
        if (ctx->pc != 0x1C3484u) { return; }
    }
    ctx->pc = 0x1C3484u;
label_1c3484:
    // 0x1c3484: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x1c3484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1c3488: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1C3488u;
    {
        const bool branch_taken_0x1c3488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3488u;
            // 0x1c348c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3488) {
            ctx->pc = 0x1C3604u;
            goto label_1c3604;
        }
    }
    ctx->pc = 0x1C3490u;
label_1c3490:
    // 0x1c3490: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1c3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c3494: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3494u;
    {
        const bool branch_taken_0x1c3494 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c3494) {
            ctx->pc = 0x1C34A4u;
            goto label_1c34a4;
        }
    }
    ctx->pc = 0x1C349Cu;
    // 0x1c349c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C349Cu;
    {
        const bool branch_taken_0x1c349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C34A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C349Cu;
            // 0x1c34a0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c349c) {
            ctx->pc = 0x1C35FCu;
            goto label_1c35fc;
        }
    }
    ctx->pc = 0x1C34A4u;
label_1c34a4:
    // 0x1c34a4: 0x0  nop
    ctx->pc = 0x1c34a4u;
    // NOP
    // 0x1c34a8: 0x8e920050  lw          $s2, 0x50($s4)
    ctx->pc = 0x1c34a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1c34ac: 0x8e930054  lw          $s3, 0x54($s4)
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1c34b0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c34b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c34b4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1c34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c34b8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C34B8u;
    SET_GPR_U32(ctx, 31, 0x1C34C0u);
    ctx->pc = 0x1C34BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34B8u;
            // 0x1c34bc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C0u; }
        if (ctx->pc != 0x1C34C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C0u; }
        if (ctx->pc != 0x1C34C0u) { return; }
    }
    ctx->pc = 0x1C34C0u;
label_1c34c0:
    // 0x1c34c0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c34c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c34c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c34c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c34cc: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x1c34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x1c34d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c34d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c34d4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c34d8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1c34d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c34dc: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1c34dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c34e0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c34e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c34e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c34e8: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C34E8u;
    SET_GPR_U32(ctx, 31, 0x1C34F0u);
    ctx->pc = 0x1C34ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34E8u;
            // 0x1c34ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34F0u; }
        if (ctx->pc != 0x1C34F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34F0u; }
        if (ctx->pc != 0x1C34F0u) { return; }
    }
    ctx->pc = 0x1C34F0u;
label_1c34f0:
    // 0x1c34f0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C34F0u;
    {
        const bool branch_taken_0x1c34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34f0) {
            ctx->pc = 0x1C35F8u;
            goto label_1c35f8;
        }
    }
    ctx->pc = 0x1C34F8u;
    // 0x1c34f8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c34fc: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x1c34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1c3500: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x1c3500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c3504: 0x8fa70194  lw          $a3, 0x194($sp)
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1c3508: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1c350c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x1c350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1c3510: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x1c3510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x1c3514: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x1c3514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x1c3518: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1c351c: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1c351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1c3520: 0xafa801a0  sw          $t0, 0x1A0($sp)
    ctx->pc = 0x1c3520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 8));
    // 0x1c3524: 0xafa701a4  sw          $a3, 0x1A4($sp)
    ctx->pc = 0x1c3524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 7));
    // 0x1c3528: 0xafa601a8  sw          $a2, 0x1A8($sp)
    ctx->pc = 0x1c3528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 6));
    // 0x1c352c: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x1c352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
    // 0x1c3530: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x1c3530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
    // 0x1c3534: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x1c3534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x1c3538: 0x8e850060  lw          $a1, 0x60($s4)
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1c353c: 0x8e860064  lw          $a2, 0x64($s4)
    ctx->pc = 0x1c353cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x1c3540: 0x8e870068  lw          $a3, 0x68($s4)
    ctx->pc = 0x1c3540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x1c3544: 0x8e88006c  lw          $t0, 0x6C($s4)
    ctx->pc = 0x1c3544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x1c3548: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3548u;
    SET_GPR_U32(ctx, 31, 0x1C3550u);
    ctx->pc = 0x1C354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3548u;
            // 0x1c354c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3550u; }
        if (ctx->pc != 0x1C3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3550u; }
        if (ctx->pc != 0x1C3550u) { return; }
    }
    ctx->pc = 0x1C3550u;
label_1c3550:
    // 0x1c3550: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3558: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3558u;
    SET_GPR_U32(ctx, 31, 0x1C3560u);
    ctx->pc = 0x1C355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3558u;
            // 0x1c355c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3560u; }
        if (ctx->pc != 0x1C3560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3560u; }
        if (ctx->pc != 0x1C3560u) { return; }
    }
    ctx->pc = 0x1C3560u;
label_1c3560:
    // 0x1c3560: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3564: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3564u;
    SET_GPR_U32(ctx, 31, 0x1C356Cu);
    ctx->pc = 0x1C3568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3564u;
            // 0x1c3568: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C356Cu; }
        if (ctx->pc != 0x1C356Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C356Cu; }
        if (ctx->pc != 0x1C356Cu) { return; }
    }
    ctx->pc = 0x1C356Cu;
label_1c356c:
    // 0x1c356c: 0x2645000f  addiu       $a1, $s2, 0xF
    ctx->pc = 0x1c356cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1c3570: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3574: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3574u;
    SET_GPR_U32(ctx, 31, 0x1C357Cu);
    ctx->pc = 0x1C3578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3574u;
            // 0x1c3578: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C357Cu; }
        if (ctx->pc != 0x1C357Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C357Cu; }
        if (ctx->pc != 0x1C357Cu) { return; }
    }
    ctx->pc = 0x1C357Cu;
label_1c357c:
    // 0x1c357c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3580: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3580u;
    SET_GPR_U32(ctx, 31, 0x1C3588u);
    ctx->pc = 0x1C3584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3580u;
            // 0x1c3584: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3588u; }
        if (ctx->pc != 0x1C3588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3588u; }
        if (ctx->pc != 0x1C3588u) { return; }
    }
    ctx->pc = 0x1C3588u;
label_1c3588:
    // 0x1c3588: 0x2666001f  addiu       $a2, $s3, 0x1F
    ctx->pc = 0x1c3588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1c358c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c3590: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3590u;
    SET_GPR_U32(ctx, 31, 0x1C3598u);
    ctx->pc = 0x1C3594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3590u;
            // 0x1c3594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3598u; }
        if (ctx->pc != 0x1C3598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3598u; }
        if (ctx->pc != 0x1C3598u) { return; }
    }
    ctx->pc = 0x1C3598u;
label_1c3598:
    // 0x1c3598: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c359c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C359Cu;
    SET_GPR_U32(ctx, 31, 0x1C35A4u);
    ctx->pc = 0x1C35A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C359Cu;
            // 0x1c35a0: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35A4u; }
        if (ctx->pc != 0x1C35A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35A4u; }
        if (ctx->pc != 0x1C35A4u) { return; }
    }
    ctx->pc = 0x1C35A4u;
label_1c35a4:
    // 0x1c35a4: 0x2666001f  addiu       $a2, $s3, 0x1F
    ctx->pc = 0x1c35a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1c35a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c35ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C35ACu;
    SET_GPR_U32(ctx, 31, 0x1C35B4u);
    ctx->pc = 0x1C35B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35ACu;
            // 0x1c35b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35B4u; }
        if (ctx->pc != 0x1C35B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35B4u; }
        if (ctx->pc != 0x1C35B4u) { return; }
    }
    ctx->pc = 0x1C35B4u;
label_1c35b4:
    // 0x1c35b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c35b8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C35B8u;
    SET_GPR_U32(ctx, 31, 0x1C35C0u);
    ctx->pc = 0x1C35BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35B8u;
            // 0x1c35bc: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35C0u; }
        if (ctx->pc != 0x1C35C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35C0u; }
        if (ctx->pc != 0x1C35C0u) { return; }
    }
    ctx->pc = 0x1C35C0u;
label_1c35c0:
    // 0x1c35c0: 0x2645000f  addiu       $a1, $s2, 0xF
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1c35c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c35c8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C35C8u;
    SET_GPR_U32(ctx, 31, 0x1C35D0u);
    ctx->pc = 0x1C35CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35C8u;
            // 0x1c35cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35D0u; }
        if (ctx->pc != 0x1C35D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35D0u; }
        if (ctx->pc != 0x1C35D0u) { return; }
    }
    ctx->pc = 0x1C35D0u;
label_1c35d0:
    // 0x1c35d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c35d4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C35D4u;
    SET_GPR_U32(ctx, 31, 0x1C35DCu);
    ctx->pc = 0x1C35D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35D4u;
            // 0x1c35d8: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35DCu; }
        if (ctx->pc != 0x1C35DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35DCu; }
        if (ctx->pc != 0x1C35DCu) { return; }
    }
    ctx->pc = 0x1C35DCu;
label_1c35dc:
    // 0x1c35dc: 0x2645000f  addiu       $a1, $s2, 0xF
    ctx->pc = 0x1c35dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1c35e0: 0x2666001f  addiu       $a2, $s3, 0x1F
    ctx->pc = 0x1c35e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x1c35e4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C35E4u;
    SET_GPR_U32(ctx, 31, 0x1C35ECu);
    ctx->pc = 0x1C35E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35E4u;
            // 0x1c35e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35ECu; }
        if (ctx->pc != 0x1C35ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35ECu; }
        if (ctx->pc != 0x1C35ECu) { return; }
    }
    ctx->pc = 0x1C35ECu;
label_1c35ec:
    // 0x1c35ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c35f0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C35F0u;
    SET_GPR_U32(ctx, 31, 0x1C35F8u);
    ctx->pc = 0x1C35F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35F0u;
            // 0x1c35f4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35F8u; }
        if (ctx->pc != 0x1C35F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35F8u; }
        if (ctx->pc != 0x1C35F8u) { return; }
    }
    ctx->pc = 0x1C35F8u;
label_1c35f8:
    // 0x1c35f8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1c35fc:
    // 0x1c35fc: 0x0  nop
    ctx->pc = 0x1c35fcu;
    // NOP
    // 0x1c3600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3604:
    // 0x1c3604: 0x0  nop
    ctx->pc = 0x1c3604u;
    // NOP
    // 0x1c3608: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x1c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x1c360c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c360cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3610: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1C3610u;
    {
        const bool branch_taken_0x1c3610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3610u;
            // 0x1c3614: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3610) {
            ctx->pc = 0x1C3490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3490;
        }
    }
    ctx->pc = 0x1C3618u;
    // 0x1c3618: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C3618u;
    SET_GPR_U32(ctx, 31, 0x1C3620u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3620u; }
        if (ctx->pc != 0x1C3620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3620u; }
        if (ctx->pc != 0x1C3620u) { return; }
    }
    ctx->pc = 0x1C3620u;
label_1c3620:
    // 0x1c3620: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c3620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3624: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c3624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c3628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c362c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c362cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3638: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3638u;
            // 0x1c363c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3640u;
}
