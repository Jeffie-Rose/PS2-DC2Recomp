#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewTexAnimeGroupData__15mgCTextureAnimeFiP9mgCMemory
// Address: 0x13d460 - 0x13d578
void NewTexAnimeGroupData__15mgCTextureAnimeFiP9mgCMemory_0x13d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewTexAnimeGroupData__15mgCTextureAnimeFiP9mgCMemory_0x13d460");
#endif

    switch (ctx->pc) {
        case 0x13d460u: goto label_13d460;
        case 0x13d464u: goto label_13d464;
        case 0x13d468u: goto label_13d468;
        case 0x13d46cu: goto label_13d46c;
        case 0x13d470u: goto label_13d470;
        case 0x13d474u: goto label_13d474;
        case 0x13d478u: goto label_13d478;
        case 0x13d47cu: goto label_13d47c;
        case 0x13d480u: goto label_13d480;
        case 0x13d484u: goto label_13d484;
        case 0x13d488u: goto label_13d488;
        case 0x13d48cu: goto label_13d48c;
        case 0x13d490u: goto label_13d490;
        case 0x13d494u: goto label_13d494;
        case 0x13d498u: goto label_13d498;
        case 0x13d49cu: goto label_13d49c;
        case 0x13d4a0u: goto label_13d4a0;
        case 0x13d4a4u: goto label_13d4a4;
        case 0x13d4a8u: goto label_13d4a8;
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4b0u: goto label_13d4b0;
        case 0x13d4b4u: goto label_13d4b4;
        case 0x13d4b8u: goto label_13d4b8;
        case 0x13d4bcu: goto label_13d4bc;
        case 0x13d4c0u: goto label_13d4c0;
        case 0x13d4c4u: goto label_13d4c4;
        case 0x13d4c8u: goto label_13d4c8;
        case 0x13d4ccu: goto label_13d4cc;
        case 0x13d4d0u: goto label_13d4d0;
        case 0x13d4d4u: goto label_13d4d4;
        case 0x13d4d8u: goto label_13d4d8;
        case 0x13d4dcu: goto label_13d4dc;
        case 0x13d4e0u: goto label_13d4e0;
        case 0x13d4e4u: goto label_13d4e4;
        case 0x13d4e8u: goto label_13d4e8;
        case 0x13d4ecu: goto label_13d4ec;
        case 0x13d4f0u: goto label_13d4f0;
        case 0x13d4f4u: goto label_13d4f4;
        case 0x13d4f8u: goto label_13d4f8;
        case 0x13d4fcu: goto label_13d4fc;
        case 0x13d500u: goto label_13d500;
        case 0x13d504u: goto label_13d504;
        case 0x13d508u: goto label_13d508;
        case 0x13d50cu: goto label_13d50c;
        case 0x13d510u: goto label_13d510;
        case 0x13d514u: goto label_13d514;
        case 0x13d518u: goto label_13d518;
        case 0x13d51cu: goto label_13d51c;
        case 0x13d520u: goto label_13d520;
        case 0x13d524u: goto label_13d524;
        case 0x13d528u: goto label_13d528;
        case 0x13d52cu: goto label_13d52c;
        case 0x13d530u: goto label_13d530;
        case 0x13d534u: goto label_13d534;
        case 0x13d538u: goto label_13d538;
        case 0x13d53cu: goto label_13d53c;
        case 0x13d540u: goto label_13d540;
        case 0x13d544u: goto label_13d544;
        case 0x13d548u: goto label_13d548;
        case 0x13d54cu: goto label_13d54c;
        case 0x13d550u: goto label_13d550;
        case 0x13d554u: goto label_13d554;
        case 0x13d558u: goto label_13d558;
        case 0x13d55cu: goto label_13d55c;
        case 0x13d560u: goto label_13d560;
        case 0x13d564u: goto label_13d564;
        case 0x13d568u: goto label_13d568;
        case 0x13d56cu: goto label_13d56c;
        case 0x13d570u: goto label_13d570;
        case 0x13d574u: goto label_13d574;
        default: break;
    }

    ctx->pc = 0x13d460u;

label_13d460:
    // 0x13d460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13d464:
    // 0x13d464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13d468:
    // 0x13d468: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13d46c:
    // 0x13d46c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d470:
    // 0x13d470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d474:
    // 0x13d474: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d478:
    // 0x13d478: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13d478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d47c:
    // 0x13d47c: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
label_13d480:
    if (ctx->pc == 0x13D480u) {
        ctx->pc = 0x13D484u;
        goto label_13d484;
    }
    ctx->pc = 0x13D47Cu;
    {
        const bool branch_taken_0x13d47c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x13d47c) {
            ctx->pc = 0x13D494u;
            goto label_13d494;
        }
    }
    ctx->pc = 0x13D484u;
label_13d484:
    // 0x13d484: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13d488:
    // 0x13d488: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13d488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13d48c:
    // 0x13d48c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_13d490:
    if (ctx->pc == 0x13D490u) {
        ctx->pc = 0x13D494u;
        goto label_13d494;
    }
    ctx->pc = 0x13D48Cu;
    {
        const bool branch_taken_0x13d48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d48c) {
            ctx->pc = 0x13D4A0u;
            goto label_13d4a0;
        }
    }
    ctx->pc = 0x13D494u;
label_13d494:
    // 0x13d494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d498:
    // 0x13d498: 0x10000030  b           . + 4 + (0x30 << 2)
label_13d49c:
    if (ctx->pc == 0x13D49Cu) {
        ctx->pc = 0x13D4A0u;
        goto label_13d4a0;
    }
    ctx->pc = 0x13D498u;
    {
        const bool branch_taken_0x13d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d498) {
            ctx->pc = 0x13D55Cu;
            goto label_13d55c;
        }
    }
    ctx->pc = 0x13D4A0u;
label_13d4a0:
    // 0x13d4a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13d4a4:
    // 0x13d4a4: 0xc04f4f4  jal         func_13D3D0
label_13d4a8:
    if (ctx->pc == 0x13D4A8u) {
        ctx->pc = 0x13D4ACu;
        goto label_13d4ac;
    }
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D3D0u;
    if (runtime->hasFunction(0x13D3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4ACu; }
        if (ctx->pc != 0x13D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewTexAnimeData__15mgCTextureAnimeFP9mgCMemory_0x13d3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4ACu; }
        if (ctx->pc != 0x13D4ACu) { return; }
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d4b0:
    // 0x13d4b0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_13d4b4:
    if (ctx->pc == 0x13D4B4u) {
        ctx->pc = 0x13D4B8u;
        goto label_13d4b8;
    }
    ctx->pc = 0x13D4B0u;
    {
        const bool branch_taken_0x13d4b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d4b0) {
            ctx->pc = 0x13D4C4u;
            goto label_13d4c4;
        }
    }
    ctx->pc = 0x13D4B8u;
label_13d4b8:
    // 0x13d4b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d4bc:
    // 0x13d4bc: 0x10000027  b           . + 4 + (0x27 << 2)
label_13d4c0:
    if (ctx->pc == 0x13D4C0u) {
        ctx->pc = 0x13D4C4u;
        goto label_13d4c4;
    }
    ctx->pc = 0x13D4BCu;
    {
        const bool branch_taken_0x13d4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4bc) {
            ctx->pc = 0x13D55Cu;
            goto label_13d55c;
        }
    }
    ctx->pc = 0x13D4C4u;
label_13d4c4:
    // 0x13d4c4: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x13d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_13d4c8:
    // 0x13d4c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_13d4cc:
    if (ctx->pc == 0x13D4CCu) {
        ctx->pc = 0x13D4D0u;
        goto label_13d4d0;
    }
    ctx->pc = 0x13D4C8u;
    {
        const bool branch_taken_0x13d4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d4c8) {
            ctx->pc = 0x13D4DCu;
            goto label_13d4dc;
        }
    }
    ctx->pc = 0x13D4D0u;
label_13d4d0:
    // 0x13d4d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d4d4:
    // 0x13d4d4: 0x10000021  b           . + 4 + (0x21 << 2)
label_13d4d8:
    if (ctx->pc == 0x13D4D8u) {
        ctx->pc = 0x13D4DCu;
        goto label_13d4dc;
    }
    ctx->pc = 0x13D4D4u;
    {
        const bool branch_taken_0x13d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4d4) {
            ctx->pc = 0x13D55Cu;
            goto label_13d55c;
        }
    }
    ctx->pc = 0x13D4DCu;
label_13d4dc:
    // 0x13d4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d4e0:
    // 0x13d4e0: 0x8e19003c  lw          $t9, 0x3C($s0)
    ctx->pc = 0x13d4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13d4e4:
    // 0x13d4e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13d4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13d4e8:
    // 0x13d4e8: 0x320f809  jalr        $t9
label_13d4ec:
    if (ctx->pc == 0x13D4ECu) {
        ctx->pc = 0x13D4F0u;
        goto label_13d4f0;
    }
    ctx->pc = 0x13D4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D4F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13D4F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13D4F0u; }
            if (ctx->pc != 0x13D4F0u) { return; }
        }
        }
    }
    ctx->pc = 0x13D4F0u;
label_13d4f0:
    // 0x13d4f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13d4f4:
    // 0x13d4f4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x13d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_13d4f8:
    // 0x13d4f8: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_13d4fc:
    // 0x13d4fc: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x13d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_13d500:
    // 0x13d500: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_13d504:
    if (ctx->pc == 0x13D504u) {
        ctx->pc = 0x13D508u;
        goto label_13d508;
    }
    ctx->pc = 0x13D500u;
    {
        const bool branch_taken_0x13d500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d500) {
            ctx->pc = 0x13D51Cu;
            goto label_13d51c;
        }
    }
    ctx->pc = 0x13D508u;
label_13d508:
    // 0x13d508: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13d508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_13d50c:
    // 0x13d50c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d510:
    // 0x13d510: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x13d510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
label_13d514:
    // 0x13d514: 0x10000010  b           . + 4 + (0x10 << 2)
label_13d518:
    if (ctx->pc == 0x13D518u) {
        ctx->pc = 0x13D51Cu;
        goto label_13d51c;
    }
    ctx->pc = 0x13D514u;
    {
        const bool branch_taken_0x13d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d514) {
            ctx->pc = 0x13D558u;
            goto label_13d558;
        }
    }
    ctx->pc = 0x13D51Cu;
label_13d51c:
    // 0x13d51c: 0x10000005  b           . + 4 + (0x5 << 2)
label_13d520:
    if (ctx->pc == 0x13D520u) {
        ctx->pc = 0x13D524u;
        goto label_13d524;
    }
    ctx->pc = 0x13D51Cu;
    {
        const bool branch_taken_0x13d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d51c) {
            ctx->pc = 0x13D534u;
            goto label_13d534;
        }
    }
    ctx->pc = 0x13D524u;
label_13d524:
    // 0x13d524: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d528:
    // 0x13d528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13d52c:
    if (ctx->pc == 0x13D52Cu) {
        ctx->pc = 0x13D530u;
        goto label_13d530;
    }
    ctx->pc = 0x13D528u;
    {
        const bool branch_taken_0x13d528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d528) {
            ctx->pc = 0x13D548u;
            goto label_13d548;
        }
    }
    ctx->pc = 0x13D530u;
label_13d530:
    // 0x13d530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d534:
    // 0x13d534: 0x0  nop
    ctx->pc = 0x13d534u;
    // NOP
label_13d538:
    // 0x13d538: 0x0  nop
    ctx->pc = 0x13d538u;
    // NOP
label_13d53c:
    // 0x13d53c: 0x0  nop
    ctx->pc = 0x13d53cu;
    // NOP
label_13d540:
    // 0x13d540: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_13d544:
    if (ctx->pc == 0x13D544u) {
        ctx->pc = 0x13D548u;
        goto label_13d548;
    }
    ctx->pc = 0x13D540u;
    {
        const bool branch_taken_0x13d540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d540) {
            ctx->pc = 0x13D524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d524;
        }
    }
    ctx->pc = 0x13D548u;
label_13d548:
    // 0x13d548: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x13d548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_13d54c:
    // 0x13d54c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_13d550:
    if (ctx->pc == 0x13D550u) {
        ctx->pc = 0x13D554u;
        goto label_13d554;
    }
    ctx->pc = 0x13D54Cu;
    {
        const bool branch_taken_0x13d54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d54c) {
            ctx->pc = 0x13D558u;
            goto label_13d558;
        }
    }
    ctx->pc = 0x13D554u;
label_13d554:
    // 0x13d554: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x13d554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_13d558:
    // 0x13d558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d55c:
    // 0x13d55c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13d560:
    // 0x13d560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13d564:
    // 0x13d564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d568:
    // 0x13d568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d56c:
    // 0x13d56c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d570:
    // 0x13d570: 0x3e00008  jr          $ra
label_13d574:
    if (ctx->pc == 0x13D574u) {
        ctx->pc = 0x13D578u;
        goto label_fallthrough_0x13d570;
    }
    ctx->pc = 0x13D570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13d570:
    ctx->pc = 0x13D578u;
}
