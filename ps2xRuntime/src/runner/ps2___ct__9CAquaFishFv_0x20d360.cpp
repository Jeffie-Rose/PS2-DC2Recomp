#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CAquaFishFv
// Address: 0x20d360 - 0x20d434
void ps2___ct__9CAquaFishFv_0x20d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CAquaFishFv_0x20d360");
#endif

    switch (ctx->pc) {
        case 0x20d360u: goto label_20d360;
        case 0x20d364u: goto label_20d364;
        case 0x20d368u: goto label_20d368;
        case 0x20d36cu: goto label_20d36c;
        case 0x20d370u: goto label_20d370;
        case 0x20d374u: goto label_20d374;
        case 0x20d378u: goto label_20d378;
        case 0x20d37cu: goto label_20d37c;
        case 0x20d380u: goto label_20d380;
        case 0x20d384u: goto label_20d384;
        case 0x20d388u: goto label_20d388;
        case 0x20d38cu: goto label_20d38c;
        case 0x20d390u: goto label_20d390;
        case 0x20d394u: goto label_20d394;
        case 0x20d398u: goto label_20d398;
        case 0x20d39cu: goto label_20d39c;
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3a4u: goto label_20d3a4;
        case 0x20d3a8u: goto label_20d3a8;
        case 0x20d3acu: goto label_20d3ac;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3b4u: goto label_20d3b4;
        case 0x20d3b8u: goto label_20d3b8;
        case 0x20d3bcu: goto label_20d3bc;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3c4u: goto label_20d3c4;
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3d0u: goto label_20d3d0;
        case 0x20d3d4u: goto label_20d3d4;
        case 0x20d3d8u: goto label_20d3d8;
        case 0x20d3dcu: goto label_20d3dc;
        case 0x20d3e0u: goto label_20d3e0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d3f0u: goto label_20d3f0;
        case 0x20d3f4u: goto label_20d3f4;
        case 0x20d3f8u: goto label_20d3f8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d404u: goto label_20d404;
        case 0x20d408u: goto label_20d408;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d410u: goto label_20d410;
        case 0x20d414u: goto label_20d414;
        case 0x20d418u: goto label_20d418;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d420u: goto label_20d420;
        case 0x20d424u: goto label_20d424;
        case 0x20d428u: goto label_20d428;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d430u: goto label_20d430;
        default: break;
    }

    ctx->pc = 0x20d360u;

label_20d360:
    // 0x20d360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d364:
    // 0x20d364: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20d368:
    // 0x20d368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20d36c:
    // 0x20d36c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x20d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_20d370:
    // 0x20d370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d374:
    // 0x20d374: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20d374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20d378:
    // 0x20d378: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20d378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20d37c:
    // 0x20d37c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20d380:
    // 0x20d380: 0x320f809  jalr        $t9
label_20d384:
    if (ctx->pc == 0x20D384u) {
        ctx->pc = 0x20D384u;
            // 0x20d384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D388u;
        goto label_20d388;
    }
    ctx->pc = 0x20D380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D388u);
        ctx->pc = 0x20D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D380u;
            // 0x20d384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D388u; }
            if (ctx->pc != 0x20D388u) { return; }
        }
        }
    }
    ctx->pc = 0x20D388u;
label_20d388:
    // 0x20d388: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20d38c:
    // 0x20d38c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_20d390:
    // 0x20d390: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20d390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20d394:
    // 0x20d394: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20d394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d398:
    // 0x20d398: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20d39c:
    // 0x20d39c: 0x320f809  jalr        $t9
label_20d3a0:
    if (ctx->pc == 0x20D3A0u) {
        ctx->pc = 0x20D3A0u;
            // 0x20d3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D3A4u;
        goto label_20d3a4;
    }
    ctx->pc = 0x20D39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D3A4u);
        ctx->pc = 0x20D3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D39Cu;
            // 0x20d3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D3A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D3A4u; }
            if (ctx->pc != 0x20D3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x20D3A4u;
label_20d3a4:
    // 0x20d3a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20d3a8:
    // 0x20d3a8: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_20d3ac:
    // 0x20d3ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20d3b0:
    // 0x20d3b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20d3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d3b4:
    // 0x20d3b4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20d3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20d3b8:
    // 0x20d3b8: 0x320f809  jalr        $t9
label_20d3bc:
    if (ctx->pc == 0x20D3BCu) {
        ctx->pc = 0x20D3BCu;
            // 0x20d3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D3C0u;
        goto label_20d3c0;
    }
    ctx->pc = 0x20D3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D3C0u);
        ctx->pc = 0x20D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3B8u;
            // 0x20d3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D3C0u; }
            if (ctx->pc != 0x20D3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x20D3C0u;
label_20d3c0:
    // 0x20d3c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20d3c4:
    // 0x20d3c4: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_20d3c8:
    // 0x20d3c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20d3cc:
    // 0x20d3cc: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x20d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_20d3d0:
    // 0x20d3d0: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x20d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_20d3d4:
    // 0x20d3d4: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x20d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_20d3d8:
    // 0x20d3d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20d3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d3dc:
    // 0x20d3dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20d3e0:
    // 0x20d3e0: 0x320f809  jalr        $t9
label_20d3e4:
    if (ctx->pc == 0x20D3E4u) {
        ctx->pc = 0x20D3E4u;
            // 0x20d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D3E8u;
        goto label_20d3e8;
    }
    ctx->pc = 0x20D3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D3E8u);
        ctx->pc = 0x20D3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3E0u;
            // 0x20d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D3E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D3E8u; }
            if (ctx->pc != 0x20D3E8u) { return; }
        }
        }
    }
    ctx->pc = 0x20D3E8u;
label_20d3e8:
    // 0x20d3e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20d3ec:
    // 0x20d3ec: 0x260406c0  addiu       $a0, $s0, 0x6C0
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
label_20d3f0:
    // 0x20d3f0: 0x24425e80  addiu       $v0, $v0, 0x5E80
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24192));
label_20d3f4:
    // 0x20d3f4: 0xc0834d4  jal         func_20D350
label_20d3f8:
    if (ctx->pc == 0x20D3F8u) {
        ctx->pc = 0x20D3F8u;
            // 0x20d3f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20D3FCu;
        goto label_20d3fc;
    }
    ctx->pc = 0x20D3F4u;
    SET_GPR_U32(ctx, 31, 0x20D3FCu);
    ctx->pc = 0x20D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3F4u;
            // 0x20d3f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D3FCu; }
        if (ctx->pc != 0x20D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D3FCu; }
        if (ctx->pc != 0x20D3FCu) { return; }
    }
    ctx->pc = 0x20D3FCu;
label_20d3fc:
    // 0x20d3fc: 0xc0834d4  jal         func_20D350
label_20d400:
    if (ctx->pc == 0x20D400u) {
        ctx->pc = 0x20D400u;
            // 0x20d400: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->pc = 0x20D404u;
        goto label_20d404;
    }
    ctx->pc = 0x20D3FCu;
    SET_GPR_U32(ctx, 31, 0x20D404u);
    ctx->pc = 0x20D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D3FCu;
            // 0x20d400: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D404u; }
        if (ctx->pc != 0x20D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D404u; }
        if (ctx->pc != 0x20D404u) { return; }
    }
    ctx->pc = 0x20D404u;
label_20d404:
    // 0x20d404: 0xc0834d4  jal         func_20D350
label_20d408:
    if (ctx->pc == 0x20D408u) {
        ctx->pc = 0x20D408u;
            // 0x20d408: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->pc = 0x20D40Cu;
        goto label_20d40c;
    }
    ctx->pc = 0x20D404u;
    SET_GPR_U32(ctx, 31, 0x20D40Cu);
    ctx->pc = 0x20D408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D404u;
            // 0x20d408: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D40Cu; }
        if (ctx->pc != 0x20D40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D40Cu; }
        if (ctx->pc != 0x20D40Cu) { return; }
    }
    ctx->pc = 0x20D40Cu;
label_20d40c:
    // 0x20d40c: 0xae000938  sw          $zero, 0x938($s0)
    ctx->pc = 0x20d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2360), GPR_U32(ctx, 0));
label_20d410:
    // 0x20d410: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20d410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d414:
    // 0x20d414: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20d414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20d418:
    // 0x20d418: 0x320f809  jalr        $t9
label_20d41c:
    if (ctx->pc == 0x20D41Cu) {
        ctx->pc = 0x20D41Cu;
            // 0x20d41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D420u;
        goto label_20d420;
    }
    ctx->pc = 0x20D418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D420u);
        ctx->pc = 0x20D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D418u;
            // 0x20d41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D420u; }
            if (ctx->pc != 0x20D420u) { return; }
        }
        }
    }
    ctx->pc = 0x20D420u;
label_20d420:
    // 0x20d420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20d420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d424:
    // 0x20d424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d428:
    // 0x20d428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d42c:
    // 0x20d42c: 0x3e00008  jr          $ra
label_20d430:
    if (ctx->pc == 0x20D430u) {
        ctx->pc = 0x20D430u;
            // 0x20d430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20D434u;
        goto label_fallthrough_0x20d42c;
    }
    ctx->pc = 0x20D42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D42Cu;
            // 0x20d430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d42c:
    ctx->pc = 0x20D434u;
}
