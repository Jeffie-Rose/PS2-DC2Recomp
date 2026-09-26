#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPlaceAlt__FiP8CEditMapPfiPf
// Address: 0x2da400 - 0x2da530
void CheckPlaceAlt__FiP8CEditMapPfiPf_0x2da400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPlaceAlt__FiP8CEditMapPfiPf_0x2da400");
#endif

    switch (ctx->pc) {
        case 0x2da400u: goto label_2da400;
        case 0x2da404u: goto label_2da404;
        case 0x2da408u: goto label_2da408;
        case 0x2da40cu: goto label_2da40c;
        case 0x2da410u: goto label_2da410;
        case 0x2da414u: goto label_2da414;
        case 0x2da418u: goto label_2da418;
        case 0x2da41cu: goto label_2da41c;
        case 0x2da420u: goto label_2da420;
        case 0x2da424u: goto label_2da424;
        case 0x2da428u: goto label_2da428;
        case 0x2da42cu: goto label_2da42c;
        case 0x2da430u: goto label_2da430;
        case 0x2da434u: goto label_2da434;
        case 0x2da438u: goto label_2da438;
        case 0x2da43cu: goto label_2da43c;
        case 0x2da440u: goto label_2da440;
        case 0x2da444u: goto label_2da444;
        case 0x2da448u: goto label_2da448;
        case 0x2da44cu: goto label_2da44c;
        case 0x2da450u: goto label_2da450;
        case 0x2da454u: goto label_2da454;
        case 0x2da458u: goto label_2da458;
        case 0x2da45cu: goto label_2da45c;
        case 0x2da460u: goto label_2da460;
        case 0x2da464u: goto label_2da464;
        case 0x2da468u: goto label_2da468;
        case 0x2da46cu: goto label_2da46c;
        case 0x2da470u: goto label_2da470;
        case 0x2da474u: goto label_2da474;
        case 0x2da478u: goto label_2da478;
        case 0x2da47cu: goto label_2da47c;
        case 0x2da480u: goto label_2da480;
        case 0x2da484u: goto label_2da484;
        case 0x2da488u: goto label_2da488;
        case 0x2da48cu: goto label_2da48c;
        case 0x2da490u: goto label_2da490;
        case 0x2da494u: goto label_2da494;
        case 0x2da498u: goto label_2da498;
        case 0x2da49cu: goto label_2da49c;
        case 0x2da4a0u: goto label_2da4a0;
        case 0x2da4a4u: goto label_2da4a4;
        case 0x2da4a8u: goto label_2da4a8;
        case 0x2da4acu: goto label_2da4ac;
        case 0x2da4b0u: goto label_2da4b0;
        case 0x2da4b4u: goto label_2da4b4;
        case 0x2da4b8u: goto label_2da4b8;
        case 0x2da4bcu: goto label_2da4bc;
        case 0x2da4c0u: goto label_2da4c0;
        case 0x2da4c4u: goto label_2da4c4;
        case 0x2da4c8u: goto label_2da4c8;
        case 0x2da4ccu: goto label_2da4cc;
        case 0x2da4d0u: goto label_2da4d0;
        case 0x2da4d4u: goto label_2da4d4;
        case 0x2da4d8u: goto label_2da4d8;
        case 0x2da4dcu: goto label_2da4dc;
        case 0x2da4e0u: goto label_2da4e0;
        case 0x2da4e4u: goto label_2da4e4;
        case 0x2da4e8u: goto label_2da4e8;
        case 0x2da4ecu: goto label_2da4ec;
        case 0x2da4f0u: goto label_2da4f0;
        case 0x2da4f4u: goto label_2da4f4;
        case 0x2da4f8u: goto label_2da4f8;
        case 0x2da4fcu: goto label_2da4fc;
        case 0x2da500u: goto label_2da500;
        case 0x2da504u: goto label_2da504;
        case 0x2da508u: goto label_2da508;
        case 0x2da50cu: goto label_2da50c;
        case 0x2da510u: goto label_2da510;
        case 0x2da514u: goto label_2da514;
        case 0x2da518u: goto label_2da518;
        case 0x2da51cu: goto label_2da51c;
        case 0x2da520u: goto label_2da520;
        case 0x2da524u: goto label_2da524;
        case 0x2da528u: goto label_2da528;
        case 0x2da52cu: goto label_2da52c;
        default: break;
    }

    ctx->pc = 0x2da400u;

label_2da400:
    // 0x2da400: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2da400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2da404:
    // 0x2da404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da408:
    // 0x2da408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2da408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2da40c:
    // 0x2da40c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2da40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2da410:
    // 0x2da410: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2da410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2da414:
    // 0x2da414: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2da414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2da418:
    // 0x2da418: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2da418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2da41c:
    // 0x2da41c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2da41cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2da420:
    // 0x2da420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2da420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2da424:
    // 0x2da424: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2da424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2da428:
    // 0x2da428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2da428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2da42c:
    // 0x2da42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2da42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2da430:
    // 0x2da430: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2da430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2da434:
    // 0x2da434: 0xc4d40004  lwc1        $f20, 0x4($a2)
    ctx->pc = 0x2da434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2da438:
    // 0x2da438: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
label_2da43c:
    if (ctx->pc == 0x2DA43Cu) {
        ctx->pc = 0x2DA43Cu;
            // 0x2da43c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA440u;
        goto label_2da440;
    }
    ctx->pc = 0x2DA438u;
    {
        const bool branch_taken_0x2da438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA438u;
            // 0x2da43c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da438) {
            ctx->pc = 0x2DA4A4u;
            goto label_2da4a4;
        }
    }
    ctx->pc = 0x2DA440u;
label_2da440:
    // 0x2da440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2da440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da444:
    // 0x2da444: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2da444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da448:
    // 0x2da448: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2da448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2da44c:
    // 0x2da44c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da450:
    // 0x2da450: 0xc0b745c  jal         func_2DD170
label_2da454:
    if (ctx->pc == 0x2DA454u) {
        ctx->pc = 0x2DA454u;
            // 0x2da454: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA458u;
        goto label_2da458;
    }
    ctx->pc = 0x2DA450u;
    SET_GPR_U32(ctx, 31, 0x2DA458u);
    ctx->pc = 0x2DA454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA450u;
            // 0x2da454: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD170u;
    if (runtime->hasFunction(0x2DD170u)) {
        auto targetFn = runtime->lookupFunction(0x2DD170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA458u; }
        if (ctx->pc != 0x2DA458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFocusBalanceParts__FP8CEditMapiPf_0x2dd170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA458u; }
        if (ctx->pc != 0x2DA458u) { return; }
    }
    ctx->pc = 0x2DA458u;
label_2da458:
    // 0x2da458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2da45c:
    if (ctx->pc == 0x2DA45Cu) {
        ctx->pc = 0x2DA45Cu;
            // 0x2da45c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2DA460u;
        goto label_2da460;
    }
    ctx->pc = 0x2DA458u;
    {
        const bool branch_taken_0x2da458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA458u;
            // 0x2da45c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da458) {
            ctx->pc = 0x2DA46Cu;
            goto label_2da46c;
        }
    }
    ctx->pc = 0x2DA460u;
label_2da460:
    // 0x2da460: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2da460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2da464:
    // 0x2da464: 0x10000005  b           . + 4 + (0x5 << 2)
label_2da468:
    if (ctx->pc == 0x2DA468u) {
        ctx->pc = 0x2DA468u;
            // 0x2da468: 0x8c501054  lw          $s0, 0x1054($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
        ctx->pc = 0x2DA46Cu;
        goto label_2da46c;
    }
    ctx->pc = 0x2DA464u;
    {
        const bool branch_taken_0x2da464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA464u;
            // 0x2da468: 0x8c501054  lw          $s0, 0x1054($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da464) {
            ctx->pc = 0x2DA47Cu;
            goto label_2da47c;
        }
    }
    ctx->pc = 0x2DA46Cu;
label_2da46c:
    // 0x2da46c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2da46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2da470:
    // 0x2da470: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2da470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2da474:
    // 0x2da474: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2da478:
    if (ctx->pc == 0x2DA478u) {
        ctx->pc = 0x2DA478u;
            // 0x2da478: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA47Cu;
        goto label_2da47c;
    }
    ctx->pc = 0x2DA474u;
    {
        const bool branch_taken_0x2da474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA474u;
            // 0x2da478: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da474) {
            ctx->pc = 0x2DA44Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da44c;
        }
    }
    ctx->pc = 0x2DA47Cu;
label_2da47c:
    // 0x2da47c: 0x0  nop
    ctx->pc = 0x2da47cu;
    // NOP
label_2da480:
    // 0x2da480: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2da484:
    if (ctx->pc == 0x2DA484u) {
        ctx->pc = 0x2DA484u;
            // 0x2da484: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x2DA488u;
        goto label_2da488;
    }
    ctx->pc = 0x2DA480u;
    {
        const bool branch_taken_0x2da480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA480u;
            // 0x2da484: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da480) {
            ctx->pc = 0x2DA4A8u;
            goto label_2da4a8;
        }
    }
    ctx->pc = 0x2DA488u;
label_2da488:
    // 0x2da488: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2da488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2da48c:
    // 0x2da48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da490:
    // 0x2da490: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2da490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2da494:
    // 0x2da494: 0x320f809  jalr        $t9
label_2da498:
    if (ctx->pc == 0x2DA498u) {
        ctx->pc = 0x2DA498u;
            // 0x2da498: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2DA49Cu;
        goto label_2da49c;
    }
    ctx->pc = 0x2DA494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA49Cu);
        ctx->pc = 0x2DA498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA494u;
            // 0x2da498: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA49Cu; }
            if (ctx->pc != 0x2DA49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DA49Cu;
label_2da49c:
    // 0x2da49c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2da49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da4a0:
    // 0x2da4a0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2da4a0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2da4a4:
    // 0x2da4a4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x2da4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_2da4a8:
    // 0x2da4a8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_2da4ac:
    if (ctx->pc == 0x2DA4ACu) {
        ctx->pc = 0x2DA4ACu;
            // 0x2da4ac: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x2DA4B0u;
        goto label_2da4b0;
    }
    ctx->pc = 0x2DA4A8u;
    {
        const bool branch_taken_0x2da4a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4A8u;
            // 0x2da4ac: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4a8) {
            ctx->pc = 0x2DA4C0u;
            goto label_2da4c0;
        }
    }
    ctx->pc = 0x2DA4B0u;
label_2da4b0:
    // 0x2da4b0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2da4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2da4b4:
    // 0x2da4b4: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
label_2da4b8:
    if (ctx->pc == 0x2DA4B8u) {
        ctx->pc = 0x2DA4BCu;
        goto label_2da4bc;
    }
    ctx->pc = 0x2DA4B4u;
    {
        const bool branch_taken_0x2da4b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da4b4) {
            ctx->pc = 0x2DA4E0u;
            goto label_2da4e0;
        }
    }
    ctx->pc = 0x2DA4BCu;
label_2da4bc:
    // 0x2da4bc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2da4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2da4c0:
    // 0x2da4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da4c4:
    // 0x2da4c4: 0x0  nop
    ctx->pc = 0x2da4c4u;
    // NOP
label_2da4c8:
    // 0x2da4c8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2da4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da4cc:
    // 0x2da4cc: 0x0  nop
    ctx->pc = 0x2da4ccu;
    // NOP
label_2da4d0:
    // 0x2da4d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2da4d4:
    if (ctx->pc == 0x2DA4D4u) {
        ctx->pc = 0x2DA4D4u;
            // 0x2da4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4D8u;
        goto label_2da4d8;
    }
    ctx->pc = 0x2DA4D0u;
    {
        const bool branch_taken_0x2da4d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4D0u;
            // 0x2da4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4d0) {
            ctx->pc = 0x2DA4E0u;
            goto label_2da4e0;
        }
    }
    ctx->pc = 0x2DA4D8u;
label_2da4d8:
    // 0x2da4d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2da4dc:
    if (ctx->pc == 0x2DA4DCu) {
        ctx->pc = 0x2DA4DCu;
            // 0x2da4dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2DA4E0u;
        goto label_2da4e0;
    }
    ctx->pc = 0x2DA4D8u;
    {
        const bool branch_taken_0x2da4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4D8u;
            // 0x2da4dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4d8) {
            ctx->pc = 0x2DA50Cu;
            goto label_2da50c;
        }
    }
    ctx->pc = 0x2DA4E0u;
label_2da4e0:
    // 0x2da4e0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_2da4e4:
    if (ctx->pc == 0x2DA4E4u) {
        ctx->pc = 0x2DA4E4u;
            // 0x2da4e4: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->pc = 0x2DA4E8u;
        goto label_2da4e8;
    }
    ctx->pc = 0x2DA4E0u;
    {
        const bool branch_taken_0x2da4e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4E0u;
            // 0x2da4e4: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4e0) {
            ctx->pc = 0x2DA4ECu;
            goto label_2da4ec;
        }
    }
    ctx->pc = 0x2DA4E8u;
label_2da4e8:
    // 0x2da4e8: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x2da4e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2da4ec:
    // 0x2da4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da4f0:
    // 0x2da4f0: 0x0  nop
    ctx->pc = 0x2da4f0u;
    // NOP
label_2da4f4:
    // 0x2da4f4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2da4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da4f8:
    // 0x2da4f8: 0x0  nop
    ctx->pc = 0x2da4f8u;
    // NOP
label_2da4fc:
    // 0x2da4fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2da500:
    if (ctx->pc == 0x2DA500u) {
        ctx->pc = 0x2DA500u;
            // 0x2da500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DA504u;
        goto label_2da504;
    }
    ctx->pc = 0x2DA4FCu;
    {
        const bool branch_taken_0x2da4fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4FCu;
            // 0x2da500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4fc) {
            ctx->pc = 0x2DA508u;
            goto label_2da508;
        }
    }
    ctx->pc = 0x2DA504u;
label_2da504:
    // 0x2da504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da508:
    // 0x2da508: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2da508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2da50c:
    // 0x2da50c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2da50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2da510:
    // 0x2da510: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2da510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2da514:
    // 0x2da514: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2da514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2da518:
    // 0x2da518: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2da518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2da51c:
    // 0x2da51c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2da51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2da520:
    // 0x2da520: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2da520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2da524:
    // 0x2da524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2da524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2da528:
    // 0x2da528: 0x3e00008  jr          $ra
label_2da52c:
    if (ctx->pc == 0x2DA52Cu) {
        ctx->pc = 0x2DA52Cu;
            // 0x2da52c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2DA530u;
        goto label_fallthrough_0x2da528;
    }
    ctx->pc = 0x2DA528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA528u;
            // 0x2da52c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2da528:
    ctx->pc = 0x2DA530u;
}
