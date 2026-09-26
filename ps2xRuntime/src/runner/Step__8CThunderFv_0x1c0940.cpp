#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CThunderFv
// Address: 0x1c0940 - 0x1c0a90
void Step__8CThunderFv_0x1c0940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CThunderFv_0x1c0940");
#endif

    switch (ctx->pc) {
        case 0x1c0970u: goto label_1c0970;
        case 0x1c09a8u: goto label_1c09a8;
        case 0x1c09b0u: goto label_1c09b0;
        default: break;
    }

    ctx->pc = 0x1c0940u;

    // 0x1c0940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c0944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c0948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c094c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0954: 0x80830db0  lb          $v1, 0xDB0($a0)
    ctx->pc = 0x1c0954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3504)));
    // 0x1c0958: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C0958u;
    {
        const bool branch_taken_0x1c0958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0958u;
            // 0x1c095c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0958) {
            ctx->pc = 0x1C0A78u;
            goto label_1c0a78;
        }
    }
    ctx->pc = 0x1C0960u;
    // 0x1c0960: 0x82430db1  lb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c0960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3505)));
    // 0x1c0964: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C0964u;
    {
        const bool branch_taken_0x1c0964 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C0968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0964u;
            // 0x1c0968: 0x265001b0  addiu       $s0, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0964) {
            ctx->pc = 0x1C0A78u;
            goto label_1c0a78;
        }
    }
    ctx->pc = 0x1C096Cu;
    // 0x1c096c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c096cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0970:
    // 0x1c0970: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0974: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c0974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0978: 0x0  nop
    ctx->pc = 0x1c0978u;
    // NOP
    // 0x1c097c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c097cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0980: 0x0  nop
    ctx->pc = 0x1c0980u;
    // NOP
    // 0x1c0984: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0984u;
    {
        const bool branch_taken_0x1c0984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0984) {
            ctx->pc = 0x1C0994u;
            goto label_1c0994;
        }
    }
    ctx->pc = 0x1C098Cu;
    // 0x1c098c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C098Cu;
    {
        const bool branch_taken_0x1c098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C098Cu;
            // 0x1c0990: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c098c) {
            ctx->pc = 0x1C0A54u;
            goto label_1c0a54;
        }
    }
    ctx->pc = 0x1C0994u;
label_1c0994:
    // 0x1c0994: 0x0  nop
    ctx->pc = 0x1c0994u;
    // NOP
    // 0x1c0998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c099c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09a0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C09A0u;
    SET_GPR_U32(ctx, 31, 0x1C09A8u);
    ctx->pc = 0x1C09A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09A0u;
            // 0x1c09a4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09A8u; }
        if (ctx->pc != 0x1C09A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09A8u; }
        if (ctx->pc != 0x1C09A8u) { return; }
    }
    ctx->pc = 0x1C09A8u;
label_1c09a8:
    // 0x1c09a8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1C09A8u;
    SET_GPR_U32(ctx, 31, 0x1C09B0u);
    ctx->pc = 0x1C09ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09A8u;
            // 0x1c09ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B0u; }
        if (ctx->pc != 0x1C09B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B0u; }
        if (ctx->pc != 0x1C09B0u) { return; }
    }
    ctx->pc = 0x1C09B0u;
label_1c09b0:
    // 0x1c09b0: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x1c09b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c09b4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1c09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1c09b8: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c09b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c09bc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c09c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c09c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c09c4: 0x0  nop
    ctx->pc = 0x1c09c4u;
    // NOP
    // 0x1c09c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c09c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c09cc: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1c09ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c09d0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1c09d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c09d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c09d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c09d8: 0x0  nop
    ctx->pc = 0x1c09d8u;
    // NOP
    // 0x1c09dc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C0A14u;
            goto label_1c0a14;
        }
    }
    ctx->pc = 0x1C09E4u;
    // 0x1c09e4: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x1c09e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c09e8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c09ec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c09ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c09f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c09f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c09f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c09f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c09f8: 0x0  nop
    ctx->pc = 0x1c09f8u;
    // NOP
    // 0x1c09fc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c09fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c0a00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0a04: 0x0  nop
    ctx->pc = 0x1c0a04u;
    // NOP
    // 0x1c0a08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0A08u;
    {
        const bool branch_taken_0x1c0a08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A08u;
            // 0x1c0a0c: 0xe601002c  swc1        $f1, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a08) {
            ctx->pc = 0x1C0A14u;
            goto label_1c0a14;
        }
    }
    ctx->pc = 0x1C0A10u;
    // 0x1c0a10: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c0a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1c0a14:
    // 0x1c0a14: 0x0  nop
    ctx->pc = 0x1c0a14u;
    // NOP
    // 0x1c0a18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0a1c: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1c0a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0a20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c0a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c0a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0a28: 0x0  nop
    ctx->pc = 0x1c0a28u;
    // NOP
    // 0x1c0a2c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c0a2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c0a30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c0a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0a34: 0x0  nop
    ctx->pc = 0x1c0a34u;
    // NOP
    // 0x1c0a38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0A38u;
    {
        const bool branch_taken_0x1c0a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A38u;
            // 0x1c0a3c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a38) {
            ctx->pc = 0x1C0A4Cu;
            goto label_1c0a4c;
        }
    }
    ctx->pc = 0x1C0A40u;
    // 0x1c0a40: 0x82430db1  lb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c0a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3505)));
    // 0x1c0a44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c0a48: 0xa2430db1  sb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c0a48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3505), (uint8_t)GPR_U32(ctx, 3));
label_1c0a4c:
    // 0x1c0a4c: 0x0  nop
    ctx->pc = 0x1c0a4cu;
    // NOP
    // 0x1c0a50: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1c0a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1c0a54:
    // 0x1c0a54: 0x0  nop
    ctx->pc = 0x1c0a54u;
    // NOP
    // 0x1c0a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c0a5c: 0x2a230030  slti        $v1, $s1, 0x30
    ctx->pc = 0x1c0a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c0a60: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1C0A60u;
    {
        const bool branch_taken_0x1c0a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a60) {
            ctx->pc = 0x1C0970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0970;
        }
    }
    ctx->pc = 0x1C0A68u;
    // 0x1c0a68: 0x82430db1  lb          $v1, 0xDB1($s2)
    ctx->pc = 0x1c0a68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3505)));
    // 0x1c0a6c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0A6Cu;
    {
        const bool branch_taken_0x1c0a6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c0a6c) {
            ctx->pc = 0x1C0A78u;
            goto label_1c0a78;
        }
    }
    ctx->pc = 0x1C0A74u;
    // 0x1c0a74: 0xa2400db0  sb          $zero, 0xDB0($s2)
    ctx->pc = 0x1c0a74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3504), (uint8_t)GPR_U32(ctx, 0));
label_1c0a78:
    // 0x1c0a78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A88u;
            // 0x1c0a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0A90u;
}
