#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __MOVE_P2__FP9SPI_STACKi
// Address: 0x1822b0 - 0x182304
void ps2___MOVE_P2__FP9SPI_STACKi_0x1822b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___MOVE_P2__FP9SPI_STACKi_0x1822b0");
#endif

    switch (ctx->pc) {
        case 0x1822c4u: goto label_1822c4;
        case 0x1822d8u: goto label_1822d8;
        case 0x1822e8u: goto label_1822e8;
        default: break;
    }

    ctx->pc = 0x1822b0u;

    // 0x1822b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1822b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1822b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1822b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1822b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1822b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1822bc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1822BCu;
    SET_GPR_U32(ctx, 31, 0x1822C4u);
    ctx->pc = 0x1822C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822BCu;
            // 0x1822c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822C4u; }
        if (ctx->pc != 0x1822C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822C4u; }
        if (ctx->pc != 0x1822C4u) { return; }
    }
    ctx->pc = 0x1822C4u;
label_1822c4:
    // 0x1822c4: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1822c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1822c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822cc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1822ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1822d0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1822D0u;
    SET_GPR_U32(ctx, 31, 0x1822D8u);
    ctx->pc = 0x1822D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822D0u;
            // 0x1822d4: 0xe4400100  swc1        $f0, 0x100($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822D8u; }
        if (ctx->pc != 0x1822D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822D8u; }
        if (ctx->pc != 0x1822D8u) { return; }
    }
    ctx->pc = 0x1822D8u;
label_1822d8:
    // 0x1822d8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1822d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1822dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1822dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822e0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1822E0u;
    SET_GPR_U32(ctx, 31, 0x1822E8u);
    ctx->pc = 0x1822E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822E0u;
            // 0x1822e4: 0xe4400104  swc1        $f0, 0x104($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822E8u; }
        if (ctx->pc != 0x1822E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822E8u; }
        if (ctx->pc != 0x1822E8u) { return; }
    }
    ctx->pc = 0x1822E8u;
label_1822e8:
    // 0x1822e8: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1822e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1822ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1822ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1822f0: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1822f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1822f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1822f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1822f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1822f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1822fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1822FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1822FCu;
            // 0x182300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182304u;
}
