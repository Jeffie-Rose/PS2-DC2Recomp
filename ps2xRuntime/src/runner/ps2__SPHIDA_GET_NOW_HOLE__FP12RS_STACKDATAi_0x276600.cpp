#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_NOW_HOLE__FP12RS_STACKDATAi
// Address: 0x276600 - 0x276678
void ps2__SPHIDA_GET_NOW_HOLE__FP12RS_STACKDATAi_0x276600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_NOW_HOLE__FP12RS_STACKDATAi_0x276600");
#endif

    switch (ctx->pc) {
        case 0x276628u: goto label_276628;
        case 0x276640u: goto label_276640;
        case 0x276658u: goto label_276658;
        case 0x276664u: goto label_276664;
        default: break;
    }

    ctx->pc = 0x276600u;

    // 0x276600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27660c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276610: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276610u;
    {
        const bool branch_taken_0x276610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x276614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276610u;
            // 0x276614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276610) {
            ctx->pc = 0x276620u;
            goto label_276620;
        }
    }
    ctx->pc = 0x276618u;
    // 0x276618: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x276618u;
    {
        const bool branch_taken_0x276618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276618u;
            // 0x27661c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276618) {
            ctx->pc = 0x276668u;
            goto label_276668;
        }
    }
    ctx->pc = 0x276620u;
label_276620:
    // 0x276620: 0xc064224  jal         func_190890
    ctx->pc = 0x276620u;
    SET_GPR_U32(ctx, 31, 0x276628u);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276628u; }
        if (ctx->pc != 0x276628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276628u; }
        if (ctx->pc != 0x276628u) { return; }
    }
    ctx->pc = 0x276628u;
label_276628:
    // 0x276628: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276628u;
    {
        const bool branch_taken_0x276628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276628u;
            // 0x27662c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276628) {
            ctx->pc = 0x276638u;
            goto label_276638;
        }
    }
    ctx->pc = 0x276630u;
    // 0x276630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x276630u;
    {
        const bool branch_taken_0x276630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276630u;
            // 0x276634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276630) {
            ctx->pc = 0x276668u;
            goto label_276668;
        }
    }
    ctx->pc = 0x276638u;
label_276638:
    // 0x276638: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x276638u;
    SET_GPR_U32(ctx, 31, 0x276640u);
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276640u; }
        if (ctx->pc != 0x276640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276640u; }
        if (ctx->pc != 0x276640u) { return; }
    }
    ctx->pc = 0x276640u;
label_276640:
    // 0x276640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276640u;
    {
        const bool branch_taken_0x276640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276640u;
            // 0x276644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276640) {
            ctx->pc = 0x276650u;
            goto label_276650;
        }
    }
    ctx->pc = 0x276648u;
    // 0x276648: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x276648u;
    {
        const bool branch_taken_0x276648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276648u;
            // 0x27664c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276648) {
            ctx->pc = 0x276668u;
            goto label_276668;
        }
    }
    ctx->pc = 0x276650u;
label_276650:
    // 0x276650: 0xc0bdb08  jal         func_2F6C20
    ctx->pc = 0x276650u;
    SET_GPR_U32(ctx, 31, 0x276658u);
    ctx->pc = 0x2F6C20u;
    if (runtime->hasFunction(0x2F6C20u)) {
        auto targetFn = runtime->lookupFunction(0x2F6C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276658u; }
        if (ctx->pc != 0x276658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHorl__11CSphidaDataFv_0x2f6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276658u; }
        if (ctx->pc != 0x276658u) { return; }
    }
    ctx->pc = 0x276658u;
label_276658:
    // 0x276658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27665c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27665Cu;
    SET_GPR_U32(ctx, 31, 0x276664u);
    ctx->pc = 0x276660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27665Cu;
            // 0x276660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276664u; }
        if (ctx->pc != 0x276664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276664u; }
        if (ctx->pc != 0x276664u) { return; }
    }
    ctx->pc = 0x276664u;
label_276664:
    // 0x276664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276668:
    // 0x276668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27666c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276670: 0x3e00008  jr          $ra
    ctx->pc = 0x276670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276670u;
            // 0x276674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276678u;
}
