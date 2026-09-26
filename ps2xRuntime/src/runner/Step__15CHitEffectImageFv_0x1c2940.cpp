#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__15CHitEffectImageFv
// Address: 0x1c2940 - 0x1c2a60
void Step__15CHitEffectImageFv_0x1c2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__15CHitEffectImageFv_0x1c2940");
#endif

    switch (ctx->pc) {
        case 0x1c296cu: goto label_1c296c;
        case 0x1c2988u: goto label_1c2988;
        default: break;
    }

    ctx->pc = 0x1c2940u;

    // 0x1c2940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c2944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c2948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c294c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2954: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1c2954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c2958: 0x1860003b  blez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C2958u;
    {
        const bool branch_taken_0x1c2958 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2958u;
            // 0x1c295c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2958) {
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2960u;
    // 0x1c2960: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x1c2960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c2964: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C2964u;
    {
        const bool branch_taken_0x1c2964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2964u;
            // 0x1c2968: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2964) {
            ctx->pc = 0x1C2A34u;
            goto label_1c2a34;
        }
    }
    ctx->pc = 0x1C296Cu;
label_1c296c:
    // 0x1c296c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1c296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c2970: 0x1860002e  blez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C2970u;
    {
        const bool branch_taken_0x1c2970 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c2970) {
            ctx->pc = 0x1C2A2Cu;
            goto label_1c2a2c;
        }
    }
    ctx->pc = 0x1C2978u;
    // 0x1c2978: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x1c2978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c297c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c2980: 0xc041e96  jal         func_107A58
    ctx->pc = 0x1C2980u;
    SET_GPR_U32(ctx, 31, 0x1C2988u);
    ctx->pc = 0x1C2984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2980u;
            // 0x1c2984: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2988u; }
        if (ctx->pc != 0x1C2988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2988u; }
        if (ctx->pc != 0x1C2988u) { return; }
    }
    ctx->pc = 0x1C2988u;
label_1c2988:
    // 0x1c2988: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1c2988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c298c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1c298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2994: 0x0  nop
    ctx->pc = 0x1c2994u;
    // NOP
    // 0x1c2998: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c2998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c299c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1c299cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c29a0: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1c29a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c29a4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c29a8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c29a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c29ac: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x1c29acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c29b0: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x1c29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c29b4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1c29b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c29b8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c29b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c29bc: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x1c29bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1c29c0: 0xc642003c  lwc1        $f2, 0x3C($s2)
    ctx->pc = 0x1c29c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c29c4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1c29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c29c8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c29c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c29cc: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x1c29ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c29d0: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1c29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c29d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c29d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c29d8: 0x0  nop
    ctx->pc = 0x1c29d8u;
    // NOP
    // 0x1c29dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C29DCu;
    {
        const bool branch_taken_0x1c29dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c29dc) {
            ctx->pc = 0x1C29F0u;
            goto label_1c29f0;
        }
    }
    ctx->pc = 0x1C29E4u;
    // 0x1c29e4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1c29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c29e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c29e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c29ec: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c29ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1c29f0:
    // 0x1c29f0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1c29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c29f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c29f8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1c29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c29fc: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x1c29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2a00: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x1c2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c2a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c2a08: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1c2a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1c2a0c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c2a10: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2A10u;
    {
        const bool branch_taken_0x1c2a10 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c2a10) {
            ctx->pc = 0x1C2A24u;
            goto label_1c2a24;
        }
    }
    ctx->pc = 0x1C2A18u;
    // 0x1c2a18: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c2a1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c2a20: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1c2a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_1c2a24:
    // 0x1c2a24: 0x0  nop
    ctx->pc = 0x1c2a24u;
    // NOP
    // 0x1c2a28: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1c2a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1c2a2c:
    // 0x1c2a2c: 0x0  nop
    ctx->pc = 0x1c2a2cu;
    // NOP
    // 0x1c2a30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2a34:
    // 0x1c2a34: 0x0  nop
    ctx->pc = 0x1c2a34u;
    // NOP
    // 0x1c2a38: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1c2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1c2a3c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c2a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c2a40: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1C2A40u;
    {
        const bool branch_taken_0x1c2a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a40) {
            ctx->pc = 0x1C296Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c296c;
        }
    }
    ctx->pc = 0x1C2A48u;
label_1c2a48:
    // 0x1c2a48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c2a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A58u;
            // 0x1c2a5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2A60u;
}
