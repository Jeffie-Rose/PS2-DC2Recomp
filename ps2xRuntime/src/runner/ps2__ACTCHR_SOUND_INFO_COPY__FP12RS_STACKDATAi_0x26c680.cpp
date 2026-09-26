#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ACTCHR_SOUND_INFO_COPY__FP12RS_STACKDATAi
// Address: 0x26c680 - 0x26c6d0
void ps2__ACTCHR_SOUND_INFO_COPY__FP12RS_STACKDATAi_0x26c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ACTCHR_SOUND_INFO_COPY__FP12RS_STACKDATAi_0x26c680");
#endif

    switch (ctx->pc) {
        case 0x26c690u: goto label_26c690;
        case 0x26c698u: goto label_26c698;
        case 0x26c6c0u: goto label_26c6c0;
        default: break;
    }

    ctx->pc = 0x26c680u;

    // 0x26c680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c688: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C688u;
    SET_GPR_U32(ctx, 31, 0x26C690u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C690u; }
        if (ctx->pc != 0x26C690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C690u; }
        if (ctx->pc != 0x26C690u) { return; }
    }
    ctx->pc = 0x26C690u;
label_26c690:
    // 0x26c690: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x26C690u;
    SET_GPR_U32(ctx, 31, 0x26C698u);
    ctx->pc = 0x26C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C690u;
            // 0x26c694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C698u; }
        if (ctx->pc != 0x26C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C698u; }
        if (ctx->pc != 0x26C698u) { return; }
    }
    ctx->pc = 0x26C698u;
label_26c698:
    // 0x26c698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C698u;
    {
        const bool branch_taken_0x26c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c698) {
            ctx->pc = 0x26C6A8u;
            goto label_26c6a8;
        }
    }
    ctx->pc = 0x26C6A0u;
    // 0x26c6a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26C6A0u;
    {
        const bool branch_taken_0x26c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6A0u;
            // 0x26c6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6a0) {
            ctx->pc = 0x26C6C4u;
            goto label_26c6c4;
        }
    }
    ctx->pc = 0x26C6A8u;
label_26c6a8:
    // 0x26c6a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C6A8u;
    {
        const bool branch_taken_0x26c6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6A8u;
            // 0x26c6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6a8) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C6B0u;
    // 0x26c6b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C6B0u;
    {
        const bool branch_taken_0x26c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6B0u;
            // 0x26c6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6b0) {
            ctx->pc = 0x26C6C4u;
            goto label_26c6c4;
        }
    }
    ctx->pc = 0x26C6B8u;
label_26c6b8:
    // 0x26c6b8: 0xc05aa9c  jal         func_16AA70
    ctx->pc = 0x26C6B8u;
    SET_GPR_U32(ctx, 31, 0x26C6C0u);
    ctx->pc = 0x16AA70u;
    if (runtime->hasFunction(0x16AA70u)) {
        auto targetFn = runtime->lookupFunction(0x16AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6C0u; }
        if (ctx->pc != 0x26C6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSoundInfoCopy__12CActionCharaFv_0x16aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C6C0u; }
        if (ctx->pc != 0x26C6C0u) { return; }
    }
    ctx->pc = 0x26C6C0u;
label_26c6c0:
    // 0x26c6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c6c4:
    // 0x26c6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6C8u;
            // 0x26c6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C6D0u;
}
