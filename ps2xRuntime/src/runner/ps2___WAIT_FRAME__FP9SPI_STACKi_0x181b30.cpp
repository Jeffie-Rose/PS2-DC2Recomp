#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __WAIT_FRAME__FP9SPI_STACKi
// Address: 0x181b30 - 0x181b74
void ps2___WAIT_FRAME__FP9SPI_STACKi_0x181b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___WAIT_FRAME__FP9SPI_STACKi_0x181b30");
#endif

    switch (ctx->pc) {
        case 0x181b44u: goto label_181b44;
        case 0x181b50u: goto label_181b50;
        default: break;
    }

    ctx->pc = 0x181b30u;

    // 0x181b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181b3c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181B3Cu;
    SET_GPR_U32(ctx, 31, 0x181B44u);
    ctx->pc = 0x181B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B3Cu;
            // 0x181b40: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B44u; }
        if (ctx->pc != 0x181B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B44u; }
        if (ctx->pc != 0x181B44u) { return; }
    }
    ctx->pc = 0x181B44u;
label_181b44:
    // 0x181b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b48: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181B48u;
    SET_GPR_U32(ctx, 31, 0x181B50u);
    ctx->pc = 0x181B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181B48u;
            // 0x181b4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B50u; }
        if (ctx->pc != 0x181B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B50u; }
        if (ctx->pc != 0x181B50u) { return; }
    }
    ctx->pc = 0x181B50u;
label_181b50:
    // 0x181b50: 0x8f848a58  lw          $a0, -0x75A8($gp)
    ctx->pc = 0x181b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x181b54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x181b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x181b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181b5c: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x181b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x181b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x181B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B6Cu;
            // 0x181b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181B74u;
}
