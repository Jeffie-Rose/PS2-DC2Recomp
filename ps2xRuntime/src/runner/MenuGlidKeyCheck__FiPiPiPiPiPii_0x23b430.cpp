#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGlidKeyCheck__FiPiPiPiPiPii
// Address: 0x23b430 - 0x23b724
void MenuGlidKeyCheck__FiPiPiPiPiPii_0x23b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGlidKeyCheck__FiPiPiPiPiPii_0x23b430");
#endif

    switch (ctx->pc) {
        case 0x23b510u: goto label_23b510;
        case 0x23b52cu: goto label_23b52c;
        case 0x23b588u: goto label_23b588;
        case 0x23b5a4u: goto label_23b5a4;
        case 0x23b614u: goto label_23b614;
        case 0x23b640u: goto label_23b640;
        case 0x23b668u: goto label_23b668;
        case 0x23b6b0u: goto label_23b6b0;
        case 0x23b6e0u: goto label_23b6e0;
        default: break;
    }

    ctx->pc = 0x23b430u;

    // 0x23b430: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23b434: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x23b434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23b438: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23b43c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23b440: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23b444: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x23b444u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23b44c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x23b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23b450: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23b454: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23b454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b45c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x23b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x23b460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b464: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23b464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b46c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x23b46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b470: 0xdf839650  ld          $v1, -0x69B0($gp)
    ctx->pc = 0x23b470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940240)));
    // 0x23b474: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x23b474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b478: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x23b478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b47c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23b47cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b480: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23b480u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x23b484: 0xdf839658  ld          $v1, -0x69A8($gp)
    ctx->pc = 0x23b484u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940248)));
    // 0x23b488: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B488u;
    {
        const bool branch_taken_0x23b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B488u;
            // 0x23b48c: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b488) {
            ctx->pc = 0x23B4A4u;
            goto label_23b4a4;
        }
    }
    ctx->pc = 0x23B490u;
    // 0x23b490: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b494: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b498: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b49c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B49Cu;
    {
        const bool branch_taken_0x23b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B49Cu;
            // 0x23b4a0: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b49c) {
            ctx->pc = 0x23B4C0u;
            goto label_23b4c0;
        }
    }
    ctx->pc = 0x23B4A4u;
label_23b4a4:
    // 0x23b4a4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x23b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x23b4a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B4A8u;
    {
        const bool branch_taken_0x23b4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B4A8u;
            // 0x23b4ac: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4a8) {
            ctx->pc = 0x23B4C4u;
            goto label_23b4c4;
        }
    }
    ctx->pc = 0x23B4B0u;
    // 0x23b4b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b4b4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b4b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b4bc: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x23b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_23b4c0:
    // 0x23b4c0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x23b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_23b4c4:
    // 0x23b4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B4C4u;
    {
        const bool branch_taken_0x23b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B4C4u;
            // 0x23b4c8: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4c4) {
            ctx->pc = 0x23B4DCu;
            goto label_23b4dc;
        }
    }
    ctx->pc = 0x23B4CCu;
    // 0x23b4cc: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x23b4d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23b4d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23B4D4u;
    {
        const bool branch_taken_0x23b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B4D4u;
            // 0x23b4d8: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4d4) {
            ctx->pc = 0x23B4F0u;
            goto label_23b4f0;
        }
    }
    ctx->pc = 0x23B4DCu;
label_23b4dc:
    // 0x23b4dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B4DCu;
    {
        const bool branch_taken_0x23b4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4dc) {
            ctx->pc = 0x23B4F0u;
            goto label_23b4f0;
        }
    }
    ctx->pc = 0x23B4E4u;
    // 0x23b4e4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x23b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x23b4e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b4ec: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x23b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_23b4f0:
    // 0x23b4f0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b4f4: 0x4a10017  bgez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23B4F4u;
    {
        const bool branch_taken_0x23b4f4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x23b4f4) {
            ctx->pc = 0x23B554u;
            goto label_23b554;
        }
    }
    ctx->pc = 0x23B4FCu;
    // 0x23b4fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b500: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B500u;
    {
        const bool branch_taken_0x23b500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B500u;
            // 0x23b504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b500) {
            ctx->pc = 0x23B514u;
            goto label_23b514;
        }
    }
    ctx->pc = 0x23B508u;
    // 0x23b508: 0xc094594  jal         func_251650
    ctx->pc = 0x23B508u;
    SET_GPR_U32(ctx, 31, 0x23B510u);
    ctx->pc = 0x23B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B508u;
            // 0x23b50c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B510u; }
        if (ctx->pc != 0x23B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B510u; }
        if (ctx->pc != 0x23B510u) { return; }
    }
    ctx->pc = 0x23B510u;
label_23b510:
    // 0x23b510: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x23b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_23b514:
    // 0x23b514: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23b518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b51c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B51Cu;
    {
        const bool branch_taken_0x23b51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b51c) {
            ctx->pc = 0x23B554u;
            goto label_23b554;
        }
    }
    ctx->pc = 0x23B524u;
    // 0x23b524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B524u;
    {
        const bool branch_taken_0x23b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b524) {
            ctx->pc = 0x23B538u;
            goto label_23b538;
        }
    }
    ctx->pc = 0x23B52Cu;
label_23b52c:
    // 0x23b52c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b530: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b534: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23b534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_23b538:
    // 0x23b538: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x23b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23b53c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b540: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x23b540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23b544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b548: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x23b548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23b54c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23B54Cu;
    {
        const bool branch_taken_0x23b54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b54c) {
            ctx->pc = 0x23B52Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b52c;
        }
    }
    ctx->pc = 0x23B554u;
label_23b554:
    // 0x23b554: 0x0  nop
    ctx->pc = 0x23b554u;
    // NOP
    // 0x23b558: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23b558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b55c: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x23B55Cu;
    {
        const bool branch_taken_0x23b55c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x23b55c) {
            ctx->pc = 0x23B5CCu;
            goto label_23b5cc;
        }
    }
    ctx->pc = 0x23B564u;
    // 0x23b564: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23b568: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B568u;
    {
        const bool branch_taken_0x23b568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b568) {
            ctx->pc = 0x23B58Cu;
            goto label_23b58c;
        }
    }
    ctx->pc = 0x23B570u;
    // 0x23b570: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23b574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b578: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b57c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x23b57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23b580: 0xc094594  jal         func_251650
    ctx->pc = 0x23B580u;
    SET_GPR_U32(ctx, 31, 0x23B588u);
    ctx->pc = 0x23B584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B580u;
            // 0x23b584: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B588u; }
        if (ctx->pc != 0x23B588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B588u; }
        if (ctx->pc != 0x23B588u) { return; }
    }
    ctx->pc = 0x23B588u;
label_23b588:
    // 0x23b588: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x23b588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_23b58c:
    // 0x23b58c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23b590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b594: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B594u;
    {
        const bool branch_taken_0x23b594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b594) {
            ctx->pc = 0x23B5CCu;
            goto label_23b5cc;
        }
    }
    ctx->pc = 0x23B59Cu;
    // 0x23b59c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B59Cu;
    {
        const bool branch_taken_0x23b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b59c) {
            ctx->pc = 0x23B5B0u;
            goto label_23b5b0;
        }
    }
    ctx->pc = 0x23B5A4u;
label_23b5a4:
    // 0x23b5a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b5a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b5ac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_23b5b0:
    // 0x23b5b0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x23b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23b5b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b5b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x23b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23b5bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b5c0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x23b5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23b5c4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23B5C4u;
    {
        const bool branch_taken_0x23b5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b5c4) {
            ctx->pc = 0x23B5A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b5a4;
        }
    }
    ctx->pc = 0x23B5CCu;
label_23b5cc:
    // 0x23b5cc: 0x0  nop
    ctx->pc = 0x23b5ccu;
    // NOP
    // 0x23b5d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b5d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B5D4u;
    {
        const bool branch_taken_0x23b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b5d4) {
            ctx->pc = 0x23B5ECu;
            goto label_23b5ec;
        }
    }
    ctx->pc = 0x23B5DCu;
    // 0x23b5dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23b5e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B5E0u;
    {
        const bool branch_taken_0x23b5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B5E0u;
            // 0x23b5e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5e0) {
            ctx->pc = 0x23B5ECu;
            goto label_23b5ec;
        }
    }
    ctx->pc = 0x23B5E8u;
    // 0x23b5e8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x23b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_23b5ec:
    // 0x23b5ec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b5f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b5f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B5F4u;
    {
        const bool branch_taken_0x23b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B5F4u;
            // 0x23b5f8: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5f4) {
            ctx->pc = 0x23B600u;
            goto label_23b600;
        }
    }
    ctx->pc = 0x23B5FCu;
    // 0x23b5fc: 0x1cd  break       0, 7
    ctx->pc = 0x23b5fcu;
    runtime->handleBreak(rdram, ctx);
label_23b600:
    // 0x23b600: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b604: 0x8012  mflo        $s0
    ctx->pc = 0x23b604u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x23b608: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23b608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b60c: 0xc08ec58  jal         func_23B160
    ctx->pc = 0x23B60Cu;
    SET_GPR_U32(ctx, 31, 0x23B614u);
    ctx->pc = 0x23B610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B60Cu;
            // 0x23b610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B160u;
    if (runtime->hasFunction(0x23B160u)) {
        auto targetFn = runtime->lookupFunction(0x23B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B614u; }
        if (ctx->pc != 0x23B614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckLine__FPiii_0x23b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B614u; }
        if (ctx->pc != 0x23B614u) { return; }
    }
    ctx->pc = 0x23B614u;
label_23b614:
    // 0x23b614: 0x8fb2008c  lw          $s2, 0x8C($sp)
    ctx->pc = 0x23b614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x23b618: 0x6410019  bgez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x23B618u;
    {
        const bool branch_taken_0x23b618 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x23b618) {
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B620u;
    // 0x23b620: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23b624: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B624u;
    {
        const bool branch_taken_0x23b624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b624) {
            ctx->pc = 0x23B644u;
            goto label_23b644;
        }
    }
    ctx->pc = 0x23B62Cu;
    // 0x23b62c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b634: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b638: 0xc094594  jal         func_251650
    ctx->pc = 0x23B638u;
    SET_GPR_U32(ctx, 31, 0x23B640u);
    ctx->pc = 0x23B63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B638u;
            // 0x23b63c: 0x2023018  mult        $a2, $s0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B640u; }
        if (ctx->pc != 0x23B640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B640u; }
        if (ctx->pc != 0x23B640u) { return; }
    }
    ctx->pc = 0x23B640u;
label_23b640:
    // 0x23b640: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x23b640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_23b644:
    // 0x23b644: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23b648: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b64c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23B64Cu;
    {
        const bool branch_taken_0x23b64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b64c) {
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B654u;
    // 0x23b654: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b65c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b660: 0xc094594  jal         func_251650
    ctx->pc = 0x23B660u;
    SET_GPR_U32(ctx, 31, 0x23B668u);
    ctx->pc = 0x23B664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B660u;
            // 0x23b664: 0x2023018  mult        $a2, $s0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B668u; }
        if (ctx->pc != 0x23B668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B668u; }
        if (ctx->pc != 0x23B668u) { return; }
    }
    ctx->pc = 0x23B668u;
label_23b668:
    // 0x23b668: 0x27a30084  addiu       $v1, $sp, 0x84
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x23b66c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23b670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b674: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B674u;
    {
        const bool branch_taken_0x23b674 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b674) {
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B67Cu;
    // 0x23b67c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x23b67cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b680:
    // 0x23b680: 0x1a40001e  blez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x23B680u;
    {
        const bool branch_taken_0x23b680 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x23B684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B680u;
            // 0x23b684: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b680) {
            ctx->pc = 0x23B6FCu;
            goto label_23b6fc;
        }
    }
    ctx->pc = 0x23B688u;
    // 0x23b688: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23b68c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B68Cu;
    {
        const bool branch_taken_0x23b68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b68c) {
            ctx->pc = 0x23B6B4u;
            goto label_23b6b4;
        }
    }
    ctx->pc = 0x23B694u;
    // 0x23b694: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b698: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23b69c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6a4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x23b6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23b6a8: 0xc094594  jal         func_251650
    ctx->pc = 0x23B6A8u;
    SET_GPR_U32(ctx, 31, 0x23B6B0u);
    ctx->pc = 0x23B6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B6A8u;
            // 0x23b6ac: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B6B0u; }
        if (ctx->pc != 0x23B6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B6B0u; }
        if (ctx->pc != 0x23B6B0u) { return; }
    }
    ctx->pc = 0x23B6B0u;
label_23b6b0:
    // 0x23b6b0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x23b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_23b6b4:
    // 0x23b6b4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23b6b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b6bc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23B6BCu;
    {
        const bool branch_taken_0x23b6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b6bc) {
            ctx->pc = 0x23B6F8u;
            goto label_23b6f8;
        }
    }
    ctx->pc = 0x23B6C4u;
    // 0x23b6c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23b6c8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x23b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23b6cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6d4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x23b6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23b6d8: 0xc094594  jal         func_251650
    ctx->pc = 0x23B6D8u;
    SET_GPR_U32(ctx, 31, 0x23B6E0u);
    ctx->pc = 0x23B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B6D8u;
            // 0x23b6dc: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251650u;
    if (runtime->hasFunction(0x251650u)) {
        auto targetFn = runtime->lookupFunction(0x251650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B6E0u; }
        if (ctx->pc != 0x23B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd2__FPiii_0x251650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B6E0u; }
        if (ctx->pc != 0x23B6E0u) { return; }
    }
    ctx->pc = 0x23B6E0u;
label_23b6e0:
    // 0x23b6e0: 0x27a30084  addiu       $v1, $sp, 0x84
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x23b6e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23b6e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b6ec: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B6ECu;
    {
        const bool branch_taken_0x23b6ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b6ec) {
            ctx->pc = 0x23B6F8u;
            goto label_23b6f8;
        }
    }
    ctx->pc = 0x23B6F4u;
    // 0x23b6f4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x23b6f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b6f8:
    // 0x23b6f8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x23b6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23b6fc:
    // 0x23b6fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23b700: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23b700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23b704: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b708: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23b708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b70c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23b70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b71c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B71Cu;
            // 0x23b720: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B724u;
}
