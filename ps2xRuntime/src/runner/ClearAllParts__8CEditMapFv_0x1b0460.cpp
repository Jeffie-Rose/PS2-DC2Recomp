#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearAllParts__8CEditMapFv
// Address: 0x1b0460 - 0x1b0660
void ClearAllParts__8CEditMapFv_0x1b0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearAllParts__8CEditMapFv_0x1b0460");
#endif

    switch (ctx->pc) {
        case 0x1b0460u: goto label_1b0460;
        case 0x1b0464u: goto label_1b0464;
        case 0x1b0468u: goto label_1b0468;
        case 0x1b046cu: goto label_1b046c;
        case 0x1b0470u: goto label_1b0470;
        case 0x1b0474u: goto label_1b0474;
        case 0x1b0478u: goto label_1b0478;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0480u: goto label_1b0480;
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b048cu: goto label_1b048c;
        case 0x1b0490u: goto label_1b0490;
        case 0x1b0494u: goto label_1b0494;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b049cu: goto label_1b049c;
        case 0x1b04a0u: goto label_1b04a0;
        case 0x1b04a4u: goto label_1b04a4;
        case 0x1b04a8u: goto label_1b04a8;
        case 0x1b04acu: goto label_1b04ac;
        case 0x1b04b0u: goto label_1b04b0;
        case 0x1b04b4u: goto label_1b04b4;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04bcu: goto label_1b04bc;
        case 0x1b04c0u: goto label_1b04c0;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04ccu: goto label_1b04cc;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04d4u: goto label_1b04d4;
        case 0x1b04d8u: goto label_1b04d8;
        case 0x1b04dcu: goto label_1b04dc;
        case 0x1b04e0u: goto label_1b04e0;
        case 0x1b04e4u: goto label_1b04e4;
        case 0x1b04e8u: goto label_1b04e8;
        case 0x1b04ecu: goto label_1b04ec;
        case 0x1b04f0u: goto label_1b04f0;
        case 0x1b04f4u: goto label_1b04f4;
        case 0x1b04f8u: goto label_1b04f8;
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0500u: goto label_1b0500;
        case 0x1b0504u: goto label_1b0504;
        case 0x1b0508u: goto label_1b0508;
        case 0x1b050cu: goto label_1b050c;
        case 0x1b0510u: goto label_1b0510;
        case 0x1b0514u: goto label_1b0514;
        case 0x1b0518u: goto label_1b0518;
        case 0x1b051cu: goto label_1b051c;
        case 0x1b0520u: goto label_1b0520;
        case 0x1b0524u: goto label_1b0524;
        case 0x1b0528u: goto label_1b0528;
        case 0x1b052cu: goto label_1b052c;
        case 0x1b0530u: goto label_1b0530;
        case 0x1b0534u: goto label_1b0534;
        case 0x1b0538u: goto label_1b0538;
        case 0x1b053cu: goto label_1b053c;
        case 0x1b0540u: goto label_1b0540;
        case 0x1b0544u: goto label_1b0544;
        case 0x1b0548u: goto label_1b0548;
        case 0x1b054cu: goto label_1b054c;
        case 0x1b0550u: goto label_1b0550;
        case 0x1b0554u: goto label_1b0554;
        case 0x1b0558u: goto label_1b0558;
        case 0x1b055cu: goto label_1b055c;
        case 0x1b0560u: goto label_1b0560;
        case 0x1b0564u: goto label_1b0564;
        case 0x1b0568u: goto label_1b0568;
        case 0x1b056cu: goto label_1b056c;
        case 0x1b0570u: goto label_1b0570;
        case 0x1b0574u: goto label_1b0574;
        case 0x1b0578u: goto label_1b0578;
        case 0x1b057cu: goto label_1b057c;
        case 0x1b0580u: goto label_1b0580;
        case 0x1b0584u: goto label_1b0584;
        case 0x1b0588u: goto label_1b0588;
        case 0x1b058cu: goto label_1b058c;
        case 0x1b0590u: goto label_1b0590;
        case 0x1b0594u: goto label_1b0594;
        case 0x1b0598u: goto label_1b0598;
        case 0x1b059cu: goto label_1b059c;
        case 0x1b05a0u: goto label_1b05a0;
        case 0x1b05a4u: goto label_1b05a4;
        case 0x1b05a8u: goto label_1b05a8;
        case 0x1b05acu: goto label_1b05ac;
        case 0x1b05b0u: goto label_1b05b0;
        case 0x1b05b4u: goto label_1b05b4;
        case 0x1b05b8u: goto label_1b05b8;
        case 0x1b05bcu: goto label_1b05bc;
        case 0x1b05c0u: goto label_1b05c0;
        case 0x1b05c4u: goto label_1b05c4;
        case 0x1b05c8u: goto label_1b05c8;
        case 0x1b05ccu: goto label_1b05cc;
        case 0x1b05d0u: goto label_1b05d0;
        case 0x1b05d4u: goto label_1b05d4;
        case 0x1b05d8u: goto label_1b05d8;
        case 0x1b05dcu: goto label_1b05dc;
        case 0x1b05e0u: goto label_1b05e0;
        case 0x1b05e4u: goto label_1b05e4;
        case 0x1b05e8u: goto label_1b05e8;
        case 0x1b05ecu: goto label_1b05ec;
        case 0x1b05f0u: goto label_1b05f0;
        case 0x1b05f4u: goto label_1b05f4;
        case 0x1b05f8u: goto label_1b05f8;
        case 0x1b05fcu: goto label_1b05fc;
        case 0x1b0600u: goto label_1b0600;
        case 0x1b0604u: goto label_1b0604;
        case 0x1b0608u: goto label_1b0608;
        case 0x1b060cu: goto label_1b060c;
        case 0x1b0610u: goto label_1b0610;
        case 0x1b0614u: goto label_1b0614;
        case 0x1b0618u: goto label_1b0618;
        case 0x1b061cu: goto label_1b061c;
        case 0x1b0620u: goto label_1b0620;
        case 0x1b0624u: goto label_1b0624;
        case 0x1b0628u: goto label_1b0628;
        case 0x1b062cu: goto label_1b062c;
        case 0x1b0630u: goto label_1b0630;
        case 0x1b0634u: goto label_1b0634;
        case 0x1b0638u: goto label_1b0638;
        case 0x1b063cu: goto label_1b063c;
        case 0x1b0640u: goto label_1b0640;
        case 0x1b0644u: goto label_1b0644;
        case 0x1b0648u: goto label_1b0648;
        case 0x1b064cu: goto label_1b064c;
        case 0x1b0650u: goto label_1b0650;
        case 0x1b0654u: goto label_1b0654;
        case 0x1b0658u: goto label_1b0658;
        case 0x1b065cu: goto label_1b065c;
        default: break;
    }

    ctx->pc = 0x1b0460u;

label_1b0460:
    // 0x1b0460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b0464:
    // 0x1b0464: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b0468:
    // 0x1b0468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b046c:
    // 0x1b046c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b0470:
    // 0x1b0470: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b0470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0474:
    // 0x1b0474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b0478:
    // 0x1b0478: 0x26840d10  addiu       $a0, $s4, 0xD10
    ctx->pc = 0x1b0478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
label_1b047c:
    // 0x1b047c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b0480:
    // 0x1b0480: 0xc04e674  jal         func_1399D0
label_1b0484:
    if (ctx->pc == 0x1B0484u) {
        ctx->pc = 0x1B0484u;
            // 0x1b0484: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B0488u;
        goto label_1b0488;
    }
    ctx->pc = 0x1B0480u;
    SET_GPR_U32(ctx, 31, 0x1B0488u);
    ctx->pc = 0x1B0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0480u;
            // 0x1b0484: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1399D0u;
    if (runtime->hasFunction(0x1399D0u)) {
        auto targetFn = runtime->lookupFunction(0x1399D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0488u; }
        if (ctx->pc != 0x1B0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearHeapMem__9mgCMemoryFv_0x1399d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0488u; }
        if (ctx->pc != 0x1B0488u) { return; }
    }
    ctx->pc = 0x1B0488u;
label_1b0488:
    // 0x1b0488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b048c:
    // 0x1b048c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b0490:
    if (ctx->pc == 0x1B0490u) {
        ctx->pc = 0x1B0490u;
            // 0x1b0490: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0494u;
        goto label_1b0494;
    }
    ctx->pc = 0x1B048Cu;
    {
        const bool branch_taken_0x1b048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B048Cu;
            // 0x1b0490: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b048c) {
            ctx->pc = 0x1B04B4u;
            goto label_1b04b4;
        }
    }
    ctx->pc = 0x1B0494u;
label_1b0494:
    // 0x1b0494: 0x8e820d44  lw          $v0, 0xD44($s4)
    ctx->pc = 0x1b0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3396)));
label_1b0498:
    // 0x1b0498: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1b0498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1b049c:
    // 0x1b049c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b049cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b04a0:
    // 0x1b04a0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b04a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b04a4:
    // 0x1b04a4: 0x320f809  jalr        $t9
label_1b04a8:
    if (ctx->pc == 0x1B04A8u) {
        ctx->pc = 0x1B04ACu;
        goto label_1b04ac;
    }
    ctx->pc = 0x1B04A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B04ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B04ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B04ACu; }
            if (ctx->pc != 0x1B04ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B04ACu;
label_1b04ac:
    // 0x1b04ac: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x1b04acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_1b04b0:
    // 0x1b04b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b04b4:
    // 0x1b04b4: 0x0  nop
    ctx->pc = 0x1b04b4u;
    // NOP
label_1b04b8:
    // 0x1b04b8: 0x8e820d40  lw          $v0, 0xD40($s4)
    ctx->pc = 0x1b04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3392)));
label_1b04bc:
    // 0x1b04bc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b04bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b04c0:
    // 0x1b04c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1b04c4:
    if (ctx->pc == 0x1B04C4u) {
        ctx->pc = 0x1B04C4u;
            // 0x1b04c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B04C8u;
        goto label_1b04c8;
    }
    ctx->pc = 0x1B04C0u;
    {
        const bool branch_taken_0x1b04c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B04C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04C0u;
            // 0x1b04c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04c0) {
            ctx->pc = 0x1B0494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0494;
        }
    }
    ctx->pc = 0x1B04C8u;
label_1b04c8:
    // 0x1b04c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b04c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b04cc:
    // 0x1b04cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b04d0:
    if (ctx->pc == 0x1B04D0u) {
        ctx->pc = 0x1B04D0u;
            // 0x1b04d0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B04D4u;
        goto label_1b04d4;
    }
    ctx->pc = 0x1B04CCu;
    {
        const bool branch_taken_0x1b04cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04CCu;
            // 0x1b04d0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04cc) {
            ctx->pc = 0x1B04E8u;
            goto label_1b04e8;
        }
    }
    ctx->pc = 0x1B04D4u;
label_1b04d4:
    // 0x1b04d4: 0x8e820f4c  lw          $v0, 0xF4C($s4)
    ctx->pc = 0x1b04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3916)));
label_1b04d8:
    // 0x1b04d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b04d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b04dc:
    // 0x1b04dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b04e0:
    // 0x1b04e0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1b04e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1b04e4:
    // 0x1b04e4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b04e8:
    // 0x1b04e8: 0x8e820f48  lw          $v0, 0xF48($s4)
    ctx->pc = 0x1b04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3912)));
label_1b04ec:
    // 0x1b04ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b04ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b04f0:
    // 0x1b04f0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1b04f4:
    if (ctx->pc == 0x1B04F4u) {
        ctx->pc = 0x1B04F8u;
        goto label_1b04f8;
    }
    ctx->pc = 0x1B04F0u;
    {
        const bool branch_taken_0x1b04f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b04f0) {
            ctx->pc = 0x1B04D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b04d4;
        }
    }
    ctx->pc = 0x1B04F8u;
label_1b04f8:
    // 0x1b04f8: 0xc06c0e4  jal         func_1B0390
label_1b04fc:
    if (ctx->pc == 0x1B04FCu) {
        ctx->pc = 0x1B04FCu;
            // 0x1b04fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0500u;
        goto label_1b0500;
    }
    ctx->pc = 0x1B04F8u;
    SET_GPR_U32(ctx, 31, 0x1B0500u);
    ctx->pc = 0x1B04FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04F8u;
            // 0x1b04fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0390u;
    if (runtime->hasFunction(0x1B0390u)) {
        auto targetFn = runtime->lookupFunction(0x1B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0500u; }
        if (ctx->pc != 0x1B0500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearGrid__8CEditMapFv_0x1b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0500u; }
        if (ctx->pc != 0x1B0500u) { return; }
    }
    ctx->pc = 0x1B0500u;
label_1b0500:
    // 0x1b0500: 0xc06c100  jal         func_1B0400
label_1b0504:
    if (ctx->pc == 0x1B0504u) {
        ctx->pc = 0x1B0504u;
            // 0x1b0504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0508u;
        goto label_1b0508;
    }
    ctx->pc = 0x1B0500u;
    SET_GPR_U32(ctx, 31, 0x1B0508u);
    ctx->pc = 0x1B0504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0500u;
            // 0x1b0504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0400u;
    if (runtime->hasFunction(0x1B0400u)) {
        auto targetFn = runtime->lookupFunction(0x1B0400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0508u; }
        if (ctx->pc != 0x1B0508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearHouse__8CEditMapFv_0x1b0400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0508u; }
        if (ctx->pc != 0x1B0508u) { return; }
    }
    ctx->pc = 0x1B0508u;
label_1b0508:
    // 0x1b0508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b050c:
    // 0x1b050c: 0x10000046  b           . + 4 + (0x46 << 2)
label_1b0510:
    if (ctx->pc == 0x1B0510u) {
        ctx->pc = 0x1B0510u;
            // 0x1b0510: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0514u;
        goto label_1b0514;
    }
    ctx->pc = 0x1B050Cu;
    {
        const bool branch_taken_0x1b050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B050Cu;
            // 0x1b0510: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b050c) {
            ctx->pc = 0x1B0628u;
            goto label_1b0628;
        }
    }
    ctx->pc = 0x1B0514u;
label_1b0514:
    // 0x1b0514: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1b0514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1b0518:
    // 0x1b0518: 0x8e850fa0  lw          $a1, 0xFA0($s4)
    ctx->pc = 0x1b0518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4000)));
label_1b051c:
    // 0x1b051c: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x1b051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
label_1b0520:
    // 0x1b0520: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1b0520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b0524:
    // 0x1b0524: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b0524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0528:
    // 0x1b0528: 0xb28021  addu        $s0, $a1, $s2
    ctx->pc = 0x1b0528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1b052c:
    // 0x1b052c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1b052cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1b0530:
    // 0x1b0530: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1b0530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b0534:
    // 0x1b0534: 0xc06c3c0  jal         func_1B0F00
label_1b0538:
    if (ctx->pc == 0x1B0538u) {
        ctx->pc = 0x1B0538u;
            // 0x1b0538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B053Cu;
        goto label_1b053c;
    }
    ctx->pc = 0x1B0534u;
    SET_GPR_U32(ctx, 31, 0x1B053Cu);
    ctx->pc = 0x1B0538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0534u;
            // 0x1b0538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B053Cu; }
        if (ctx->pc != 0x1B053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B053Cu; }
        if (ctx->pc != 0x1B053Cu) { return; }
    }
    ctx->pc = 0x1B053Cu;
label_1b053c:
    // 0x1b053c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1b0540:
    // 0x1b0540: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b0540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0544:
    // 0x1b0544: 0xc0a93b4  jal         func_2A4ED0
label_1b0548:
    if (ctx->pc == 0x1B0548u) {
        ctx->pc = 0x1B0548u;
            // 0x1b0548: 0x26840f94  addiu       $a0, $s4, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3988));
        ctx->pc = 0x1B054Cu;
        goto label_1b054c;
    }
    ctx->pc = 0x1B0544u;
    SET_GPR_U32(ctx, 31, 0x1B054Cu);
    ctx->pc = 0x1B0548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0544u;
            // 0x1b0548: 0x26840f94  addiu       $a0, $s4, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4ED0u;
    if (runtime->hasFunction(0x2A4ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B054Cu; }
        if (ctx->pc != 0x1B054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__13CEditInfoMngrFi_0x2a4ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B054Cu; }
        if (ctx->pc != 0x1B054Cu) { return; }
    }
    ctx->pc = 0x1B054Cu;
label_1b054c:
    // 0x1b054c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b0550:
    if (ctx->pc == 0x1B0550u) {
        ctx->pc = 0x1B0550u;
            // 0x1b0550: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0554u;
        goto label_1b0554;
    }
    ctx->pc = 0x1B054Cu;
    {
        const bool branch_taken_0x1b054c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B054Cu;
            // 0x1b0550: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b054c) {
            ctx->pc = 0x1B056Cu;
            goto label_1b056c;
        }
    }
    ctx->pc = 0x1B0554u;
label_1b0554:
    // 0x1b0554: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1b0558:
    // 0x1b0558: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1b0558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1b055c:
    // 0x1b055c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0560:
    // 0x1b0560: 0xc06c7d4  jal         func_1B1F50
label_1b0564:
    if (ctx->pc == 0x1B0564u) {
        ctx->pc = 0x1B0564u;
            // 0x1b0564: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B0568u;
        goto label_1b0568;
    }
    ctx->pc = 0x1B0560u;
    SET_GPR_U32(ctx, 31, 0x1B0568u);
    ctx->pc = 0x1B0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0560u;
            // 0x1b0564: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F50u;
    if (runtime->hasFunction(0x1B1F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B1F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0568u; }
        if (ctx->pc != 0x1B0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__8CEditMapFPcPfPf_0x1b1f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0568u; }
        if (ctx->pc != 0x1B0568u) { return; }
    }
    ctx->pc = 0x1B0568u;
label_1b0568:
    // 0x1b0568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b0568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b056c:
    // 0x1b056c: 0x0  nop
    ctx->pc = 0x1b056cu;
    // NOP
label_1b0570:
    // 0x1b0570: 0x8e830f80  lw          $v1, 0xF80($s4)
    ctx->pc = 0x1b0570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3968)));
label_1b0574:
    // 0x1b0574: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0578:
    // 0x1b0578: 0x14640028  bne         $v1, $a0, . + 4 + (0x28 << 2)
label_1b057c:
    if (ctx->pc == 0x1B057Cu) {
        ctx->pc = 0x1B0580u;
        goto label_1b0580;
    }
    ctx->pc = 0x1B0578u;
    {
        const bool branch_taken_0x1b0578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b0578) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B0580u;
label_1b0580:
    // 0x1b0580: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_1b0584:
    if (ctx->pc == 0x1B0584u) {
        ctx->pc = 0x1B0584u;
            // 0x1b0584: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B0588u;
        goto label_1b0588;
    }
    ctx->pc = 0x1B0580u;
    {
        const bool branch_taken_0x1b0580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0580u;
            // 0x1b0584: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0580) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B0588u;
label_1b0588:
    // 0x1b0588: 0x1263001d  beq         $s3, $v1, . + 4 + (0x1D << 2)
label_1b058c:
    if (ctx->pc == 0x1B058Cu) {
        ctx->pc = 0x1B058Cu;
            // 0x1b058c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0590u;
        goto label_1b0590;
    }
    ctx->pc = 0x1B0588u;
    {
        const bool branch_taken_0x1b0588 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0588u;
            // 0x1b058c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0588) {
            ctx->pc = 0x1B0600u;
            goto label_1b0600;
        }
    }
    ctx->pc = 0x1B0590u;
label_1b0590:
    // 0x1b0590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0594:
    // 0x1b0594: 0x12630014  beq         $s3, $v1, . + 4 + (0x14 << 2)
label_1b0598:
    if (ctx->pc == 0x1B0598u) {
        ctx->pc = 0x1B059Cu;
        goto label_1b059c;
    }
    ctx->pc = 0x1B0594u;
    {
        const bool branch_taken_0x1b0594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b0594) {
            ctx->pc = 0x1B05E8u;
            goto label_1b05e8;
        }
    }
    ctx->pc = 0x1B059Cu;
label_1b059c:
    // 0x1b059c: 0x1264000c  beq         $s3, $a0, . + 4 + (0xC << 2)
label_1b05a0:
    if (ctx->pc == 0x1B05A0u) {
        ctx->pc = 0x1B05A4u;
        goto label_1b05a4;
    }
    ctx->pc = 0x1B059Cu;
    {
        const bool branch_taken_0x1b059c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b059c) {
            ctx->pc = 0x1B05D0u;
            goto label_1b05d0;
        }
    }
    ctx->pc = 0x1B05A4u;
label_1b05a4:
    // 0x1b05a4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1b05a8:
    if (ctx->pc == 0x1B05A8u) {
        ctx->pc = 0x1B05ACu;
        goto label_1b05ac;
    }
    ctx->pc = 0x1B05A4u;
    {
        const bool branch_taken_0x1b05a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05a4) {
            ctx->pc = 0x1B05B4u;
            goto label_1b05b4;
        }
    }
    ctx->pc = 0x1B05ACu;
label_1b05ac:
    // 0x1b05ac: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b05b0:
    if (ctx->pc == 0x1B05B0u) {
        ctx->pc = 0x1B05B4u;
        goto label_1b05b4;
    }
    ctx->pc = 0x1B05ACu;
    {
        const bool branch_taken_0x1b05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05ac) {
            ctx->pc = 0x1B0614u;
            goto label_1b0614;
        }
    }
    ctx->pc = 0x1B05B4u;
label_1b05b4:
    // 0x1b05b4: 0x0  nop
    ctx->pc = 0x1b05b4u;
    // NOP
label_1b05b8:
    // 0x1b05b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b05bc:
    // 0x1b05bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b05bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b05c0:
    // 0x1b05c0: 0xc057508  jal         func_15D420
label_1b05c4:
    if (ctx->pc == 0x1B05C4u) {
        ctx->pc = 0x1B05C4u;
            // 0x1b05c4: 0x24a56518  addiu       $a1, $a1, 0x6518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25880));
        ctx->pc = 0x1B05C8u;
        goto label_1b05c8;
    }
    ctx->pc = 0x1B05C0u;
    SET_GPR_U32(ctx, 31, 0x1B05C8u);
    ctx->pc = 0x1B05C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05C0u;
            // 0x1b05c4: 0x24a56518  addiu       $a1, $a1, 0x6518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05C8u; }
        if (ctx->pc != 0x1B05C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05C8u; }
        if (ctx->pc != 0x1B05C8u) { return; }
    }
    ctx->pc = 0x1B05C8u;
label_1b05c8:
    // 0x1b05c8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b05cc:
    if (ctx->pc == 0x1B05CCu) {
        ctx->pc = 0x1B05CCu;
            // 0x1b05cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B05D0u;
        goto label_1b05d0;
    }
    ctx->pc = 0x1B05C8u;
    {
        const bool branch_taken_0x1b05c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05C8u;
            // 0x1b05cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05c8) {
            ctx->pc = 0x1B0614u;
            goto label_1b0614;
        }
    }
    ctx->pc = 0x1B05D0u;
label_1b05d0:
    // 0x1b05d0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b05d4:
    // 0x1b05d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b05d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b05d8:
    // 0x1b05d8: 0xc057508  jal         func_15D420
label_1b05dc:
    if (ctx->pc == 0x1B05DCu) {
        ctx->pc = 0x1B05DCu;
            // 0x1b05dc: 0x24a56528  addiu       $a1, $a1, 0x6528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25896));
        ctx->pc = 0x1B05E0u;
        goto label_1b05e0;
    }
    ctx->pc = 0x1B05D8u;
    SET_GPR_U32(ctx, 31, 0x1B05E0u);
    ctx->pc = 0x1B05DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05D8u;
            // 0x1b05dc: 0x24a56528  addiu       $a1, $a1, 0x6528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05E0u; }
        if (ctx->pc != 0x1B05E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05E0u; }
        if (ctx->pc != 0x1B05E0u) { return; }
    }
    ctx->pc = 0x1B05E0u;
label_1b05e0:
    // 0x1b05e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b05e4:
    if (ctx->pc == 0x1B05E4u) {
        ctx->pc = 0x1B05E4u;
            // 0x1b05e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B05E8u;
        goto label_1b05e8;
    }
    ctx->pc = 0x1B05E0u;
    {
        const bool branch_taken_0x1b05e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05E0u;
            // 0x1b05e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05e0) {
            ctx->pc = 0x1B0614u;
            goto label_1b0614;
        }
    }
    ctx->pc = 0x1B05E8u;
label_1b05e8:
    // 0x1b05e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b05ec:
    // 0x1b05ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b05ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b05f0:
    // 0x1b05f0: 0xc057508  jal         func_15D420
label_1b05f4:
    if (ctx->pc == 0x1B05F4u) {
        ctx->pc = 0x1B05F4u;
            // 0x1b05f4: 0x24a56538  addiu       $a1, $a1, 0x6538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25912));
        ctx->pc = 0x1B05F8u;
        goto label_1b05f8;
    }
    ctx->pc = 0x1B05F0u;
    SET_GPR_U32(ctx, 31, 0x1B05F8u);
    ctx->pc = 0x1B05F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05F0u;
            // 0x1b05f4: 0x24a56538  addiu       $a1, $a1, 0x6538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05F8u; }
        if (ctx->pc != 0x1B05F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05F8u; }
        if (ctx->pc != 0x1B05F8u) { return; }
    }
    ctx->pc = 0x1B05F8u;
label_1b05f8:
    // 0x1b05f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b05fc:
    if (ctx->pc == 0x1B05FCu) {
        ctx->pc = 0x1B05FCu;
            // 0x1b05fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0600u;
        goto label_1b0600;
    }
    ctx->pc = 0x1B05F8u;
    {
        const bool branch_taken_0x1b05f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05F8u;
            // 0x1b05fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05f8) {
            ctx->pc = 0x1B0614u;
            goto label_1b0614;
        }
    }
    ctx->pc = 0x1B0600u;
label_1b0600:
    // 0x1b0600: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b0604:
    // 0x1b0604: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b0604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0608:
    // 0x1b0608: 0xc057508  jal         func_15D420
label_1b060c:
    if (ctx->pc == 0x1B060Cu) {
        ctx->pc = 0x1B060Cu;
            // 0x1b060c: 0x24a56548  addiu       $a1, $a1, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
        ctx->pc = 0x1B0610u;
        goto label_1b0610;
    }
    ctx->pc = 0x1B0608u;
    SET_GPR_U32(ctx, 31, 0x1B0610u);
    ctx->pc = 0x1B060Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0608u;
            // 0x1b060c: 0x24a56548  addiu       $a1, $a1, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0610u; }
        if (ctx->pc != 0x1B0610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0610u; }
        if (ctx->pc != 0x1B0610u) { return; }
    }
    ctx->pc = 0x1B0610u;
label_1b0610:
    // 0x1b0610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0614:
    // 0x1b0614: 0x0  nop
    ctx->pc = 0x1b0614u;
    // NOP
label_1b0618:
    // 0x1b0618: 0xae250314  sw          $a1, 0x314($s1)
    ctx->pc = 0x1b0618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 5));
label_1b061c:
    // 0x1b061c: 0x0  nop
    ctx->pc = 0x1b061cu;
    // NOP
label_1b0620:
    // 0x1b0620: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1b0624:
    // 0x1b0624: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b0628:
    // 0x1b0628: 0x8e830f9c  lw          $v1, 0xF9C($s4)
    ctx->pc = 0x1b0628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3996)));
label_1b062c:
    // 0x1b062c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1b062cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b0630:
    // 0x1b0630: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_1b0634:
    if (ctx->pc == 0x1B0634u) {
        ctx->pc = 0x1B0634u;
            // 0x1b0634: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B0638u;
        goto label_1b0638;
    }
    ctx->pc = 0x1B0630u;
    {
        const bool branch_taken_0x1b0630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0630u;
            // 0x1b0634: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0630) {
            ctx->pc = 0x1B0514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0514;
        }
    }
    ctx->pc = 0x1B0638u;
label_1b0638:
    // 0x1b0638: 0xae830f64  sw          $v1, 0xF64($s4)
    ctx->pc = 0x1b0638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3940), GPR_U32(ctx, 3));
label_1b063c:
    // 0x1b063c: 0xae800f68  sw          $zero, 0xF68($s4)
    ctx->pc = 0x1b063cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3944), GPR_U32(ctx, 0));
label_1b0640:
    // 0x1b0640: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b0640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0644:
    // 0x1b0644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0648:
    // 0x1b0648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b064c:
    // 0x1b064c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b064cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0650:
    // 0x1b0650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0654:
    // 0x1b0654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0658:
    // 0x1b0658: 0x3e00008  jr          $ra
label_1b065c:
    if (ctx->pc == 0x1B065Cu) {
        ctx->pc = 0x1B065Cu;
            // 0x1b065c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1B0660u;
        goto label_fallthrough_0x1b0658;
    }
    ctx->pc = 0x1B0658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0658u;
            // 0x1b065c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b0658:
    ctx->pc = 0x1B0660u;
}
