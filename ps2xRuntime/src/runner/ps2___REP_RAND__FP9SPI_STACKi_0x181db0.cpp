#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __REP_RAND__FP9SPI_STACKi
// Address: 0x181db0 - 0x181e04
void ps2___REP_RAND__FP9SPI_STACKi_0x181db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___REP_RAND__FP9SPI_STACKi_0x181db0");
#endif

    switch (ctx->pc) {
        case 0x181dc4u: goto label_181dc4;
        case 0x181dd8u: goto label_181dd8;
        case 0x181de8u: goto label_181de8;
        default: break;
    }

    ctx->pc = 0x181db0u;

    // 0x181db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181dbc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181DBCu;
    SET_GPR_U32(ctx, 31, 0x181DC4u);
    ctx->pc = 0x181DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DBCu;
            // 0x181dc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DC4u; }
        if (ctx->pc != 0x181DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DC4u; }
        if (ctx->pc != 0x181DC4u) { return; }
    }
    ctx->pc = 0x181DC4u;
label_181dc4:
    // 0x181dc4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181dcc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181dd0: 0xc05190c  jal         func_146430
    ctx->pc = 0x181DD0u;
    SET_GPR_U32(ctx, 31, 0x181DD8u);
    ctx->pc = 0x181DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DD0u;
            // 0x181dd4: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DD8u; }
        if (ctx->pc != 0x181DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DD8u; }
        if (ctx->pc != 0x181DD8u) { return; }
    }
    ctx->pc = 0x181DD8u;
label_181dd8:
    // 0x181dd8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181de0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181DE0u;
    SET_GPR_U32(ctx, 31, 0x181DE8u);
    ctx->pc = 0x181DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DE0u;
            // 0x181de4: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DE8u; }
        if (ctx->pc != 0x181DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181DE8u; }
        if (ctx->pc != 0x181DE8u) { return; }
    }
    ctx->pc = 0x181DE8u;
label_181de8:
    // 0x181de8: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181dec: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x181decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x181df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x181DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181DFCu;
            // 0x181e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181E04u;
}
