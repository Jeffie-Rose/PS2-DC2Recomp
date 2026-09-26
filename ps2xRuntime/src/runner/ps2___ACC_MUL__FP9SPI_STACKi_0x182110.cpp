#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ACC_MUL__FP9SPI_STACKi
// Address: 0x182110 - 0x182164
void ps2___ACC_MUL__FP9SPI_STACKi_0x182110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ACC_MUL__FP9SPI_STACKi_0x182110");
#endif

    switch (ctx->pc) {
        case 0x182124u: goto label_182124;
        case 0x182138u: goto label_182138;
        case 0x182148u: goto label_182148;
        default: break;
    }

    ctx->pc = 0x182110u;

    // 0x182110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18211c: 0xc05190c  jal         func_146430
    ctx->pc = 0x18211Cu;
    SET_GPR_U32(ctx, 31, 0x182124u);
    ctx->pc = 0x182120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18211Cu;
            // 0x182120: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182124u; }
        if (ctx->pc != 0x182124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182124u; }
        if (ctx->pc != 0x182124u) { return; }
    }
    ctx->pc = 0x182124u;
label_182124:
    // 0x182124: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18212c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18212cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182130: 0xc05190c  jal         func_146430
    ctx->pc = 0x182130u;
    SET_GPR_U32(ctx, 31, 0x182138u);
    ctx->pc = 0x182134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182130u;
            // 0x182134: 0xe44000e0  swc1        $f0, 0xE0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182138u; }
        if (ctx->pc != 0x182138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182138u; }
        if (ctx->pc != 0x182138u) { return; }
    }
    ctx->pc = 0x182138u;
label_182138:
    // 0x182138: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18213c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182140: 0xc05190c  jal         func_146430
    ctx->pc = 0x182140u;
    SET_GPR_U32(ctx, 31, 0x182148u);
    ctx->pc = 0x182144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182140u;
            // 0x182144: 0xe44000e4  swc1        $f0, 0xE4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182148u; }
        if (ctx->pc != 0x182148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182148u; }
        if (ctx->pc != 0x182148u) { return; }
    }
    ctx->pc = 0x182148u;
label_182148:
    // 0x182148: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18214c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182150: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x182150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x182154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18215c: 0x3e00008  jr          $ra
    ctx->pc = 0x18215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18215Cu;
            // 0x182160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182164u;
}
