#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __REPEAT__FP9SPI_STACKi
// Address: 0x181d40 - 0x181da4
void ps2___REPEAT__FP9SPI_STACKi_0x181d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___REPEAT__FP9SPI_STACKi_0x181d40");
#endif

    switch (ctx->pc) {
        case 0x181d54u: goto label_181d54;
        case 0x181d64u: goto label_181d64;
        case 0x181d78u: goto label_181d78;
        case 0x181d88u: goto label_181d88;
        default: break;
    }

    ctx->pc = 0x181d40u;

    // 0x181d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181d4c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181D4Cu;
    SET_GPR_U32(ctx, 31, 0x181D54u);
    ctx->pc = 0x181D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D4Cu;
            // 0x181d50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D54u; }
        if (ctx->pc != 0x181D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D54u; }
        if (ctx->pc != 0x181D54u) { return; }
    }
    ctx->pc = 0x181D54u;
label_181d54:
    // 0x181d54: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d5c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181D5Cu;
    SET_GPR_U32(ctx, 31, 0x181D64u);
    ctx->pc = 0x181D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D5Cu;
            // 0x181d60: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D64u; }
        if (ctx->pc != 0x181D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D64u; }
        if (ctx->pc != 0x181D64u) { return; }
    }
    ctx->pc = 0x181D64u;
label_181d64:
    // 0x181d64: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d6c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181d70: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181D70u;
    SET_GPR_U32(ctx, 31, 0x181D78u);
    ctx->pc = 0x181D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D70u;
            // 0x181d74: 0xac62004c  sw          $v0, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D78u; }
        if (ctx->pc != 0x181D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D78u; }
        if (ctx->pc != 0x181D78u) { return; }
    }
    ctx->pc = 0x181D78u;
label_181d78:
    // 0x181d78: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d80: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181D80u;
    SET_GPR_U32(ctx, 31, 0x181D88u);
    ctx->pc = 0x181D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D80u;
            // 0x181d84: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D88u; }
        if (ctx->pc != 0x181D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D88u; }
        if (ctx->pc != 0x181D88u) { return; }
    }
    ctx->pc = 0x181D88u;
label_181d88:
    // 0x181d88: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181d8c: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x181d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x181d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x181D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D9Cu;
            // 0x181da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181DA4u;
}
