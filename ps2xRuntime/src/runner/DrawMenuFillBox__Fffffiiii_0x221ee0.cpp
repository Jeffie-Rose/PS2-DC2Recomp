#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuFillBox__Fffffiiii
// Address: 0x221ee0 - 0x221fc8
void DrawMenuFillBox__Fffffiiii_0x221ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuFillBox__Fffffiiii_0x221ee0");
#endif

    switch (ctx->pc) {
        case 0x221f30u: goto label_221f30;
        case 0x221f3cu: goto label_221f3c;
        case 0x221f48u: goto label_221f48;
        case 0x221f54u: goto label_221f54;
        case 0x221f6cu: goto label_221f6c;
        case 0x221f80u: goto label_221f80;
        case 0x221f94u: goto label_221f94;
        case 0x221f9cu: goto label_221f9c;
        default: break;
    }

    ctx->pc = 0x221ee0u;

    // 0x221ee0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x221ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x221ee4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x221ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x221ee8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x221ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x221eec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x221eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x221ef0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x221ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ef4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x221ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x221ef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x221ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x221efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221f00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x221f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f04: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x221f04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x221f08: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x221f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f0c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x221f0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x221f10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x221f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221f14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x221f14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x221f18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x221f18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x221f1c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x221f1cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x221f20: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x221f20u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x221f24: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x221f24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x221f28: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x221F28u;
    SET_GPR_U32(ctx, 31, 0x221F30u);
    ctx->pc = 0x221F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F28u;
            // 0x221f2c: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F30u; }
        if (ctx->pc != 0x221F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F30u; }
        if (ctx->pc != 0x221F30u) { return; }
    }
    ctx->pc = 0x221F30u;
label_221f30:
    // 0x221f30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x221f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221f34: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x221F34u;
    SET_GPR_U32(ctx, 31, 0x221F3Cu);
    ctx->pc = 0x221F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F34u;
            // 0x221f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F3Cu; }
        if (ctx->pc != 0x221F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F3Cu; }
        if (ctx->pc != 0x221F3Cu) { return; }
    }
    ctx->pc = 0x221F3Cu;
label_221f3c:
    // 0x221f3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221f40: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x221F40u;
    SET_GPR_U32(ctx, 31, 0x221F48u);
    ctx->pc = 0x221F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F40u;
            // 0x221f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F48u; }
        if (ctx->pc != 0x221F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F48u; }
        if (ctx->pc != 0x221F48u) { return; }
    }
    ctx->pc = 0x221F48u;
label_221f48:
    // 0x221f48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x221f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221f4c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x221F4Cu;
    SET_GPR_U32(ctx, 31, 0x221F54u);
    ctx->pc = 0x221F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F4Cu;
            // 0x221f50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F54u; }
        if (ctx->pc != 0x221F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F54u; }
        if (ctx->pc != 0x221F54u) { return; }
    }
    ctx->pc = 0x221F54u;
label_221f54:
    // 0x221f54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x221f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x221f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f60: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f64: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221F64u;
    SET_GPR_U32(ctx, 31, 0x221F6Cu);
    ctx->pc = 0x221F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F64u;
            // 0x221f68: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F6Cu; }
        if (ctx->pc != 0x221F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F6Cu; }
        if (ctx->pc != 0x221F6Cu) { return; }
    }
    ctx->pc = 0x221F6Cu;
label_221f6c:
    // 0x221f6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221f70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x221f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221f74: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x221f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x221f78: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221F78u;
    SET_GPR_U32(ctx, 31, 0x221F80u);
    ctx->pc = 0x221F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F78u;
            // 0x221f7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F80u; }
        if (ctx->pc != 0x221F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F80u; }
        if (ctx->pc != 0x221F80u) { return; }
    }
    ctx->pc = 0x221F80u;
label_221f80:
    // 0x221f80: 0x4615bb00  add.s       $f12, $f23, $f21
    ctx->pc = 0x221f80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x221f84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x221f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221f88: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221f8c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221F8Cu;
    SET_GPR_U32(ctx, 31, 0x221F94u);
    ctx->pc = 0x221F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F8Cu;
            // 0x221f90: 0x4614b340  add.s       $f13, $f22, $f20 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F94u; }
        if (ctx->pc != 0x221F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F94u; }
        if (ctx->pc != 0x221F94u) { return; }
    }
    ctx->pc = 0x221F94u;
label_221f94:
    // 0x221f94: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x221F94u;
    SET_GPR_U32(ctx, 31, 0x221F9Cu);
    ctx->pc = 0x221F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F94u;
            // 0x221f98: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F9Cu; }
        if (ctx->pc != 0x221F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F9Cu; }
        if (ctx->pc != 0x221F9Cu) { return; }
    }
    ctx->pc = 0x221F9Cu;
label_221f9c:
    // 0x221f9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x221f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221fa0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x221fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x221fa4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x221fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221fa8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x221fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x221fac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x221facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221fb0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x221fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x221fb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x221fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221fb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x221fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221fbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x221fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x221FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221FC0u;
            // 0x221fc4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221FC8u;
}
