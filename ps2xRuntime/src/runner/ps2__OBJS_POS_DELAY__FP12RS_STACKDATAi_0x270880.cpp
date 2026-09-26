#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_POS_DELAY__FP12RS_STACKDATAi
// Address: 0x270880 - 0x2708d8
void ps2__OBJS_POS_DELAY__FP12RS_STACKDATAi_0x270880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_POS_DELAY__FP12RS_STACKDATAi_0x270880");
#endif

    switch (ctx->pc) {
        case 0x270894u: goto label_270894;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708acu: goto label_2708ac;
        case 0x2708c4u: goto label_2708c4;
        default: break;
    }

    ctx->pc = 0x270880u;

    // 0x270880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27088c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27088Cu;
    SET_GPR_U32(ctx, 31, 0x270894u);
    ctx->pc = 0x270890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27088Cu;
            // 0x270890: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270894u; }
        if (ctx->pc != 0x270894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270894u; }
        if (ctx->pc != 0x270894u) { return; }
    }
    ctx->pc = 0x270894u;
label_270894:
    // 0x270894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270898: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270898u;
    SET_GPR_U32(ctx, 31, 0x2708A0u);
    ctx->pc = 0x27089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270898u;
            // 0x27089c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2708A0u; }
        if (ctx->pc != 0x2708A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2708A0u; }
        if (ctx->pc != 0x2708A0u) { return; }
    }
    ctx->pc = 0x2708A0u;
label_2708a0:
    // 0x2708a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2708a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708a4: 0xc098a44  jal         func_262910
    ctx->pc = 0x2708A4u;
    SET_GPR_U32(ctx, 31, 0x2708ACu);
    ctx->pc = 0x2708A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2708A4u;
            // 0x2708a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2708ACu; }
        if (ctx->pc != 0x2708ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2708ACu; }
        if (ctx->pc != 0x2708ACu) { return; }
    }
    ctx->pc = 0x2708ACu;
label_2708ac:
    // 0x2708ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2708ACu;
    {
        const bool branch_taken_0x2708ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2708B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708ACu;
            // 0x2708b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708ac) {
            ctx->pc = 0x2708BCu;
            goto label_2708bc;
        }
    }
    ctx->pc = 0x2708B4u;
    // 0x2708b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2708B4u;
    {
        const bool branch_taken_0x2708b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708B4u;
            // 0x2708b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708b4) {
            ctx->pc = 0x2708C8u;
            goto label_2708c8;
        }
    }
    ctx->pc = 0x2708BCu;
label_2708bc:
    // 0x2708bc: 0xc097244  jal         func_25C910
    ctx->pc = 0x2708BCu;
    SET_GPR_U32(ctx, 31, 0x2708C4u);
    ctx->pc = 0x25C910u;
    if (runtime->hasFunction(0x25C910u)) {
        auto targetFn = runtime->lookupFunction(0x25C910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2708C4u; }
        if (ctx->pc != 0x2708C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PosDelay__12CSceneObjSeqFi_0x25c910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2708C4u; }
        if (ctx->pc != 0x2708C4u) { return; }
    }
    ctx->pc = 0x2708C4u;
label_2708c4:
    // 0x2708c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2708c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2708c8:
    // 0x2708c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2708c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2708cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2708ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2708d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2708D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2708D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708D0u;
            // 0x2708d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2708D8u;
}
