#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: spiGetStackVector__FPfP9SPI_STACK
// Address: 0x1464a0 - 0x1464f8
void spiGetStackVector__FPfP9SPI_STACK_0x1464a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spiGetStackVector__FPfP9SPI_STACK_0x1464a0");
#endif

    switch (ctx->pc) {
        case 0x1464c4u: goto label_1464c4;
        case 0x1464d4u: goto label_1464d4;
        case 0x1464e0u: goto label_1464e0;
        default: break;
    }

    ctx->pc = 0x1464a0u;

    // 0x1464a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1464a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1464a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1464a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1464a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1464a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1464ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1464acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1464b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1464b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1464b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464bc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1464BCu;
    SET_GPR_U32(ctx, 31, 0x1464C4u);
    ctx->pc = 0x1464C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1464BCu;
            // 0x1464c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464C4u; }
        if (ctx->pc != 0x1464C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464C4u; }
        if (ctx->pc != 0x1464C4u) { return; }
    }
    ctx->pc = 0x1464C4u;
label_1464c4:
    // 0x1464c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1464c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1464c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1464cc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1464CCu;
    SET_GPR_U32(ctx, 31, 0x1464D4u);
    ctx->pc = 0x1464D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1464CCu;
            // 0x1464d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464D4u; }
        if (ctx->pc != 0x1464D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464D4u; }
        if (ctx->pc != 0x1464D4u) { return; }
    }
    ctx->pc = 0x1464D4u;
label_1464d4:
    // 0x1464d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1464d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464d8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1464D8u;
    SET_GPR_U32(ctx, 31, 0x1464E0u);
    ctx->pc = 0x1464DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1464D8u;
            // 0x1464dc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464E0u; }
        if (ctx->pc != 0x1464E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464E0u; }
        if (ctx->pc != 0x1464E0u) { return; }
    }
    ctx->pc = 0x1464E0u;
label_1464e0:
    // 0x1464e0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1464e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1464e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1464e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1464e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1464e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1464ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1464ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1464f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1464F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1464F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1464F0u;
            // 0x1464f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1464F8u;
}
