#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_USE_ITEM__FP12RS_STACKDATAi
// Address: 0x2640b0 - 0x264180
void ps2__GOTO_USE_ITEM__FP12RS_STACKDATAi_0x2640b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_USE_ITEM__FP12RS_STACKDATAi_0x2640b0");
#endif

    switch (ctx->pc) {
        case 0x264114u: goto label_264114;
        case 0x264120u: goto label_264120;
        default: break;
    }

    ctx->pc = 0x2640b0u;

    // 0x2640b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2640b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2640b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2640b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2640b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2640b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2640bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2640bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2640c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2640c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2640c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2640c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2640c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2640c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2640ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2640d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2640d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2640d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2640D4u;
    {
        const bool branch_taken_0x2640d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2640D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2640D4u;
            // 0x2640d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640d4) {
            ctx->pc = 0x2640E4u;
            goto label_2640e4;
        }
    }
    ctx->pc = 0x2640DCu;
    // 0x2640dc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2640DCu;
    {
        const bool branch_taken_0x2640dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2640DCu;
            // 0x2640e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640dc) {
            ctx->pc = 0x264164u;
            goto label_264164;
        }
    }
    ctx->pc = 0x2640E4u;
label_2640e4:
    // 0x2640e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2640e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2640e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2640ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2640ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2640f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2640f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2640f4: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x2640f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x2640f8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2640f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2640fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2640fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x264100: 0xac30d648  sw          $s0, -0x29B8($at)
    ctx->pc = 0x264100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 16));
    // 0x264104: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x264104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264108: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x264108u;
    {
        const bool branch_taken_0x264108 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264108u;
            // 0x26410c: 0xaf8397f0  sw          $v1, -0x6810($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264108) {
            ctx->pc = 0x264140u;
            goto label_264140;
        }
    }
    ctx->pc = 0x264110u;
    // 0x264110: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x264110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_264114:
    // 0x264114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264118: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264118u;
    SET_GPR_U32(ctx, 31, 0x264120u);
    ctx->pc = 0x26411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264118u;
            // 0x26411c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264120u; }
        if (ctx->pc != 0x264120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264120u; }
        if (ctx->pc != 0x264120u) { return; }
    }
    ctx->pc = 0x264120u;
label_264120:
    // 0x264120: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x264124: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264128: 0x2463d5f0  addiu       $v1, $v1, -0x2A10
    ctx->pc = 0x264128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956528));
    // 0x26412c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x26412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x264130: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x264130u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x264134: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x264134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x264138: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x264138u;
    {
        const bool branch_taken_0x264138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264138u;
            // 0x26413c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264138) {
            ctx->pc = 0x264114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264114;
        }
    }
    ctx->pc = 0x264140u;
label_264140:
    // 0x264140: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x264140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x264144: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x264144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264148: 0x2442d648  addiu       $v0, $v0, -0x29B8
    ctx->pc = 0x264148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956616));
    // 0x26414c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x26414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x264150: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x264150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264154: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x264154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x264158: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x264158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26415c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264160: 0xac23e500  sw          $v1, -0x1B00($at)
    ctx->pc = 0x264160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 3));
label_264164:
    // 0x264164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x264164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26416c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26416cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264178: 0x3e00008  jr          $ra
    ctx->pc = 0x264178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264178u;
            // 0x26417c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264180u;
}
