#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _END_MONO_FLASH__FP12RS_STACKDATAi
// Address: 0x27cc50 - 0x27cc7c
void ps2__END_MONO_FLASH__FP12RS_STACKDATAi_0x27cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__END_MONO_FLASH__FP12RS_STACKDATAi_0x27cc50");
#endif

    switch (ctx->pc) {
        case 0x27cc6cu: goto label_27cc6c;
        default: break;
    }

    ctx->pc = 0x27cc50u;

    // 0x27cc50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27cc54: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27cc58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27cc5c: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x27cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x27cc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27cc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc64: 0xc0983cc  jal         func_260F30
    ctx->pc = 0x27CC64u;
    SET_GPR_U32(ctx, 31, 0x27CC6Cu);
    ctx->pc = 0x27CC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC64u;
            // 0x27cc68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260F30u;
    if (runtime->hasFunction(0x260F30u)) {
        auto targetFn = runtime->lookupFunction(0x260F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC6Cu; }
        if (ctx->pc != 0x27CC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonoFlashFlag__13CScreenEffectFii_0x260f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC6Cu; }
        if (ctx->pc != 0x27CC6Cu) { return; }
    }
    ctx->pc = 0x27CC6Cu;
label_27cc6c:
    // 0x27cc6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27cc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cc74: 0x3e00008  jr          $ra
    ctx->pc = 0x27CC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC74u;
            // 0x27cc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CC7Cu;
}
