#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSpectol__Fv
// Address: 0x23a7d0 - 0x23a7f8
void InitSpectol__Fv_0x23a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSpectol__Fv_0x23a7d0");
#endif

    switch (ctx->pc) {
        case 0x23a7ecu: goto label_23a7ec;
        default: break;
    }

    ctx->pc = 0x23a7d0u;

    // 0x23a7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a7d8: 0x8f8495dc  lw          $a0, -0x6A24($gp)
    ctx->pc = 0x23a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940124)));
    // 0x23a7dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A7DCu;
    {
        const bool branch_taken_0x23a7dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a7dc) {
            ctx->pc = 0x23A7ECu;
            goto label_23a7ec;
        }
    }
    ctx->pc = 0x23A7E4u;
    // 0x23a7e4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x23A7E4u;
    SET_GPR_U32(ctx, 31, 0x23A7ECu);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A7ECu; }
        if (ctx->pc != 0x23A7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A7ECu; }
        if (ctx->pc != 0x23A7ECu) { return; }
    }
    ctx->pc = 0x23A7ECu;
label_23a7ec:
    // 0x23a7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7F0u;
            // 0x23a7f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A7F8u;
}
