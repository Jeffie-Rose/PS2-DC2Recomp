#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapAMBIENT__FP9SPI_STACKi
// Address: 0x165450 - 0x1654c4
void mapAMBIENT__FP9SPI_STACKi_0x165450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapAMBIENT__FP9SPI_STACKi_0x165450");
#endif

    switch (ctx->pc) {
        case 0x165478u: goto label_165478;
        case 0x16548cu: goto label_16548c;
        case 0x16549cu: goto label_16549c;
        default: break;
    }

    ctx->pc = 0x165450u;

    // 0x165450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16545c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165460u;
    {
        const bool branch_taken_0x165460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165460u;
            // 0x165464: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165460) {
            ctx->pc = 0x165470u;
            goto label_165470;
        }
    }
    ctx->pc = 0x165468u;
    // 0x165468: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x165468u;
    {
        const bool branch_taken_0x165468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165468u;
            // 0x16546c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165468) {
            ctx->pc = 0x1654B4u;
            goto label_1654b4;
        }
    }
    ctx->pc = 0x165470u;
label_165470:
    // 0x165470: 0xc05190c  jal         func_146430
    ctx->pc = 0x165470u;
    SET_GPR_U32(ctx, 31, 0x165478u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165478u; }
        if (ctx->pc != 0x165478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165478u; }
        if (ctx->pc != 0x165478u) { return; }
    }
    ctx->pc = 0x165478u;
label_165478:
    // 0x165478: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x16547c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165480: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x165480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165484: 0xc05190c  jal         func_146430
    ctx->pc = 0x165484u;
    SET_GPR_U32(ctx, 31, 0x16548Cu);
    ctx->pc = 0x165488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165484u;
            // 0x165488: 0xe4400180  swc1        $f0, 0x180($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16548Cu; }
        if (ctx->pc != 0x16548Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16548Cu; }
        if (ctx->pc != 0x16548Cu) { return; }
    }
    ctx->pc = 0x16548Cu;
label_16548c:
    // 0x16548c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165494: 0xc05190c  jal         func_146430
    ctx->pc = 0x165494u;
    SET_GPR_U32(ctx, 31, 0x16549Cu);
    ctx->pc = 0x165498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165494u;
            // 0x165498: 0xe4400184  swc1        $f0, 0x184($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16549Cu; }
        if (ctx->pc != 0x16549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16549Cu; }
        if (ctx->pc != 0x16549Cu) { return; }
    }
    ctx->pc = 0x16549Cu;
label_16549c:
    // 0x16549c: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x16549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1654a0: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x1654a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x1654a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1654a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1654a8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1654a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1654ac: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x1654acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1654b0: 0xac64018c  sw          $a0, 0x18C($v1)
    ctx->pc = 0x1654b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 4));
label_1654b4:
    // 0x1654b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1654b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1654b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1654b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1654bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1654BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1654C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654BCu;
            // 0x1654c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1654C4u;
}
