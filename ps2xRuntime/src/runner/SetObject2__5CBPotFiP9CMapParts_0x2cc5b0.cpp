#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetObject2__5CBPotFiP9CMapParts
// Address: 0x2cc5b0 - 0x2cc79c
void SetObject2__5CBPotFiP9CMapParts_0x2cc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetObject2__5CBPotFiP9CMapParts_0x2cc5b0");
#endif

    switch (ctx->pc) {
        case 0x2cc6d8u: goto label_2cc6d8;
        case 0x2cc718u: goto label_2cc718;
        case 0x2cc73cu: goto label_2cc73c;
        case 0x2cc748u: goto label_2cc748;
        default: break;
    }

    ctx->pc = 0x2cc5b0u;

    // 0x2cc5b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cc5b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cc5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cc5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cc5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc5c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cc5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc5cc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC5CCu;
    {
        const bool branch_taken_0x2cc5cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5CCu;
            // 0x2cc5d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5cc) {
            ctx->pc = 0x2CC5DCu;
            goto label_2cc5dc;
        }
    }
    ctx->pc = 0x2CC5D4u;
    // 0x2cc5d4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2CC5D4u;
    {
        const bool branch_taken_0x2cc5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5D4u;
            // 0x2cc5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5d4) {
            ctx->pc = 0x2CC77Cu;
            goto label_2cc77c;
        }
    }
    ctx->pc = 0x2CC5DCu;
label_2cc5dc:
    // 0x2cc5dc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC5DCu;
    {
        const bool branch_taken_0x2cc5dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5DCu;
            // 0x2cc5e0: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5dc) {
            ctx->pc = 0x2CC5F0u;
            goto label_2cc5f0;
        }
    }
    ctx->pc = 0x2CC5E4u;
    // 0x2cc5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc5e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC5E8u;
    {
        const bool branch_taken_0x2cc5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5E8u;
            // 0x2cc5ec: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5e8) {
            ctx->pc = 0x2CC640u;
            goto label_2cc640;
        }
    }
    ctx->pc = 0x2CC5F0u;
label_2cc5f0:
    // 0x2cc5f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cc5f4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC5F4u;
    {
        const bool branch_taken_0x2cc5f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5F4u;
            // 0x2cc5f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5f4) {
            ctx->pc = 0x2CC604u;
            goto label_2cc604;
        }
    }
    ctx->pc = 0x2CC5FCu;
    // 0x2cc5fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC5FCu;
    {
        const bool branch_taken_0x2cc5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5FCu;
            // 0x2cc600: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5fc) {
            ctx->pc = 0x2CC640u;
            goto label_2cc640;
        }
    }
    ctx->pc = 0x2CC604u;
label_2cc604:
    // 0x2cc604: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC604u;
    {
        const bool branch_taken_0x2cc604 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2CC608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC604u;
            // 0x2cc608: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc604) {
            ctx->pc = 0x2CC624u;
            goto label_2cc624;
        }
    }
    ctx->pc = 0x2CC60Cu;
    // 0x2cc60c: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x2cc60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cc610: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC610u;
    {
        const bool branch_taken_0x2cc610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc610) {
            ctx->pc = 0x2CC624u;
            goto label_2cc624;
        }
    }
    ctx->pc = 0x2CC618u;
    // 0x2cc618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc61c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC61Cu;
    {
        const bool branch_taken_0x2cc61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC61Cu;
            // 0x2cc620: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc61c) {
            ctx->pc = 0x2CC640u;
            goto label_2cc640;
        }
    }
    ctx->pc = 0x2CC624u;
label_2cc624:
    // 0x2cc624: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC624u;
    {
        const bool branch_taken_0x2cc624 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC624u;
            // 0x2cc628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc624) {
            ctx->pc = 0x2CC638u;
            goto label_2cc638;
        }
    }
    ctx->pc = 0x2CC62Cu;
    // 0x2cc62c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC630u;
    {
        const bool branch_taken_0x2cc630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC630u;
            // 0x2cc634: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc630) {
            ctx->pc = 0x2CC640u;
            goto label_2cc640;
        }
    }
    ctx->pc = 0x2CC638u;
label_2cc638:
    // 0x2cc638: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2CC638u;
    {
        const bool branch_taken_0x2cc638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC638u;
            // 0x2cc63c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc638) {
            ctx->pc = 0x2CC780u;
            goto label_2cc780;
        }
    }
    ctx->pc = 0x2CC640u;
label_2cc640:
    // 0x2cc640: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2cc640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2cc644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc648: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC648u;
    {
        const bool branch_taken_0x2cc648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC648u;
            // 0x2cc64c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc648) {
            ctx->pc = 0x2CC670u;
            goto label_2cc670;
        }
    }
    ctx->pc = 0x2CC650u;
    // 0x2cc650: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cc654: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2cc654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2cc658: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x2cc658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x2cc65c: 0x261001e8  addiu       $s0, $s0, 0x1E8
    ctx->pc = 0x2cc65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 488));
    // 0x2cc660: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2cc664: 0x24425ed0  addiu       $v0, $v0, 0x5ED0
    ctx->pc = 0x2cc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24272));
    // 0x2cc668: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2CC668u;
    {
        const bool branch_taken_0x2cc668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC668u;
            // 0x2cc66c: 0xae820c40  sw          $v0, 0xC40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc668) {
            ctx->pc = 0x2CC6C8u;
            goto label_2cc6c8;
        }
    }
    ctx->pc = 0x2CC670u;
label_2cc670:
    // 0x2cc670: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC670u;
    {
        const bool branch_taken_0x2cc670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC670u;
            // 0x2cc674: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc670) {
            ctx->pc = 0x2CC698u;
            goto label_2cc698;
        }
    }
    ctx->pc = 0x2CC678u;
    // 0x2cc678: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc67c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2cc680: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x2cc680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x2cc684: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x2cc688: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2cc688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2cc68c: 0x24425f90  addiu       $v0, $v0, 0x5F90
    ctx->pc = 0x2cc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24464));
    // 0x2cc690: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CC690u;
    {
        const bool branch_taken_0x2cc690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC690u;
            // 0x2cc694: 0xae820c40  sw          $v0, 0xC40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc690) {
            ctx->pc = 0x2CC6C8u;
            goto label_2cc6c8;
        }
    }
    ctx->pc = 0x2CC698u;
label_2cc698:
    // 0x2cc698: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC698u;
    {
        const bool branch_taken_0x2cc698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC698u;
            // 0x2cc69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc698) {
            ctx->pc = 0x2CC6C0u;
            goto label_2cc6c0;
        }
    }
    ctx->pc = 0x2CC6A0u;
    // 0x2cc6a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2cc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cc6a4: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2cc6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2cc6a8: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x2cc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x2cc6ac: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x2cc6b0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2cc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2cc6b4: 0x24426030  addiu       $v0, $v0, 0x6030
    ctx->pc = 0x2cc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24624));
    // 0x2cc6b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC6B8u;
    {
        const bool branch_taken_0x2cc6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6B8u;
            // 0x2cc6bc: 0xae820c40  sw          $v0, 0xC40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6b8) {
            ctx->pc = 0x2CC6C8u;
            goto label_2cc6c8;
        }
    }
    ctx->pc = 0x2CC6C0u;
label_2cc6c0:
    // 0x2cc6c0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2CC6C0u;
    {
        const bool branch_taken_0x2cc6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc6c0) {
            ctx->pc = 0x2CC77Cu;
            goto label_2cc77c;
        }
    }
    ctx->pc = 0x2CC6C8u;
label_2cc6c8:
    // 0x2cc6c8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2cc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2cc6cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2cc6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2cc6d0: 0xc059924  jal         func_166490
    ctx->pc = 0x2CC6D0u;
    SET_GPR_U32(ctx, 31, 0x2CC6D8u);
    ctx->pc = 0x2CC6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6D0u;
            // 0x2cc6d4: 0x24a501f8  addiu       $a1, $a1, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC6D8u; }
        if (ctx->pc != 0x2CC6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC6D8u; }
        if (ctx->pc != 0x2CC6D8u) { return; }
    }
    ctx->pc = 0x2CC6D8u;
label_2cc6d8:
    // 0x2cc6d8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2cc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2cc6dc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2cc6e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC6E0u;
    {
        const bool branch_taken_0x2cc6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc6e0) {
            ctx->pc = 0x2CC6F0u;
            goto label_2cc6f0;
        }
    }
    ctx->pc = 0x2CC6E8u;
    // 0x2cc6e8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2CC6E8u;
    {
        const bool branch_taken_0x2cc6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6E8u;
            // 0x2cc6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6e8) {
            ctx->pc = 0x2CC77Cu;
            goto label_2cc77c;
        }
    }
    ctx->pc = 0x2CC6F0u;
label_2cc6f0:
    // 0x2cc6f0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x2cc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2cc6f4: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2cc6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2cc6f8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2cc6fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC6FCu;
    {
        const bool branch_taken_0x2cc6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6FCu;
            // 0x2cc700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6fc) {
            ctx->pc = 0x2CC70Cu;
            goto label_2cc70c;
        }
    }
    ctx->pc = 0x2CC704u;
    // 0x2cc704: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2CC704u;
    {
        const bool branch_taken_0x2cc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC704u;
            // 0x2cc708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc704) {
            ctx->pc = 0x2CC77Cu;
            goto label_2cc77c;
        }
    }
    ctx->pc = 0x2CC70Cu;
label_2cc70c:
    // 0x2cc70c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cc70cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc710: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC710u;
    {
        const bool branch_taken_0x2cc710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC710u;
            // 0x2cc714: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc710) {
            ctx->pc = 0x2CC768u;
            goto label_2cc768;
        }
    }
    ctx->pc = 0x2CC718u;
label_2cc718:
    // 0x2cc718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC718u;
    {
        const bool branch_taken_0x2cc718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC718u;
            // 0x2cc71c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc718) {
            ctx->pc = 0x2CC728u;
            goto label_2cc728;
        }
    }
    ctx->pc = 0x2CC720u;
    // 0x2cc720: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CC720u;
    {
        const bool branch_taken_0x2cc720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC720u;
            // 0x2cc724: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc720) {
            ctx->pc = 0x2CC77Cu;
            goto label_2cc77c;
        }
    }
    ctx->pc = 0x2CC728u;
label_2cc728:
    // 0x2cc728: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cc72c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cc730: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x2cc730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
    // 0x2cc734: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2CC734u;
    SET_GPR_U32(ctx, 31, 0x2CC73Cu);
    ctx->pc = 0x2CC738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC734u;
            // 0x2cc738: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC73Cu; }
        if (ctx->pc != 0x2CC73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC73Cu; }
        if (ctx->pc != 0x2CC73Cu) { return; }
    }
    ctx->pc = 0x2CC73Cu;
label_2cc73c:
    // 0x2cc73c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2cc73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2cc740: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2CC740u;
    SET_GPR_U32(ctx, 31, 0x2CC748u);
    ctx->pc = 0x2CC744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC740u;
            // 0x2cc744: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC748u; }
        if (ctx->pc != 0x2CC748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC748u; }
        if (ctx->pc != 0x2CC748u) { return; }
    }
    ctx->pc = 0x2CC748u;
label_2cc748:
    // 0x2cc748: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC748u;
    {
        const bool branch_taken_0x2cc748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC748u;
            // 0x2cc74c: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc748) {
            ctx->pc = 0x2CC75Cu;
            goto label_2cc75c;
        }
    }
    ctx->pc = 0x2CC750u;
    // 0x2cc750: 0xac710040  sw          $s1, 0x40($v1)
    ctx->pc = 0x2cc750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 17));
    // 0x2cc754: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2cc754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x2cc758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cc758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cc75c:
    // 0x2cc75c: 0x0  nop
    ctx->pc = 0x2cc75cu;
    // NOP
    // 0x2cc760: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x2cc760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2cc764: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cc768:
    // 0x2cc768: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2cc768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2cc76c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2cc76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cc770: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2CC770u;
    {
        const bool branch_taken_0x2cc770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC770u;
            // 0x2cc774: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc770) {
            ctx->pc = 0x2CC718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc718;
        }
    }
    ctx->pc = 0x2CC778u;
    // 0x2cc778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cc778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc77c:
    // 0x2cc77c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cc77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc780:
    // 0x2cc780: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cc780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc784: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc794: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC794u;
            // 0x2cc798: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC79Cu;
}
