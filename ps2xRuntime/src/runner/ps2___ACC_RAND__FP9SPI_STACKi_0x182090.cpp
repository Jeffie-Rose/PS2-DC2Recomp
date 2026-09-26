#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ACC_RAND__FP9SPI_STACKi
// Address: 0x182090 - 0x18210c
void ps2___ACC_RAND__FP9SPI_STACKi_0x182090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ACC_RAND__FP9SPI_STACKi_0x182090");
#endif

    switch (ctx->pc) {
        case 0x1820a4u: goto label_1820a4;
        case 0x1820b8u: goto label_1820b8;
        case 0x1820ccu: goto label_1820cc;
        case 0x1820e0u: goto label_1820e0;
        case 0x1820f0u: goto label_1820f0;
        default: break;
    }

    ctx->pc = 0x182090u;

    // 0x182090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18209c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18209Cu;
    SET_GPR_U32(ctx, 31, 0x1820A4u);
    ctx->pc = 0x1820A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18209Cu;
            // 0x1820a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820A4u; }
        if (ctx->pc != 0x1820A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820A4u; }
        if (ctx->pc != 0x1820A4u) { return; }
    }
    ctx->pc = 0x1820A4u;
label_1820a4:
    // 0x1820a4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1820a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1820a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1820a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820ac: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1820b0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1820B0u;
    SET_GPR_U32(ctx, 31, 0x1820B8u);
    ctx->pc = 0x1820B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820B0u;
            // 0x1820b4: 0xac620114  sw          $v0, 0x114($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820B8u; }
        if (ctx->pc != 0x1820B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820B8u; }
        if (ctx->pc != 0x1820B8u) { return; }
    }
    ctx->pc = 0x1820B8u;
label_1820b8:
    // 0x1820b8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1820b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1820bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1820bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820c0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1820c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1820c4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1820C4u;
    SET_GPR_U32(ctx, 31, 0x1820CCu);
    ctx->pc = 0x1820C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820C4u;
            // 0x1820c8: 0xe4400130  swc1        $f0, 0x130($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820CCu; }
        if (ctx->pc != 0x1820CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820CCu; }
        if (ctx->pc != 0x1820CCu) { return; }
    }
    ctx->pc = 0x1820CCu;
label_1820cc:
    // 0x1820cc: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1820ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1820d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1820d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820d4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1820d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1820d8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1820D8u;
    SET_GPR_U32(ctx, 31, 0x1820E0u);
    ctx->pc = 0x1820DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820D8u;
            // 0x1820dc: 0xe4400134  swc1        $f0, 0x134($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E0u; }
        if (ctx->pc != 0x1820E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E0u; }
        if (ctx->pc != 0x1820E0u) { return; }
    }
    ctx->pc = 0x1820E0u;
label_1820e0:
    // 0x1820e0: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1820e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1820e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1820e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1820E8u;
    SET_GPR_U32(ctx, 31, 0x1820F0u);
    ctx->pc = 0x1820ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820E8u;
            // 0x1820ec: 0xe4400138  swc1        $f0, 0x138($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820F0u; }
        if (ctx->pc != 0x1820F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820F0u; }
        if (ctx->pc != 0x1820F0u) { return; }
    }
    ctx->pc = 0x1820F0u;
label_1820f0:
    // 0x1820f0: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1820f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1820f4: 0xac620164  sw          $v0, 0x164($v1)
    ctx->pc = 0x1820f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 2));
    // 0x1820f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1820f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1820fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1820fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182104: 0x3e00008  jr          $ra
    ctx->pc = 0x182104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182104u;
            // 0x182108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18210Cu;
}
