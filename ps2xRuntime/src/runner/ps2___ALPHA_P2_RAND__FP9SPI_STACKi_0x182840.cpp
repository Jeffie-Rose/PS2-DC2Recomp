#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ALPHA_P2_RAND__FP9SPI_STACKi
// Address: 0x182840 - 0x182894
void ps2___ALPHA_P2_RAND__FP9SPI_STACKi_0x182840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ALPHA_P2_RAND__FP9SPI_STACKi_0x182840");
#endif

    switch (ctx->pc) {
        case 0x182854u: goto label_182854;
        case 0x182868u: goto label_182868;
        case 0x182878u: goto label_182878;
        default: break;
    }

    ctx->pc = 0x182840u;

    // 0x182840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18284c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18284Cu;
    SET_GPR_U32(ctx, 31, 0x182854u);
    ctx->pc = 0x182850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18284Cu;
            // 0x182850: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182854u; }
        if (ctx->pc != 0x182854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182854u; }
        if (ctx->pc != 0x182854u) { return; }
    }
    ctx->pc = 0x182854u;
label_182854:
    // 0x182854: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18285c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182860: 0xc05190c  jal         func_146430
    ctx->pc = 0x182860u;
    SET_GPR_U32(ctx, 31, 0x182868u);
    ctx->pc = 0x182864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182860u;
            // 0x182864: 0xac62023c  sw          $v0, 0x23C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182868u; }
        if (ctx->pc != 0x182868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182868u; }
        if (ctx->pc != 0x182868u) { return; }
    }
    ctx->pc = 0x182868u;
label_182868:
    // 0x182868: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18286c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18286cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182870: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182870u;
    SET_GPR_U32(ctx, 31, 0x182878u);
    ctx->pc = 0x182874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182870u;
            // 0x182874: 0xe4400248  swc1        $f0, 0x248($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 584), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182878u; }
        if (ctx->pc != 0x182878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182878u; }
        if (ctx->pc != 0x182878u) { return; }
    }
    ctx->pc = 0x182878u;
label_182878:
    // 0x182878: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18287c: 0xac620254  sw          $v0, 0x254($v1)
    ctx->pc = 0x18287cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 2));
    // 0x182880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18288c: 0x3e00008  jr          $ra
    ctx->pc = 0x18288Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18288Cu;
            // 0x182890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182894u;
}
