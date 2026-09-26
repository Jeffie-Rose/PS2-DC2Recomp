#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __VELO_MUL__FP9SPI_STACKi
// Address: 0x181fd0 - 0x182024
void ps2___VELO_MUL__FP9SPI_STACKi_0x181fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___VELO_MUL__FP9SPI_STACKi_0x181fd0");
#endif

    switch (ctx->pc) {
        case 0x181fe4u: goto label_181fe4;
        case 0x181ff8u: goto label_181ff8;
        case 0x182008u: goto label_182008;
        default: break;
    }

    ctx->pc = 0x181fd0u;

    // 0x181fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181fdc: 0xc05190c  jal         func_146430
    ctx->pc = 0x181FDCu;
    SET_GPR_U32(ctx, 31, 0x181FE4u);
    ctx->pc = 0x181FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FDCu;
            // 0x181fe0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FE4u; }
        if (ctx->pc != 0x181FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FE4u; }
        if (ctx->pc != 0x181FE4u) { return; }
    }
    ctx->pc = 0x181FE4u;
label_181fe4:
    // 0x181fe4: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fec: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181ff0: 0xc05190c  jal         func_146430
    ctx->pc = 0x181FF0u;
    SET_GPR_U32(ctx, 31, 0x181FF8u);
    ctx->pc = 0x181FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FF0u;
            // 0x181ff4: 0xe44000d0  swc1        $f0, 0xD0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FF8u; }
        if (ctx->pc != 0x181FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FF8u; }
        if (ctx->pc != 0x181FF8u) { return; }
    }
    ctx->pc = 0x181FF8u;
label_181ff8:
    // 0x181ff8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182000: 0xc05190c  jal         func_146430
    ctx->pc = 0x182000u;
    SET_GPR_U32(ctx, 31, 0x182008u);
    ctx->pc = 0x182004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182000u;
            // 0x182004: 0xe44000d4  swc1        $f0, 0xD4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182008u; }
        if (ctx->pc != 0x182008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182008u; }
        if (ctx->pc != 0x182008u) { return; }
    }
    ctx->pc = 0x182008u;
label_182008:
    // 0x182008: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18200c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182010: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x182010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x182014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18201c: 0x3e00008  jr          $ra
    ctx->pc = 0x18201Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18201Cu;
            // 0x182020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182024u;
}
