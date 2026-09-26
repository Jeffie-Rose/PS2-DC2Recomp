#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SCALE_TYPE__FP9SPI_STACKi
// Address: 0x182390 - 0x1823d0
void ps2___SCALE_TYPE__FP9SPI_STACKi_0x182390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SCALE_TYPE__FP9SPI_STACKi_0x182390");
#endif

    switch (ctx->pc) {
        case 0x1823a4u: goto label_1823a4;
        case 0x1823b4u: goto label_1823b4;
        default: break;
    }

    ctx->pc = 0x182390u;

    // 0x182390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18239c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18239Cu;
    SET_GPR_U32(ctx, 31, 0x1823A4u);
    ctx->pc = 0x1823A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18239Cu;
            // 0x1823a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823A4u; }
        if (ctx->pc != 0x1823A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823A4u; }
        if (ctx->pc != 0x1823A4u) { return; }
    }
    ctx->pc = 0x1823A4u;
label_1823a4:
    // 0x1823a4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1823a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1823a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1823ACu;
    SET_GPR_U32(ctx, 31, 0x1823B4u);
    ctx->pc = 0x1823B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1823ACu;
            // 0x1823b0: 0xac620170  sw          $v0, 0x170($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823B4u; }
        if (ctx->pc != 0x1823B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823B4u; }
        if (ctx->pc != 0x1823B4u) { return; }
    }
    ctx->pc = 0x1823B4u;
label_1823b4:
    // 0x1823b4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1823b8: 0xac620174  sw          $v0, 0x174($v1)
    ctx->pc = 0x1823b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 2));
    // 0x1823bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1823bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1823c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1823c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1823c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1823c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1823C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1823CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823C8u;
            // 0x1823cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1823D0u;
}
