#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __BUFFER_SIZE__FP9SPI_STACKi
// Address: 0x181490 - 0x1814d4
void ps2___BUFFER_SIZE__FP9SPI_STACKi_0x181490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___BUFFER_SIZE__FP9SPI_STACKi_0x181490");
#endif

    switch (ctx->pc) {
        case 0x1814a4u: goto label_1814a4;
        case 0x1814b0u: goto label_1814b0;
        case 0x1814c0u: goto label_1814c0;
        default: break;
    }

    ctx->pc = 0x181490u;

    // 0x181490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18149c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18149Cu;
    SET_GPR_U32(ctx, 31, 0x1814A4u);
    ctx->pc = 0x1814A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18149Cu;
            // 0x1814a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814A4u; }
        if (ctx->pc != 0x1814A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814A4u; }
        if (ctx->pc != 0x1814A4u) { return; }
    }
    ctx->pc = 0x1814A4u;
label_1814a4:
    // 0x1814a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1814a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1814A8u;
    SET_GPR_U32(ctx, 31, 0x1814B0u);
    ctx->pc = 0x1814ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814A8u;
            // 0x1814ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814B0u; }
        if (ctx->pc != 0x1814B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814B0u; }
        if (ctx->pc != 0x1814B0u) { return; }
    }
    ctx->pc = 0x1814B0u;
label_1814b0:
    // 0x1814b0: 0x8f848a58  lw          $a0, -0x75A8($gp)
    ctx->pc = 0x1814b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x1814b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1814b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814b8: 0xc060af0  jal         func_182BC0
    ctx->pc = 0x1814B8u;
    SET_GPR_U32(ctx, 31, 0x1814C0u);
    ctx->pc = 0x1814BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814B8u;
            // 0x1814bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BC0u;
    if (runtime->hasFunction(0x182BC0u)) {
        auto targetFn = runtime->lookupFunction(0x182BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814C0u; }
        if (ctx->pc != 0x1814C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEffectNums__14CEffectManagerFii_0x182bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814C0u; }
        if (ctx->pc != 0x1814C0u) { return; }
    }
    ctx->pc = 0x1814C0u;
label_1814c0:
    // 0x1814c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1814c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1814c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1814c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1814c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1814c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1814cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1814CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814CCu;
            // 0x1814d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1814D4u;
}
