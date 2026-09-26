#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SE_DELAY__FP12RS_STACKDATAi
// Address: 0x272620 - 0x272678
void ps2__OBJS_SE_DELAY__FP12RS_STACKDATAi_0x272620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SE_DELAY__FP12RS_STACKDATAi_0x272620");
#endif

    switch (ctx->pc) {
        case 0x272634u: goto label_272634;
        case 0x272640u: goto label_272640;
        case 0x27264cu: goto label_27264c;
        case 0x272664u: goto label_272664;
        default: break;
    }

    ctx->pc = 0x272620u;

    // 0x272620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27262c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27262Cu;
    SET_GPR_U32(ctx, 31, 0x272634u);
    ctx->pc = 0x272630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27262Cu;
            // 0x272630: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272634u; }
        if (ctx->pc != 0x272634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272634u; }
        if (ctx->pc != 0x272634u) { return; }
    }
    ctx->pc = 0x272634u;
label_272634:
    // 0x272634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272638: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272638u;
    SET_GPR_U32(ctx, 31, 0x272640u);
    ctx->pc = 0x27263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272638u;
            // 0x27263c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272640u; }
        if (ctx->pc != 0x272640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272640u; }
        if (ctx->pc != 0x272640u) { return; }
    }
    ctx->pc = 0x272640u;
label_272640:
    // 0x272640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272644: 0xc098a44  jal         func_262910
    ctx->pc = 0x272644u;
    SET_GPR_U32(ctx, 31, 0x27264Cu);
    ctx->pc = 0x272648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272644u;
            // 0x272648: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27264Cu; }
        if (ctx->pc != 0x27264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27264Cu; }
        if (ctx->pc != 0x27264Cu) { return; }
    }
    ctx->pc = 0x27264Cu;
label_27264c:
    // 0x27264c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27264Cu;
    {
        const bool branch_taken_0x27264c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27264Cu;
            // 0x272650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27264c) {
            ctx->pc = 0x27265Cu;
            goto label_27265c;
        }
    }
    ctx->pc = 0x272654u;
    // 0x272654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272654u;
    {
        const bool branch_taken_0x272654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272654u;
            // 0x272658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272654) {
            ctx->pc = 0x272668u;
            goto label_272668;
        }
    }
    ctx->pc = 0x27265Cu;
label_27265c:
    // 0x27265c: 0xc0974fc  jal         func_25D3F0
    ctx->pc = 0x27265Cu;
    SET_GPR_U32(ctx, 31, 0x272664u);
    ctx->pc = 0x25D3F0u;
    if (runtime->hasFunction(0x25D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x25D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272664u; }
        if (ctx->pc != 0x272664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeDelay__12CSceneObjSeqFi_0x25d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272664u; }
        if (ctx->pc != 0x272664u) { return; }
    }
    ctx->pc = 0x272664u;
label_272664:
    // 0x272664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272668:
    // 0x272668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27266c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27266cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272670: 0x3e00008  jr          $ra
    ctx->pc = 0x272670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272670u;
            // 0x272674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272678u;
}
