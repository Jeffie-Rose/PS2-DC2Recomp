#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_INVENT_DATA__FP9SPI_STACKi
// Address: 0x163c00 - 0x163cc0
void mapFUNC_INVENT_DATA__FP9SPI_STACKi_0x163c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_INVENT_DATA__FP9SPI_STACKi_0x163c00");
#endif

    switch (ctx->pc) {
        case 0x163c2cu: goto label_163c2c;
        case 0x163c3cu: goto label_163c3c;
        case 0x163c50u: goto label_163c50;
        case 0x163c68u: goto label_163c68;
        case 0x163c78u: goto label_163c78;
        case 0x163c84u: goto label_163c84;
        default: break;
    }

    ctx->pc = 0x163c00u;

    // 0x163c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163c10: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163c14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163C14u;
    {
        const bool branch_taken_0x163c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C14u;
            // 0x163c18: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c14) {
            ctx->pc = 0x163C24u;
            goto label_163c24;
        }
    }
    ctx->pc = 0x163C1Cu;
    // 0x163c1c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x163C1Cu;
    {
        const bool branch_taken_0x163c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C1Cu;
            // 0x163c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c1c) {
            ctx->pc = 0x163CACu;
            goto label_163cac;
        }
    }
    ctx->pc = 0x163C24u;
label_163c24:
    // 0x163c24: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163C24u;
    SET_GPR_U32(ctx, 31, 0x163C2Cu);
    ctx->pc = 0x163C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C24u;
            // 0x163c28: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C2Cu; }
        if (ctx->pc != 0x163C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C2Cu; }
        if (ctx->pc != 0x163C2Cu) { return; }
    }
    ctx->pc = 0x163C2Cu;
label_163c2c:
    // 0x163c2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x163c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x163c30: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x163c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163c34: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163C34u;
    SET_GPR_U32(ctx, 31, 0x163C3Cu);
    ctx->pc = 0x163C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C34u;
            // 0x163c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C3Cu; }
        if (ctx->pc != 0x163C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C3Cu; }
        if (ctx->pc != 0x163C3Cu) { return; }
    }
    ctx->pc = 0x163C3Cu;
label_163c3c:
    // 0x163c3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163c40: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x163c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x163c44: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x163c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x163c48: 0xc051928  jal         func_1464A0
    ctx->pc = 0x163C48u;
    SET_GPR_U32(ctx, 31, 0x163C50u);
    ctx->pc = 0x163C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C48u;
            // 0x163c4c: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C50u; }
        if (ctx->pc != 0x163C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C50u; }
        if (ctx->pc != 0x163C50u) { return; }
    }
    ctx->pc = 0x163C50u;
label_163c50:
    // 0x163c50: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x163c54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c5c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x163c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x163c60: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163C60u;
    SET_GPR_U32(ctx, 31, 0x163C68u);
    ctx->pc = 0x163C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C60u;
            // 0x163c64: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C68u; }
        if (ctx->pc != 0x163C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C68u; }
        if (ctx->pc != 0x163C68u) { return; }
    }
    ctx->pc = 0x163C68u;
label_163c68:
    // 0x163c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x163c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x163c70: 0xc05190c  jal         func_146430
    ctx->pc = 0x163C70u;
    SET_GPR_U32(ctx, 31, 0x163C78u);
    ctx->pc = 0x163C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C70u;
            // 0x163c74: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C78u; }
        if (ctx->pc != 0x163C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C78u; }
        if (ctx->pc != 0x163C78u) { return; }
    }
    ctx->pc = 0x163C78u;
label_163c78:
    // 0x163c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c7c: 0xc05190c  jal         func_146430
    ctx->pc = 0x163C7Cu;
    SET_GPR_U32(ctx, 31, 0x163C84u);
    ctx->pc = 0x163C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C7Cu;
            // 0x163c80: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C84u; }
        if (ctx->pc != 0x163C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C84u; }
        if (ctx->pc != 0x163C84u) { return; }
    }
    ctx->pc = 0x163C84u;
label_163c84:
    // 0x163c84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163c88: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x163c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x163c8c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x163c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163c90: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x163c90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163c98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163c9c: 0x0  nop
    ctx->pc = 0x163c9cu;
    // NOP
    // 0x163ca0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x163ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x163ca4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x163ca4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x163ca8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x163ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_163cac:
    // 0x163cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x163CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CB8u;
            // 0x163cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163CC0u;
}
