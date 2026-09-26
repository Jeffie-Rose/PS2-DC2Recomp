#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SCALE_RAND__FP9SPI_STACKi
// Address: 0x182410 - 0x182478
void ps2___SCALE_RAND__FP9SPI_STACKi_0x182410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SCALE_RAND__FP9SPI_STACKi_0x182410");
#endif

    switch (ctx->pc) {
        case 0x182424u: goto label_182424;
        case 0x182438u: goto label_182438;
        case 0x18244cu: goto label_18244c;
        case 0x18245cu: goto label_18245c;
        default: break;
    }

    ctx->pc = 0x182410u;

    // 0x182410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18241c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18241Cu;
    SET_GPR_U32(ctx, 31, 0x182424u);
    ctx->pc = 0x182420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18241Cu;
            // 0x182420: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182424u; }
        if (ctx->pc != 0x182424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182424u; }
        if (ctx->pc != 0x182424u) { return; }
    }
    ctx->pc = 0x182424u;
label_182424:
    // 0x182424: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18242c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18242cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182430: 0xc05190c  jal         func_146430
    ctx->pc = 0x182430u;
    SET_GPR_U32(ctx, 31, 0x182438u);
    ctx->pc = 0x182434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182430u;
            // 0x182434: 0xac6201c0  sw          $v0, 0x1C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182438u; }
        if (ctx->pc != 0x182438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182438u; }
        if (ctx->pc != 0x182438u) { return; }
    }
    ctx->pc = 0x182438u;
label_182438:
    // 0x182438: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18243c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182440: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x182440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182444: 0xc05190c  jal         func_146430
    ctx->pc = 0x182444u;
    SET_GPR_U32(ctx, 31, 0x18244Cu);
    ctx->pc = 0x182448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182444u;
            // 0x182448: 0xe44001d0  swc1        $f0, 0x1D0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 464), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18244Cu; }
        if (ctx->pc != 0x18244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18244Cu; }
        if (ctx->pc != 0x18244Cu) { return; }
    }
    ctx->pc = 0x18244Cu;
label_18244c:
    // 0x18244c: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x18244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182454: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182454u;
    SET_GPR_U32(ctx, 31, 0x18245Cu);
    ctx->pc = 0x182458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182454u;
            // 0x182458: 0xe44001d4  swc1        $f0, 0x1D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 468), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18245Cu; }
        if (ctx->pc != 0x18245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18245Cu; }
        if (ctx->pc != 0x18245Cu) { return; }
    }
    ctx->pc = 0x18245Cu;
label_18245c:
    // 0x18245c: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x18245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182460: 0xac620210  sw          $v0, 0x210($v1)
    ctx->pc = 0x182460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
    // 0x182464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18246c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18246cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182470: 0x3e00008  jr          $ra
    ctx->pc = 0x182470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182470u;
            // 0x182474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182478u;
}
