#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: local_aquarium_limmit_check__FPffif
// Address: 0x20c960 - 0x20ca6c
void local_aquarium_limmit_check__FPffif_0x20c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("local_aquarium_limmit_check__FPffif_0x20c960");
#endif

    ctx->pc = 0x20c960u;

    // 0x20c960: 0x3c03c1f8  lui         $v1, 0xC1F8
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49656 << 16));
    // 0x20c964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c968: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x20c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c96c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x20c96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x20c970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20c970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c974: 0x0  nop
    ctx->pc = 0x20c974u;
    // NOP
    // 0x20c978: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20C978u;
    {
        const bool branch_taken_0x20c978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C978u;
            // 0x20c97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c978) {
            ctx->pc = 0x20C98Cu;
            goto label_20c98c;
        }
    }
    ctx->pc = 0x20C980u;
    // 0x20c980: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20c980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20c984: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20C984u;
    {
        const bool branch_taken_0x20c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C984u;
            // 0x20c988: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c984) {
            ctx->pc = 0x20C9B4u;
            goto label_20c9b4;
        }
    }
    ctx->pc = 0x20C98Cu;
label_20c98c:
    // 0x20c98c: 0x3c0341f8  lui         $v1, 0x41F8
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16888 << 16));
    // 0x20c990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c994: 0x0  nop
    ctx->pc = 0x20c994u;
    // NOP
    // 0x20c998: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x20c998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x20c99c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20c99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c9a0: 0x0  nop
    ctx->pc = 0x20c9a0u;
    // NOP
    // 0x20c9a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20C9A4u;
    {
        const bool branch_taken_0x20c9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c9a4) {
            ctx->pc = 0x20C9B4u;
            goto label_20c9b4;
        }
    }
    ctx->pc = 0x20C9ACu;
    // 0x20c9ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20c9b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_20c9b4:
    // 0x20c9b4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C9B4u;
    {
        const bool branch_taken_0x20c9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C9B4u;
            // 0x20c9b8: 0x3c03c190  lui         $v1, 0xC190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49552 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9b4) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C9BCu;
    // 0x20c9bc: 0x3c03419c  lui         $v1, 0x419C
    ctx->pc = 0x20c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16796 << 16));
    // 0x20c9c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x20c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x20c9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c9c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20c9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c9cc: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x20c9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x20c9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20c9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c9d4: 0x0  nop
    ctx->pc = 0x20c9d4u;
    // NOP
    // 0x20c9d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20C9D8u;
    {
        const bool branch_taken_0x20c9d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C9D8u;
            // 0x20c9dc: 0x3c034240  lui         $v1, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9d8) {
            ctx->pc = 0x20C9ECu;
            goto label_20c9ec;
        }
    }
    ctx->pc = 0x20C9E0u;
    // 0x20c9e0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x20c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20c9e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20C9E4u;
    {
        const bool branch_taken_0x20c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C9E4u;
            // 0x20c9e8: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9e4) {
            ctx->pc = 0x20CA14u;
            goto label_20ca14;
        }
    }
    ctx->pc = 0x20C9ECu;
label_20c9ec:
    // 0x20c9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c9f0: 0x0  nop
    ctx->pc = 0x20c9f0u;
    // NOP
    // 0x20c9f4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x20c9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x20c9f8: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x20c9f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x20c9fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20c9fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ca00: 0x0  nop
    ctx->pc = 0x20ca00u;
    // NOP
    // 0x20ca04: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20CA04u;
    {
        const bool branch_taken_0x20ca04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ca04) {
            ctx->pc = 0x20CA14u;
            goto label_20ca14;
        }
    }
    ctx->pc = 0x20CA0Cu;
    // 0x20ca0c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x20ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20ca10: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x20ca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_20ca14:
    // 0x20ca14: 0x3c03c190  lui         $v1, 0xC190
    ctx->pc = 0x20ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49552 << 16));
label_20ca18:
    // 0x20ca18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ca18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x20ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ca20: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x20ca20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x20ca24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ca28: 0x0  nop
    ctx->pc = 0x20ca28u;
    // NOP
    // 0x20ca2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20CA2Cu;
    {
        const bool branch_taken_0x20ca2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA2Cu;
            // 0x20ca30: 0x3c034190  lui         $v1, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca2c) {
            ctx->pc = 0x20CA40u;
            goto label_20ca40;
        }
    }
    ctx->pc = 0x20CA34u;
    // 0x20ca34: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20ca34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20ca38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20CA38u;
    {
        const bool branch_taken_0x20ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA38u;
            // 0x20ca3c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca38) {
            ctx->pc = 0x20CA64u;
            goto label_20ca64;
        }
    }
    ctx->pc = 0x20CA40u;
label_20ca40:
    // 0x20ca40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ca40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca44: 0x0  nop
    ctx->pc = 0x20ca44u;
    // NOP
    // 0x20ca48: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x20ca48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x20ca4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20ca4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ca50: 0x0  nop
    ctx->pc = 0x20ca50u;
    // NOP
    // 0x20ca54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x20CA54u;
    {
        const bool branch_taken_0x20ca54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ca54) {
            ctx->pc = 0x20CA64u;
            goto label_20ca64;
        }
    }
    ctx->pc = 0x20CA5Cu;
    // 0x20ca5c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x20ca5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20ca60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_20ca64:
    // 0x20ca64: 0x3e00008  jr          $ra
    ctx->pc = 0x20CA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CA6Cu;
}
