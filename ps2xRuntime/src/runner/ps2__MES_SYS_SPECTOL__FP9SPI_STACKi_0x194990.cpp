#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_SYS_SPECTOL__FP9SPI_STACKi
// Address: 0x194990 - 0x1949c0
void ps2__MES_SYS_SPECTOL__FP9SPI_STACKi_0x194990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_SYS_SPECTOL__FP9SPI_STACKi_0x194990");
#endif

    switch (ctx->pc) {
        case 0x1949a4u: goto label_1949a4;
        case 0x1949acu: goto label_1949ac;
        default: break;
    }

    ctx->pc = 0x194990u;

    // 0x194990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19499c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19499Cu;
    SET_GPR_U32(ctx, 31, 0x1949A4u);
    ctx->pc = 0x1949A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19499Cu;
            // 0x1949a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949A4u; }
        if (ctx->pc != 0x1949A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949A4u; }
        if (ctx->pc != 0x1949A4u) { return; }
    }
    ctx->pc = 0x1949A4u;
label_1949a4:
    // 0x1949a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x1949A4u;
    SET_GPR_U32(ctx, 31, 0x1949ACu);
    ctx->pc = 0x1949A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1949A4u;
            // 0x1949a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949ACu; }
        if (ctx->pc != 0x1949ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949ACu; }
        if (ctx->pc != 0x1949ACu) { return; }
    }
    ctx->pc = 0x1949ACu;
label_1949ac:
    // 0x1949ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1949acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1949b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1949b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1949b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1949b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1949b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1949B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1949BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1949B8u;
            // 0x1949bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1949C0u;
}
