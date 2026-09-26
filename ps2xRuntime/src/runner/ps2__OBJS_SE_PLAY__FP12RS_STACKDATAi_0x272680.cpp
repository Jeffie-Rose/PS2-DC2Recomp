#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x272680 - 0x2726f0
void ps2__OBJS_SE_PLAY__FP12RS_STACKDATAi_0x272680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SE_PLAY__FP12RS_STACKDATAi_0x272680");
#endif

    switch (ctx->pc) {
        case 0x272698u: goto label_272698;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726d8u: goto label_2726d8;
        default: break;
    }

    ctx->pc = 0x272680u;

    // 0x272680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27268c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27268cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272690: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272690u;
    SET_GPR_U32(ctx, 31, 0x272698u);
    ctx->pc = 0x272694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272690u;
            // 0x272694: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272698u; }
        if (ctx->pc != 0x272698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272698u; }
        if (ctx->pc != 0x272698u) { return; }
    }
    ctx->pc = 0x272698u;
label_272698:
    // 0x272698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27269c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27269cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2726A0u;
    SET_GPR_U32(ctx, 31, 0x2726A8u);
    ctx->pc = 0x2726A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2726A0u;
            // 0x2726a4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726A8u; }
        if (ctx->pc != 0x2726A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726A8u; }
        if (ctx->pc != 0x2726A8u) { return; }
    }
    ctx->pc = 0x2726A8u;
label_2726a8:
    // 0x2726a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2726a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2726ACu;
    SET_GPR_U32(ctx, 31, 0x2726B4u);
    ctx->pc = 0x2726B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2726ACu;
            // 0x2726b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726B4u; }
        if (ctx->pc != 0x2726B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726B4u; }
        if (ctx->pc != 0x2726B4u) { return; }
    }
    ctx->pc = 0x2726B4u;
label_2726b4:
    // 0x2726b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2726b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726b8: 0xc098a44  jal         func_262910
    ctx->pc = 0x2726B8u;
    SET_GPR_U32(ctx, 31, 0x2726C0u);
    ctx->pc = 0x2726BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2726B8u;
            // 0x2726bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726C0u; }
        if (ctx->pc != 0x2726C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726C0u; }
        if (ctx->pc != 0x2726C0u) { return; }
    }
    ctx->pc = 0x2726C0u;
label_2726c0:
    // 0x2726c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2726C0u;
    {
        const bool branch_taken_0x2726c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2726C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726C0u;
            // 0x2726c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726c0) {
            ctx->pc = 0x2726D0u;
            goto label_2726d0;
        }
    }
    ctx->pc = 0x2726C8u;
    // 0x2726c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2726C8u;
    {
        const bool branch_taken_0x2726c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726C8u;
            // 0x2726cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726c8) {
            ctx->pc = 0x2726DCu;
            goto label_2726dc;
        }
    }
    ctx->pc = 0x2726D0u;
label_2726d0:
    // 0x2726d0: 0xc09750c  jal         func_25D430
    ctx->pc = 0x2726D0u;
    SET_GPR_U32(ctx, 31, 0x2726D8u);
    ctx->pc = 0x2726D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2726D0u;
            // 0x2726d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D430u;
    if (runtime->hasFunction(0x25D430u)) {
        auto targetFn = runtime->lookupFunction(0x25D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726D8u; }
        if (ctx->pc != 0x2726D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlay__12CSceneObjSeqFii_0x25d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726D8u; }
        if (ctx->pc != 0x2726D8u) { return; }
    }
    ctx->pc = 0x2726D8u;
label_2726d8:
    // 0x2726d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2726d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2726dc:
    // 0x2726dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2726dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2726e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2726e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2726e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2726e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2726e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2726E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2726E8u;
            // 0x2726ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2726F0u;
}
