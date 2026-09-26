#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGround__14CCameraControlFP6CCPolyi
// Address: 0x2ece70 - 0x2ed244
void CheckGround__14CCameraControlFP6CCPolyi_0x2ece70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGround__14CCameraControlFP6CCPolyi_0x2ece70");
#endif

    switch (ctx->pc) {
        case 0x2eceb4u: goto label_2eceb4;
        case 0x2ecf6cu: goto label_2ecf6c;
        case 0x2ecf98u: goto label_2ecf98;
        case 0x2ecff0u: goto label_2ecff0;
        case 0x2ed008u: goto label_2ed008;
        case 0x2ed054u: goto label_2ed054;
        case 0x2ed0c0u: goto label_2ed0c0;
        case 0x2ed10cu: goto label_2ed10c;
        default: break;
    }

    ctx->pc = 0x2ece70u;

    // 0x2ece70: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x2ece70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x2ece74: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2ece74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2ece78: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2ece78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2ece7c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2ece7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2ece80: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2ece80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2ece84: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ece84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2ece88: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ece88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2ece8c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ece8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ece90: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2ece90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece94: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ece94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ece98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ece98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ece9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ece9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ecea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ecea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecea4: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2ecea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ecea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ecea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eceac: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2ECEACu;
    SET_GPR_U32(ctx, 31, 0x2ECEB4u);
    ctx->pc = 0x2ECEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECEACu;
            // 0x2eceb0: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECEB4u; }
        if (ctx->pc != 0x2ECEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECEB4u; }
        if (ctx->pc != 0x2ECEB4u) { return; }
    }
    ctx->pc = 0x2ECEB4u;
label_2eceb4:
    // 0x2eceb4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2eceb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eceb8: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x2eceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x2ecebc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECEBCu;
    {
        const bool branch_taken_0x2ecebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecebc) {
            ctx->pc = 0x2ECEE4u;
            goto label_2ecee4;
        }
    }
    ctx->pc = 0x2ECEC4u;
    // 0x2ecec4: 0x7a2301d0  lq          $v1, 0x1D0($s1)
    ctx->pc = 0x2ecec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x2ecec8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2ecec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ececc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ececcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2eced0: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x2eced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eced4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2eced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eced8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eced8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecedc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECEDCu;
    {
        const bool branch_taken_0x2ecedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECEDCu;
            // 0x2ecee0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecedc) {
            ctx->pc = 0x2ECEF0u;
            goto label_2ecef0;
        }
    }
    ctx->pc = 0x2ECEE4u;
label_2ecee4:
    // 0x2ecee4: 0x7a230030  lq          $v1, 0x30($s1)
    ctx->pc = 0x2ecee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ecee8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2ecee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2eceec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2eceecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2ecef0:
    // 0x2ecef0: 0x7a2a0020  lq          $t2, 0x20($s1)
    ctx->pc = 0x2ecef0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ecef4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ecef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ecef8: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2ecef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2ecefc: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2ecefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2ecf00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecf04: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x2ecf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2ecf08: 0x27b20174  addiu       $s2, $sp, 0x174
    ctx->pc = 0x2ecf08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x2ecf0c: 0x27b30184  addiu       $s3, $sp, 0x184
    ctx->pc = 0x2ecf0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x2ecf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ecf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf18: 0x27a80390  addiu       $t0, $sp, 0x390
    ctx->pc = 0x2ecf18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2ecf1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ecf1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecf20: 0x7cca0000  sq          $t2, 0x0($a2)
    ctx->pc = 0x2ecf20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 10));
    // 0x2ecf24: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2ecf24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ecf28: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2ecf28u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2ecf2c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2ecf2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ecf30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2ecf30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2ecf34: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x2ecf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecf38: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x2ecf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecf3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ecf3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ecf40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf44: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2ecf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ecf48: 0xc6e10018  lwc1        $f1, 0x18($s7)
    ctx->pc = 0x2ecf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecf4c: 0xc6e00024  lwc1        $f0, 0x24($s7)
    ctx->pc = 0x2ecf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecf50: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2ecf50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ecf54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf58: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2ecf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2ecf5c: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x2ecf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ecf60: 0xc6750000  lwc1        $f21, 0x0($s3)
    ctx->pc = 0x2ecf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ecf64: 0xc053794  jal         func_14DE50
    ctx->pc = 0x2ECF64u;
    SET_GPR_U32(ctx, 31, 0x2ECF6Cu);
    ctx->pc = 0x2ECF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF64u;
            // 0x2ecf68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF6Cu; }
        if (ctx->pc != 0x2ECF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF6Cu; }
        if (ctx->pc != 0x2ECF6Cu) { return; }
    }
    ctx->pc = 0x2ECF6Cu;
label_2ecf6c:
    // 0x2ecf6c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF6Cu;
    {
        const bool branch_taken_0x2ecf6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ECF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF6Cu;
            // 0x2ecf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf6c) {
            ctx->pc = 0x2ECF7Cu;
            goto label_2ecf7c;
        }
    }
    ctx->pc = 0x2ECF74u;
    // 0x2ecf74: 0xc7b40394  lwc1        $f20, 0x394($sp)
    ctx->pc = 0x2ecf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ecf78: 0x0  nop
    ctx->pc = 0x2ecf78u;
    // NOP
label_2ecf7c:
    // 0x2ecf7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ecf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf80: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2ecf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2ecf84: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2ecf84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2ecf88: 0x27a80390  addiu       $t0, $sp, 0x390
    ctx->pc = 0x2ecf88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2ecf8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ecf8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecf90: 0xc053794  jal         func_14DE50
    ctx->pc = 0x2ECF90u;
    SET_GPR_U32(ctx, 31, 0x2ECF98u);
    ctx->pc = 0x2ECF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF90u;
            // 0x2ecf94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF98u; }
        if (ctx->pc != 0x2ECF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF98u; }
        if (ctx->pc != 0x2ECF98u) { return; }
    }
    ctx->pc = 0x2ECF98u;
label_2ecf98:
    // 0x2ecf98: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF98u;
    {
        const bool branch_taken_0x2ecf98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ECF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF98u;
            // 0x2ecf9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf98) {
            ctx->pc = 0x2ECFA8u;
            goto label_2ecfa8;
        }
    }
    ctx->pc = 0x2ECFA0u;
    // 0x2ecfa0: 0xc7b50394  lwc1        $f21, 0x394($sp)
    ctx->pc = 0x2ecfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ecfa4: 0x0  nop
    ctx->pc = 0x2ecfa4u;
    // NOP
label_2ecfa8:
    // 0x2ecfa8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ecfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecfac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ecfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2ecfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecfb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ecfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ecfb8: 0x8fbe00c0  lw          $fp, 0xC0($sp)
    ctx->pc = 0x2ecfb8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ecfbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecfc0: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2ecfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2ecfc4: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2ecfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2ecfc8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2ecfc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ecfcc: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x2ecfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2ecfd0: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2ecfd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ecfd4: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x2ecfd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2ecfd8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ecfd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecfdc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2ecfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ecfe0: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x2ecfe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x2ecfe4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2ecfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2ecfe8: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x2ECFE8u;
    SET_GPR_U32(ctx, 31, 0x2ECFF0u);
    ctx->pc = 0x2ECFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECFE8u;
            // 0x2ecfec: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECFF0u; }
        if (ctx->pc != 0x2ECFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECFF0u; }
        if (ctx->pc != 0x2ECFF0u) { return; }
    }
    ctx->pc = 0x2ECFF0u;
label_2ecff0:
    // 0x2ecff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ecff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecff4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2ecff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ecff8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x2ECFF8u;
    {
        const bool branch_taken_0x2ecff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECFF8u;
            // 0x2ecffc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecff8) {
            ctx->pc = 0x2ED0B0u;
            goto label_2ed0b0;
        }
    }
    ctx->pc = 0x2ED000u;
    // 0x2ed000: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ed000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed004: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ed004u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed008:
    // 0x2ed008: 0x29d2021  addu        $a0, $s4, $sp
    ctx->pc = 0x2ed008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x2ed00c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ed00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed010: 0x24960194  addiu       $s6, $a0, 0x194
    ctx->pc = 0x2ed010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x2ed014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed018: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2ed018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed01c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2ed01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2ed020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ed020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed024: 0x0  nop
    ctx->pc = 0x2ed024u;
    // NOP
    // 0x2ed028: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2ED028u;
    {
        const bool branch_taken_0x2ed028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed028) {
            ctx->pc = 0x2ED09Cu;
            goto label_2ed09c;
        }
    }
    ctx->pc = 0x2ED030u;
    // 0x2ed030: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x2ed030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x2ed034: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2ed034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2ed038: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x2ed038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2ed03c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ed044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ed048: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ed048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed04c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2ED04Cu;
    SET_GPR_U32(ctx, 31, 0x2ED054u);
    ctx->pc = 0x2ED050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED04Cu;
            // 0x2ed050: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED054u; }
        if (ctx->pc != 0x2ED054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED054u; }
        if (ctx->pc != 0x2ED054u) { return; }
    }
    ctx->pc = 0x2ED054u;
label_2ed054:
    // 0x2ed054: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2ed054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed058: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2ed058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed05c: 0xc6e00024  lwc1        $f0, 0x24($s7)
    ctx->pc = 0x2ed05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed060: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2ed060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ed064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ed064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed068: 0x0  nop
    ctx->pc = 0x2ed068u;
    // NOP
    // 0x2ed06c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2ED06Cu;
    {
        const bool branch_taken_0x2ed06c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed06c) {
            ctx->pc = 0x2ED09Cu;
            goto label_2ed09c;
        }
    }
    ctx->pc = 0x2ED074u;
    // 0x2ed074: 0xc7a103a4  lwc1        $f1, 0x3A4($sp)
    ctx->pc = 0x2ed074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed078: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ed078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ed07c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed07cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed080: 0x0  nop
    ctx->pc = 0x2ed080u;
    // NOP
    // 0x2ed084: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ed084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed088: 0x0  nop
    ctx->pc = 0x2ed088u;
    // NOP
    // 0x2ed08c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED08Cu;
    {
        const bool branch_taken_0x2ed08c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed08c) {
            ctx->pc = 0x2ED09Cu;
            goto label_2ed09c;
        }
    }
    ctx->pc = 0x2ED094u;
    // 0x2ed094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED094u;
    {
        const bool branch_taken_0x2ed094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED094u;
            // 0x2ed098: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed094) {
            ctx->pc = 0x2ED0B0u;
            goto label_2ed0b0;
        }
    }
    ctx->pc = 0x2ED09Cu;
label_2ed09c:
    // 0x2ed09c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ed09cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ed0a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2ed0a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2ed0a4: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x2ed0a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2ed0a8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2ED0A8u;
    {
        const bool branch_taken_0x2ed0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED0A8u;
            // 0x2ed0ac: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0a8) {
            ctx->pc = 0x2ED008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed008;
        }
    }
    ctx->pc = 0x2ED0B0u;
label_2ed0b0:
    // 0x2ed0b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2ed0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2ed0b4: 0x640002d  bltz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2ED0B4u;
    {
        const bool branch_taken_0x2ed0b4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2ED0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED0B4u;
            // 0x2ed0b8: 0x129900  sll         $s3, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0b4) {
            ctx->pc = 0x2ED16Cu;
            goto label_2ed16c;
        }
    }
    ctx->pc = 0x2ED0BCu;
    // 0x2ed0bc: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x2ed0bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2ed0c0:
    // 0x2ed0c0: 0x27d2021  addu        $a0, $s3, $sp
    ctx->pc = 0x2ed0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2ed0c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed0c8: 0x24950194  addiu       $s5, $a0, 0x194
    ctx->pc = 0x2ed0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x2ed0cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed0d0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2ed0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed0d4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2ed0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2ed0d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ed0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed0dc: 0x0  nop
    ctx->pc = 0x2ed0dcu;
    // NOP
    // 0x2ed0e0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2ED0E0u;
    {
        const bool branch_taken_0x2ed0e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed0e0) {
            ctx->pc = 0x2ED15Cu;
            goto label_2ed15c;
        }
    }
    ctx->pc = 0x2ED0E8u;
    // 0x2ed0e8: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2ed0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x2ed0ec: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x2ed0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2ed0f0: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x2ed0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2ed0f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed0fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ed0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ed100: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ed104: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2ED104u;
    SET_GPR_U32(ctx, 31, 0x2ED10Cu);
    ctx->pc = 0x2ED108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED104u;
            // 0x2ed108: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED10Cu; }
        if (ctx->pc != 0x2ED10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED10Cu; }
        if (ctx->pc != 0x2ED10Cu) { return; }
    }
    ctx->pc = 0x2ED10Cu;
label_2ed10c:
    // 0x2ed10c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2ed10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed110: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ed110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ed114: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2ed114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed11c: 0x0  nop
    ctx->pc = 0x2ed11cu;
    // NOP
    // 0x2ed120: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2ed120u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ed124: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ed124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed128: 0x0  nop
    ctx->pc = 0x2ed128u;
    // NOP
    // 0x2ed12c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2ED12Cu;
    {
        const bool branch_taken_0x2ed12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed12c) {
            ctx->pc = 0x2ED15Cu;
            goto label_2ed15c;
        }
    }
    ctx->pc = 0x2ED134u;
    // 0x2ed134: 0xc7a103b4  lwc1        $f1, 0x3B4($sp)
    ctx->pc = 0x2ed134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed138: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2ed138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2ed13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed140: 0x0  nop
    ctx->pc = 0x2ed140u;
    // NOP
    // 0x2ed144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ed144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed148: 0x0  nop
    ctx->pc = 0x2ed148u;
    // NOP
    // 0x2ed14c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED14Cu;
    {
        const bool branch_taken_0x2ed14c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed14c) {
            ctx->pc = 0x2ED15Cu;
            goto label_2ed15c;
        }
    }
    ctx->pc = 0x2ED154u;
    // 0x2ed154: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED154u;
    {
        const bool branch_taken_0x2ed154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED154u;
            // 0x2ed158: 0xafb200c0  sw          $s2, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed154) {
            ctx->pc = 0x2ED16Cu;
            goto label_2ed16c;
        }
    }
    ctx->pc = 0x2ED15Cu;
label_2ed15c:
    // 0x2ed15c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2ed15cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2ed160: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x2ed160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x2ed164: 0x641ffd6  bgez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2ED164u;
    {
        const bool branch_taken_0x2ed164 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2ED168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED164u;
            // 0x2ed168: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed164) {
            ctx->pc = 0x2ED0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed0c0;
        }
    }
    ctx->pc = 0x2ED16Cu;
label_2ed16c:
    // 0x2ed16c: 0x0  nop
    ctx->pc = 0x2ed16cu;
    // NOP
    // 0x2ed170: 0x7c00015  bltz        $fp, . + 4 + (0x15 << 2)
    ctx->pc = 0x2ED170u;
    {
        const bool branch_taken_0x2ed170 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x2ed170) {
            ctx->pc = 0x2ED1C8u;
            goto label_2ed1c8;
        }
    }
    ctx->pc = 0x2ED178u;
    // 0x2ed178: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ed178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed17c: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED17Cu;
    {
        const bool branch_taken_0x2ed17c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2ED180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED17Cu;
            // 0x2ed180: 0x1e2100  sll         $a0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed17c) {
            ctx->pc = 0x2ED1C8u;
            goto label_2ed1c8;
        }
    }
    ctx->pc = 0x2ED184u;
    // 0x2ed184: 0x27a60194  addiu       $a2, $sp, 0x194
    ctx->pc = 0x2ed184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2ed188: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ed18c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ed190: 0xc6e40024  lwc1        $f4, 0x24($s7)
    ctx->pc = 0x2ed190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ed194: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2ed194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ed198: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2ed198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed19c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ed19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ed1a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ed1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed1a4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2ed1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed1a8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ed1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ed1ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed1b0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x2ed1b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2ed1b4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2ed1b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2ed1b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2ed1b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ed1bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ed1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ed1c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED1C0u;
    {
        const bool branch_taken_0x2ed1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED1C0u;
            // 0x2ed1c4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1c0) {
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED1C8u;
label_2ed1c8:
    // 0x2ed1c8: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED1C8u;
    {
        const bool branch_taken_0x2ed1c8 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x2ED1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED1C8u;
            // 0x2ed1cc: 0x1e1900  sll         $v1, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1c8) {
            ctx->pc = 0x2ED1E4u;
            goto label_2ed1e4;
        }
    }
    ctx->pc = 0x2ED1D0u;
    // 0x2ed1d0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ed1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ed1d4: 0xc6e10024  lwc1        $f1, 0x24($s7)
    ctx->pc = 0x2ed1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed1d8: 0xc4600194  lwc1        $f0, 0x194($v1)
    ctx->pc = 0x2ed1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed1dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed1e0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2ed1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2ed1e4:
    // 0x2ed1e4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ed1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed1e8: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED1E8u;
    {
        const bool branch_taken_0x2ed1e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2ED1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED1E8u;
            // 0x2ed1ec: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1e8) {
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED1F0u;
    // 0x2ed1f0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2ed1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2ed1f4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ed1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ed1f8: 0xc4810194  lwc1        $f1, 0x194($a0)
    ctx->pc = 0x2ed1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed1fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed200: 0x0  nop
    ctx->pc = 0x2ed200u;
    // NOP
    // 0x2ed204: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ed204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ed208: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2ed208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2ed20c:
    // 0x2ed20c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2ed20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed210: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x2ed210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ed214: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2ed214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ed218: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2ed218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ed21c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2ed21cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ed220: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2ed220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed224: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2ed224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed228: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ed228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed22c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ed22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed230: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ed230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed234: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ed234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed238: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ed238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed23c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED23Cu;
            // 0x2ed240: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED244u;
}
