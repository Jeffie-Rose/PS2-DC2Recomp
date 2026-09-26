#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Hamon__6CWaterFv
// Address: 0x184840 - 0x18493c
void Hamon__6CWaterFv_0x184840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hamon__6CWaterFv_0x184840");
#endif

    switch (ctx->pc) {
        case 0x184898u: goto label_184898;
        case 0x1848a0u: goto label_1848a0;
        default: break;
    }

    ctx->pc = 0x184840u;

    // 0x184840: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x184840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x184844: 0x8c8a0020  lw          $t2, 0x20($a0)
    ctx->pc = 0x184844u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x184848: 0x146a0003  bne         $v1, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x184848u;
    {
        const bool branch_taken_0x184848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x18484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184848u;
            // 0x18484c: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184848) {
            ctx->pc = 0x184858u;
            goto label_184858;
        }
    }
    ctx->pc = 0x184850u;
    // 0x184850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184850u;
    {
        const bool branch_taken_0x184850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184850u;
            // 0x184854: 0x8c870024  lw          $a3, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184850) {
            ctx->pc = 0x184860u;
            goto label_184860;
        }
    }
    ctx->pc = 0x184858u;
label_184858:
    // 0x184858: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x18485c: 0x0  nop
    ctx->pc = 0x18485cu;
    // NOP
label_184860:
    // 0x184860: 0xac87005c  sw          $a3, 0x5C($a0)
    ctx->pc = 0x184860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 7));
    // 0x184864: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x184864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x184868: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x184868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18486c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184870: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x184870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184874: 0xc4870044  lwc1        $f7, 0x44($a0)
    ctx->pc = 0x184874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x184878: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x184878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18487c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18487cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184880: 0x0  nop
    ctx->pc = 0x184880u;
    // NOP
    // 0x184884: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x184884u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x184888: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x184888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x18488c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18488cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184890: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x184890u;
    {
        const bool branch_taken_0x184890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184890u;
            // 0x184894: 0x46001182  mul.s       $f6, $f2, $f0 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184890) {
            ctx->pc = 0x184920u;
            goto label_184920;
        }
    }
    ctx->pc = 0x184898u;
label_184898:
    // 0x184898: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x184898u;
    {
        const bool branch_taken_0x184898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18489Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184898u;
            // 0x18489c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184898) {
            ctx->pc = 0x184908u;
            goto label_184908;
        }
    }
    ctx->pc = 0x1848A0u;
label_1848a0:
    // 0x1848a0: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x1848a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1848a4: 0xa81818  mult        $v1, $a1, $t0
    ctx->pc = 0x1848a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1848a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1848a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1848ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1848acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1848b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1848b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1848b4: 0x1434021  addu        $t0, $t2, $v1
    ctx->pc = 0x1848b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1848b8: 0xe34821  addu        $t1, $a3, $v1
    ctx->pc = 0x1848b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1848bc: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1848c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1848c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1848c4: 0xc504fffc  lwc1        $f4, -0x4($t0)
    ctx->pc = 0x1848c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1848c8: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x1848c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1848cc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1848ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1848d0: 0xc5280000  lwc1        $f8, 0x0($t1)
    ctx->pc = 0x1848d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1848d4: 0x10b1823  subu        $v1, $t0, $t3
    ctx->pc = 0x1848d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1848d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1848d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1848dc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1848dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1848e0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1848e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1848e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1848e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1848e8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1848e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1848ec: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1848ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1848f0: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x1848f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1848f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1848f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1848f8: 0x46080801  sub.s       $f0, $f1, $f8
    ctx->pc = 0x1848f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x1848fc: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1848fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x184900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x184900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184904: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x184904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_184908:
    // 0x184908: 0x8c880058  lw          $t0, 0x58($a0)
    ctx->pc = 0x184908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x18490c: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x18490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x184910: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x184910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x184914: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x184914u;
    {
        const bool branch_taken_0x184914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184914) {
            ctx->pc = 0x1848A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1848a0;
        }
    }
    ctx->pc = 0x18491Cu;
    // 0x18491c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18491cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_184920:
    // 0x184920: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x184924: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x184924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x184928: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x184928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18492c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x18492Cu;
    {
        const bool branch_taken_0x18492c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18492c) {
            ctx->pc = 0x184898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184898;
        }
    }
    ctx->pc = 0x184934u;
    // 0x184934: 0x3e00008  jr          $ra
    ctx->pc = 0x184934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18493Cu;
}
