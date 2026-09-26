#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_NOW_HOLE__FP12RS_STACKDATAi
// Address: 0x276590 - 0x2765fc
void ps2__SPHIDA_SET_NOW_HOLE__FP12RS_STACKDATAi_0x276590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_NOW_HOLE__FP12RS_STACKDATAi_0x276590");
#endif

    switch (ctx->pc) {
        case 0x2765a8u: goto label_2765a8;
        case 0x2765c0u: goto label_2765c0;
        case 0x2765d8u: goto label_2765d8;
        case 0x2765e4u: goto label_2765e4;
        default: break;
    }

    ctx->pc = 0x276590u;

    // 0x276590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27659c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27659cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765a0: 0xc064224  jal         func_190890
    ctx->pc = 0x2765A0u;
    SET_GPR_U32(ctx, 31, 0x2765A8u);
    ctx->pc = 0x2765A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2765A0u;
            // 0x2765a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765A8u; }
        if (ctx->pc != 0x2765A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765A8u; }
        if (ctx->pc != 0x2765A8u) { return; }
    }
    ctx->pc = 0x2765A8u;
label_2765a8:
    // 0x2765a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2765A8u;
    {
        const bool branch_taken_0x2765a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2765ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765A8u;
            // 0x2765ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765a8) {
            ctx->pc = 0x2765B8u;
            goto label_2765b8;
        }
    }
    ctx->pc = 0x2765B0u;
    // 0x2765b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2765B0u;
    {
        const bool branch_taken_0x2765b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765B0u;
            // 0x2765b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765b0) {
            ctx->pc = 0x2765E8u;
            goto label_2765e8;
        }
    }
    ctx->pc = 0x2765B8u;
label_2765b8:
    // 0x2765b8: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x2765B8u;
    SET_GPR_U32(ctx, 31, 0x2765C0u);
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765C0u; }
        if (ctx->pc != 0x2765C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765C0u; }
        if (ctx->pc != 0x2765C0u) { return; }
    }
    ctx->pc = 0x2765C0u;
label_2765c0:
    // 0x2765c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2765C0u;
    {
        const bool branch_taken_0x2765c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2765C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765C0u;
            // 0x2765c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765c0) {
            ctx->pc = 0x2765D0u;
            goto label_2765d0;
        }
    }
    ctx->pc = 0x2765C8u;
    // 0x2765c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2765C8u;
    {
        const bool branch_taken_0x2765c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765C8u;
            // 0x2765cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765c8) {
            ctx->pc = 0x2765E8u;
            goto label_2765e8;
        }
    }
    ctx->pc = 0x2765D0u;
label_2765d0:
    // 0x2765d0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2765D0u;
    SET_GPR_U32(ctx, 31, 0x2765D8u);
    ctx->pc = 0x2765D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2765D0u;
            // 0x2765d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765D8u; }
        if (ctx->pc != 0x2765D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765D8u; }
        if (ctx->pc != 0x2765D8u) { return; }
    }
    ctx->pc = 0x2765D8u;
label_2765d8:
    // 0x2765d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2765d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765dc: 0xc0bdaf0  jal         func_2F6BC0
    ctx->pc = 0x2765DCu;
    SET_GPR_U32(ctx, 31, 0x2765E4u);
    ctx->pc = 0x2765E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2765DCu;
            // 0x2765e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BC0u;
    if (runtime->hasFunction(0x2F6BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765E4u; }
        if (ctx->pc != 0x2765E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHorl__11CSphidaDataFi_0x2f6bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765E4u; }
        if (ctx->pc != 0x2765E4u) { return; }
    }
    ctx->pc = 0x2765E4u;
label_2765e4:
    // 0x2765e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2765e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2765e8:
    // 0x2765e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2765e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2765ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2765ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2765f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2765f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2765f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2765F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2765F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765F4u;
            // 0x2765f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2765FCu;
}
