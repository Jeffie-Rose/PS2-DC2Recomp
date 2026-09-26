#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_SCORE__FP12RS_STACKDATAi
// Address: 0x276700 - 0x276790
void ps2__SPHIDA_GET_SCORE__FP12RS_STACKDATAi_0x276700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_SCORE__FP12RS_STACKDATAi_0x276700");
#endif

    switch (ctx->pc) {
        case 0x27672cu: goto label_27672c;
        case 0x276744u: goto label_276744;
        case 0x276760u: goto label_276760;
        case 0x27676cu: goto label_27676c;
        case 0x276778u: goto label_276778;
        default: break;
    }

    ctx->pc = 0x276700u;

    // 0x276700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x276704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27670c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276714: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276714u;
    {
        const bool branch_taken_0x276714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x276718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276714u;
            // 0x276718: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276714) {
            ctx->pc = 0x276724u;
            goto label_276724;
        }
    }
    ctx->pc = 0x27671Cu;
    // 0x27671c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27671Cu;
    {
        const bool branch_taken_0x27671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27671Cu;
            // 0x276720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27671c) {
            ctx->pc = 0x27677Cu;
            goto label_27677c;
        }
    }
    ctx->pc = 0x276724u;
label_276724:
    // 0x276724: 0xc064224  jal         func_190890
    ctx->pc = 0x276724u;
    SET_GPR_U32(ctx, 31, 0x27672Cu);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27672Cu; }
        if (ctx->pc != 0x27672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27672Cu; }
        if (ctx->pc != 0x27672Cu) { return; }
    }
    ctx->pc = 0x27672Cu;
label_27672c:
    // 0x27672c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27672Cu;
    {
        const bool branch_taken_0x27672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27672Cu;
            // 0x276730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27672c) {
            ctx->pc = 0x27673Cu;
            goto label_27673c;
        }
    }
    ctx->pc = 0x276734u;
    // 0x276734: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x276734u;
    {
        const bool branch_taken_0x276734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276734u;
            // 0x276738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276734) {
            ctx->pc = 0x27677Cu;
            goto label_27677c;
        }
    }
    ctx->pc = 0x27673Cu;
label_27673c:
    // 0x27673c: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x27673Cu;
    SET_GPR_U32(ctx, 31, 0x276744u);
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276744u; }
        if (ctx->pc != 0x276744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276744u; }
        if (ctx->pc != 0x276744u) { return; }
    }
    ctx->pc = 0x276744u;
label_276744:
    // 0x276744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276744u;
    {
        const bool branch_taken_0x276744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276744u;
            // 0x276748: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276744) {
            ctx->pc = 0x276754u;
            goto label_276754;
        }
    }
    ctx->pc = 0x27674Cu;
    // 0x27674c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27674Cu;
    {
        const bool branch_taken_0x27674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27674Cu;
            // 0x276750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27674c) {
            ctx->pc = 0x27677Cu;
            goto label_27677c;
        }
    }
    ctx->pc = 0x276754u;
label_276754:
    // 0x276754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276758: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276758u;
    SET_GPR_U32(ctx, 31, 0x276760u);
    ctx->pc = 0x27675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276758u;
            // 0x27675c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276760u; }
        if (ctx->pc != 0x276760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276760u; }
        if (ctx->pc != 0x276760u) { return; }
    }
    ctx->pc = 0x276760u;
label_276760:
    // 0x276760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276764: 0xc0bdb0c  jal         func_2F6C30
    ctx->pc = 0x276764u;
    SET_GPR_U32(ctx, 31, 0x27676Cu);
    ctx->pc = 0x276768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276764u;
            // 0x276768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6C30u;
    if (runtime->hasFunction(0x2F6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2F6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27676Cu; }
        if (ctx->pc != 0x27676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHorlScore__11CSphidaDataFi_0x2f6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27676Cu; }
        if (ctx->pc != 0x27676Cu) { return; }
    }
    ctx->pc = 0x27676Cu;
label_27676c:
    // 0x27676c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276770: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x276770u;
    SET_GPR_U32(ctx, 31, 0x276778u);
    ctx->pc = 0x276774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276770u;
            // 0x276774: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276778u; }
        if (ctx->pc != 0x276778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276778u; }
        if (ctx->pc != 0x276778u) { return; }
    }
    ctx->pc = 0x276778u;
label_276778:
    // 0x276778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27677c:
    // 0x27677c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276788: 0x3e00008  jr          $ra
    ctx->pc = 0x276788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276788u;
            // 0x27678c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276790u;
}
