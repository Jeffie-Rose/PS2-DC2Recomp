#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SCALE_P1_RAND__FP9SPI_STACKi
// Address: 0x182570 - 0x1825d8
void ps2___SCALE_P1_RAND__FP9SPI_STACKi_0x182570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SCALE_P1_RAND__FP9SPI_STACKi_0x182570");
#endif

    switch (ctx->pc) {
        case 0x182584u: goto label_182584;
        case 0x182598u: goto label_182598;
        case 0x1825acu: goto label_1825ac;
        case 0x1825bcu: goto label_1825bc;
        default: break;
    }

    ctx->pc = 0x182570u;

    // 0x182570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18257c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18257Cu;
    SET_GPR_U32(ctx, 31, 0x182584u);
    ctx->pc = 0x182580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18257Cu;
            // 0x182580: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182584u; }
        if (ctx->pc != 0x182584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182584u; }
        if (ctx->pc != 0x182584u) { return; }
    }
    ctx->pc = 0x182584u;
label_182584:
    // 0x182584: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18258c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182590: 0xc05190c  jal         func_146430
    ctx->pc = 0x182590u;
    SET_GPR_U32(ctx, 31, 0x182598u);
    ctx->pc = 0x182594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182590u;
            // 0x182594: 0xac6201c8  sw          $v0, 0x1C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182598u; }
        if (ctx->pc != 0x182598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182598u; }
        if (ctx->pc != 0x182598u) { return; }
    }
    ctx->pc = 0x182598u;
label_182598:
    // 0x182598: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18259c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825a0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1825a4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1825A4u;
    SET_GPR_U32(ctx, 31, 0x1825ACu);
    ctx->pc = 0x1825A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825A4u;
            // 0x1825a8: 0xe44001f0  swc1        $f0, 0x1F0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 496), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825ACu; }
        if (ctx->pc != 0x1825ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825ACu; }
        if (ctx->pc != 0x1825ACu) { return; }
    }
    ctx->pc = 0x1825ACu;
label_1825ac:
    // 0x1825ac: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1825acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1825b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1825b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1825B4u;
    SET_GPR_U32(ctx, 31, 0x1825BCu);
    ctx->pc = 0x1825B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825B4u;
            // 0x1825b8: 0xe44001f4  swc1        $f0, 0x1F4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 500), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825BCu; }
        if (ctx->pc != 0x1825BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825BCu; }
        if (ctx->pc != 0x1825BCu) { return; }
    }
    ctx->pc = 0x1825BCu;
label_1825bc:
    // 0x1825bc: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1825c0: 0xac620218  sw          $v0, 0x218($v1)
    ctx->pc = 0x1825c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
    // 0x1825c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1825c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1825c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1825cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1825ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1825d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1825D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1825D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825D0u;
            // 0x1825d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1825D8u;
}
