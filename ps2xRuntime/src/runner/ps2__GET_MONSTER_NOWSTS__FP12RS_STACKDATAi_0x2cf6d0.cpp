#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONSTER_NOWSTS__FP12RS_STACKDATAi
// Address: 0x2cf6d0 - 0x2cf748
void ps2__GET_MONSTER_NOWSTS__FP12RS_STACKDATAi_0x2cf6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONSTER_NOWSTS__FP12RS_STACKDATAi_0x2cf6d0");
#endif

    switch (ctx->pc) {
        case 0x2cf714u: goto label_2cf714;
        case 0x2cf730u: goto label_2cf730;
        default: break;
    }

    ctx->pc = 0x2cf6d0u;

    // 0x2cf6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf6d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf6e4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF6E4u;
    {
        const bool branch_taken_0x2cf6e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF6E4u;
            // 0x2cf6e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6e4) {
            ctx->pc = 0x2CF6F4u;
            goto label_2cf6f4;
        }
    }
    ctx->pc = 0x2CF6ECu;
    // 0x2cf6ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CF6ECu;
    {
        const bool branch_taken_0x2cf6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF6ECu;
            // 0x2cf6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6ec) {
            ctx->pc = 0x2CF734u;
            goto label_2cf734;
        }
    }
    ctx->pc = 0x2CF6F4u;
label_2cf6f4:
    // 0x2cf6f4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf6f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cf6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf6fc: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf700: 0x84650770  lh          $a1, 0x770($v1)
    ctx->pc = 0x2cf700u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1904)));
    // 0x2cf704: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF704u;
    {
        const bool branch_taken_0x2cf704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF704u;
            // 0x2cf708: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf704) {
            ctx->pc = 0x2CF724u;
            goto label_2cf724;
        }
    }
    ctx->pc = 0x2CF70Cu;
    // 0x2cf70c: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2CF70Cu;
    SET_GPR_U32(ctx, 31, 0x2CF714u);
    ctx->pc = 0x2CF710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF70Cu;
            // 0x2cf710: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF714u; }
        if (ctx->pc != 0x2CF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF714u; }
        if (ctx->pc != 0x2CF714u) { return; }
    }
    ctx->pc = 0x2CF714u;
label_2cf714:
    // 0x2cf714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF714u;
    {
        const bool branch_taken_0x2cf714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF714u;
            // 0x2cf718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf714) {
            ctx->pc = 0x2CF728u;
            goto label_2cf728;
        }
    }
    ctx->pc = 0x2CF71Cu;
    // 0x2cf71c: 0x8c50077c  lw          $s0, 0x77C($v0)
    ctx->pc = 0x2cf71cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x2cf720: 0x0  nop
    ctx->pc = 0x2cf720u;
    // NOP
label_2cf724:
    // 0x2cf724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf728:
    // 0x2cf728: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CF728u;
    SET_GPR_U32(ctx, 31, 0x2CF730u);
    ctx->pc = 0x2CF72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF728u;
            // 0x2cf72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF730u; }
        if (ctx->pc != 0x2CF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF730u; }
        if (ctx->pc != 0x2CF730u) { return; }
    }
    ctx->pc = 0x2CF730u;
label_2cf730:
    // 0x2cf730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf734:
    // 0x2cf734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf740: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF740u;
            // 0x2cf744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF748u;
}
