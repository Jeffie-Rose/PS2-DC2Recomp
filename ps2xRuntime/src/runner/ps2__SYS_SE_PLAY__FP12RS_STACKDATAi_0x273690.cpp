#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SYS_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x273690 - 0x2736d0
void ps2__SYS_SE_PLAY__FP12RS_STACKDATAi_0x273690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SYS_SE_PLAY__FP12RS_STACKDATAi_0x273690");
#endif

    switch (ctx->pc) {
        case 0x2736a0u: goto label_2736a0;
        case 0x2736c0u: goto label_2736c0;
        default: break;
    }

    ctx->pc = 0x273690u;

    // 0x273690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273698: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273698u;
    SET_GPR_U32(ctx, 31, 0x2736A0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2736A0u; }
        if (ctx->pc != 0x2736A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2736A0u; }
        if (ctx->pc != 0x2736A0u) { return; }
    }
    ctx->pc = 0x2736A0u;
label_2736a0:
    // 0x2736a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2736A0u;
    {
        const bool branch_taken_0x2736a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2736a0) {
            ctx->pc = 0x2736B0u;
            goto label_2736b0;
        }
    }
    ctx->pc = 0x2736A8u;
    // 0x2736a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2736A8u;
    {
        const bool branch_taken_0x2736a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2736A8u;
            // 0x2736ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736a8) {
            ctx->pc = 0x2736C4u;
            goto label_2736c4;
        }
    }
    ctx->pc = 0x2736B0u;
label_2736b0:
    // 0x2736b0: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x2736b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x2736b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2736b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2736b8: 0xc063818  jal         func_18E060
    ctx->pc = 0x2736B8u;
    SET_GPR_U32(ctx, 31, 0x2736C0u);
    ctx->pc = 0x2736BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2736B8u;
            // 0x2736bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2736C0u; }
        if (ctx->pc != 0x2736C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2736C0u; }
        if (ctx->pc != 0x2736C0u) { return; }
    }
    ctx->pc = 0x2736C0u;
label_2736c0:
    // 0x2736c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2736c4:
    // 0x2736c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2736c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2736c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2736C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2736CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2736C8u;
            // 0x2736cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2736D0u;
}
