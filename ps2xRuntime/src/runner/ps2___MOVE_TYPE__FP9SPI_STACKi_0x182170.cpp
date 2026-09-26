#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __MOVE_TYPE__FP9SPI_STACKi
// Address: 0x182170 - 0x1821c4
void ps2___MOVE_TYPE__FP9SPI_STACKi_0x182170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___MOVE_TYPE__FP9SPI_STACKi_0x182170");
#endif

    switch (ctx->pc) {
        case 0x182184u: goto label_182184;
        case 0x182198u: goto label_182198;
        case 0x1821a8u: goto label_1821a8;
        default: break;
    }

    ctx->pc = 0x182170u;

    // 0x182170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18217c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18217Cu;
    SET_GPR_U32(ctx, 31, 0x182184u);
    ctx->pc = 0x182180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18217Cu;
            // 0x182180: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182184u; }
        if (ctx->pc != 0x182184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182184u; }
        if (ctx->pc != 0x182184u) { return; }
    }
    ctx->pc = 0x182184u;
label_182184:
    // 0x182184: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18218c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18218cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182190: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182190u;
    SET_GPR_U32(ctx, 31, 0x182198u);
    ctx->pc = 0x182194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182190u;
            // 0x182194: 0xac6200a4  sw          $v0, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182198u; }
        if (ctx->pc != 0x182198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182198u; }
        if (ctx->pc != 0x182198u) { return; }
    }
    ctx->pc = 0x182198u;
label_182198:
    // 0x182198: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18219c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821a0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1821A0u;
    SET_GPR_U32(ctx, 31, 0x1821A8u);
    ctx->pc = 0x1821A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821A0u;
            // 0x1821a4: 0xac6200a8  sw          $v0, 0xA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821A8u; }
        if (ctx->pc != 0x1821A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821A8u; }
        if (ctx->pc != 0x1821A8u) { return; }
    }
    ctx->pc = 0x1821A8u;
label_1821a8:
    // 0x1821a8: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1821ac: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x1821acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
    // 0x1821b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1821b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1821b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1821b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1821b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1821bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1821BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1821C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1821BCu;
            // 0x1821c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1821C4u;
}
