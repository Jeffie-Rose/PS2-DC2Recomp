#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACCUME_FLAG__FP12RS_STACKDATAi
// Address: 0x2cf580 - 0x2cf6d0
void ps2__SET_ACCUME_FLAG__FP12RS_STACKDATAi_0x2cf580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACCUME_FLAG__FP12RS_STACKDATAi_0x2cf580");
#endif

    switch (ctx->pc) {
        case 0x2cf5bcu: goto label_2cf5bc;
        case 0x2cf60cu: goto label_2cf60c;
        case 0x2cf658u: goto label_2cf658;
        default: break;
    }

    ctx->pc = 0x2cf580u;

    // 0x2cf580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf588: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF588u;
    {
        const bool branch_taken_0x2cf588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF588u;
            // 0x2cf58c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf588) {
            ctx->pc = 0x2CF598u;
            goto label_2cf598;
        }
    }
    ctx->pc = 0x2CF590u;
    // 0x2cf590: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2CF590u;
    {
        const bool branch_taken_0x2cf590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF590u;
            // 0x2cf594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf590) {
            ctx->pc = 0x2CF6C4u;
            goto label_2cf6c4;
        }
    }
    ctx->pc = 0x2CF598u;
label_2cf598:
    // 0x2cf598: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf59c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf5a0: 0x8c4207cc  lw          $v0, 0x7CC($v0)
    ctx->pc = 0x2cf5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1996)));
    // 0x2cf5a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF5A4u;
    {
        const bool branch_taken_0x2cf5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5A4u;
            // 0x2cf5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5a4) {
            ctx->pc = 0x2CF5B4u;
            goto label_2cf5b4;
        }
    }
    ctx->pc = 0x2CF5ACu;
    // 0x2cf5ac: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2CF5ACu;
    {
        const bool branch_taken_0x2cf5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5ACu;
            // 0x2cf5b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5ac) {
            ctx->pc = 0x2CF6C8u;
            goto label_2cf6c8;
        }
    }
    ctx->pc = 0x2CF5B4u;
label_2cf5b4:
    // 0x2cf5b4: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF5B4u;
    SET_GPR_U32(ctx, 31, 0x2CF5BCu);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5BCu; }
        if (ctx->pc != 0x2CF5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5BCu; }
        if (ctx->pc != 0x2CF5BCu) { return; }
    }
    ctx->pc = 0x2CF5BCu;
label_2cf5bc:
    // 0x2cf5bc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CF5BCu;
    {
        const bool branch_taken_0x2cf5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5BCu;
            // 0x2cf5c0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5bc) {
            ctx->pc = 0x2CF66Cu;
            goto label_2cf66c;
        }
    }
    ctx->pc = 0x2CF5C4u;
    // 0x2cf5c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf5c8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF5C8u;
    {
        const bool branch_taken_0x2cf5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CF5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5C8u;
            // 0x2cf5cc: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5c8) {
            ctx->pc = 0x2CF5D8u;
            goto label_2cf5d8;
        }
    }
    ctx->pc = 0x2CF5D0u;
    // 0x2cf5d0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2CF5D0u;
    {
        const bool branch_taken_0x2cf5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5D0u;
            // 0x2cf5d4: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5d0) {
            ctx->pc = 0x2CF694u;
            goto label_2cf694;
        }
    }
    ctx->pc = 0x2CF5D8u;
label_2cf5d8:
    // 0x2cf5d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2cf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2cf5dc: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf5e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cf5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5e8: 0x8c6607cc  lw          $a2, 0x7CC($v1)
    ctx->pc = 0x2cf5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1996)));
    // 0x2cf5ec: 0x8c6307d0  lw          $v1, 0x7D0($v1)
    ctx->pc = 0x2cf5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2000)));
    // 0x2cf5f0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2cf5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2cf5f4: 0xacc40310  sw          $a0, 0x310($a2)
    ctx->pc = 0x2cf5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 784), GPR_U32(ctx, 4));
    // 0x2cf5f8: 0xacc00314  sw          $zero, 0x314($a2)
    ctx->pc = 0x2cf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 788), GPR_U32(ctx, 0));
    // 0x2cf5fc: 0xacc00318  sw          $zero, 0x318($a2)
    ctx->pc = 0x2cf5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 792), GPR_U32(ctx, 0));
    // 0x2cf600: 0xacc00320  sw          $zero, 0x320($a2)
    ctx->pc = 0x2cf600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 800), GPR_U32(ctx, 0));
    // 0x2cf604: 0xacc00324  sw          $zero, 0x324($a2)
    ctx->pc = 0x2cf604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 804), GPR_U32(ctx, 0));
    // 0x2cf608: 0xacc2031c  sw          $v0, 0x31C($a2)
    ctx->pc = 0x2cf608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 796), GPR_U32(ctx, 2));
label_2cf60c:
    // 0x2cf60c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2cf610: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2cf610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2cf614: 0xac600290  sw          $zero, 0x290($v1)
    ctx->pc = 0x2cf614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 656), GPR_U32(ctx, 0));
    // 0x2cf618: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x2cf618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2cf61c: 0xac600294  sw          $zero, 0x294($v1)
    ctx->pc = 0x2cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 660), GPR_U32(ctx, 0));
    // 0x2cf620: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2cf620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2cf624: 0xac600298  sw          $zero, 0x298($v1)
    ctx->pc = 0x2cf624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 664), GPR_U32(ctx, 0));
    // 0x2cf628: 0xac60029c  sw          $zero, 0x29C($v1)
    ctx->pc = 0x2cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 668), GPR_U32(ctx, 0));
    // 0x2cf62c: 0xac6002a0  sw          $zero, 0x2A0($v1)
    ctx->pc = 0x2cf62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 672), GPR_U32(ctx, 0));
    // 0x2cf630: 0xac6002a4  sw          $zero, 0x2A4($v1)
    ctx->pc = 0x2cf630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 0));
    // 0x2cf634: 0xac6002a8  sw          $zero, 0x2A8($v1)
    ctx->pc = 0x2cf634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 680), GPR_U32(ctx, 0));
    // 0x2cf638: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CF638u;
    {
        const bool branch_taken_0x2cf638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF638u;
            // 0x2cf63c: 0xac6002ac  sw          $zero, 0x2AC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf638) {
            ctx->pc = 0x2CF60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf60c;
        }
    }
    ctx->pc = 0x2CF640u;
    // 0x2cf640: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF644u;
    {
        const bool branch_taken_0x2cf644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf644) {
            ctx->pc = 0x2CF658u;
            goto label_2cf658;
        }
    }
    ctx->pc = 0x2CF64Cu;
    // 0x2cf64c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cf650: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CF650u;
    SET_GPR_U32(ctx, 31, 0x2CF658u);
    ctx->pc = 0x2CF654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF650u;
            // 0x2cf654: 0x24840288  addiu       $a0, $a0, 0x288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF658u; }
        if (ctx->pc != 0x2CF658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF658u; }
        if (ctx->pc != 0x2CF658u) { return; }
    }
    ctx->pc = 0x2CF658u;
label_2cf658:
    // 0x2cf658: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf65c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf660: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf664: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CF664u;
    {
        const bool branch_taken_0x2cf664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF664u;
            // 0x2cf668: 0xa44307d6  sh          $v1, 0x7D6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2006), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf664) {
            ctx->pc = 0x2CF6C0u;
            goto label_2cf6c0;
        }
    }
    ctx->pc = 0x2CF66Cu;
label_2cf66c:
    // 0x2cf66c: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf670: 0x8c6307cc  lw          $v1, 0x7CC($v1)
    ctx->pc = 0x2cf670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1996)));
    // 0x2cf674: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf678: 0xac620310  sw          $v0, 0x310($v1)
    ctx->pc = 0x2cf678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 784), GPR_U32(ctx, 2));
    // 0x2cf67c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf680: 0xac4007d8  sw          $zero, 0x7D8($v0)
    ctx->pc = 0x2cf680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2008), GPR_U32(ctx, 0));
    // 0x2cf684: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf688: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf68c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CF68Cu;
    {
        const bool branch_taken_0x2cf68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF68Cu;
            // 0x2cf690: 0xa44007d6  sh          $zero, 0x7D6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2006), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf68c) {
            ctx->pc = 0x2CF6C0u;
            goto label_2cf6c0;
        }
    }
    ctx->pc = 0x2CF694u;
label_2cf694:
    // 0x2cf694: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cf694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf698: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf69c: 0x8c8407cc  lw          $a0, 0x7CC($a0)
    ctx->pc = 0x2cf69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1996)));
    // 0x2cf6a0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF6A0u;
    {
        const bool branch_taken_0x2cf6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CF6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF6A0u;
            // 0x2cf6a4: 0xac820310  sw          $v0, 0x310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6a0) {
            ctx->pc = 0x2CF6B4u;
            goto label_2cf6b4;
        }
    }
    ctx->pc = 0x2CF6A8u;
    // 0x2cf6a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cf6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cf6ac: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF6ACu;
    {
        const bool branch_taken_0x2cf6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF6ACu;
            // 0x2cf6b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6ac) {
            ctx->pc = 0x2CF6C4u;
            goto label_2cf6c4;
        }
    }
    ctx->pc = 0x2CF6B4u;
label_2cf6b4:
    // 0x2cf6b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf6b8: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf6bc: 0xa44007d6  sh          $zero, 0x7D6($v0)
    ctx->pc = 0x2cf6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2006), (uint16_t)GPR_U32(ctx, 0));
label_2cf6c0:
    // 0x2cf6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf6c4:
    // 0x2cf6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf6c8:
    // 0x2cf6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF6C8u;
            // 0x2cf6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF6D0u;
}
