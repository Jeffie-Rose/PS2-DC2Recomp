#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_NEXT_REF__FP12RS_STACKDATAi
// Address: 0x267560 - 0x267690
void ps2__SET_CAMERA_NEXT_REF__FP12RS_STACKDATAi_0x267560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_NEXT_REF__FP12RS_STACKDATAi_0x267560");
#endif

    switch (ctx->pc) {
        case 0x267580u: goto label_267580;
        case 0x2675b8u: goto label_2675b8;
        case 0x2675dcu: goto label_2675dc;
        case 0x267648u: goto label_267648;
        case 0x267658u: goto label_267658;
        case 0x267674u: goto label_267674;
        default: break;
    }

    ctx->pc = 0x267560u;

    // 0x267560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x267564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x267568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26756c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267574: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x267574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267578: 0xc0956c8  jal         func_255B20
    ctx->pc = 0x267578u;
    SET_GPR_U32(ctx, 31, 0x267580u);
    ctx->pc = 0x26757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267578u;
            // 0x26757c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267580u; }
        if (ctx->pc != 0x267580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267580u; }
        if (ctx->pc != 0x267580u) { return; }
    }
    ctx->pc = 0x267580u;
label_267580:
    // 0x267580: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267580u;
    {
        const bool branch_taken_0x267580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267580u;
            // 0x267584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267580) {
            ctx->pc = 0x267590u;
            goto label_267590;
        }
    }
    ctx->pc = 0x267588u;
    // 0x267588: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x267588u;
    {
        const bool branch_taken_0x267588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267588u;
            // 0x26758c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267588) {
            ctx->pc = 0x267678u;
            goto label_267678;
        }
    }
    ctx->pc = 0x267590u;
label_267590:
    // 0x267590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267594: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x267594u;
    {
        const bool branch_taken_0x267594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267594u;
            // 0x267598: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267594) {
            ctx->pc = 0x267650u;
            goto label_267650;
        }
    }
    ctx->pc = 0x26759Cu;
    // 0x26759c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2675a0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2675A0u;
    {
        const bool branch_taken_0x2675a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2675A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675A0u;
            // 0x2675a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675a0) {
            ctx->pc = 0x2675B0u;
            goto label_2675b0;
        }
    }
    ctx->pc = 0x2675A8u;
    // 0x2675a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2675A8u;
    {
        const bool branch_taken_0x2675a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675A8u;
            // 0x2675ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675a8) {
            ctx->pc = 0x267660u;
            goto label_267660;
        }
    }
    ctx->pc = 0x2675B0u;
label_2675b0:
    // 0x2675b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2675B0u;
    SET_GPR_U32(ctx, 31, 0x2675B8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2675B8u; }
        if (ctx->pc != 0x2675B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2675B8u; }
        if (ctx->pc != 0x2675B8u) { return; }
    }
    ctx->pc = 0x2675B8u;
label_2675b8:
    // 0x2675b8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2675b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2675bc: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x2675bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x2675c0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2675C0u;
    {
        const bool branch_taken_0x2675c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2675C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675C0u;
            // 0x2675c4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675c0) {
            ctx->pc = 0x2675D0u;
            goto label_2675d0;
        }
    }
    ctx->pc = 0x2675C8u;
    // 0x2675c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2675C8u;
    {
        const bool branch_taken_0x2675c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675C8u;
            // 0x2675cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675c8) {
            ctx->pc = 0x267630u;
            goto label_267630;
        }
    }
    ctx->pc = 0x2675D0u;
label_2675d0:
    // 0x2675d0: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x2675d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x2675d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2675D4u;
    {
        const bool branch_taken_0x2675d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675D4u;
            // 0x2675d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675d4) {
            ctx->pc = 0x267608u;
            goto label_267608;
        }
    }
    ctx->pc = 0x2675DCu;
label_2675dc:
    // 0x2675dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2675dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2675e0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2675E0u;
    {
        const bool branch_taken_0x2675e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2675e0) {
            ctx->pc = 0x267614u;
            goto label_267614;
        }
    }
    ctx->pc = 0x2675E8u;
    // 0x2675e8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2675e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2675ec: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2675ECu;
    {
        const bool branch_taken_0x2675ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2675ec) {
            ctx->pc = 0x2675FCu;
            goto label_2675fc;
        }
    }
    ctx->pc = 0x2675F4u;
    // 0x2675f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2675F4u;
    {
        const bool branch_taken_0x2675f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675F4u;
            // 0x2675f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675f4) {
            ctx->pc = 0x267608u;
            goto label_267608;
        }
    }
    ctx->pc = 0x2675FCu;
label_2675fc:
    // 0x2675fc: 0x0  nop
    ctx->pc = 0x2675fcu;
    // NOP
    // 0x267600: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x267600u;
    {
        const bool branch_taken_0x267600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267600u;
            // 0x267604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267600) {
            ctx->pc = 0x267630u;
            goto label_267630;
        }
    }
    ctx->pc = 0x267608u;
label_267608:
    // 0x267608: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x267608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26760c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26760Cu;
    {
        const bool branch_taken_0x26760c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26760c) {
            ctx->pc = 0x2675DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2675dc;
        }
    }
    ctx->pc = 0x267614u;
label_267614:
    // 0x267614: 0x0  nop
    ctx->pc = 0x267614u;
    // NOP
    // 0x267618: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x267618u;
    {
        const bool branch_taken_0x267618 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267618u;
            // 0x26761c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267618) {
            ctx->pc = 0x267628u;
            goto label_267628;
        }
    }
    ctx->pc = 0x267620u;
    // 0x267620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267620u;
    {
        const bool branch_taken_0x267620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267620) {
            ctx->pc = 0x267630u;
            goto label_267630;
        }
    }
    ctx->pc = 0x267628u;
label_267628:
    // 0x267628: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x267628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26762c: 0x0  nop
    ctx->pc = 0x26762cu;
    // NOP
label_267630:
    // 0x267630: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267630u;
    {
        const bool branch_taken_0x267630 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x267634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267630u;
            // 0x267634: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267630) {
            ctx->pc = 0x267640u;
            goto label_267640;
        }
    }
    ctx->pc = 0x267638u;
    // 0x267638: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x267638u;
    {
        const bool branch_taken_0x267638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267638u;
            // 0x26763c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267638) {
            ctx->pc = 0x267678u;
            goto label_267678;
        }
    }
    ctx->pc = 0x267640u;
label_267640:
    // 0x267640: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x267640u;
    SET_GPR_U32(ctx, 31, 0x267648u);
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267648u; }
        if (ctx->pc != 0x267648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267648u; }
        if (ctx->pc != 0x267648u) { return; }
    }
    ctx->pc = 0x267648u;
label_267648:
    // 0x267648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267648u;
    {
        const bool branch_taken_0x267648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26764Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267648u;
            // 0x26764c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267648) {
            ctx->pc = 0x26766Cu;
            goto label_26766c;
        }
    }
    ctx->pc = 0x267650u;
label_267650:
    // 0x267650: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x267650u;
    SET_GPR_U32(ctx, 31, 0x267658u);
    ctx->pc = 0x267654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267650u;
            // 0x267654: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267658u; }
        if (ctx->pc != 0x267658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267658u; }
        if (ctx->pc != 0x267658u) { return; }
    }
    ctx->pc = 0x267658u;
label_267658:
    // 0x267658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267658u;
    {
        const bool branch_taken_0x267658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267658) {
            ctx->pc = 0x267668u;
            goto label_267668;
        }
    }
    ctx->pc = 0x267660u;
label_267660:
    // 0x267660: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267660u;
    {
        const bool branch_taken_0x267660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267660u;
            // 0x267664: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267660) {
            ctx->pc = 0x26767Cu;
            goto label_26767c;
        }
    }
    ctx->pc = 0x267668u;
label_267668:
    // 0x267668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26766c:
    // 0x26766c: 0xc04c520  jal         func_131480
    ctx->pc = 0x26766Cu;
    SET_GPR_U32(ctx, 31, 0x267674u);
    ctx->pc = 0x267670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26766Cu;
            // 0x267670: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131480u;
    if (runtime->hasFunction(0x131480u)) {
        auto targetFn = runtime->lookupFunction(0x131480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267674u; }
        if (ctx->pc != 0x267674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFPf_0x131480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267674u; }
        if (ctx->pc != 0x267674u) { return; }
    }
    ctx->pc = 0x267674u;
label_267674:
    // 0x267674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267678:
    // 0x267678: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x267678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26767c:
    // 0x26767c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26767cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267688: 0x3e00008  jr          $ra
    ctx->pc = 0x267688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267688u;
            // 0x26768c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267690u;
}
