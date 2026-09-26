#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapCHARA_LIGHT_ADJUST__FP9SPI_STACKi
// Address: 0x165a70 - 0x165ad8
void mapCHARA_LIGHT_ADJUST__FP9SPI_STACKi_0x165a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapCHARA_LIGHT_ADJUST__FP9SPI_STACKi_0x165a70");
#endif

    switch (ctx->pc) {
        case 0x165a84u: goto label_165a84;
        case 0x165a98u: goto label_165a98;
        case 0x165aacu: goto label_165aac;
        case 0x165abcu: goto label_165abc;
        default: break;
    }

    ctx->pc = 0x165a70u;

    // 0x165a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165a7c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165A7Cu;
    SET_GPR_U32(ctx, 31, 0x165A84u);
    ctx->pc = 0x165A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A7Cu;
            // 0x165a80: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A84u; }
        if (ctx->pc != 0x165A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A84u; }
        if (ctx->pc != 0x165A84u) { return; }
    }
    ctx->pc = 0x165A84u;
label_165a84:
    // 0x165a84: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x165a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a8c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165a90: 0xc05190c  jal         func_146430
    ctx->pc = 0x165A90u;
    SET_GPR_U32(ctx, 31, 0x165A98u);
    ctx->pc = 0x165A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A90u;
            // 0x165a94: 0xac6200ec  sw          $v0, 0xEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A98u; }
        if (ctx->pc != 0x165A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A98u; }
        if (ctx->pc != 0x165A98u) { return; }
    }
    ctx->pc = 0x165A98u;
label_165a98:
    // 0x165a98: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x165a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165aa0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165aa4: 0xc05190c  jal         func_146430
    ctx->pc = 0x165AA4u;
    SET_GPR_U32(ctx, 31, 0x165AACu);
    ctx->pc = 0x165AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165AA4u;
            // 0x165aa8: 0xe44000f0  swc1        $f0, 0xF0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AACu; }
        if (ctx->pc != 0x165AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AACu; }
        if (ctx->pc != 0x165AACu) { return; }
    }
    ctx->pc = 0x165AACu;
label_165aac:
    // 0x165aac: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x165aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ab4: 0xc05190c  jal         func_146430
    ctx->pc = 0x165AB4u;
    SET_GPR_U32(ctx, 31, 0x165ABCu);
    ctx->pc = 0x165AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165AB4u;
            // 0x165ab8: 0xe44000f4  swc1        $f0, 0xF4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ABCu; }
        if (ctx->pc != 0x165ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ABCu; }
        if (ctx->pc != 0x165ABCu) { return; }
    }
    ctx->pc = 0x165ABCu;
label_165abc:
    // 0x165abc: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x165abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165ac4: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x165ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x165ac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x165AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165AD0u;
            // 0x165ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165AD8u;
}
