#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __IMG_NAME__FP9SPI_STACKi
// Address: 0x181b80 - 0x181bb0
void ps2___IMG_NAME__FP9SPI_STACKi_0x181b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___IMG_NAME__FP9SPI_STACKi_0x181b80");
#endif

    switch (ctx->pc) {
        case 0x181b90u: goto label_181b90;
        case 0x181ba0u: goto label_181ba0;
        default: break;
    }

    ctx->pc = 0x181b80u;

    // 0x181b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181b88: 0xc05191c  jal         func_146470
    ctx->pc = 0x181B88u;
    SET_GPR_U32(ctx, 31, 0x181B90u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B90u; }
        if (ctx->pc != 0x181B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B90u; }
        if (ctx->pc != 0x181B90u) { return; }
    }
    ctx->pc = 0x181B90u;
label_181b90:
    // 0x181b90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x181b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b94: 0x8f828a58  lw          $v0, -0x75A8($gp)
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x181b98: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x181B98u;
    SET_GPR_U32(ctx, 31, 0x181BA0u);
    ctx->pc = 0x181B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B98u;
            // 0x181b9c: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BA0u; }
        if (ctx->pc != 0x181BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BA0u; }
        if (ctx->pc != 0x181BA0u) { return; }
    }
    ctx->pc = 0x181BA0u;
label_181ba0:
    // 0x181ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x181BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BA8u;
            // 0x181bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181BB0u;
}
