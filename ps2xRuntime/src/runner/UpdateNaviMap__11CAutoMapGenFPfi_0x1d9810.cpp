#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateNaviMap__11CAutoMapGenFPfi
// Address: 0x1d9810 - 0x1d9b28
void UpdateNaviMap__11CAutoMapGenFPfi_0x1d9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateNaviMap__11CAutoMapGenFPfi_0x1d9810");
#endif

    switch (ctx->pc) {
        case 0x1d987cu: goto label_1d987c;
        case 0x1d98b0u: goto label_1d98b0;
        case 0x1d98f8u: goto label_1d98f8;
        case 0x1d9964u: goto label_1d9964;
        case 0x1d9974u: goto label_1d9974;
        case 0x1d9980u: goto label_1d9980;
        default: break;
    }

    ctx->pc = 0x1d9810u;

    // 0x1d9810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d9814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d9818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d9818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d981c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9820: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d9820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9828: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d982c: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d9830: 0x106000b7  beqz        $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1D9830u;
    {
        const bool branch_taken_0x1d9830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9830u;
            // 0x1d9834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9830) {
            ctx->pc = 0x1D9B10u;
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D9838u;
    // 0x1d9838: 0x8e030284  lw          $v1, 0x284($s0)
    ctx->pc = 0x1d9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1d983c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D983Cu;
    {
        const bool branch_taken_0x1d983c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d983c) {
            ctx->pc = 0x1D984Cu;
            goto label_1d984c;
        }
    }
    ctx->pc = 0x1D9844u;
    // 0x1d9844: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x1D9844u;
    {
        const bool branch_taken_0x1d9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9844u;
            // 0x1d9848: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9844) {
            ctx->pc = 0x1D9B14u;
            goto label_1d9b14;
        }
    }
    ctx->pc = 0x1D984Cu;
label_1d984c:
    // 0x1d984c: 0xae120280  sw          $s2, 0x280($s0)
    ctx->pc = 0x1d984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 18));
    // 0x1d9850: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9854: 0xc60201bc  lwc1        $f2, 0x1BC($s0)
    ctx->pc = 0x1d9854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d985c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9860: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d9860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d9864: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9868: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1d9868u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1d986c: 0x0  nop
    ctx->pc = 0x1d986cu;
    // NOP
    // 0x1d9870: 0x0  nop
    ctx->pc = 0x1d9870u;
    // NOP
    // 0x1d9874: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9874u;
    SET_GPR_U32(ctx, 31, 0x1D987Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D987Cu; }
        if (ctx->pc != 0x1D987Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D987Cu; }
        if (ctx->pc != 0x1D987Cu) { return; }
    }
    ctx->pc = 0x1D987Cu;
label_1d987c:
    // 0x1d987c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9880: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x1d9880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9888: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d988c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d988cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9890: 0x0  nop
    ctx->pc = 0x1d9890u;
    // NOP
    // 0x1d9894: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d9894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d9898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d989c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1d989cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1d98a0: 0x0  nop
    ctx->pc = 0x1d98a0u;
    // NOP
    // 0x1d98a4: 0x0  nop
    ctx->pc = 0x1d98a4u;
    // NOP
    // 0x1d98a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D98A8u;
    SET_GPR_U32(ctx, 31, 0x1D98B0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98B0u; }
        if (ctx->pc != 0x1D98B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98B0u; }
        if (ctx->pc != 0x1D98B0u) { return; }
    }
    ctx->pc = 0x1D98B0u;
label_1d98b0:
    // 0x1d98b0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D98B0u;
    {
        const bool branch_taken_0x1d98b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D98B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98B0u;
            // 0x1d98b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98b0) {
            ctx->pc = 0x1D98BCu;
            goto label_1d98bc;
        }
    }
    ctx->pc = 0x1D98B8u;
    // 0x1d98b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d98b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98bc:
    // 0x1d98bc: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D98BCu;
    {
        const bool branch_taken_0x1d98bc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1d98bc) {
            ctx->pc = 0x1D98C8u;
            goto label_1d98c8;
        }
    }
    ctx->pc = 0x1D98C4u;
    // 0x1d98c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d98c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98c8:
    // 0x1d98c8: 0x8f838e5c  lw          $v1, -0x71A4($gp)
    ctx->pc = 0x1d98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x1d98cc: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D98CCu;
    {
        const bool branch_taken_0x1d98cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d98cc) {
            ctx->pc = 0x1D98E0u;
            goto label_1d98e0;
        }
    }
    ctx->pc = 0x1D98D4u;
    // 0x1d98d4: 0x8f838e60  lw          $v1, -0x71A0($gp)
    ctx->pc = 0x1d98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938208)));
    // 0x1d98d8: 0x10c3008d  beq         $a2, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x1D98D8u;
    {
        const bool branch_taken_0x1d98d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d98d8) {
            ctx->pc = 0x1D9B10u;
            goto label_1d9b10;
        }
    }
    ctx->pc = 0x1D98E0u;
label_1d98e0:
    // 0x1d98e0: 0xaf918e5c  sw          $s1, -0x71A4($gp)
    ctx->pc = 0x1d98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 17));
    // 0x1d98e4: 0xaf868e60  sw          $a2, -0x71A0($gp)
    ctx->pc = 0x1d98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938208), GPR_U32(ctx, 6));
    // 0x1d98e8: 0x8e0701cc  lw          $a3, 0x1CC($s0)
    ctx->pc = 0x1d98e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d98ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d98ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d98f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D98F0u;
    {
        const bool branch_taken_0x1d98f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98F0u;
            // 0x1d98f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98f0) {
            ctx->pc = 0x1D9920u;
            goto label_1d9920;
        }
    }
    ctx->pc = 0x1D98F8u;
label_1d98f8:
    // 0x1d98f8: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d98fc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D98FCu;
    {
        const bool branch_taken_0x1d98fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d98fc) {
            ctx->pc = 0x1D990Cu;
            goto label_1d990c;
        }
    }
    ctx->pc = 0x1D9904u;
    // 0x1d9904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9904u;
    {
        const bool branch_taken_0x1d9904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9904u;
            // 0x1d9908: 0xa0e00018  sb          $zero, 0x18($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9904) {
            ctx->pc = 0x1D9914u;
            goto label_1d9914;
        }
    }
    ctx->pc = 0x1D990Cu;
label_1d990c:
    // 0x1d990c: 0x0  nop
    ctx->pc = 0x1d990cu;
    // NOP
    // 0x1d9910: 0xa0e50018  sb          $a1, 0x18($a3)
    ctx->pc = 0x1d9910u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 5));
label_1d9914:
    // 0x1d9914: 0x0  nop
    ctx->pc = 0x1d9914u;
    // NOP
    // 0x1d9918: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x1d9918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x1d991c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d991cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d9920:
    // 0x1d9920: 0x860401b8  lh          $a0, 0x1B8($s0)
    ctx->pc = 0x1d9920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d9924: 0x860301ba  lh          $v1, 0x1BA($s0)
    ctx->pc = 0x1d9924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d9928: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d9928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d992c: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x1d992cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d9930: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D9930u;
    {
        const bool branch_taken_0x1d9930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9930) {
            ctx->pc = 0x1D98F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d98f8;
        }
    }
    ctx->pc = 0x1D9938u;
    // 0x1d9938: 0xc42818  mult        $a1, $a2, $a0
    ctx->pc = 0x1d9938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d993c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1d9940: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1d9940u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d9944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9948: 0x8e0601cc  lw          $a2, 0x1CC($s0)
    ctx->pc = 0x1d9948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d994c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d9950: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d9954: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9958: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d9958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d995c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9960: 0xa0720018  sb          $s2, 0x18($v1)
    ctx->pc = 0x1d9960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 18));
label_1d9964:
    // 0x1d9964: 0x8e0801cc  lw          $t0, 0x1CC($s0)
    ctx->pc = 0x1d9964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d9968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d996c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1D996Cu;
    {
        const bool branch_taken_0x1d996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D996Cu;
            // 0x1d9970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d996c) {
            ctx->pc = 0x1D9AECu;
            goto label_1d9aec;
        }
    }
    ctx->pc = 0x1D9974u;
label_1d9974:
    // 0x1d9974: 0x0  nop
    ctx->pc = 0x1d9974u;
    // NOP
    // 0x1d9978: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1D9978u;
    {
        const bool branch_taken_0x1d9978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9978u;
            // 0x1d997c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9978) {
            ctx->pc = 0x1D9AD8u;
            goto label_1d9ad8;
        }
    }
    ctx->pc = 0x1D9980u;
label_1d9980:
    // 0x1d9980: 0x81030018  lb          $v1, 0x18($t0)
    ctx->pc = 0x1d9980u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1d9984: 0x18600051  blez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D9984u;
    {
        const bool branch_taken_0x1d9984 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D9988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9984u;
            // 0x1d9988: 0x8d040014  lw          $a0, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9984) {
            ctx->pc = 0x1D9ACCu;
            goto label_1d9acc;
        }
    }
    ctx->pc = 0x1D998Cu;
    // 0x1d998c: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D998Cu;
    {
        const bool branch_taken_0x1d998c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1d998c) {
            ctx->pc = 0x1D99DCu;
            goto label_1d99dc;
        }
    }
    ctx->pc = 0x1D9994u;
    // 0x1d9994: 0x30890002  andi        $t1, $a0, 0x2
    ctx->pc = 0x1d9994u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d9998: 0x15200010  bnez        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9998u;
    {
        const bool branch_taken_0x1d9998 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9998) {
            ctx->pc = 0x1D99DCu;
            goto label_1d99dc;
        }
    }
    ctx->pc = 0x1D99A0u;
    // 0x1d99a0: 0xb48c0  sll         $t1, $t3, 3
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1d99a4: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x1d99a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d99a8: 0x12b4823  subu        $t1, $t1, $t3
    ctx->pc = 0x1d99a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1d99ac: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d99b0: 0x1095823  subu        $t3, $t0, $t1
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d99b4: 0x81690018  lb          $t1, 0x18($t3)
    ctx->pc = 0x1d99b4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1d99b8: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x1d99b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1d99bc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D99BCu;
    {
        const bool branch_taken_0x1d99bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99BCu;
            // 0x1d99c0: 0x256c0018  addiu       $t4, $t3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99bc) {
            ctx->pc = 0x1D99DCu;
            goto label_1d99dc;
        }
    }
    ctx->pc = 0x1D99C4u;
    // 0x1d99c4: 0x8d690014  lw          $t1, 0x14($t3)
    ctx->pc = 0x1d99c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x1d99c8: 0x31290008  andi        $t1, $t1, 0x8
    ctx->pc = 0x1d99c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x1d99cc: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D99CCu;
    {
        const bool branch_taken_0x1d99cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d99cc) {
            ctx->pc = 0x1D99DCu;
            goto label_1d99dc;
        }
    }
    ctx->pc = 0x1D99D4u;
    // 0x1d99d4: 0xa18a0000  sb          $t2, 0x0($t4)
    ctx->pc = 0x1d99d4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d99d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d99d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d99dc:
    // 0x1d99dc: 0x0  nop
    ctx->pc = 0x1d99dcu;
    // NOP
    // 0x1d99e0: 0x860901ba  lh          $t1, 0x1BA($s0)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d99e4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1d99e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1d99e8: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x1d99e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d99ec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D99ECu;
    {
        const bool branch_taken_0x1d99ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99ec) {
            ctx->pc = 0x1D9A40u;
            goto label_1d9a40;
        }
    }
    ctx->pc = 0x1D99F4u;
    // 0x1d99f4: 0x30890008  andi        $t1, $a0, 0x8
    ctx->pc = 0x1d99f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1d99f8: 0x15200011  bnez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D99F8u;
    {
        const bool branch_taken_0x1d99f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d99f8) {
            ctx->pc = 0x1D9A40u;
            goto label_1d9a40;
        }
    }
    ctx->pc = 0x1D9A00u;
    // 0x1d9a00: 0x860a01b8  lh          $t2, 0x1B8($s0)
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d9a04: 0x246bffff  addiu       $t3, $v1, -0x1
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9a08: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d9a0c: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1d9a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d9a10: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d9a10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d9a14: 0x1095021  addu        $t2, $t0, $t1
    ctx->pc = 0x1d9a14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d9a18: 0x81490018  lb          $t1, 0x18($t2)
    ctx->pc = 0x1d9a18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1d9a1c: 0x12b082a  slt         $at, $t1, $t3
    ctx->pc = 0x1d9a1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1d9a20: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9A20u;
    {
        const bool branch_taken_0x1d9a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A20u;
            // 0x1d9a24: 0x254c0018  addiu       $t4, $t2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a20) {
            ctx->pc = 0x1D9A40u;
            goto label_1d9a40;
        }
    }
    ctx->pc = 0x1D9A28u;
    // 0x1d9a28: 0x8d490014  lw          $t1, 0x14($t2)
    ctx->pc = 0x1d9a28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1d9a2c: 0x31290002  andi        $t1, $t1, 0x2
    ctx->pc = 0x1d9a2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x1d9a30: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9A30u;
    {
        const bool branch_taken_0x1d9a30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a30) {
            ctx->pc = 0x1D9A40u;
            goto label_1d9a40;
        }
    }
    ctx->pc = 0x1D9A38u;
    // 0x1d9a38: 0xa18b0000  sb          $t3, 0x0($t4)
    ctx->pc = 0x1d9a38u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d9a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9a40:
    // 0x1d9a40: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9A40u;
    {
        const bool branch_taken_0x1d9a40 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1d9a40) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9A48u;
    // 0x1d9a48: 0x30890001  andi        $t1, $a0, 0x1
    ctx->pc = 0x1d9a48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d9a4c: 0x1520000c  bnez        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D9A4Cu;
    {
        const bool branch_taken_0x1d9a4c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a4c) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9A54u;
    // 0x1d9a54: 0x8109fffc  lb          $t1, -0x4($t0)
    ctx->pc = 0x1d9a54u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x1d9a58: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x1d9a58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9a5c: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x1d9a5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1d9a60: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9A60u;
    {
        const bool branch_taken_0x1d9a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a60) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9A68u;
    // 0x1d9a68: 0x8d09fff8  lw          $t1, -0x8($t0)
    ctx->pc = 0x1d9a68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
    // 0x1d9a6c: 0x31290004  andi        $t1, $t1, 0x4
    ctx->pc = 0x1d9a6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x1d9a70: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9A70u;
    {
        const bool branch_taken_0x1d9a70 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a70) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9A78u;
    // 0x1d9a78: 0xa10afffc  sb          $t2, -0x4($t0)
    ctx->pc = 0x1d9a78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967292), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d9a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d9a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9a80:
    // 0x1d9a80: 0x860901b8  lh          $t1, 0x1B8($s0)
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d9a84: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1d9a88: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x1d9a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d9a8c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9A8Cu;
    {
        const bool branch_taken_0x1d9a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a8c) {
            ctx->pc = 0x1D9ACCu;
            goto label_1d9acc;
        }
    }
    ctx->pc = 0x1D9A94u;
    // 0x1d9a94: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x1d9a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d9a98: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D9A98u;
    {
        const bool branch_taken_0x1d9a98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a98) {
            ctx->pc = 0x1D9ACCu;
            goto label_1d9acc;
        }
    }
    ctx->pc = 0x1D9AA0u;
    // 0x1d9aa0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9aa4: 0x81030034  lb          $v1, 0x34($t0)
    ctx->pc = 0x1d9aa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x1d9aa8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1d9aa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d9aac: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9AACu;
    {
        const bool branch_taken_0x1d9aac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9aac) {
            ctx->pc = 0x1D9ACCu;
            goto label_1d9acc;
        }
    }
    ctx->pc = 0x1D9AB4u;
    // 0x1d9ab4: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x1d9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1d9ab8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d9ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d9abc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9ABCu;
    {
        const bool branch_taken_0x1d9abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9abc) {
            ctx->pc = 0x1D9ACCu;
            goto label_1d9acc;
        }
    }
    ctx->pc = 0x1D9AC4u;
    // 0x1d9ac4: 0xa1040034  sb          $a0, 0x34($t0)
    ctx->pc = 0x1d9ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 52), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d9ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d9ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9acc:
    // 0x1d9acc: 0x0  nop
    ctx->pc = 0x1d9accu;
    // NOP
    // 0x1d9ad0: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x1d9ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x1d9ad4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d9ad8:
    // 0x1d9ad8: 0x860b01b8  lh          $t3, 0x1B8($s0)
    ctx->pc = 0x1d9ad8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d9adc: 0xeb182a  slt         $v1, $a3, $t3
    ctx->pc = 0x1d9adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1d9ae0: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1D9AE0u;
    {
        const bool branch_taken_0x1d9ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ae0) {
            ctx->pc = 0x1D9980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9980;
        }
    }
    ctx->pc = 0x1D9AE8u;
    // 0x1d9ae8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d9aec:
    // 0x1d9aec: 0x0  nop
    ctx->pc = 0x1d9aecu;
    // NOP
    // 0x1d9af0: 0x860301ba  lh          $v1, 0x1BA($s0)
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d9af4: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1d9af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d9af8: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1D9AF8u;
    {
        const bool branch_taken_0x1d9af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9af8) {
            ctx->pc = 0x1D9974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9974;
        }
    }
    ctx->pc = 0x1D9B00u;
    // 0x1d9b00: 0x14a0ff98  bnez        $a1, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1D9B00u;
    {
        const bool branch_taken_0x1d9b00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b00) {
            ctx->pc = 0x1D9964u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9964;
        }
    }
    ctx->pc = 0x1D9B08u;
    // 0x1d9b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9b0c: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x1d9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
label_1d9b10:
    // 0x1d9b10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9b14:
    // 0x1d9b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B20u;
            // 0x1d9b24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9B28u;
}
