#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi
// Address: 0x30b5e0 - 0x30b7a4
void nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi_0x30b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("nameregist_local_key__FP17MENU_SELECT_PARAMRiPsi_0x30b5e0");
#endif

    ctx->pc = 0x30b5e0u;

    // 0x30b5e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b5e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30b5e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B5E8u;
    {
        const bool branch_taken_0x30b5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5E8u;
            // 0x30b5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5e8) {
            ctx->pc = 0x30B604u;
            goto label_30b604;
        }
    }
    ctx->pc = 0x30B5F0u;
    // 0x30b5f0: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x30b5f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30b5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b5f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b5fc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x30b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30b600: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30b600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_30b604:
    // 0x30b604: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b608: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30b608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30b60c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B60Cu;
    {
        const bool branch_taken_0x30b60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b60c) {
            ctx->pc = 0x30B628u;
            goto label_30b628;
        }
    }
    ctx->pc = 0x30B614u;
    // 0x30b614: 0x84c80002  lh          $t0, 0x2($a2)
    ctx->pc = 0x30b614u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x30b618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b61c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b620: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x30b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30b624: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30b624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_30b628:
    // 0x30b628: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x30b628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b62c: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x30b62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x30b630: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30B630u;
    {
        const bool branch_taken_0x30b630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B630u;
            // 0x30b634: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b630) {
            ctx->pc = 0x30B684u;
            goto label_30b684;
        }
    }
    ctx->pc = 0x30B638u;
    // 0x30b638: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x30b63c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b640: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B640u;
    {
        const bool branch_taken_0x30b640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B640u;
            // 0x30b644: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b640) {
            ctx->pc = 0x30B64Cu;
            goto label_30b64c;
        }
    }
    ctx->pc = 0x30B648u;
    // 0x30b648: 0x1cd  break       0, 7
    ctx->pc = 0x30b648u;
    runtime->handleBreak(rdram, ctx);
label_30b64c:
    // 0x30b64c: 0x1010  mfhi        $v0
    ctx->pc = 0x30b64cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30b650: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B650u;
    {
        const bool branch_taken_0x30b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b650) {
            ctx->pc = 0x30B66Cu;
            goto label_30b66c;
        }
    }
    ctx->pc = 0x30B658u;
    // 0x30b658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b65c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30b660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b664: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30B664u;
    {
        const bool branch_taken_0x30b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B664u;
            // 0x30b668: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b664) {
            ctx->pc = 0x30B67Cu;
            goto label_30b67c;
        }
    }
    ctx->pc = 0x30B66Cu;
label_30b66c:
    // 0x30b66c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x30b66cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30b670: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b678: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30b678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30b67c:
    // 0x30b67c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30B67Cu;
    {
        const bool branch_taken_0x30b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B67Cu;
            // 0x30b680: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b67c) {
            ctx->pc = 0x30B6DCu;
            goto label_30b6dc;
        }
    }
    ctx->pc = 0x30B684u;
label_30b684:
    // 0x30b684: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x30B684u;
    {
        const bool branch_taken_0x30b684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b684) {
            ctx->pc = 0x30B6DCu;
            goto label_30b6dc;
        }
    }
    ctx->pc = 0x30B68Cu;
    // 0x30b68c: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x30b68cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x30b690: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b694: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x30b694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30b698: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B698u;
    {
        const bool branch_taken_0x30b698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B698u;
            // 0x30b69c: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b698) {
            ctx->pc = 0x30B6A4u;
            goto label_30b6a4;
        }
    }
    ctx->pc = 0x30B6A0u;
    // 0x30b6a0: 0x1cd  break       0, 7
    ctx->pc = 0x30b6a0u;
    runtime->handleBreak(rdram, ctx);
label_30b6a4:
    // 0x30b6a4: 0x1010  mfhi        $v0
    ctx->pc = 0x30b6a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30b6a8: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x30b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x30b6ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x30b6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x30b6b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B6B0u;
    {
        const bool branch_taken_0x30b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b6b0) {
            ctx->pc = 0x30B6C8u;
            goto label_30b6c8;
        }
    }
    ctx->pc = 0x30B6B8u;
    // 0x30b6b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b6bc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x30b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30b6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30B6C0u;
    {
        const bool branch_taken_0x30b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6C0u;
            // 0x30b6c4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6c0) {
            ctx->pc = 0x30B6D8u;
            goto label_30b6d8;
        }
    }
    ctx->pc = 0x30B6C8u;
label_30b6c8:
    // 0x30b6c8: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x30b6c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x30b6cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b6d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30b6d8:
    // 0x30b6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b6dc:
    // 0x30b6dc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x30b6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b6e0: 0x31030010  andi        $v1, $t0, 0x10
    ctx->pc = 0x30b6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x30b6e4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B6E4u;
    {
        const bool branch_taken_0x30b6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6E4u;
            // 0x30b6e8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6e4) {
            ctx->pc = 0x30B6FCu;
            goto label_30b6fc;
        }
    }
    ctx->pc = 0x30B6ECu;
    // 0x30b6ec: 0x31030040  andi        $v1, $t0, 0x40
    ctx->pc = 0x30b6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x30b6f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B6F0u;
    {
        const bool branch_taken_0x30b6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b6f0) {
            ctx->pc = 0x30B700u;
            goto label_30b700;
        }
    }
    ctx->pc = 0x30B6F8u;
    // 0x30b6f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b6fc:
    // 0x30b6fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_30b700:
    // 0x30b700: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x30b700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b704: 0x31030020  andi        $v1, $t0, 0x20
    ctx->pc = 0x30b704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x30b708: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B708u;
    {
        const bool branch_taken_0x30b708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B708u;
            // 0x30b70c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b708) {
            ctx->pc = 0x30B720u;
            goto label_30b720;
        }
    }
    ctx->pc = 0x30B710u;
    // 0x30b710: 0x31030080  andi        $v1, $t0, 0x80
    ctx->pc = 0x30b710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x30b714: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B714u;
    {
        const bool branch_taken_0x30b714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b714) {
            ctx->pc = 0x30B724u;
            goto label_30b724;
        }
    }
    ctx->pc = 0x30B71Cu;
    // 0x30b71c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_30b720:
    // 0x30b720: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30b720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_30b724:
    // 0x30b724: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x30b724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b728: 0x5010009  bgez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B728u;
    {
        const bool branch_taken_0x30b728 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x30b728) {
            ctx->pc = 0x30B750u;
            goto label_30b750;
        }
    }
    ctx->pc = 0x30B730u;
    // 0x30b730: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30b734: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x30b734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30b738: 0x2442e2e8  addiu       $v0, $v0, -0x1D18
    ctx->pc = 0x30b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959848));
    // 0x30b73c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b740: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x30b740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b748: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x30b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x30b74c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_30b750:
    // 0x30b750: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30b750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30b754: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x30b754u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30b758: 0x2463e2e8  addiu       $v1, $v1, -0x1D18
    ctx->pc = 0x30b758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959848));
    // 0x30b75c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x30b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30b760: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x30b760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b764: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b768: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x30b768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b76c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x30B76Cu;
    {
        const bool branch_taken_0x30b76c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b76c) {
            ctx->pc = 0x30B79Cu;
            goto label_30b79c;
        }
    }
    ctx->pc = 0x30B774u;
    // 0x30b774: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x30b774u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30b778: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x30b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x30b77c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x30b77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x30b780: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x30b780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x30b784: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x30b784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30b788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30b78c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x30b790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b794: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x30b794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x30b798: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x30b798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_30b79c:
    // 0x30b79c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B7A4u;
}
