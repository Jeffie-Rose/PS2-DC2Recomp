#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapSKY_INFO__FP9SPI_STACKi
// Address: 0x165940 - 0x1659d8
void mapSKY_INFO__FP9SPI_STACKi_0x165940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapSKY_INFO__FP9SPI_STACKi_0x165940");
#endif

    switch (ctx->pc) {
        case 0x16595cu: goto label_16595c;
        case 0x165970u: goto label_165970;
        case 0x165988u: goto label_165988;
        case 0x1659b8u: goto label_1659b8;
        default: break;
    }

    ctx->pc = 0x165940u;

    // 0x165940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16594c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165950: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165954: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165954u;
    SET_GPR_U32(ctx, 31, 0x16595Cu);
    ctx->pc = 0x165958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165954u;
            // 0x165958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16595Cu; }
        if (ctx->pc != 0x16595Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16595Cu; }
        if (ctx->pc != 0x16595Cu) { return; }
    }
    ctx->pc = 0x16595Cu;
label_16595c:
    // 0x16595c: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x16595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165964: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x165964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165968: 0xc05190c  jal         func_146430
    ctx->pc = 0x165968u;
    SET_GPR_U32(ctx, 31, 0x165970u);
    ctx->pc = 0x16596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165968u;
            // 0x16596c: 0xac6200d8  sw          $v0, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165970u; }
        if (ctx->pc != 0x165970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165970u; }
        if (ctx->pc != 0x165970u) { return; }
    }
    ctx->pc = 0x165970u;
label_165970:
    // 0x165970: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165974: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x165974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x165978: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x165978u;
    {
        const bool branch_taken_0x165978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165978u;
            // 0x16597c: 0xe46000dc  swc1        $f0, 0xDC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165978) {
            ctx->pc = 0x1659C0u;
            goto label_1659c0;
        }
    }
    ctx->pc = 0x165980u;
    // 0x165980: 0xc05190c  jal         func_146430
    ctx->pc = 0x165980u;
    SET_GPR_U32(ctx, 31, 0x165988u);
    ctx->pc = 0x165984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165980u;
            // 0x165984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165988u; }
        if (ctx->pc != 0x165988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165988u; }
        if (ctx->pc != 0x165988u) { return; }
    }
    ctx->pc = 0x165988u;
label_165988:
    // 0x165988: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x165988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x16598c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x16598cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x165990: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x165990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x165994: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x165994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16599c: 0x0  nop
    ctx->pc = 0x16599cu;
    // NOP
    // 0x1659a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1659a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1659a4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1659a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1659a8: 0x0  nop
    ctx->pc = 0x1659a8u;
    // NOP
    // 0x1659ac: 0x0  nop
    ctx->pc = 0x1659acu;
    // NOP
    // 0x1659b0: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1659B0u;
    SET_GPR_U32(ctx, 31, 0x1659B8u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659B8u; }
        if (ctx->pc != 0x1659B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659B8u; }
        if (ctx->pc != 0x1659B8u) { return; }
    }
    ctx->pc = 0x1659B8u;
label_1659b8:
    // 0x1659b8: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x1659b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x1659bc: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1659bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_1659c0:
    // 0x1659c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1659c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1659c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1659c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1659c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1659cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1659ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1659d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1659D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1659D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1659D0u;
            // 0x1659d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1659D8u;
}
