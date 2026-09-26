#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACCUME_FX__FP12RS_STACKDATAi
// Address: 0x2cf4e0 - 0x2cf580
void ps2__SET_ACCUME_FX__FP12RS_STACKDATAi_0x2cf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACCUME_FX__FP12RS_STACKDATAi_0x2cf4e0");
#endif

    switch (ctx->pc) {
        case 0x2cf520u: goto label_2cf520;
        case 0x2cf52cu: goto label_2cf52c;
        default: break;
    }

    ctx->pc = 0x2cf4e0u;

    // 0x2cf4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf4e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf4ec: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF4ECu;
    {
        const bool branch_taken_0x2cf4ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4ECu;
            // 0x2cf4f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4ec) {
            ctx->pc = 0x2CF4FCu;
            goto label_2cf4fc;
        }
    }
    ctx->pc = 0x2CF4F4u;
    // 0x2cf4f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2CF4F4u;
    {
        const bool branch_taken_0x2cf4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4F4u;
            // 0x2cf4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4f4) {
            ctx->pc = 0x2CF570u;
            goto label_2cf570;
        }
    }
    ctx->pc = 0x2CF4FCu;
label_2cf4fc:
    // 0x2cf4fc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf500: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf504: 0x8c4207cc  lw          $v0, 0x7CC($v0)
    ctx->pc = 0x2cf504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1996)));
    // 0x2cf508: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF508u;
    {
        const bool branch_taken_0x2cf508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF508u;
            // 0x2cf50c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf508) {
            ctx->pc = 0x2CF518u;
            goto label_2cf518;
        }
    }
    ctx->pc = 0x2CF510u;
    // 0x2cf510: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2CF510u;
    {
        const bool branch_taken_0x2cf510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF510u;
            // 0x2cf514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf510) {
            ctx->pc = 0x2CF570u;
            goto label_2cf570;
        }
    }
    ctx->pc = 0x2CF518u;
label_2cf518:
    // 0x2cf518: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF518u;
    SET_GPR_U32(ctx, 31, 0x2CF520u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF520u; }
        if (ctx->pc != 0x2CF520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF520u; }
        if (ctx->pc != 0x2CF520u) { return; }
    }
    ctx->pc = 0x2CF520u;
label_2cf520:
    // 0x2cf520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf524: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF524u;
    SET_GPR_U32(ctx, 31, 0x2CF52Cu);
    ctx->pc = 0x2CF528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF524u;
            // 0x2cf528: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF52Cu; }
        if (ctx->pc != 0x2CF52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF52Cu; }
        if (ctx->pc != 0x2CF52Cu) { return; }
    }
    ctx->pc = 0x2CF52Cu;
label_2cf52c:
    // 0x2cf52c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf530: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x2cf530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2cf534: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf53c: 0x8c630c00  lw          $v1, 0xC00($v1)
    ctx->pc = 0x2cf53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x2cf540: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF540u;
    {
        const bool branch_taken_0x2cf540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf540) {
            ctx->pc = 0x2CF550u;
            goto label_2cf550;
        }
    }
    ctx->pc = 0x2CF548u;
    // 0x2cf548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF548u;
    {
        const bool branch_taken_0x2cf548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF548u;
            // 0x2cf54c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf548) {
            ctx->pc = 0x2CF570u;
            goto label_2cf570;
        }
    }
    ctx->pc = 0x2CF550u;
label_2cf550:
    // 0x2cf550: 0xac8307d0  sw          $v1, 0x7D0($a0)
    ctx->pc = 0x2cf550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2000), GPR_U32(ctx, 3));
    // 0x2cf554: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf558: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf55c: 0xa46207d4  sh          $v0, 0x7D4($v1)
    ctx->pc = 0x2cf55cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2004), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cf560: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf564: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf56c: 0xa46007d6  sh          $zero, 0x7D6($v1)
    ctx->pc = 0x2cf56cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2006), (uint16_t)GPR_U32(ctx, 0));
label_2cf570:
    // 0x2cf570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf578: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF578u;
            // 0x2cf57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF580u;
}
