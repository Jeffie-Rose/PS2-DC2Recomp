#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __GRAVITY__FP9SPI_STACKi
// Address: 0x1829f0 - 0x182a74
void ps2___GRAVITY__FP9SPI_STACKi_0x1829f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___GRAVITY__FP9SPI_STACKi_0x1829f0");
#endif

    switch (ctx->pc) {
        case 0x182a04u: goto label_182a04;
        case 0x182a18u: goto label_182a18;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a40u: goto label_182a40;
        case 0x182a50u: goto label_182a50;
        default: break;
    }

    ctx->pc = 0x1829f0u;

    // 0x1829f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1829f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1829f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1829f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1829f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1829fc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1829FCu;
    SET_GPR_U32(ctx, 31, 0x182A04u);
    ctx->pc = 0x182A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829FCu;
            // 0x182a00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A04u; }
        if (ctx->pc != 0x182A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A04u; }
        if (ctx->pc != 0x182A04u) { return; }
    }
    ctx->pc = 0x182A04u;
label_182a04:
    // 0x182a04: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a0c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182a10: 0xc05190c  jal         func_146430
    ctx->pc = 0x182A10u;
    SET_GPR_U32(ctx, 31, 0x182A18u);
    ctx->pc = 0x182A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A10u;
            // 0x182a14: 0xe44002f0  swc1        $f0, 0x2F0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A18u; }
        if (ctx->pc != 0x182A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A18u; }
        if (ctx->pc != 0x182A18u) { return; }
    }
    ctx->pc = 0x182A18u;
label_182a18:
    // 0x182a18: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a20: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182a24: 0xc05190c  jal         func_146430
    ctx->pc = 0x182A24u;
    SET_GPR_U32(ctx, 31, 0x182A2Cu);
    ctx->pc = 0x182A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A24u;
            // 0x182a28: 0xe44002f4  swc1        $f0, 0x2F4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A2Cu; }
        if (ctx->pc != 0x182A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A2Cu; }
        if (ctx->pc != 0x182A2Cu) { return; }
    }
    ctx->pc = 0x182A2Cu;
label_182a2c:
    // 0x182a2c: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a34: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182a38: 0xc05190c  jal         func_146430
    ctx->pc = 0x182A38u;
    SET_GPR_U32(ctx, 31, 0x182A40u);
    ctx->pc = 0x182A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A38u;
            // 0x182a3c: 0xe44002f8  swc1        $f0, 0x2F8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A40u; }
        if (ctx->pc != 0x182A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A40u; }
        if (ctx->pc != 0x182A40u) { return; }
    }
    ctx->pc = 0x182A40u;
label_182a40:
    // 0x182a40: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a48: 0xc05190c  jal         func_146430
    ctx->pc = 0x182A48u;
    SET_GPR_U32(ctx, 31, 0x182A50u);
    ctx->pc = 0x182A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A48u;
            // 0x182a4c: 0xe4400300  swc1        $f0, 0x300($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 768), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A50u; }
        if (ctx->pc != 0x182A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A50u; }
        if (ctx->pc != 0x182A50u) { return; }
    }
    ctx->pc = 0x182A50u;
label_182a50:
    // 0x182a50: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a58: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x182a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x182a5c: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182a60: 0xac6202e4  sw          $v0, 0x2E4($v1)
    ctx->pc = 0x182a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 2));
    // 0x182a64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x182A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A6Cu;
            // 0x182a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182A74u;
}
