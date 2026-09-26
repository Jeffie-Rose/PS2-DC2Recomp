#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ALPHA_P1_RAND__FP9SPI_STACKi
// Address: 0x1827b0 - 0x182804
void ps2___ALPHA_P1_RAND__FP9SPI_STACKi_0x1827b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ALPHA_P1_RAND__FP9SPI_STACKi_0x1827b0");
#endif

    switch (ctx->pc) {
        case 0x1827c4u: goto label_1827c4;
        case 0x1827d8u: goto label_1827d8;
        case 0x1827e8u: goto label_1827e8;
        default: break;
    }

    ctx->pc = 0x1827b0u;

    // 0x1827b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1827b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1827b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1827b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1827b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1827bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1827BCu;
    SET_GPR_U32(ctx, 31, 0x1827C4u);
    ctx->pc = 0x1827C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827BCu;
            // 0x1827c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827C4u; }
        if (ctx->pc != 0x1827C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827C4u; }
        if (ctx->pc != 0x1827C4u) { return; }
    }
    ctx->pc = 0x1827C4u;
label_1827c4:
    // 0x1827c4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1827c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1827c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827cc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1827d0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1827D0u;
    SET_GPR_U32(ctx, 31, 0x1827D8u);
    ctx->pc = 0x1827D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827D0u;
            // 0x1827d4: 0xac620238  sw          $v0, 0x238($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827D8u; }
        if (ctx->pc != 0x1827D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827D8u; }
        if (ctx->pc != 0x1827D8u) { return; }
    }
    ctx->pc = 0x1827D8u;
label_1827d8:
    // 0x1827d8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1827dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1827dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827e0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1827E0u;
    SET_GPR_U32(ctx, 31, 0x1827E8u);
    ctx->pc = 0x1827E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827E0u;
            // 0x1827e4: 0xe4400244  swc1        $f0, 0x244($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827E8u; }
        if (ctx->pc != 0x1827E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827E8u; }
        if (ctx->pc != 0x1827E8u) { return; }
    }
    ctx->pc = 0x1827E8u;
label_1827e8:
    // 0x1827e8: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1827ec: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1827ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x1827f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1827f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1827f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1827f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1827f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1827FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1827FCu;
            // 0x182800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182804u;
}
