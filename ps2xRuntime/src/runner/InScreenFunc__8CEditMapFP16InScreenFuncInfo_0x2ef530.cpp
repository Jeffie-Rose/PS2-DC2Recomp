#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InScreenFunc__8CEditMapFP16InScreenFuncInfo
// Address: 0x2ef530 - 0x2ef62c
void InScreenFunc__8CEditMapFP16InScreenFuncInfo_0x2ef530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InScreenFunc__8CEditMapFP16InScreenFuncInfo_0x2ef530");
#endif

    switch (ctx->pc) {
        case 0x2ef530u: goto label_2ef530;
        case 0x2ef534u: goto label_2ef534;
        case 0x2ef538u: goto label_2ef538;
        case 0x2ef53cu: goto label_2ef53c;
        case 0x2ef540u: goto label_2ef540;
        case 0x2ef544u: goto label_2ef544;
        case 0x2ef548u: goto label_2ef548;
        case 0x2ef54cu: goto label_2ef54c;
        case 0x2ef550u: goto label_2ef550;
        case 0x2ef554u: goto label_2ef554;
        case 0x2ef558u: goto label_2ef558;
        case 0x2ef55cu: goto label_2ef55c;
        case 0x2ef560u: goto label_2ef560;
        case 0x2ef564u: goto label_2ef564;
        case 0x2ef568u: goto label_2ef568;
        case 0x2ef56cu: goto label_2ef56c;
        case 0x2ef570u: goto label_2ef570;
        case 0x2ef574u: goto label_2ef574;
        case 0x2ef578u: goto label_2ef578;
        case 0x2ef57cu: goto label_2ef57c;
        case 0x2ef580u: goto label_2ef580;
        case 0x2ef584u: goto label_2ef584;
        case 0x2ef588u: goto label_2ef588;
        case 0x2ef58cu: goto label_2ef58c;
        case 0x2ef590u: goto label_2ef590;
        case 0x2ef594u: goto label_2ef594;
        case 0x2ef598u: goto label_2ef598;
        case 0x2ef59cu: goto label_2ef59c;
        case 0x2ef5a0u: goto label_2ef5a0;
        case 0x2ef5a4u: goto label_2ef5a4;
        case 0x2ef5a8u: goto label_2ef5a8;
        case 0x2ef5acu: goto label_2ef5ac;
        case 0x2ef5b0u: goto label_2ef5b0;
        case 0x2ef5b4u: goto label_2ef5b4;
        case 0x2ef5b8u: goto label_2ef5b8;
        case 0x2ef5bcu: goto label_2ef5bc;
        case 0x2ef5c0u: goto label_2ef5c0;
        case 0x2ef5c4u: goto label_2ef5c4;
        case 0x2ef5c8u: goto label_2ef5c8;
        case 0x2ef5ccu: goto label_2ef5cc;
        case 0x2ef5d0u: goto label_2ef5d0;
        case 0x2ef5d4u: goto label_2ef5d4;
        case 0x2ef5d8u: goto label_2ef5d8;
        case 0x2ef5dcu: goto label_2ef5dc;
        case 0x2ef5e0u: goto label_2ef5e0;
        case 0x2ef5e4u: goto label_2ef5e4;
        case 0x2ef5e8u: goto label_2ef5e8;
        case 0x2ef5ecu: goto label_2ef5ec;
        case 0x2ef5f0u: goto label_2ef5f0;
        case 0x2ef5f4u: goto label_2ef5f4;
        case 0x2ef5f8u: goto label_2ef5f8;
        case 0x2ef5fcu: goto label_2ef5fc;
        case 0x2ef600u: goto label_2ef600;
        case 0x2ef604u: goto label_2ef604;
        case 0x2ef608u: goto label_2ef608;
        case 0x2ef60cu: goto label_2ef60c;
        case 0x2ef610u: goto label_2ef610;
        case 0x2ef614u: goto label_2ef614;
        case 0x2ef618u: goto label_2ef618;
        case 0x2ef61cu: goto label_2ef61c;
        case 0x2ef620u: goto label_2ef620;
        case 0x2ef624u: goto label_2ef624;
        case 0x2ef628u: goto label_2ef628;
        default: break;
    }

    ctx->pc = 0x2ef530u;

label_2ef530:
    // 0x2ef530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ef530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ef534:
    // 0x2ef534: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ef534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ef538:
    // 0x2ef538: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ef538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ef53c:
    // 0x2ef53c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ef53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ef540:
    // 0x2ef540: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ef540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef544:
    // 0x2ef544: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ef544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ef548:
    // 0x2ef548: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ef548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ef54c:
    // 0x2ef54c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ef54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ef550:
    // 0x2ef550: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ef550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ef554:
    // 0x2ef554: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ef554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ef558:
    // 0x2ef558: 0xc057f00  jal         func_15FC00
label_2ef55c:
    if (ctx->pc == 0x2EF55Cu) {
        ctx->pc = 0x2EF55Cu;
            // 0x2ef55c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2EF560u;
        goto label_2ef560;
    }
    ctx->pc = 0x2EF558u;
    SET_GPR_U32(ctx, 31, 0x2EF560u);
    ctx->pc = 0x2EF55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF558u;
            // 0x2ef55c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FC00u;
    if (runtime->hasFunction(0x15FC00u)) {
        auto targetFn = runtime->lookupFunction(0x15FC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF560u; }
        if (ctx->pc != 0x2EF560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InScreenFunc__4CMapFP16InScreenFuncInfo_0x15fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF560u; }
        if (ctx->pc != 0x2EF560u) { return; }
    }
    ctx->pc = 0x2EF560u;
label_2ef560:
    // 0x2ef560: 0xc6740004  lwc1        $f20, 0x4($s3)
    ctx->pc = 0x2ef560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef564:
    // 0x2ef564: 0x8e910d44  lw          $s1, 0xD44($s4)
    ctx->pc = 0x2ef564u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3396)));
label_2ef568:
    // 0x2ef568: 0xc6750008  lwc1        $f21, 0x8($s3)
    ctx->pc = 0x2ef568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ef56c:
    // 0x2ef56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef570:
    // 0x2ef570: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2ef574:
    if (ctx->pc == 0x2EF574u) {
        ctx->pc = 0x2EF574u;
            // 0x2ef574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF578u;
        goto label_2ef578;
    }
    ctx->pc = 0x2EF570u;
    {
        const bool branch_taken_0x2ef570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF570u;
            // 0x2ef574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef570) {
            ctx->pc = 0x2EF5E8u;
            goto label_2ef5e8;
        }
    }
    ctx->pc = 0x2EF578u;
label_2ef578:
    // 0x2ef578: 0xc0bb988  jal         func_2EE620
label_2ef57c:
    if (ctx->pc == 0x2EF57Cu) {
        ctx->pc = 0x2EF57Cu;
            // 0x2ef57c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF580u;
        goto label_2ef580;
    }
    ctx->pc = 0x2EF578u;
    SET_GPR_U32(ctx, 31, 0x2EF580u);
    ctx->pc = 0x2EF57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF578u;
            // 0x2ef57c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF580u; }
        if (ctx->pc != 0x2EF580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF580u; }
        if (ctx->pc != 0x2EF580u) { return; }
    }
    ctx->pc = 0x2EF580u;
label_2ef580:
    // 0x2ef580: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2ef584:
    if (ctx->pc == 0x2EF584u) {
        ctx->pc = 0x2EF588u;
        goto label_2ef588;
    }
    ctx->pc = 0x2EF580u;
    {
        const bool branch_taken_0x2ef580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef580) {
            ctx->pc = 0x2EF5E0u;
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF588u;
label_2ef588:
    // 0x2ef588: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2ef588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef58c:
    // 0x2ef58c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x2ef58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_2ef590:
    // 0x2ef590: 0x320f809  jalr        $t9
label_2ef594:
    if (ctx->pc == 0x2EF594u) {
        ctx->pc = 0x2EF594u;
            // 0x2ef594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF598u;
        goto label_2ef598;
    }
    ctx->pc = 0x2EF590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EF598u);
        ctx->pc = 0x2EF594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF590u;
            // 0x2ef594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EF598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EF598u; }
            if (ctx->pc != 0x2EF598u) { return; }
        }
        }
    }
    ctx->pc = 0x2EF598u;
label_2ef598:
    // 0x2ef598: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2ef59c:
    if (ctx->pc == 0x2EF59Cu) {
        ctx->pc = 0x2EF59Cu;
            // 0x2ef59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5A0u;
        goto label_2ef5a0;
    }
    ctx->pc = 0x2EF598u;
    {
        const bool branch_taken_0x2ef598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF598u;
            // 0x2ef59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef598) {
            ctx->pc = 0x2EF5E0u;
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF5A0u;
label_2ef5a0:
    // 0x2ef5a0: 0xc059d2c  jal         func_1674B0
label_2ef5a4:
    if (ctx->pc == 0x2EF5A4u) {
        ctx->pc = 0x2EF5A4u;
            // 0x2ef5a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5A8u;
        goto label_2ef5a8;
    }
    ctx->pc = 0x2EF5A0u;
    SET_GPR_U32(ctx, 31, 0x2EF5A8u);
    ctx->pc = 0x2EF5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5A0u;
            // 0x2ef5a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1674B0u;
    if (runtime->hasFunction(0x1674B0u)) {
        auto targetFn = runtime->lookupFunction(0x1674B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF5A8u; }
        if (ctx->pc != 0x2EF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InScreenFunc__9CMapPartsFP16InScreenFuncInfo_0x1674b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF5A8u; }
        if (ctx->pc != 0x2EF5A8u) { return; }
    }
    ctx->pc = 0x2EF5A8u;
label_2ef5a8:
    // 0x2ef5a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ef5ac:
    if (ctx->pc == 0x2EF5ACu) {
        ctx->pc = 0x2EF5B0u;
        goto label_2ef5b0;
    }
    ctx->pc = 0x2EF5A8u;
    {
        const bool branch_taken_0x2ef5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef5a8) {
            ctx->pc = 0x2EF5E0u;
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF5B0u;
label_2ef5b0:
    // 0x2ef5b0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ef5b4:
    if (ctx->pc == 0x2EF5B4u) {
        ctx->pc = 0x2EF5B8u;
        goto label_2ef5b8;
    }
    ctx->pc = 0x2EF5B0u;
    {
        const bool branch_taken_0x2ef5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef5b0) {
            ctx->pc = 0x2EF5CCu;
            goto label_2ef5cc;
        }
    }
    ctx->pc = 0x2EF5B8u;
label_2ef5b8:
    // 0x2ef5b8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2ef5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef5bc:
    // 0x2ef5bc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2ef5bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ef5c0:
    // 0x2ef5c0: 0x0  nop
    ctx->pc = 0x2ef5c0u;
    // NOP
label_2ef5c4:
    // 0x2ef5c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2ef5c8:
    if (ctx->pc == 0x2EF5C8u) {
        ctx->pc = 0x2EF5CCu;
        goto label_2ef5cc;
    }
    ctx->pc = 0x2EF5C4u;
    {
        const bool branch_taken_0x2ef5c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef5c4) {
            ctx->pc = 0x2EF5E0u;
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF5CCu;
label_2ef5cc:
    // 0x2ef5cc: 0x0  nop
    ctx->pc = 0x2ef5ccu;
    // NOP
label_2ef5d0:
    // 0x2ef5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5d4:
    // 0x2ef5d4: 0xc6740004  lwc1        $f20, 0x4($s3)
    ctx->pc = 0x2ef5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef5d8:
    // 0x2ef5d8: 0xc6750008  lwc1        $f21, 0x8($s3)
    ctx->pc = 0x2ef5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ef5dc:
    // 0x2ef5dc: 0x0  nop
    ctx->pc = 0x2ef5dcu;
    // NOP
label_2ef5e0:
    // 0x2ef5e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ef5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ef5e4:
    // 0x2ef5e4: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x2ef5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_2ef5e8:
    // 0x2ef5e8: 0x8e820d40  lw          $v0, 0xD40($s4)
    ctx->pc = 0x2ef5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3392)));
label_2ef5ec:
    // 0x2ef5ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ef5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ef5f0:
    // 0x2ef5f0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2ef5f4:
    if (ctx->pc == 0x2EF5F4u) {
        ctx->pc = 0x2EF5F4u;
            // 0x2ef5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5F8u;
        goto label_2ef5f8;
    }
    ctx->pc = 0x2EF5F0u;
    {
        const bool branch_taken_0x2ef5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5F0u;
            // 0x2ef5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5f0) {
            ctx->pc = 0x2EF578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef578;
        }
    }
    ctx->pc = 0x2EF5F8u;
label_2ef5f8:
    // 0x2ef5f8: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x2ef5f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2ef5fc:
    // 0x2ef5fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ef5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef600:
    // 0x2ef600: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x2ef600u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2ef604:
    // 0x2ef604: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ef604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef608:
    // 0x2ef608: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ef608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ef60c:
    // 0x2ef60c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ef60cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef610:
    // 0x2ef610: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ef610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef614:
    // 0x2ef614: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ef614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef618:
    // 0x2ef618: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ef618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef61c:
    // 0x2ef61c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ef61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef620:
    // 0x2ef620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ef620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef624:
    // 0x2ef624: 0x3e00008  jr          $ra
label_2ef628:
    if (ctx->pc == 0x2EF628u) {
        ctx->pc = 0x2EF628u;
            // 0x2ef628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2EF62Cu;
        goto label_fallthrough_0x2ef624;
    }
    ctx->pc = 0x2EF624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF624u;
            // 0x2ef628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ef624:
    ctx->pc = 0x2EF62Cu;
}
