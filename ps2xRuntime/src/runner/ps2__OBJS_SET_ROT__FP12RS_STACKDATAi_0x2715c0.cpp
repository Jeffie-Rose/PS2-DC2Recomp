#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_ROT__FP12RS_STACKDATAi
// Address: 0x2715c0 - 0x2716fc
void ps2__OBJS_SET_ROT__FP12RS_STACKDATAi_0x2715c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_ROT__FP12RS_STACKDATAi_0x2715c0");
#endif

    switch (ctx->pc) {
        case 0x2715f4u: goto label_2715f4;
        case 0x271618u: goto label_271618;
        case 0x271680u: goto label_271680;
        case 0x271690u: goto label_271690;
        case 0x2716a0u: goto label_2716a0;
        case 0x2716b0u: goto label_2716b0;
        case 0x2716ccu: goto label_2716cc;
        case 0x2716e4u: goto label_2716e4;
        default: break;
    }

    ctx->pc = 0x2715c0u;

    // 0x2715c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2715c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2715c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2715c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2715c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2715cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2715ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2715d0: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2715D0u;
    {
        const bool branch_taken_0x2715d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2715D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715D0u;
            // 0x2715d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715d0) {
            ctx->pc = 0x271698u;
            goto label_271698;
        }
    }
    ctx->pc = 0x2715D8u;
    // 0x2715d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2715d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2715dc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2715DCu;
    {
        const bool branch_taken_0x2715dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2715dc) {
            ctx->pc = 0x2715ECu;
            goto label_2715ec;
        }
    }
    ctx->pc = 0x2715E4u;
    // 0x2715e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2715E4u;
    {
        const bool branch_taken_0x2715e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715E4u;
            // 0x2715e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715e4) {
            ctx->pc = 0x2716B8u;
            goto label_2716b8;
        }
    }
    ctx->pc = 0x2715ECu;
label_2715ec:
    // 0x2715ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2715ECu;
    SET_GPR_U32(ctx, 31, 0x2715F4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715F4u; }
        if (ctx->pc != 0x2715F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2715F4u; }
        if (ctx->pc != 0x2715F4u) { return; }
    }
    ctx->pc = 0x2715F4u;
label_2715f4:
    // 0x2715f4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2715f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2715f8: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x2715f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x2715fc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2715FCu;
    {
        const bool branch_taken_0x2715fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2715FCu;
            // 0x271600: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715fc) {
            ctx->pc = 0x27160Cu;
            goto label_27160c;
        }
    }
    ctx->pc = 0x271604u;
    // 0x271604: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x271604u;
    {
        const bool branch_taken_0x271604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271604u;
            // 0x271608: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271604) {
            ctx->pc = 0x271668u;
            goto label_271668;
        }
    }
    ctx->pc = 0x27160Cu;
label_27160c:
    // 0x27160c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x27160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x271610: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271610u;
    {
        const bool branch_taken_0x271610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271610u;
            // 0x271614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271610) {
            ctx->pc = 0x271640u;
            goto label_271640;
        }
    }
    ctx->pc = 0x271618u;
label_271618:
    // 0x271618: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x271618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27161c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27161Cu;
    {
        const bool branch_taken_0x27161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27161c) {
            ctx->pc = 0x27164Cu;
            goto label_27164c;
        }
    }
    ctx->pc = 0x271624u;
    // 0x271624: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x271624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x271628: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271628u;
    {
        const bool branch_taken_0x271628 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x271628) {
            ctx->pc = 0x271638u;
            goto label_271638;
        }
    }
    ctx->pc = 0x271630u;
    // 0x271630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271630u;
    {
        const bool branch_taken_0x271630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271630u;
            // 0x271634: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271630) {
            ctx->pc = 0x271640u;
            goto label_271640;
        }
    }
    ctx->pc = 0x271638u;
label_271638:
    // 0x271638: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271638u;
    {
        const bool branch_taken_0x271638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27163Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271638u;
            // 0x27163c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271638) {
            ctx->pc = 0x271668u;
            goto label_271668;
        }
    }
    ctx->pc = 0x271640u;
label_271640:
    // 0x271640: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x271640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271644: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x271644u;
    {
        const bool branch_taken_0x271644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271644) {
            ctx->pc = 0x271618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271618;
        }
    }
    ctx->pc = 0x27164Cu;
label_27164c:
    // 0x27164c: 0x0  nop
    ctx->pc = 0x27164cu;
    // NOP
    // 0x271650: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271650u;
    {
        const bool branch_taken_0x271650 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271650u;
            // 0x271654: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271650) {
            ctx->pc = 0x271660u;
            goto label_271660;
        }
    }
    ctx->pc = 0x271658u;
    // 0x271658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271658u;
    {
        const bool branch_taken_0x271658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271658) {
            ctx->pc = 0x271668u;
            goto label_271668;
        }
    }
    ctx->pc = 0x271660u;
label_271660:
    // 0x271660: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x271660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271664: 0x0  nop
    ctx->pc = 0x271664u;
    // NOP
label_271668:
    // 0x271668: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271668u;
    {
        const bool branch_taken_0x271668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271668u;
            // 0x27166c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271668) {
            ctx->pc = 0x271678u;
            goto label_271678;
        }
    }
    ctx->pc = 0x271670u;
    // 0x271670: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x271670u;
    {
        const bool branch_taken_0x271670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271670u;
            // 0x271674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271670) {
            ctx->pc = 0x2716E8u;
            goto label_2716e8;
        }
    }
    ctx->pc = 0x271678u;
label_271678:
    // 0x271678: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271678u;
    SET_GPR_U32(ctx, 31, 0x271680u);
    ctx->pc = 0x27167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271678u;
            // 0x27167c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271680u; }
        if (ctx->pc != 0x271680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271680u; }
        if (ctx->pc != 0x271680u) { return; }
    }
    ctx->pc = 0x271680u;
label_271680:
    // 0x271680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271688: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x271688u;
    SET_GPR_U32(ctx, 31, 0x271690u);
    ctx->pc = 0x27168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271688u;
            // 0x27168c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271690u; }
        if (ctx->pc != 0x271690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271690u; }
        if (ctx->pc != 0x271690u) { return; }
    }
    ctx->pc = 0x271690u;
label_271690:
    // 0x271690: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271690u;
    {
        const bool branch_taken_0x271690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271690u;
            // 0x271694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271690) {
            ctx->pc = 0x2716C4u;
            goto label_2716c4;
        }
    }
    ctx->pc = 0x271698u;
label_271698:
    // 0x271698: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271698u;
    SET_GPR_U32(ctx, 31, 0x2716A0u);
    ctx->pc = 0x27169Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271698u;
            // 0x27169c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716A0u; }
        if (ctx->pc != 0x2716A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716A0u; }
        if (ctx->pc != 0x2716A0u) { return; }
    }
    ctx->pc = 0x2716A0u;
label_2716a0:
    // 0x2716a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2716a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2716a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2716a8: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2716A8u;
    SET_GPR_U32(ctx, 31, 0x2716B0u);
    ctx->pc = 0x2716ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2716A8u;
            // 0x2716ac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716B0u; }
        if (ctx->pc != 0x2716B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716B0u; }
        if (ctx->pc != 0x2716B0u) { return; }
    }
    ctx->pc = 0x2716B0u;
label_2716b0:
    // 0x2716b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2716B0u;
    {
        const bool branch_taken_0x2716b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716b0) {
            ctx->pc = 0x2716C0u;
            goto label_2716c0;
        }
    }
    ctx->pc = 0x2716B8u;
label_2716b8:
    // 0x2716b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2716B8u;
    {
        const bool branch_taken_0x2716b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716B8u;
            // 0x2716bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716b8) {
            ctx->pc = 0x2716ECu;
            goto label_2716ec;
        }
    }
    ctx->pc = 0x2716C0u;
label_2716c0:
    // 0x2716c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2716c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2716c4:
    // 0x2716c4: 0xc098a44  jal         func_262910
    ctx->pc = 0x2716C4u;
    SET_GPR_U32(ctx, 31, 0x2716CCu);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716CCu; }
        if (ctx->pc != 0x2716CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716CCu; }
        if (ctx->pc != 0x2716CCu) { return; }
    }
    ctx->pc = 0x2716CCu;
label_2716cc:
    // 0x2716cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2716CCu;
    {
        const bool branch_taken_0x2716cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2716D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716CCu;
            // 0x2716d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716cc) {
            ctx->pc = 0x2716DCu;
            goto label_2716dc;
        }
    }
    ctx->pc = 0x2716D4u;
    // 0x2716d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2716D4u;
    {
        const bool branch_taken_0x2716d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716D4u;
            // 0x2716d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716d4) {
            ctx->pc = 0x2716E8u;
            goto label_2716e8;
        }
    }
    ctx->pc = 0x2716DCu;
label_2716dc:
    // 0x2716dc: 0xc097358  jal         func_25CD60
    ctx->pc = 0x2716DCu;
    SET_GPR_U32(ctx, 31, 0x2716E4u);
    ctx->pc = 0x2716E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2716DCu;
            // 0x2716e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD60u;
    if (runtime->hasFunction(0x25CD60u)) {
        auto targetFn = runtime->lookupFunction(0x25CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716E4u; }
        if (ctx->pc != 0x2716E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRot__12CSceneObjSeqFPf_0x25cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2716E4u; }
        if (ctx->pc != 0x2716E4u) { return; }
    }
    ctx->pc = 0x2716E4u;
label_2716e4:
    // 0x2716e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2716e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2716e8:
    // 0x2716e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2716e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2716ec:
    // 0x2716ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2716ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2716f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2716f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2716f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2716F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2716F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716F4u;
            // 0x2716f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2716FCu;
}
