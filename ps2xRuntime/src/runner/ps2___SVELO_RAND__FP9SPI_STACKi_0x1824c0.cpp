#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SVELO_RAND__FP9SPI_STACKi
// Address: 0x1824c0 - 0x182528
void ps2___SVELO_RAND__FP9SPI_STACKi_0x1824c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SVELO_RAND__FP9SPI_STACKi_0x1824c0");
#endif

    switch (ctx->pc) {
        case 0x1824d4u: goto label_1824d4;
        case 0x1824e8u: goto label_1824e8;
        case 0x1824fcu: goto label_1824fc;
        case 0x18250cu: goto label_18250c;
        default: break;
    }

    ctx->pc = 0x1824c0u;

    // 0x1824c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1824c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1824c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1824c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1824c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1824c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1824cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1824CCu;
    SET_GPR_U32(ctx, 31, 0x1824D4u);
    ctx->pc = 0x1824D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824CCu;
            // 0x1824d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824D4u; }
        if (ctx->pc != 0x1824D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824D4u; }
        if (ctx->pc != 0x1824D4u) { return; }
    }
    ctx->pc = 0x1824D4u;
label_1824d4:
    // 0x1824d4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1824d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1824d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1824d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824dc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1824dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1824e0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1824E0u;
    SET_GPR_U32(ctx, 31, 0x1824E8u);
    ctx->pc = 0x1824E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824E0u;
            // 0x1824e4: 0xac6201c4  sw          $v0, 0x1C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824E8u; }
        if (ctx->pc != 0x1824E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824E8u; }
        if (ctx->pc != 0x1824E8u) { return; }
    }
    ctx->pc = 0x1824E8u;
label_1824e8:
    // 0x1824e8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1824e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1824ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1824ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824f0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1824f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1824f4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1824F4u;
    SET_GPR_U32(ctx, 31, 0x1824FCu);
    ctx->pc = 0x1824F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824F4u;
            // 0x1824f8: 0xe44001e0  swc1        $f0, 0x1E0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 480), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824FCu; }
        if (ctx->pc != 0x1824FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824FCu; }
        if (ctx->pc != 0x1824FCu) { return; }
    }
    ctx->pc = 0x1824FCu;
label_1824fc:
    // 0x1824fc: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1824fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182504: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182504u;
    SET_GPR_U32(ctx, 31, 0x18250Cu);
    ctx->pc = 0x182508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182504u;
            // 0x182508: 0xe44001e4  swc1        $f0, 0x1E4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 484), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18250Cu; }
        if (ctx->pc != 0x18250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18250Cu; }
        if (ctx->pc != 0x18250Cu) { return; }
    }
    ctx->pc = 0x18250Cu;
label_18250c:
    // 0x18250c: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182510: 0xac620214  sw          $v0, 0x214($v1)
    ctx->pc = 0x182510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    // 0x182514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18251c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18251cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182520: 0x3e00008  jr          $ra
    ctx->pc = 0x182520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182520u;
            // 0x182524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182528u;
}
