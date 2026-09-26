#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcPROGRESS__FP9SPI_STACKi
// Address: 0x1938c0 - 0x1938f0
void gcPROGRESS__FP9SPI_STACKi_0x1938c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcPROGRESS__FP9SPI_STACKi_0x1938c0");
#endif

    switch (ctx->pc) {
        case 0x1938d0u: goto label_1938d0;
        case 0x1938d8u: goto label_1938d8;
        default: break;
    }

    ctx->pc = 0x1938c0u;

    // 0x1938c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1938c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1938c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1938c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1938c8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1938C8u;
    SET_GPR_U32(ctx, 31, 0x1938D0u);
    ctx->pc = 0x1938CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938C8u;
            // 0x1938cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D0u; }
        if (ctx->pc != 0x1938D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D0u; }
        if (ctx->pc != 0x1938D0u) { return; }
    }
    ctx->pc = 0x1938D0u;
label_1938d0:
    // 0x1938d0: 0xc064220  jal         func_190880
    ctx->pc = 0x1938D0u;
    SET_GPR_U32(ctx, 31, 0x1938D8u);
    ctx->pc = 0x1938D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938D0u;
            // 0x1938d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D8u; }
        if (ctx->pc != 0x1938D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D8u; }
        if (ctx->pc != 0x1938D8u) { return; }
    }
    ctx->pc = 0x1938D8u;
label_1938d8:
    // 0x1938d8: 0xac501a08  sw          $s0, 0x1A08($v0)
    ctx->pc = 0x1938d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6664), GPR_U32(ctx, 16));
    // 0x1938dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1938dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1938e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1938e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1938e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1938e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1938E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1938E8u;
            // 0x1938ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1938F0u;
}
