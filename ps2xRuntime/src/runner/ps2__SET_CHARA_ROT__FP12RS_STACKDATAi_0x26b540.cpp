#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_ROT__FP12RS_STACKDATAi
// Address: 0x26b540 - 0x26b6c4
void ps2__SET_CHARA_ROT__FP12RS_STACKDATAi_0x26b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_ROT__FP12RS_STACKDATAi_0x26b540");
#endif

    switch (ctx->pc) {
        case 0x26b540u: goto label_26b540;
        case 0x26b544u: goto label_26b544;
        case 0x26b548u: goto label_26b548;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b550u: goto label_26b550;
        case 0x26b554u: goto label_26b554;
        case 0x26b558u: goto label_26b558;
        case 0x26b55cu: goto label_26b55c;
        case 0x26b560u: goto label_26b560;
        case 0x26b564u: goto label_26b564;
        case 0x26b568u: goto label_26b568;
        case 0x26b56cu: goto label_26b56c;
        case 0x26b570u: goto label_26b570;
        case 0x26b574u: goto label_26b574;
        case 0x26b578u: goto label_26b578;
        case 0x26b57cu: goto label_26b57c;
        case 0x26b580u: goto label_26b580;
        case 0x26b584u: goto label_26b584;
        case 0x26b588u: goto label_26b588;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b590u: goto label_26b590;
        case 0x26b594u: goto label_26b594;
        case 0x26b598u: goto label_26b598;
        case 0x26b59cu: goto label_26b59c;
        case 0x26b5a0u: goto label_26b5a0;
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b5a8u: goto label_26b5a8;
        case 0x26b5acu: goto label_26b5ac;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5b8u: goto label_26b5b8;
        case 0x26b5bcu: goto label_26b5bc;
        case 0x26b5c0u: goto label_26b5c0;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5c8u: goto label_26b5c8;
        case 0x26b5ccu: goto label_26b5cc;
        case 0x26b5d0u: goto label_26b5d0;
        case 0x26b5d4u: goto label_26b5d4;
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b5dcu: goto label_26b5dc;
        case 0x26b5e0u: goto label_26b5e0;
        case 0x26b5e4u: goto label_26b5e4;
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b5ecu: goto label_26b5ec;
        case 0x26b5f0u: goto label_26b5f0;
        case 0x26b5f4u: goto label_26b5f4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b5fcu: goto label_26b5fc;
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        default: break;
    }

    ctx->pc = 0x26b540u;

label_26b540:
    // 0x26b540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26b544:
    // 0x26b544: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b548:
    // 0x26b548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26b54c:
    // 0x26b54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26b550:
    // 0x26b550: 0x10a20036  beq         $a1, $v0, . + 4 + (0x36 << 2)
label_26b554:
    if (ctx->pc == 0x26B554u) {
        ctx->pc = 0x26B554u;
            // 0x26b554: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26B558u;
        goto label_26b558;
    }
    ctx->pc = 0x26B550u;
    {
        const bool branch_taken_0x26b550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B550u;
            // 0x26b554: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b550) {
            ctx->pc = 0x26B62Cu;
            goto label_26b62c;
        }
    }
    ctx->pc = 0x26B558u;
label_26b558:
    // 0x26b558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b55c:
    // 0x26b55c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_26b560:
    if (ctx->pc == 0x26B560u) {
        ctx->pc = 0x26B564u;
        goto label_26b564;
    }
    ctx->pc = 0x26B55Cu;
    {
        const bool branch_taken_0x26b55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b55c) {
            ctx->pc = 0x26B56Cu;
            goto label_26b56c;
        }
    }
    ctx->pc = 0x26B564u;
label_26b564:
    // 0x26b564: 0x1000003e  b           . + 4 + (0x3E << 2)
label_26b568:
    if (ctx->pc == 0x26B568u) {
        ctx->pc = 0x26B568u;
            // 0x26b568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B56Cu;
        goto label_26b56c;
    }
    ctx->pc = 0x26B564u;
    {
        const bool branch_taken_0x26b564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B564u;
            // 0x26b568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b564) {
            ctx->pc = 0x26B660u;
            goto label_26b660;
        }
    }
    ctx->pc = 0x26B56Cu;
label_26b56c:
    // 0x26b56c: 0xc097e18  jal         func_25F860
label_26b570:
    if (ctx->pc == 0x26B570u) {
        ctx->pc = 0x26B574u;
        goto label_26b574;
    }
    ctx->pc = 0x26B56Cu;
    SET_GPR_U32(ctx, 31, 0x26B574u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B574u; }
        if (ctx->pc != 0x26B574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B574u; }
        if (ctx->pc != 0x26B574u) { return; }
    }
    ctx->pc = 0x26B574u;
label_26b574:
    // 0x26b574: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_26b578:
    // 0x26b578: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26b578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
label_26b57c:
    // 0x26b57c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26b580:
    if (ctx->pc == 0x26B580u) {
        ctx->pc = 0x26B580u;
            // 0x26b580: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x26B584u;
        goto label_26b584;
    }
    ctx->pc = 0x26B57Cu;
    {
        const bool branch_taken_0x26b57c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B57Cu;
            // 0x26b580: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b57c) {
            ctx->pc = 0x26B58Cu;
            goto label_26b58c;
        }
    }
    ctx->pc = 0x26B584u;
label_26b584:
    // 0x26b584: 0x10000018  b           . + 4 + (0x18 << 2)
label_26b588:
    if (ctx->pc == 0x26B588u) {
        ctx->pc = 0x26B588u;
            // 0x26b588: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B58Cu;
        goto label_26b58c;
    }
    ctx->pc = 0x26B584u;
    {
        const bool branch_taken_0x26b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B584u;
            // 0x26b588: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b584) {
            ctx->pc = 0x26B5E8u;
            goto label_26b5e8;
        }
    }
    ctx->pc = 0x26B58Cu;
label_26b58c:
    // 0x26b58c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
label_26b590:
    // 0x26b590: 0x1000000b  b           . + 4 + (0xB << 2)
label_26b594:
    if (ctx->pc == 0x26B594u) {
        ctx->pc = 0x26B594u;
            // 0x26b594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B598u;
        goto label_26b598;
    }
    ctx->pc = 0x26B590u;
    {
        const bool branch_taken_0x26b590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B590u;
            // 0x26b594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b590) {
            ctx->pc = 0x26B5C0u;
            goto label_26b5c0;
        }
    }
    ctx->pc = 0x26B598u;
label_26b598:
    // 0x26b598: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26b59c:
    // 0x26b59c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_26b5a0:
    if (ctx->pc == 0x26B5A0u) {
        ctx->pc = 0x26B5A4u;
        goto label_26b5a4;
    }
    ctx->pc = 0x26B59Cu;
    {
        const bool branch_taken_0x26b59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b59c) {
            ctx->pc = 0x26B5CCu;
            goto label_26b5cc;
        }
    }
    ctx->pc = 0x26B5A4u;
label_26b5a4:
    // 0x26b5a4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_26b5a8:
    // 0x26b5a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_26b5ac:
    if (ctx->pc == 0x26B5ACu) {
        ctx->pc = 0x26B5B0u;
        goto label_26b5b0;
    }
    ctx->pc = 0x26B5A8u;
    {
        const bool branch_taken_0x26b5a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5a8) {
            ctx->pc = 0x26B5B8u;
            goto label_26b5b8;
        }
    }
    ctx->pc = 0x26B5B0u;
label_26b5b0:
    // 0x26b5b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b5b4:
    if (ctx->pc == 0x26B5B4u) {
        ctx->pc = 0x26B5B4u;
            // 0x26b5b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x26B5B8u;
        goto label_26b5b8;
    }
    ctx->pc = 0x26B5B0u;
    {
        const bool branch_taken_0x26b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5B0u;
            // 0x26b5b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5b0) {
            ctx->pc = 0x26B5C0u;
            goto label_26b5c0;
        }
    }
    ctx->pc = 0x26B5B8u;
label_26b5b8:
    // 0x26b5b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_26b5bc:
    if (ctx->pc == 0x26B5BCu) {
        ctx->pc = 0x26B5BCu;
            // 0x26b5bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B5C0u;
        goto label_26b5c0;
    }
    ctx->pc = 0x26B5B8u;
    {
        const bool branch_taken_0x26b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5B8u;
            // 0x26b5bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5b8) {
            ctx->pc = 0x26B5E8u;
            goto label_26b5e8;
        }
    }
    ctx->pc = 0x26B5C0u;
label_26b5c0:
    // 0x26b5c0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26b5c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26b5c4:
    // 0x26b5c4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_26b5c8:
    if (ctx->pc == 0x26B5C8u) {
        ctx->pc = 0x26B5CCu;
        goto label_26b5cc;
    }
    ctx->pc = 0x26B5C4u;
    {
        const bool branch_taken_0x26b5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b5c4) {
            ctx->pc = 0x26B598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b598;
        }
    }
    ctx->pc = 0x26B5CCu;
label_26b5cc:
    // 0x26b5cc: 0x0  nop
    ctx->pc = 0x26b5ccu;
    // NOP
label_26b5d0:
    // 0x26b5d0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26b5d4:
    if (ctx->pc == 0x26B5D4u) {
        ctx->pc = 0x26B5D4u;
            // 0x26b5d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B5D8u;
        goto label_26b5d8;
    }
    ctx->pc = 0x26B5D0u;
    {
        const bool branch_taken_0x26b5d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5D0u;
            // 0x26b5d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5d0) {
            ctx->pc = 0x26B5E0u;
            goto label_26b5e0;
        }
    }
    ctx->pc = 0x26B5D8u;
label_26b5d8:
    // 0x26b5d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b5dc:
    if (ctx->pc == 0x26B5DCu) {
        ctx->pc = 0x26B5E0u;
        goto label_26b5e0;
    }
    ctx->pc = 0x26B5D8u;
    {
        const bool branch_taken_0x26b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5d8) {
            ctx->pc = 0x26B5E8u;
            goto label_26b5e8;
        }
    }
    ctx->pc = 0x26B5E0u;
label_26b5e0:
    // 0x26b5e0: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x26b5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_26b5e4:
    // 0x26b5e4: 0x0  nop
    ctx->pc = 0x26b5e4u;
    // NOP
label_26b5e8:
    // 0x26b5e8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_26b5ec:
    if (ctx->pc == 0x26B5ECu) {
        ctx->pc = 0x26B5ECu;
            // 0x26b5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F0u;
        goto label_26b5f0;
    }
    ctx->pc = 0x26B5E8u;
    {
        const bool branch_taken_0x26b5e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5E8u;
            // 0x26b5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5e8) {
            ctx->pc = 0x26B5F8u;
            goto label_26b5f8;
        }
    }
    ctx->pc = 0x26B5F0u;
label_26b5f0:
    // 0x26b5f0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_26b5f4:
    if (ctx->pc == 0x26B5F4u) {
        ctx->pc = 0x26B5F4u;
            // 0x26b5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F8u;
        goto label_26b5f8;
    }
    ctx->pc = 0x26B5F0u;
    {
        const bool branch_taken_0x26b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5F0u;
            // 0x26b5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5f0) {
            ctx->pc = 0x26B6B0u;
            goto label_26b6b0;
        }
    }
    ctx->pc = 0x26B5F8u;
label_26b5f8:
    // 0x26b5f8: 0xc097f6c  jal         func_25FDB0
label_26b5fc:
    if (ctx->pc == 0x26B5FCu) {
        ctx->pc = 0x26B5FCu;
            // 0x26b5fc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B600u;
        goto label_26b600;
    }
    ctx->pc = 0x26B5F8u;
    SET_GPR_U32(ctx, 31, 0x26B600u);
    ctx->pc = 0x26B5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5F8u;
            // 0x26b5fc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B600u; }
        if (ctx->pc != 0x26B600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B600u; }
        if (ctx->pc != 0x26B600u) { return; }
    }
    ctx->pc = 0x26B600u;
label_26b600:
    // 0x26b600: 0xc09ac74  jal         func_26B1D0
label_26b604:
    if (ctx->pc == 0x26B604u) {
        ctx->pc = 0x26B604u;
            // 0x26b604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B608u;
        goto label_26b608;
    }
    ctx->pc = 0x26B600u;
    SET_GPR_U32(ctx, 31, 0x26B608u);
    ctx->pc = 0x26B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B600u;
            // 0x26b604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B608u; }
        if (ctx->pc != 0x26B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B608u; }
        if (ctx->pc != 0x26B608u) { return; }
    }
    ctx->pc = 0x26B608u;
label_26b608:
    // 0x26b608: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b60c:
    if (ctx->pc == 0x26B60Cu) {
        ctx->pc = 0x26B60Cu;
            // 0x26b60c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B610u;
        goto label_26b610;
    }
    ctx->pc = 0x26B608u;
    {
        const bool branch_taken_0x26b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B608u;
            // 0x26b60c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b608) {
            ctx->pc = 0x26B618u;
            goto label_26b618;
        }
    }
    ctx->pc = 0x26B610u;
label_26b610:
    // 0x26b610: 0x10000027  b           . + 4 + (0x27 << 2)
label_26b614:
    if (ctx->pc == 0x26B614u) {
        ctx->pc = 0x26B614u;
            // 0x26b614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B618u;
        goto label_26b618;
    }
    ctx->pc = 0x26B610u;
    {
        const bool branch_taken_0x26b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B610u;
            // 0x26b614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b610) {
            ctx->pc = 0x26B6B0u;
            goto label_26b6b0;
        }
    }
    ctx->pc = 0x26B618u;
label_26b618:
    // 0x26b618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b61c:
    // 0x26b61c: 0xc097fa8  jal         func_25FEA0
label_26b620:
    if (ctx->pc == 0x26B620u) {
        ctx->pc = 0x26B620u;
            // 0x26b620: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B624u;
        goto label_26b624;
    }
    ctx->pc = 0x26B61Cu;
    SET_GPR_U32(ctx, 31, 0x26B624u);
    ctx->pc = 0x26B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B61Cu;
            // 0x26b620: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B624u; }
        if (ctx->pc != 0x26B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B624u; }
        if (ctx->pc != 0x26B624u) { return; }
    }
    ctx->pc = 0x26B624u;
label_26b624:
    // 0x26b624: 0x10000011  b           . + 4 + (0x11 << 2)
label_26b628:
    if (ctx->pc == 0x26B628u) {
        ctx->pc = 0x26B628u;
            // 0x26b628: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x26B62Cu;
        goto label_26b62c;
    }
    ctx->pc = 0x26B624u;
    {
        const bool branch_taken_0x26b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B624u;
            // 0x26b628: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b624) {
            ctx->pc = 0x26B66Cu;
            goto label_26b66c;
        }
    }
    ctx->pc = 0x26B62Cu;
label_26b62c:
    // 0x26b62c: 0xc097e18  jal         func_25F860
label_26b630:
    if (ctx->pc == 0x26B630u) {
        ctx->pc = 0x26B630u;
            // 0x26b630: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B634u;
        goto label_26b634;
    }
    ctx->pc = 0x26B62Cu;
    SET_GPR_U32(ctx, 31, 0x26B634u);
    ctx->pc = 0x26B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B62Cu;
            // 0x26b630: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B634u; }
        if (ctx->pc != 0x26B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B634u; }
        if (ctx->pc != 0x26B634u) { return; }
    }
    ctx->pc = 0x26B634u;
label_26b634:
    // 0x26b634: 0xc09ac74  jal         func_26B1D0
label_26b638:
    if (ctx->pc == 0x26B638u) {
        ctx->pc = 0x26B638u;
            // 0x26b638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B63Cu;
        goto label_26b63c;
    }
    ctx->pc = 0x26B634u;
    SET_GPR_U32(ctx, 31, 0x26B63Cu);
    ctx->pc = 0x26B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B634u;
            // 0x26b638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B63Cu; }
        if (ctx->pc != 0x26B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B63Cu; }
        if (ctx->pc != 0x26B63Cu) { return; }
    }
    ctx->pc = 0x26B63Cu;
label_26b63c:
    // 0x26b63c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b640:
    if (ctx->pc == 0x26B640u) {
        ctx->pc = 0x26B640u;
            // 0x26b640: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B644u;
        goto label_26b644;
    }
    ctx->pc = 0x26B63Cu;
    {
        const bool branch_taken_0x26b63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B63Cu;
            // 0x26b640: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b63c) {
            ctx->pc = 0x26B64Cu;
            goto label_26b64c;
        }
    }
    ctx->pc = 0x26B644u;
label_26b644:
    // 0x26b644: 0x1000001a  b           . + 4 + (0x1A << 2)
label_26b648:
    if (ctx->pc == 0x26B648u) {
        ctx->pc = 0x26B648u;
            // 0x26b648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B64Cu;
        goto label_26b64c;
    }
    ctx->pc = 0x26B644u;
    {
        const bool branch_taken_0x26b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B644u;
            // 0x26b648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b644) {
            ctx->pc = 0x26B6B0u;
            goto label_26b6b0;
        }
    }
    ctx->pc = 0x26B64Cu;
label_26b64c:
    // 0x26b64c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b650:
    // 0x26b650: 0xc097e34  jal         func_25F8D0
label_26b654:
    if (ctx->pc == 0x26B654u) {
        ctx->pc = 0x26B654u;
            // 0x26b654: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B658u;
        goto label_26b658;
    }
    ctx->pc = 0x26B650u;
    SET_GPR_U32(ctx, 31, 0x26B658u);
    ctx->pc = 0x26B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B650u;
            // 0x26b654: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B658u; }
        if (ctx->pc != 0x26B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B658u; }
        if (ctx->pc != 0x26B658u) { return; }
    }
    ctx->pc = 0x26B658u;
label_26b658:
    // 0x26b658: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b65c:
    if (ctx->pc == 0x26B65Cu) {
        ctx->pc = 0x26B660u;
        goto label_26b660;
    }
    ctx->pc = 0x26B658u;
    {
        const bool branch_taken_0x26b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b658) {
            ctx->pc = 0x26B668u;
            goto label_26b668;
        }
    }
    ctx->pc = 0x26B660u;
label_26b660:
    // 0x26b660: 0x10000014  b           . + 4 + (0x14 << 2)
label_26b664:
    if (ctx->pc == 0x26B664u) {
        ctx->pc = 0x26B664u;
            // 0x26b664: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x26B668u;
        goto label_26b668;
    }
    ctx->pc = 0x26B660u;
    {
        const bool branch_taken_0x26b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B660u;
            // 0x26b664: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b660) {
            ctx->pc = 0x26B6B4u;
            goto label_26b6b4;
        }
    }
    ctx->pc = 0x26B668u;
label_26b668:
    // 0x26b668: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x26b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b66c:
    // 0x26b66c: 0xc04c374  jal         func_130DD0
label_26b670:
    if (ctx->pc == 0x26B670u) {
        ctx->pc = 0x26B674u;
        goto label_26b674;
    }
    ctx->pc = 0x26B66Cu;
    SET_GPR_U32(ctx, 31, 0x26B674u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B674u; }
        if (ctx->pc != 0x26B674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B674u; }
        if (ctx->pc != 0x26B674u) { return; }
    }
    ctx->pc = 0x26B674u;
label_26b674:
    // 0x26b674: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26b678:
    // 0x26b678: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x26b678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_26b67c:
    // 0x26b67c: 0xc04c374  jal         func_130DD0
label_26b680:
    if (ctx->pc == 0x26B680u) {
        ctx->pc = 0x26B680u;
            // 0x26b680: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x26B684u;
        goto label_26b684;
    }
    ctx->pc = 0x26B67Cu;
    SET_GPR_U32(ctx, 31, 0x26B684u);
    ctx->pc = 0x26B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B67Cu;
            // 0x26b680: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B684u; }
        if (ctx->pc != 0x26B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B684u; }
        if (ctx->pc != 0x26B684u) { return; }
    }
    ctx->pc = 0x26B684u;
label_26b684:
    // 0x26b684: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26b684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_26b688:
    // 0x26b688: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x26b688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_26b68c:
    // 0x26b68c: 0xc04c374  jal         func_130DD0
label_26b690:
    if (ctx->pc == 0x26B690u) {
        ctx->pc = 0x26B690u;
            // 0x26b690: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x26B694u;
        goto label_26b694;
    }
    ctx->pc = 0x26B68Cu;
    SET_GPR_U32(ctx, 31, 0x26B694u);
    ctx->pc = 0x26B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B68Cu;
            // 0x26b690: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B694u; }
        if (ctx->pc != 0x26B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B694u; }
        if (ctx->pc != 0x26B694u) { return; }
    }
    ctx->pc = 0x26B694u;
label_26b694:
    // 0x26b694: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26b694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_26b698:
    // 0x26b698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b69c:
    // 0x26b69c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b6a0:
    // 0x26b6a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x26b6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_26b6a4:
    // 0x26b6a4: 0x320f809  jalr        $t9
label_26b6a8:
    if (ctx->pc == 0x26B6A8u) {
        ctx->pc = 0x26B6A8u;
            // 0x26b6a8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26B6ACu;
        goto label_26b6ac;
    }
    ctx->pc = 0x26B6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B6ACu);
        ctx->pc = 0x26B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6A4u;
            // 0x26b6a8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B6ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B6ACu; }
            if (ctx->pc != 0x26B6ACu) { return; }
        }
        }
    }
    ctx->pc = 0x26B6ACu;
label_26b6ac:
    // 0x26b6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b6b0:
    // 0x26b6b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26b6b4:
    // 0x26b6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b6b8:
    // 0x26b6b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26b6bc:
    // 0x26b6bc: 0x3e00008  jr          $ra
label_26b6c0:
    if (ctx->pc == 0x26B6C0u) {
        ctx->pc = 0x26B6C0u;
            // 0x26b6c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26B6C4u;
        goto label_fallthrough_0x26b6bc;
    }
    ctx->pc = 0x26B6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6BCu;
            // 0x26b6c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b6bc:
    ctx->pc = 0x26B6C4u;
}
