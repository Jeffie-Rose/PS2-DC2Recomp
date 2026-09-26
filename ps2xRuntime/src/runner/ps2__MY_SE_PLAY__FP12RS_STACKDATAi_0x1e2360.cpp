#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MY_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x1e2360 - 0x1e23e0
void ps2__MY_SE_PLAY__FP12RS_STACKDATAi_0x1e2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MY_SE_PLAY__FP12RS_STACKDATAi_0x1e2360");
#endif

    switch (ctx->pc) {
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2364u: goto label_1e2364;
        case 0x1e2368u: goto label_1e2368;
        case 0x1e236cu: goto label_1e236c;
        case 0x1e2370u: goto label_1e2370;
        case 0x1e2374u: goto label_1e2374;
        case 0x1e2378u: goto label_1e2378;
        case 0x1e237cu: goto label_1e237c;
        case 0x1e2380u: goto label_1e2380;
        case 0x1e2384u: goto label_1e2384;
        case 0x1e2388u: goto label_1e2388;
        case 0x1e238cu: goto label_1e238c;
        case 0x1e2390u: goto label_1e2390;
        case 0x1e2394u: goto label_1e2394;
        case 0x1e2398u: goto label_1e2398;
        case 0x1e239cu: goto label_1e239c;
        case 0x1e23a0u: goto label_1e23a0;
        case 0x1e23a4u: goto label_1e23a4;
        case 0x1e23a8u: goto label_1e23a8;
        case 0x1e23acu: goto label_1e23ac;
        case 0x1e23b0u: goto label_1e23b0;
        case 0x1e23b4u: goto label_1e23b4;
        case 0x1e23b8u: goto label_1e23b8;
        case 0x1e23bcu: goto label_1e23bc;
        case 0x1e23c0u: goto label_1e23c0;
        case 0x1e23c4u: goto label_1e23c4;
        case 0x1e23c8u: goto label_1e23c8;
        case 0x1e23ccu: goto label_1e23cc;
        case 0x1e23d0u: goto label_1e23d0;
        case 0x1e23d4u: goto label_1e23d4;
        case 0x1e23d8u: goto label_1e23d8;
        case 0x1e23dcu: goto label_1e23dc;
        default: break;
    }

    ctx->pc = 0x1e2360u;

label_1e2360:
    // 0x1e2360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e2364:
    // 0x1e2364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2368:
    // 0x1e2368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e236c:
    // 0x1e236c: 0xc07819c  jal         func_1E0670
label_1e2370:
    if (ctx->pc == 0x1E2370u) {
        ctx->pc = 0x1E2370u;
            // 0x1e2370: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E2374u;
        goto label_1e2374;
    }
    ctx->pc = 0x1E236Cu;
    SET_GPR_U32(ctx, 31, 0x1E2374u);
    ctx->pc = 0x1E2370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E236Cu;
            // 0x1e2370: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2374u; }
        if (ctx->pc != 0x1E2374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2374u; }
        if (ctx->pc != 0x1E2374u) { return; }
    }
    ctx->pc = 0x1E2374u;
label_1e2374:
    // 0x1e2374: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e2374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e2378:
    // 0x1e2378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e237c:
    // 0x1e237c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2380:
    // 0x1e2380: 0x8c910588  lw          $s1, 0x588($a0)
    ctx->pc = 0x1e2380u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1416)));
label_1e2384:
    // 0x1e2384: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e2384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e2388:
    // 0x1e2388: 0x320f809  jalr        $t9
label_1e238c:
    if (ctx->pc == 0x1E238Cu) {
        ctx->pc = 0x1E238Cu;
            // 0x1e238c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E2390u;
        goto label_1e2390;
    }
    ctx->pc = 0x1E2388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2390u);
        ctx->pc = 0x1E238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2388u;
            // 0x1e238c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2390u; }
            if (ctx->pc != 0x1E2390u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2390u;
label_1e2390:
    // 0x1e2390: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1e2390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_1e2394:
    // 0x1e2394: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1e2394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_1e2398:
    // 0x1e2398: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e2398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e239c:
    // 0x1e239c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e23a0:
    // 0x1e23a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e23a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e23a4:
    // 0x1e23a4: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1e23a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e23a8:
    // 0x1e23a8: 0xc063bbc  jal         func_18EEF0
label_1e23ac:
    if (ctx->pc == 0x1E23ACu) {
        ctx->pc = 0x1E23ACu;
            // 0x1e23ac: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E23B0u;
        goto label_1e23b0;
    }
    ctx->pc = 0x1E23A8u;
    SET_GPR_U32(ctx, 31, 0x1E23B0u);
    ctx->pc = 0x1E23ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23A8u;
            // 0x1e23ac: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23B0u; }
        if (ctx->pc != 0x1E23B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23B0u; }
        if (ctx->pc != 0x1E23B0u) { return; }
    }
    ctx->pc = 0x1E23B0u;
label_1e23b0:
    // 0x1e23b0: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1e23b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e23b4:
    // 0x1e23b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e23b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e23b8:
    // 0x1e23b8: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x1e23b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e23bc:
    // 0x1e23bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e23bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e23c0:
    // 0x1e23c0: 0xc063830  jal         func_18E0C0
label_1e23c4:
    if (ctx->pc == 0x1E23C4u) {
        ctx->pc = 0x1E23C4u;
            // 0x1e23c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E23C8u;
        goto label_1e23c8;
    }
    ctx->pc = 0x1E23C0u;
    SET_GPR_U32(ctx, 31, 0x1E23C8u);
    ctx->pc = 0x1E23C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23C0u;
            // 0x1e23c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23C8u; }
        if (ctx->pc != 0x1E23C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23C8u; }
        if (ctx->pc != 0x1E23C8u) { return; }
    }
    ctx->pc = 0x1E23C8u;
label_1e23c8:
    // 0x1e23c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e23c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e23cc:
    // 0x1e23cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e23d0:
    // 0x1e23d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e23d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e23d4:
    // 0x1e23d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e23d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e23d8:
    // 0x1e23d8: 0x3e00008  jr          $ra
label_1e23dc:
    if (ctx->pc == 0x1E23DCu) {
        ctx->pc = 0x1E23DCu;
            // 0x1e23dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E23E0u;
        goto label_fallthrough_0x1e23d8;
    }
    ctx->pc = 0x1E23D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23D8u;
            // 0x1e23dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e23d8:
    ctx->pc = 0x1E23E0u;
}
