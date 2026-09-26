#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_SYS_SND_ID__FP12RS_STACKDATAi
// Address: 0x273480 - 0x2734b4
void ps2__GET_SYS_SND_ID__FP12RS_STACKDATAi_0x273480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_SYS_SND_ID__FP12RS_STACKDATAi_0x273480");
#endif

    switch (ctx->pc) {
        case 0x273494u: goto label_273494;
        case 0x2734a0u: goto label_2734a0;
        default: break;
    }

    ctx->pc = 0x273480u;

    // 0x273480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27348c: 0xc064218  jal         func_190860
    ctx->pc = 0x27348Cu;
    SET_GPR_U32(ctx, 31, 0x273494u);
    ctx->pc = 0x273490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27348Cu;
            // 0x273490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273494u; }
        if (ctx->pc != 0x273494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273494u; }
        if (ctx->pc != 0x273494u) { return; }
    }
    ctx->pc = 0x273494u;
label_273494:
    // 0x273494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273498: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x273498u;
    SET_GPR_U32(ctx, 31, 0x2734A0u);
    ctx->pc = 0x27349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273498u;
            // 0x27349c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734A0u; }
        if (ctx->pc != 0x2734A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734A0u; }
        if (ctx->pc != 0x2734A0u) { return; }
    }
    ctx->pc = 0x2734A0u;
label_2734a0:
    // 0x2734a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2734a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2734a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2734a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2734a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2734ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2734ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2734B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734ACu;
            // 0x2734b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2734B4u;
}
